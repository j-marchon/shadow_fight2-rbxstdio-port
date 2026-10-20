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

-- DistancePoint: Player Me/Enemy, Object Nodes/Pivot/Wall/Floor/MapCenter/COM/Animation
function MoveEngine.anchor(self: MoveEngine, a: any): (number, number)
	if not a then
		return self:nodePos(self.pivotSlot)
	end
	local who = self
	if a.player == "Enemy" then
		who = self.enemy or self
	end
	local x, y = 0, 0
	local obj = a.object
	if obj == "Nodes" then
		local s = who.slots[a.part or "NPivot"] or who.slots.NPivot
		x, y = who:nodePos(s)
	elseif obj == "Pivot" or obj == "Animation" then
		x, y = who:nodePos(who.pivotSlot)
	elseif obj == "COM" then
		if a.previous then
			x, y = who.prevComX or 0, who.prevComY or 0
		else
			x, y = who.fighter:com()
		end
	elseif obj == "Wall" then
		local front = (a.part == "Front")
		x = ((front and who.facing or -who.facing) > 0) and ARENA_HALF or -ARENA_HALF
	elseif obj == "Floor" then
		x, y = who:nodePos(who.slots.NPivot); y = 0
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
		local who = (c.player == "Enemy") and self.enemy or self
		v = who ~= nil and who:isAnimation(c.name, candidate)
	elseif t == "interval" then
		local who = (c.player == "Enemy") and self.enemy or self
		v = who ~= nil and who:inInterval(c.name)
	elseif t == "stage" then
		v = (c.name == self.stage)
	elseif t == "mod" then
		v = false -- no modifiers active yet (perks, stuns: Phase 4)
	elseif t == "item" then
		local who = (c.player == "Enemy") and self.enemy or self
		v = who ~= nil and itemMatches(who.loadout, c)
	elseif t == "dist" then
		local fx, fy = self:anchor(c.from)
		local tx, ty = self:anchor(c.to)
		local d = (c.axis == "Y") and math.abs(ty - fy) or math.abs(tx - fx)
		v = d >= c.min and d <= c.max
	elseif t == "player" then
		v = (c.number == self.player)
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
		v = 0 >= c.min
	else
		v = false -- name / unknown (Hit, RoundResult, Health, ...: later phases)
	end
	if c.nt then
		return not v
	end
	return v
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
end

-- Returns the move to start for one event, or nil.
function MoveEngine.select(self: MoveEngine, eventType: string, name: string): any
	local subs = self.byEvent[eventType]
	if not subs then return nil end
	local best, bestPriority = nil, -math.huge
	for _, sub in subs do
		local m = sub.move
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
	local pivotSlot = self.slots[pivotPart] or self.slots.NPivot
	-- "Me Pivot" is where the NEW move's pivot node is right now (not the old move's pivot node:
	-- StepBack pivots on NHeel_1 and the idle on NHeel_2, so mixing them jumps by a heel's width)
	self.pivotSlot = pivotSlot
	local tx, ty = self:anchor(m.align and m.align.position or nil)
	local ax, ay = clip:getPosition(first, (remap and remap[pivotSlot]) or pivotSlot)
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
	self:fire("Birth"); self:fire("RoundStageStart", self.stage)
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
		-- nothing took over at the end of the move: back to the idle stance
		self:start(self.byName.StanceIdle)
	end
	self.keys:tick()
	if self.clip then
		self:writePose()
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
