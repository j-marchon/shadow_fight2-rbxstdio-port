--!strict
-- SF2 moves engine (port of EventTriggers / ModelAnimation move start, see specs/moves-xml.md):
--  * events fire (KeyPressed, AnimationEnd, IntervalStart/End, Birth, RoundStageStart)
--  * every move subscribed to the event whose <Conditions> pass is a candidate
--  * only the highest Priority survives (EventTriggers.IHCJOCNLHCB); ties -> first in data order
--  * starting a move: SetDirection -> mirror -> Align (pivot node onto anchor) -> start at FirstFrame,
--    blend in from the current pose over one keyframe unless NoInterpolationFrames
--  * playback: MidFrames+1 ticks per keyframe, B-spline in-betweens (AnimClip.sample)

local AnimClip = require(script.Parent.AnimClip)
local KeyBuffer = require(script.Parent.KeyBuffer)

local MoveEngine = {}
MoveEngine.__index = MoveEngine

local ARENA_HALF = 1200 -- SF2 units; wall positions for Wall anchors (location-dependent later)

export type MoveEngine = typeof(setmetatable({} :: any, MoveEngine))

local function slotOf(rig: any): { [string]: number }
	local map = {}
	for i, n in rig.nodes do
		map[n.name] = i
	end
	return map
end

function MoveEngine.new(fighter: any, moveSet: { any }, loadout: { any }, playerNumber: number)
	local self = setmetatable({
		fighter = fighter,
		moves = moveSet,
		byName = {},
		byEvent = {},
		loadout = loadout,
		player = playerNumber,
		slots = slotOf(fighter.rig),
		keys = KeyBuffer.new(),
		enemy = nil :: any,
		-- playback state
		move = nil :: any,
		clip = nil :: any,
		c = 0,
		k = 1,
		steps = 3,
		lastFrame = 0,
		facing = 1,
		offsetX = 0,
		offsetY = 0,
		pivotSlot = 0,
		blend = nil :: any,
		events = {},
		stage = "Fight",
		log = {},
		-- combat (Combat.lua)
		landed = {}, -- Attack intervals of the current move that already hit
		lastHit = nil :: any, -- the hit just taken (ConditionHit, impulse SetDirection)
		health = 1,
		physFrames = 0, -- ticks since the ragdoll started (PhysicsFrameNumber)
		comX = 0, comY = 0, prevComX = 0, prevComY = 0,
		-- fight (Fight.lua sets these): modifiers, ammo, children (projectiles, summons), parent
		fight = nil :: any,
		parent = nil :: any,
		children = {},
		mods = {},
		bullets = {},
		name = "",
		roundResult = nil :: any,
	}, MoveEngine)
	-- _1/_2 node pairs (ModelObject builds the same list from node names) for leg/arm mirroring, in
	-- animation slot space: the skeleton's slots, then the weapon slots (nunchaku sticks, ...)
	local slotByName = {}
	local s = 1
	while true do
		local i = fighter:slotNode(s)
		if not i then break end
		slotByName[fighter.rig.nodes[i].name] = s
		s += 1
	end
	local pairs = {}
	for name, a in slotByName do
		if string.sub(name, -2) == "_1" then
			local other = slotByName[string.sub(name, 1, -3) .. "_2"]
			if other then
				pairs[a] = other; pairs[other] = a
			end
		end
	end
	self.pairs = pairs
	self.remap = nil
	for _, m in moveSet do
		self.byName[m.name] = m
		local labels = {}
		for _, l in m.labels do labels[l] = true end
		m.labelSet = labels
		for _, e in m.events do
			local list = self.byEvent[e[1]]
			if not list then list = {}; self.byEvent[e[1]] = list end
			table.insert(list, { move = m, name = e[2] })
		end
	end
	return self
end

---------------------------------------------------------------- anchors & conditions

function MoveEngine.nodePos(self: MoveEngine, slot: number): (number, number)
	local f = self.fighter
	return f.px[slot] or 0, f.py[slot] or 0
end

-- The model a DistancePoint / condition names: Me, Enemy, Parent, Child (first child), EnemyChild
function MoveEngine.who(self: MoveEngine, player: string?): any
	if player == nil or player == "Me" or player == "" then return self end
	if player == "Enemy" then return self.enemy end
	if player == "Parent" then return self.parent end
	if player == "Child" then return self.children and self.children[1] end
	if player == "EnemyChild" then
		local e = self.enemy
		return e and e.children and e.children[1]
	end
	return nil
end

-- Arena walls (location Width/Wall, set by Fight); a lone engine uses the old fixed arena
function MoveEngine.walls(self: MoveEngine): (number, number)
	local fight = self.fight
	if fight then return fight.wallMin, fight.wallMax end
	return -ARENA_HALF, ARENA_HALF
end

-- Wall repulsion: an animated model is pushed back into the arena by however far its pivot went past a
-- wall, so a fighter knocked into a wall stops there instead of sliding through it. That is what lets the
-- WallHit / WallHitFall moves fire: both are ordinary EveryFrame moves whose conditions are a CanWallHit /
-- CanWallHitFall interval plus a Distance from Object="Wall" Part="Back" to NNeck (20) or NPivot (35).
-- Moves with NoWallRepulsion="1" (the WallHit pair itself, the missiles, magic and shop moves) are exempt,
-- and children are left alone so DeleteOnWall still works.
-- Approximated: the original has WallRepulsion / NoWallRepulsion / AlignOnParentWallCollision per move
-- (MovesCompiler) and pushes the model with the collision code; only the pivot is bounded here, so a
-- weapon or a limb can still cross the wall line.
function MoveEngine.repulseWall(self: MoveEngine)
	if self.parent or (self.move and self.move.noWallRepulsion) then return end
	local lo, hi = self:walls()
	local x = self:nodePos(self.pivotSlot)
	local dx = (x < lo and lo - x) or (x > hi and hi - x) or 0
	if dx ~= 0 then
		self.fighter:translate(dx, 0)
		self.offsetX += dx
	end
end

-- DistancePoint: Player Me/Enemy/Parent/Child, Object Nodes/Pivot/Wall/Floor/MapCenter/COM/Animation
function MoveEngine.anchor(self: MoveEngine, a: any): (number, number)
	if not a then
		return self:nodePos(self.pivotSlot)
	end
	local who = self:who(a.player) or self
	local x, y = 0, 0
	local obj = a.object
	if obj == "Nodes" then
		local s = who.slots[a.part or "NPivot"] or who.slots.NPivot
		x, y = who:nodePos(s)
	elseif obj == "Animation" then
		-- the origin of who's current animation (its Align offset): children start in their parent's frame
		x, y = who.offsetX, who.offsetY
	elseif obj == "Pivot" then
		x, y = who:nodePos(who.pivotSlot)
	elseif obj == "COM" then
		if a.previous then
			x, y = who.prevComX or 0, who.prevComY or 0
		else
			x, y = who.fighter:com()
		end
	elseif obj == "Wall" then
		local front = (a.part == "Front")
		local lo, hi = self:walls()
		x = ((front and who.facing or -who.facing) > 0) and hi or lo
		y = select(2, who:nodePos(who.slots.NPivot or who.pivotSlot))
	elseif obj == "Floor" then
		x, y = who:nodePos(who.slots.NPivot or who.pivotSlot); y = 0
	elseif obj == "MapCenter" then
		x, y = 0, 0
	end
	return x + (a.shiftX or 0) * who.facing, y + (a.shiftY or 0)
end

-- The facing a candidate move would start with (its SetDirection, else the current facing);
-- its Forward/Back keys are read relative to this (InfoAnimation.BAHFNIPBBHD).
function MoveEngine.facingFor(self: MoveEngine, m: any): number
	local sd = m and m.setDirection
	if sd and sd.impulse then
		-- face along the impulse of the hit just taken (Reverse: against it, i.e. towards the attacker)
		local h = self.lastHit
		if not h or h.impulseX == 0 then return self.facing end
		local f = h.impulseX > 0 and 1 or -1
		return sd.reverse and -f or f
	end
	if not sd or not self.enemy then return self.facing end
	local fx = self:anchor(sd.from)
	local tx = self:anchor(sd.to)
	local f = self.facing
	if math.abs(tx - fx) > 1e-3 then f = (tx > fx) and 1 or -1 end
	if sd.reverse then f = -f end
	return f
end

function MoveEngine.inInterval(self: MoveEngine, name: string): boolean
	local m = self.move
	if not m then return false end
	local removed = self.removedIntervals -- rule RemoveInterval
	if removed and removed[name] then return false end
	for _, iv in m.intervals do
		if (iv.name == name or iv.type == name) and self.c >= iv.start and self.c <= iv.stop then
			return true
		end
	end
	return false
end

function MoveEngine.isAnimation(self: MoveEngine, name: string, candidate: any): boolean
	local m = self.move
	if not m then return false end
	if name == "$Move" then
		return candidate ~= nil and m == candidate
	end
	return m.name == name or m.labelSet[name] == true
end

local function itemMatches(loadout: { any }, c: any): boolean
	for _, it in loadout do
		if (c.type == "" or it.Type == c.type) and (c.sub == "" or it.SubType == c.sub) and (c.name == "" or it.Name == c.name) then
			return true
		end
	end
	return false
end

function MoveEngine.check(self: MoveEngine, c: any, candidate: any): boolean
	local t = c.t
	local v: boolean
	if t == "op" then
		if c.op == "and" then
			v = true
			for _, k in c.kids do if not self:check(k, candidate) then v = false; break end end
		else
			v = false
			for _, k in c.kids do if self:check(k, candidate) then v = true; break end end
		end
	elseif t == "keys" then
		v = self.keys:matches(c.taps, c.holds, self:facingFor(candidate))
	elseif t == "anim" then
		local who = self:who(c.player)
		v = who ~= nil and who:isAnimation(c.name, candidate)
	elseif t == "interval" then
		local who = self:who(c.player)
		v = who ~= nil and who:inInterval(c.name)
	elseif t == "stage" then
		v = (c.name == self:roundStage())
	elseif t == "mod" then
		-- ModExists: modifiers from rules, perks and stuns (Fight.addMod, SF2.Perks). Player="Enemy"
		-- asks about the other fighter's mods (ThrowFallBlock, CurseBomb, MOD_TITAN, the hit effects)
		local who = self:who(c.player)
		v = who ~= nil and who:root().mods[c.name] ~= nil
	elseif t == "item" then
		local who = self:who(c.player)
		v = who ~= nil and itemMatches(who.loadout, c)
	elseif t == "dist" then
		local fx, fy = self:anchor(c.from)
		local tx, ty = self:anchor(c.to)
		local d = (c.axis == "Y") and math.abs(ty - fy) or math.abs(tx - fx)
		v = d >= c.min and d <= c.max
	elseif t == "player" then
		local who = self:who(c.player)
		v = who ~= nil and (c.number == who:root().player)
	elseif t == "health" then
		v = self.health >= c.min and self.health <= c.max
	elseif t == "physframes" then
		v = self.fighter.ragdoll and self.physFrames >= c.min and self.physFrames <= c.max
	elseif t == "hit" then
		local h = self.lastHit
		-- ConditionHit: Type "Critical" / "Shock" each test their own flag on the hit
		v = h ~= nil and (c.name == "" or c.name == h.name)
			and (c.type == "" or (c.type == "Critical" and h.critical) or (c.type == "Shock" and h.shock))
	elseif t == "bullets" then
		v = (self:root().bullets.MagicBullet or 0) >= c.min
	elseif t == "name" then
		-- the model's own name: Player="EnemyChild" asks about the enemy's summon (Assistant)
		local who = self:who(c.player)
		v = who ~= nil and (who.name == c.value)
	elseif t == "x" then
		v = self:checkRaw(c.tag, c.el)
	else
		v = false
	end
	if c.nt then
		return not v
	end
	return v
end

-- The fighter a child (projectile, summon) belongs to; a fighter is its own root
function MoveEngine.root(self: MoveEngine): any
	local r = self
	while r.parent do r = r.parent end
	return r
end

-- Perk AnimationStart / AnimationEnd triggers (SF2.Perks); a lone engine has no fight and no perks
local function perkAnim(self: any, event: string, m: any)
	local fight = self.fight or self:root().fight
	if fight and fight.perks then fight.perks:animation(event, self, m) end
end

-- RoundStage of the fight (StartStance, Fight, EndStance); a lone engine is always in Fight
function MoveEngine.roundStage(self: MoveEngine): string
	local fight = self.fight
	return fight and fight.stage or self.stage
end

local function rawAttr(el: any, k: string): string?
	return el and el.a and el.a[k]
end

-- Conditions kept as raw elements by compile_moves (RoundResult, Direction, BattleType, Perk, Birth,
-- BossAbilityState, Screen, ...)
function MoveEngine.checkRaw(self: MoveEngine, tag: string, el: any): boolean
	local who = self:who(rawAttr(el, "Player")) or self
	if tag == "RoundResult" then
		local r = who:root().roundResult
		if not r then return false end
		local name, typ = rawAttr(el, "Name"), rawAttr(el, "Type")
		return (name == nil or name == r.name) and (typ == nil or typ == r.type)
	elseif tag == "Perk" then
		local perks = who:root().perks
		return perks ~= nil and perks[rawAttr(el, "Name") or ""] ~= nil
	elseif tag == "BattleType" then
		local fight = self.fight
		return fight ~= nil and fight.battleType == rawAttr(el, "Value")
	elseif tag == "BossAbilityState" then
		return tostring(who:root().bossAbility or 0) == (rawAttr(el, "Value") or "1")
	elseif tag == "Birth" then
		return self.justBorn == true
	elseif tag == "Direction" then
		-- facing towards the other model
		local o = who == self and self.enemy or who
		if not o then return false end
		local mx = self:nodePos(self.slots.NPivot or self.pivotSlot)
		local ox = o:nodePos(o.slots.NPivot or o.pivotSlot)
		return (ox - mx) * self.facing > 0
	elseif tag == "Screen" then
		return rawAttr(el, "Name") == "Fight"
	end
	return false
end

-- Conditions inside an action (<Conditions><Item .../></Conditions>, raw elements)
local function rawConditionsPass(self: any, cond: any): boolean
	if not cond or not cond.c then return true end
	local function test(e: any): boolean
		local nt = rawAttr(e, "Not") == "1"
		local v: boolean
		if e.t == "Item" then
			local who = self:who(rawAttr(e, "Player")) or self
			v = itemMatches(who.loadout, { type = rawAttr(e, "Type") or "", sub = rawAttr(e, "SubType") or "", name = rawAttr(e, "Name") or "" })
		elseif e.t == "Operator" then
			local all = string.lower(rawAttr(e, "Type") or "or") == "and"
			v = all
			for _, k in e.c or {} do
				if test(k) ~= all then v = not all; break end
			end
		else
			v = self:checkRaw(e.t, e)
		end
		return v ~= nt
	end
	for _, e in cond.c do
		if not test(e) then return false end
	end
	return true
end

-- Run this move's actions for a keyframe (frame) or an event (Strike, Hit, AnimationStart, AnimationEnd).
-- Fight.action does the work (sounds, effects, children, camera, ...).
function MoveEngine.runActions(self: MoveEngine, frame: number?, event: string?, upTo: boolean?)
	local m = self.move
	local fight = self.fight
	if not m or not m.actions or not fight then return end
	for _, a in m.actions do
		local at = a.a or {}
		local ok
		if event then
			ok = at.Event == event
		else
			local f = tonumber(at.Frame)
			ok = at.Event == nil and f ~= nil and (f == frame or (upTo and f < (frame :: number)))
		end
		if ok then
			local cond
			for _, k in a.c or {} do if k.t == "Conditions" then cond = k end end
			if rawConditionsPass(self, cond) then
				fight:action(self, a, event)
			end
		end
	end
end

function MoveEngine.conditionsPass(self: MoveEngine, m: any): boolean
	for _, c in m.conditions do
		if not self:check(c, m) then
			return false
		end
	end
	return true
end

---------------------------------------------------------------- events & selection

function MoveEngine.fire(self: MoveEngine, eventType: string, name: string?)
	table.insert(self.events, { eventType, name or "" })
	if eventType == "Strike" or eventType == "Hit" then
		self:runActions(nil, eventType)
	end
end

-- Returns the move to start for one event, or nil.
function MoveEngine.select(self: MoveEngine, eventType: string, name: string): any
	local subs = self.byEvent[eventType]
	if not subs then return nil end
	local best, bestPriority = nil, -math.huge
	for _, sub in subs do
		local m = sub.move
		local banned = self.noAnimation -- rule NoAnimation: by move name or label
		if banned and (banned[m.name] or (function()
				for l in banned do if m.labelSet[l] then return true end end
				return false
			end)()) then
			continue
		end
		-- event name filter: AnimationEnd/IntervalEnd/... Name must match what happened
		if (sub.name == "" or sub.name == name or (eventType == "AnimationEnd" and self.move and self.move.labelSet[sub.name]))
			and m.priority > bestPriority and self:conditionsPass(m) then
			best, bestPriority = m, m.priority
		end
	end
	return best
end

function MoveEngine.processEvents(self: MoveEngine): boolean
	local started = false
	for _, e in self.events do
		local m = self:select(e[1], e[2])
		if m then
			self:start(m)
			started = true
			break
		end
	end
	table.clear(self.events)
	return started
end

---------------------------------------------------------------- starting & playing a move

function MoveEngine.start(self: MoveEngine, m: any)
	if m.physics then
		return self:startPhysics(m)
	end
	if self.fighter.ragdoll then
		self.fighter:setRagdoll(false) -- getting up: back to animation (blends from the lying pose)
	end
	local clip = AnimClip.load(m.file)
	-- Input is NOT consumed here: combos (e.g. DoublePunch interrupting HeavyPunch during its
	-- SemiUninterrupt window) need the earlier tap to stay buffered; only KeyBuffer's timers clear it.

	-- SetDirection: face from -> to
	self.facing = self:facingFor(m)

	-- Transitions (EventTriggers -> ModelAnimation.NAFDIFCGJBK): the first one whose conditions pass
	-- (checked against the move still playing) picks the start frame: FrameShift = old move's current
	-- keyframe + shift + 1 (HeavyPunch -> DoublePunch carries on mid-punch), FirstFrame = absolute.
	local first = m.first or 0
	for _, tr in m.transitions or {} do
		local ok = true
		for _, c in tr.conditions do
			if not self:check(c, m) then ok = false; break end
		end
		if ok then
			first = tr.shift and (self.c + tr.value + 1) or tr.value
			break
		end
	end
	first = math.clamp(first, 0, clip.frames - 1)

	-- Mirror (ModelAnimation.NGILHAOFGEA): if MirrorNode and its _1/_2 partner are in the opposite order
	-- in the fighter right now than in the animation's keyframe 2, play the move with every _1/_2
	-- node pair swapped. Keeps the stance continuous after moves that end on the other foot.
	self.remap = nil
	local ms = m.mirror and self.slots[m.mirror]
	local mp = ms and self.pairs[ms]
	if self.move and mp and ms <= clip.nodes and mp <= clip.nodes then
		local f = self.fighter
		local fr = math.min(2, clip.frames - 1)
		local cur = self.facing * (f.px[mp] - f.px[ms])
		local anim = clip:getPosition(fr, mp) - clip:getPosition(fr, ms)
		if (cur <= 0) ~= (anim <= 0) then
			self.remap = self.pairs
		end
	end
	local remap = self.remap

	-- Align: new move's pivot node (at its first frame) goes onto the anchor position
	local pivotPart = (m.align and m.align.pivotPart) or "NPivot"
	local pivotSlot = self.slots[pivotPart] or self.slots.NPivot or 1
	-- "Me Pivot" is where the NEW move's pivot node is right now (not the old move's pivot node:
	-- StepBack pivots on NHeel_1 and the idle on NHeel_2, so mixing them jumps by a heel's width)
	self.pivotSlot = pivotSlot
	local tx, ty = self:anchor(m.align and m.align.position or nil)
	local ax, ay = clip:getPosition(first, (remap and remap[pivotSlot]) or pivotSlot)
	if m.align and m.align.pivotObject == "Animation" then
		-- the animation's own origin goes onto the anchor (children start in their parent's frame)
		ax, ay = 0, 0
		local pos = m.align.position
		if pos and pos.object == "Animation" then
			local who = self:who(pos.player)
			if who then ty = who.offsetY end
		end
	end
	local axis = (m.align and m.align.axis) or "X|Z"
	self.offsetX = tx - self.facing * ax
	self.offsetY = string.find(axis, "Y", 1, true) and (ty - ay) or 0

	-- Blend from the current pose into the new move over one keyframe (NoInterpolationFrames = cut)
	local f = self.fighter
	if self.move and not m.noInterp then
		local snap = table.create(clip.nodes * 2, 0)
		for s = 1, clip.nodes do
			local i = f:slotNode(s)
			if not i then break end
			snap[2 * s - 1], snap[2 * s] = f.px[i], f.py[i]
		end
		self.blend = { pose = snap }
	else
		self.blend = nil
	end

	self.move, self.clip = m, clip
	self.landed = {}
	self.pivotSlot = pivotSlot
	self.steps = math.max((m.mid or 0) + 1, 1)
	self.c, self.k = first, 1
	self.ended = false
	self.lastFrame = (m.endFrame and m.endFrame >= 0) and math.min(m.endFrame, clip.frames - 1) or (clip.frames - 1)
	table.insert(self.log, m.name)
	if #self.log > 6 then table.remove(self.log, 1) end
	for _, iv in m.intervals do
		if iv.start == first then self:fire("IntervalStart", iv.name) end
	end
	self.justBorn = false
	self:runActions(first, nil, true)
	self:runActions(nil, "AnimationStart")
	perkAnim(self, "AnimationStart", m)
end

-- Physics="1" moves (PhysicalFall, PhysicalGroundHit, PhysicalLying): no animation, the whole body is
-- simulated (ModelPhysics physics mode). The pending hit impulse is applied to the hit edge
-- (Model.CIEONHLIHDM -> CPGONFFGAHM.HKFEABKNICO). They end through EveryFrame-triggered moves.
function MoveEngine.startPhysics(self: MoveEngine, m: any)
	local f = self.fighter
	if not f.ragdoll then
		f:setRagdoll(true)
		self.physFrames = 0
	end
	local h = self.lastHit
	if h and not h.impulseApplied and h.edgeIndex then
		h.impulseApplied = true
		f:applyImpulse(h.edgeIndex, h.edgeT or 0.5, h.impulseX, h.impulseY)
	end
	self.move, self.clip = m, nil
	self.landed = {}
	self.c, self.k, self.steps, self.lastFrame = 0, 1, 1, 0
	self.ended = false
	self.blend = nil
	self.remap = nil
	self:runActions(0, nil, true)
	self:runActions(nil, "AnimationStart")
	perkAnim(self, "AnimationStart", m)
	table.insert(self.log, m.name)
	if #self.log > 6 then table.remove(self.log, 1) end
end

-- Write the animated slots for the current (c, k).
function MoveEngine.writePose(self: MoveEngine)
	local f, clip = self.fighter, self.clip
	local px, py, pz = f.px, f.py, f.pz
	local opx, opy, opz = f.ox, f.oy, f.oz
	local facing, ox, oy = self.facing, self.offsetX, self.offsetY
	local blend = self.blend
	local remap = self.remap
	local w = blend and (self.k / self.steps) or 1
	f:setDriven(clip.nodes)
	for s = 1, clip.nodes do
		local i = f:slotNode(s)
		if not i then break end
		local x, y, z = clip:sample(self.c, self.k, self.steps, (remap and remap[s]) or s)
		x, y = facing * x + ox, y + oy
		if blend then
			x = blend.pose[2 * s - 1] + (x - blend.pose[2 * s - 1]) * w
			y = blend.pose[2 * s] + (y - blend.pose[2 * s]) * w
		end
		opx[i], opy[i], opz[i] = px[i], py[i], pz[i]
		px[i], py[i], pz[i] = x, y, facing * z
	end
end

-- Advance one tick of playback; fires interval/animation events at keyframe boundaries.
-- AnimationEnd fires once the last keyframe segment has fully played.
function MoveEngine.advance(self: MoveEngine)
	self.k += 1
	if self.k <= self.steps then return end
	if self.c >= self.lastFrame - 1 then
		self.k = self.steps
		if not self.ended then
			self.ended = true
			for _, iv in self.move.intervals do
				if iv.stop >= self.c and iv.stop < 100000 then self:fire("IntervalEnd", iv.name) end
			end
			self:fire("AnimationEnd", self.move.name)
			self:runActions(nil, "AnimationEnd")
			perkAnim(self, "AnimationEnd", self.move)
		end
		return
	end
	self.k = 1
	self.blend = nil
	local prev = self.c
	self.c += 1
	for _, iv in self.move.intervals do
		if iv.stop == prev then self:fire("IntervalEnd", iv.name) end
		if iv.start == self.c then self:fire("IntervalStart", iv.name) end
	end
	self:runActions(self.c)
end

-- Place the fighter at x (SF2 units) facing +1/-1, starting in the idle stance. A weapon with its own
-- "IdleStance" move (KatanaIdle) starts in that one: in the game the round intro (Phase 6) leads there.
function MoveEngine.spawn(self: MoveEngine, x: number, facing: number)
	self.facing = facing
	self.move = nil
	local idle = self.byName.StanceIdle
	for _, m in self.moves do
		if m.name ~= "StanceIdle" and table.find(m.labels, "IdleStance") then idle = m break end
	end
	-- models without a stance (punching bags, summons): their first animated move
	if not idle then
		for _, m in self.moves do
			if m.file then idle = m break end
		end
	end
	if not idle then return end
	self:start(idle)
	local ax = self.clip:getPosition(self.c, self.pivotSlot)
	self.offsetX = x - facing * ax
	self.offsetY = 0
	self.blend = nil
	local f = self.fighter
	local before = f.px[self.slots.NPivot]
	self:writePose()
	-- carry the free (cloth) nodes along to the spawn point, then let them settle
	local dx = f.px[self.slots.NPivot] - before
	for i = f.animated + 1, f.count do
		if not f.driven[i] then
			f.px[i] += dx; f.ox[i] += dx
		end
	end
	for _ = 1, 90 do f:simulate() end
	self:fire("Birth"); self:fire("RoundStageStart", self:roundStage())
end

-- One 1/60 s tick for this fighter. Input presses must already be in self.keys.
function MoveEngine.tick(self: MoveEngine)
	local f = self.fighter
	if self.clip then self:advance() end
	if self.keys.pressedThisTick then
		table.insert(self.events, 1, { "KeyPressed", "" })
	end
	self:fire("EveryFrame")
	if not self:processEvents() and self.ended then
		-- nothing took over at the end of the move: back to the idle stance (a child with nothing to
		-- play next is finished and the fight removes it)
		local idle = self.byName.StanceIdle
		if idle and not self.parent then
			self:start(idle)
		else
			self.finished = true
		end
	end
	self.keys:tick()
	local vel = self.move and self.move.velocity
	if vel and self.clip then
		-- <Velocity X Y>: the animation's origin moves each tick (missiles fly, dashes slide)
		self.offsetX += self.facing * vel.x
		self.offsetY += vel.y
	end
	if self.clip then
		self:writePose()
		self:repulseWall()
	else
		self.physFrames += 1
	end
	f:simulate()
	-- The COM node is recomputed once per tick, after physics (Model.BDHAMOEKNNK -> ModelObject.AKKNDFGMFEA),
	-- and conditions run before physics. So COM is last tick's position and Frame="Previous" the one before:
	-- PhysicalLying / Standup wait until the body has actually stopped moving.
	self.prevComX, self.prevComY = self.comX, self.comY
	self.comX, self.comY = f:com()
end

return MoveEngine
