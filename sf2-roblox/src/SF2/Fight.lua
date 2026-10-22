--!strict
-- One fight between two warriors (port of Fight / ModelContainer, see DECOMPILE_INDEX.md and README):
--  * rounds: StartStance -> Fight -> EndStance (StageType START_STANCE/FIGHT/END_STANCE). Each stage start
--    fires RoundStageStart <stage> on both fighters; moves.xml does the rest (stance, idle, Win/Loss moves).
--  * StartStance ends once both fighters finished their stance (their move is no longer a StartStance
--    move) and the round banner had time to show; EndStance ends once both played their EndsStage move
--  * a round ends on a knockout (health 0) or when the timer runs out (Fight.EndRound, reason 6 timeout:
--    the fighter with more health wins, equal health is a draw); the first to `rounds` wins takes the fight
--  * children (CreatePlayer): projectiles, magic and summons are models of their own (missile/magic
--    skeleton + the parent's Ranged/Magic item as their weapon) driven by their own moves; they strike
--    the parent's enemy and are removed by Delete, when nothing plays next, or at the end of the round
--  * magic (internalSettings <Magic>): charge starts at 0.0001 x MagicInitialCharge, grows by damage dealt
--    x 2^(0.0001 x MagicDamageRecharge) and damage taken x 2^(0.0001 x MagicPainRecharge); a full bar is one
--    MagicBullet (the Bullets condition), AddBullets -1 spends it
--  * ranged: RangedQuantity throws per round (StartingBullets), refilled each round unless the fight's
--    rules say NoBulletsReplenishment
--  * actions (sounds, effects, camera) go to hooks set by the presentation layer

local Fighter = require(script.Parent.Fighter)
local MoveEngine = require(script.Parent.MoveEngine)
local Combat = require(script.Parent.Combat)
local Rigs = require(script.Parent.Rigs)
local Moves = require(script.Parent.Moves)
local Items = require(script.Parent.Items)
local Perks = require(script.Parent.Perks)
local Xml = require(script.Parent.Xml)

local Fight = {}
Fight.__index = Fight

local BASE = 0.0001
-- Stage floors and caps, in ticks (60 = 1 s). These are the port's own: the data gives no stage
-- lengths, the stage really ends when both stance animations have played (the `done` / `busy` checks),
-- and these only keep the banner up for a moment and cap a stance that never finishes. They started at
-- 100/400 and 120/420, which added nearly two seconds of standing around to every round on top of the
-- animations; dropped to roughly half a second, which matches the phone's pace.
local START_STANCE_MIN = 30
local START_STANCE_MAX = 240
local END_STANCE_MIN = 45
local END_STANCE_MAX = 300
local SPAWN_X = 100 -- fallback: most locations put the fighters 100 units either side of the centre

export type Hooks = { [string]: (...any) -> ...any }

local function settings(): any
	return Xml.doc("internalSettings")
end

-- Arena from a location layout (<Width>, <Wall>): walls at +-(Width/2 - Wall) around the centre
-- Walls, floor and the two spawn offsets of a location. The spawns come from the location's own
-- <ModelsViewer PlayerPositionX EnemyPositionX>, measured from the middle of the map: most locations put
-- the fighters 200 units apart, the dojos 283 and one raid map 330, which the fixed +/-100 ignored.
local function arena(location: string?): (number, number, number, number, number)
	local loc = location and Xml.location(location)
	local width = Xml.num(loc, "Width", 1936) :: number
	local wall = Xml.num(loc, "Wall", 200) :: number
	local floor = Xml.num(loc, "Floor", 80) :: number
	local half = width / 2 - wall
	local px, ex = -SPAWN_X, SPAWN_X
	-- it sits inside the models layer (<Layer Type="2">), not at the root
	local mv
	for _, layer in Xml.all(loc, "Layer") do
		mv = mv or Xml.first(layer, "ModelsViewer")
	end
	if mv then
		local p, e = Xml.num(mv, "PlayerPositionX"), Xml.num(mv, "EnemyPositionX")
		if p and e then px, ex = p - width / 2, e - width / 2 end
	end
	return -half, half, floor, px, ex
end

function Fight.new(opts: any)
	local wallMin, wallMax, floor, spawnP, spawnE = arena(opts.location)
	local self = setmetatable({
		opts = opts,
		hooks = opts.hooks or {},
		builds = opts.warriors,
		rounds = opts.rounds or 2,
		roundTime = opts.roundTime or 99,
		battleType = opts.battleType or "",
		location = opts.location,
		wallMin = wallMin, wallMax = wallMax, floorOffset = floor,
		spawnP = spawnP, spawnE = spawnE,
		engines = {},
		children = {},
		stage = "StartStance",
		stageTicks = 0,
		round = 0,
		wins = { 0, 0 },
		timer = 0,
		ticks = 0,
		over = false,
		result = nil :: any,
		paused = false,
		pauseTicks = 0,
		controllers = {},
		-- the end screen's counters (EndFightContent): perfect rounds, first strikes, the longest combo
		-- (internalSettings <Combo MinHits="3" Time="90">), shocks, and the best style level reached
		-- (<StyleLevels StylePerHit="0.5" DecreaseSpeed="0.08" Penalty="2">, Hard..Fantastic)
		stats = { hits = { 0, 0 }, damage = { 0, 0 }, perfect = { true, true },
			perfectRounds = { 0, 0 }, firstStrikes = { 0, 0 }, maxCombo = { 0, 0 }, shocks = { 0, 0 },
			style = { 0, 0 }, bestStyle = { 0, 0 } },
		combo = { count = { 0, 0 }, last = { -1e9, -1e9 } },
		firstStruck = false,
		noBulletsRefill = opts.noBulletsRefill or {
			opts.rules and opts.rules[1] and opts.rules[1].noBulletsRefill or false,
			opts.rules and opts.rules[2] and opts.rules[2].noBulletsRefill or false,
		},
	}, Fight)
	for i = 1, 2 do
		local b = self.builds[i]
		local f = Fighter.new(b.rig)
		f.wallMin, f.wallMax = wallMin, wallMax
		local e = MoveEngine.new(f, b.moves, b.loadout, i)
		e.fight = self
		e.build = b
		-- cloned: perk mods (ModAttributes) add to this table in place, and children share it
		e.attributes = table.clone(b.attributes)
		e.voice = b.voice
		e.name = b.name or ""
		-- Warrior.build already merged the stage's <Perks> with the level's PerkTree perks
		e.perks = table.clone(b.perks or {})
		-- fight rules (SF2.Rules) for this side
		local rule = (opts.rules and opts.rules[i]) or {}
		e.rule = rule
		e.immortal = (opts.immortal and opts.immortal[i]) or rule.immortal or false
		e.removedIntervals = rule.removeIntervals
		e.noAnimation = rule.noAnimation
		e.magicCharge = math.clamp(BASE * (b.attributes.MagicInitialCharge or 0), 0, 1)
		e.rangedLeft = b.attributes.RangedQuantity or math.huge -- no RangedQuantity (the player): no limit
		self.engines[i] = e
	end
	self.engines[1].enemy, self.engines[2].enemy = self.engines[2], self.engines[1]
	self.perks = Perks.new(self)
	return self
end

function Fight.hook(self: any, name: string, ...: any): any
	local h = self.hooks[name]
	if h then return h(...) end
	return nil
end

---------------------------------------------------------------- rounds

function Fight.startRound(self: any)
	self.round += 1
	self.firstStruck = false
	for _, c in table.clone(self.children) do self:removeChild(c) end
	self.stage = "StartStance"
	self.stageTicks = 0
	self.timer = self.roundTime * 60
	for i, e in self.engines do
		local f = e.fighter
		f:setRagdoll(false)
		e.health = (self.opts.startHealth and self.round == 1 and self.opts.startHealth[i]) or 1
		e.lastHit = nil
		e.roundResult = nil
		e.mods = {}
		e.children = {}
		e.keys = e.keys.new()
		if e.rule.rechargeMagic then e.magicCharge = 1 end
		e.bullets.MagicBullet = e.magicCharge >= 1 and 1 or 0
		e.sinceHit = 0
		if self.round == 1 or not self.noBulletsRefill[i] then
			e.rangedLeft = e.attributes.RangedQuantity or math.huge
		end
		local x = i == 1 and self.spawnP or self.spawnE
		e:spawn((self.wallMin + self.wallMax) / 2 + x, i == 1 and 1 or -1)
	end
	for _, mod in self.opts.mods or {} do
		local who = mod.applyTo
		for i, e in self.engines do
			if who == "All" or (who == "Player" and i == 1) or (who == "Bot" and i == 2) then e.mods[mod.name] = true end
		end
	end
	self:hook("roundStart", self.round)
end

-- Is this engine still playing the stage's own stance animation?
-- EndsStage="1" alone is not enough: the looping idles that *follow* a stance carry it too
-- (KnivesStartStanceIdle is "StartIdleStance|Stance" with EndsStage="1"), and an idle loop never reports
-- `ended`, so counting it kept every round's end stance busy until the cap -- which is what made the
-- rounds take so long to turn over. The real stage animations are the ones labelled StageStance
-- (StartStance / EndStance / Win_*) plus the Loss moves; the idles are not.
local function inStageMove(e: any): boolean
	local m = e.move
	if not m or not m.endsStage or e.ended then return false end
	local labels = m.labelSet
	if labels and (labels.StartIdleStance or labels.IdleStance) then return false end
	return true
end

function Fight.setStage(self: any, stage: string)
	self.stage = stage
	self.stageTicks = 0
	for _, e in self.engines do
		e:fire("RoundStageStart", stage)
	end
	if self.perks then self.perks:stage(stage) end
	self:hook("stage", stage)
end

-- reason: "Lose" (knockout), "Timeout"; winner 0 = draw
function Fight.endRound(self: any, winner: number, reason: string)
	for i, e in self.engines do
		if winner == 0 then
			e.roundResult = { name = "Defeat", type = reason }
		else
			e.roundResult = { name = (i == winner) and "Victory" or "Defeat", type = reason }
		end
	end
	if winner > 0 then self.wins[winner] += 1 end
	if winner > 0 and self.engines[winner].health >= 1 then
		self.stats.perfectRounds[winner] += 1
	end
	self.lastRound = { winner = winner, reason = reason }
	self:setStage("EndStance")
	self:hook("roundEnd", winner, reason, self.round)
end

function Fight.finishRound(self: any)
	local w1, w2 = self.wins[1], self.wins[2]
	if w1 >= self.rounds or w2 >= self.rounds then
		self.over = true
		local winner = (w1 >= self.rounds and w2 < self.rounds) and 1 or ((w2 >= self.rounds and w1 < self.rounds) and 2 or 0)
		self.result = { winner = winner, wins = table.clone(self.wins), rounds = self.round,
			health = { self.engines[1].health, self.engines[2].health }, stats = self.stats }
		self:hook("fightEnd", self.result)
		return
	end
	self:startRound()
end

---------------------------------------------------------------- input

-- A key from a player or the AI. Ranged needs a throw left (the button greys out in the game).
function Fight.press(self: any, i: number, key: string)
	local e = self.engines[i]
	if e.rule.noButton and e.rule.noButton[key] then return end
	if key == "Ranged" and (e.rangedLeft or 0) <= 0 then return end
	if self.cooldowns and self.cooldowns[i] and (self.cooldowns[i][key] or 0) > 0 then return end
	e.keys:press(key)
end

function Fight.release(self: any, i: number, key: string)
	self.engines[i].keys:release(key)
end

---------------------------------------------------------------- children

local childBuilds = {}
local function childBuild(root: any, el: any): any
	local loadout, models = {}, {}
	for _, it in el.c or {} do
		if it.t == "Item" then
			local a = it.a or {}
			local name = a.Name
			local copy = a.CopyParentType
			if copy then name = root.build.items[copy] end
			local item = Items.get(name)
			local typ = a.Type or (item and Xml.attr(item, "Type")) or copy or ""
			if name then
				local sub = item and Xml.attr(item, "SubType") or ""
				if a.CopyParentSubtype and root.build.items[a.CopyParentSubtype] then
					local p = Items.get(root.build.items[a.CopyParentSubtype])
					sub = p and Xml.attr(p, "SubType") or sub
				end
				table.insert(loadout, { Name = name, Type = typ, SubType = sub })
				local model = item and Xml.attr(item, "Model")
				if model and Rigs.exists(model) then
					if typ == "Skeleton" then table.insert(models, 1, model) else table.insert(models, model) end
				end
			end
		end
	end
	if #models == 0 then return nil end
	local parts = {}
	for _, l in loadout do table.insert(parts, l.Type .. ":" .. l.Name) end
	local key = table.concat(parts, "|")
	local b = childBuilds[key]
	if not b then
		b = { loadout = loadout, models = models, rig = Rigs.build(models), moves = Moves.forLoadout(loadout) }
		childBuilds[key] = b
	end
	return b
end

function Fight.createChild(self: any, parent: any, el: any)
	local root = parent:root()
	local b = childBuild(root, el)
	if not b then return end
	local f = Fighter.new(b.rig)
	f.wallMin, f.wallMax = self.wallMin - 2000, self.wallMax + 2000
	local c = MoveEngine.new(f, b.moves, b.loadout, root.player)
	c.fight = self
	c.parent = parent
	c.enemy = root.enemy
	c.attributes = root.attributes
	c.voice = root.voice
	c.name = (el.a and el.a.Name) or ""
	c.facing = parent.facing
	c.offsetX, c.offsetY = parent.offsetX, parent.offsetY
	c.build = root.build
	c.perks = root.perks
	table.insert(parent.children, c)
	table.insert(self.children, c)
	local start = el.a and el.a.StartAnimation
	if start and c.byName[start] then
		c:start(c.byName[start])
	else
		c.justBorn = true
		c:fire("Birth")
		c:processEvents()
	end
	if not c.clip and not c.move then
		self:removeChild(c)
		return
	end
	if c.clip then
		c:writePose()
		f:simulate()
	end
	self:hook("childAdded", c)
end

function Fight.removeChild(self: any, c: any)
	local i = table.find(self.children, c)
	if i then table.remove(self.children, i) end
	local p = c.parent
	if p then
		local j = table.find(p.children, c)
		if j then table.remove(p.children, j) end
	end
	for _, cc in table.clone(c.children) do self:removeChild(cc) end
	c.removed = true
	self:hook("childRemoved", c)
end

---------------------------------------------------------------- actions (MoveEngine.runActions)

local function attr(el: any, k: string): string?
	return el.a and el.a[k]
end

function Fight.action(self: any, e: any, el: any, event: string?)
	local t = el.t
	local root = e:root()
	if t == "Sound" then
		local voice = attr(el, "Voice")
		if voice and voice ~= root.voice then return end
		self:hook("sound", attr(el, "Name"), {
			volume = tonumber(attr(el, "Volume") or "1"), looped = attr(el, "Looped") == "1", pack = attr(el, "PackName"),
		}, e)
	elseif t == "RandomSound" then
		local list = {}
		for _, k in el.c or {} do if k.t == "Sound" then table.insert(list, k) end end
		if #list > 0 then
			local k = list[Combat.random:NextInteger(1, #list)]
			self:hook("sound", attr(k, "Name"), { volume = 1, pack = attr(k, "PackName") }, e)
		end
	elseif t == "StopSound" then
		self:hook("stopSound", attr(el, "Name"), e)
	elseif t == "Effect" then
		self:hook("effect", e, el)
	elseif t == "StopEffect" or t == "StopFollowEffect" then
		self:hook("stopEffect", e:who(attr(el, "Player")) or e, attr(el, "Name"), t == "StopFollowEffect")
	elseif t == "HitEffect" then
		self:hook("hitEffect", e, attr(el, "FileName"))
	elseif t == "ShakeScreen" then
		self:shake(el.a or {})
	elseif t == "ZoomEffect" or t == "CameraWeight" then
		self:hook("camera", t, el.a or {}, e)
	elseif t == "CreatePlayer" then
		self:createChild(e, el)
	elseif t == "Delete" then
		local who = attr(el, "Player") or "Me"
		if who == "Me" then
			e.deleted = true
		elseif who == "Child" then
			for _, c in table.clone(e.children) do c.deleted = true end
		elseif who == "EnemyChild" and e.enemy then
			for _, c in table.clone(e.enemy.children) do c.deleted = true end
		end
	elseif t == "PlayAnimation" then
		local who = attr(el, "Player")
		local target
		if who == "Child" then
			local name = attr(el, "ChildName")
			for _, c in e.children do
				if not name or c.name == name then target = c; break end
			end
		else
			target = e:who(who)
		end
		local m = target and target.byName[attr(el, "Animation") or ""]
		if m then target:start(m) end
	elseif t == "AddBullets" then
		local typ = attr(el, "Type") or "MagicBullet"
		local v = tonumber(attr(el, "Value") or "0") or 0
		root.bullets[typ] = math.max(0, (root.bullets[typ] or 0) + v)
		if typ == "MagicBullet" and v < 0 then
			root.magicCharge = 0
			self:hook("magic", root.player, 0)
		end
	elseif t == "SetCooldown" then
		self.cooldowns = self.cooldowns or {}
		self.cooldowns[root.player] = self.cooldowns[root.player] or {}
		self.cooldowns[root.player][attr(el, "Button") or ""] = tonumber(attr(el, "Duration") or "0")
	elseif t == "EnableBossAbility" then
		root.bossAbility = tonumber(attr(el, "Value") or "0")
	elseif t == "SetEndStage" then
		self.stageTicks = math.max(self.stageTicks, END_STANCE_MAX)
	elseif t == "TryOnEnd" then
		e.tryOnEnd = attr(el, "Event")
		e.tryOnEndMove = e.move
	end
end

-- ShakeScreen / internalSettings <HitEffects>: PauseTime ticks of slow motion, then the camera shakes
function Fight.shake(self: any, a: any)
	local pause = tonumber(a.PauseTime or "0") or 0
	if pause > 0 then self.pauseTicks = math.max(self.pauseTicks, pause) end
	self:hook("shake", {
		time = tonumber(a.EffectTime or "30") or 30,
		ax = tonumber(a.AmplitudeX or "0") or 0, fx = tonumber(a.FrequencyX or "1") or 1,
		ay = tonumber(a.AmplitudeY or "0") or 0, fy = tonumber(a.FrequencyY or "1") or 1,
	})
end

local hitEffects: any = nil
local function defaultHitEffect(kind: string): any
	if not hitEffects then
		hitEffects = {}
		for _, h in Xml.all(Xml.first(settings(), "HitEffects"), "HitEffect") do
			hitEffects[Xml.attr(h, "Type") :: string] = h.a
		end
	end
	return hitEffects[kind]
end

---------------------------------------------------------------- hits

function Fight.onHit(self: any, att: any, tgt: any, hit: any)
	local a, t = att:root(), tgt:root()
	local ai, ti = a.player, t.player
	self.stats.hits[ai] += 1
	self.stats.damage[ai] += hit.damage
	t.sinceHit = 0
	if a.rule.lifesteal and not hit.blocked then
		a.health = math.min(1, a.health + hit.damage * a.rule.lifesteal)
	end
	if not hit.blocked then
		self.stats.perfect[ti] = false
		local st = self.stats
		if not self.firstStruck then
			self.firstStruck = true
			st.firstStrikes[ai] += 1
		end
		if hit.shock then st.shocks[ai] += 1 end
		-- a combo: unblocked hits by one side, each within 90 ticks of the last, counting from 3
		local c = self.combo
		c.count[ai] = (self.ticks - c.last[ai] <= 90) and c.count[ai] + 1 or 1
		c.last[ai] = self.ticks
		c.count[ti] = 0
		if c.count[ai] >= 3 then st.maxCombo[ai] = math.max(st.maxCombo[ai], c.count[ai]) end
		st.style[ai] = math.min(5.99, st.style[ai] + 0.5)
		st.style[ti] = math.max(0, st.style[ti] - 2)
		st.bestStyle[ai] = math.max(st.bestStyle[ai], math.floor(st.style[ai]))
	end
	-- magic charge
	local mv = att.move
	if not (mv and mv.noMagicRecharge) then
		a.magicCharge = math.min(1, a.magicCharge + hit.damage * 2 ^ (BASE * (a.attributes.MagicDamageRecharge or 0)))
	end
	t.magicCharge = math.min(1, t.magicCharge + hit.damage * 2 ^ (BASE * (t.attributes.MagicPainRecharge or 0)))
	for _, x in { a, t } do
		if x.magicCharge >= 1 and (x.bullets.MagicBullet or 0) < 1 then
			x.bullets.MagicBullet = 1
			if self.perks then self.perks:magicCharged(x) end
		end
		self:hook("magic", x.player, x.magicCharge)
	end
	-- default hit picture and shakes (Fight: Critical / HeadHit / Shock)
	local iv = hit.interval
	if not (iv and iv.noEffect) then
		local pic = hit.blocked and "block" or (hit.critical and "critical" or (hit.weapon and "hit_blade" or "hit"))
		self:hook("hitPicture", pic, hit.x, hit.y, att)
	end
	local kind = hit.critical and "CriticalHit" or (hit.shock and "Shock" or ((hit.head and not hit.blocked) and "HeadHit" or nil))
	if kind then
		local h = defaultHitEffect(kind)
		if h then self:shake(h) end
	end
	self:hook("hit", att, tgt, hit)
end

---------------------------------------------------------------- tick

function Fight.tick(self: any)
	if self.over then return end
	if self.round == 0 then self:startRound() end
	-- slow motion after critical hits (PauseTime): the simulation runs every other tick
	if self.pauseTicks > 0 then
		self.pauseTicks -= 1
		if self.pauseTicks % 2 == 1 then return end
	end
	self.ticks += 1
	self.stageTicks += 1
	for i = 1, 2 do
		self.stats.style[i] = math.max(0, self.stats.style[i] - 0.08 / 60)
	end
	for i, ctl in self.controllers do
		ctl(self, i)
	end
	for _, e in self.engines do e:tick() end
	for _, c in table.clone(self.children) do
		if not c.removed then c:tick() end
	end
	if self.perks then self.perks:tick() end
	-- strikes
	if self.stage == "Fight" then
		local a, b = self.engines[1], self.engines[2]
		local before = { a.lastHit, b.lastHit }
		Combat.exchange(a, b, self.ticks)
		if b.lastHit ~= before[2] and b.lastHit then self:onHit(b.lastHit.attacker, b, b.lastHit) end
		if a.lastHit ~= before[1] and a.lastHit then self:onHit(a.lastHit.attacker, a, a.lastHit) end
		for _, c in table.clone(self.children) do
			if not c.removed and c.enemy and not c.enemy.parent then
				local hit = Combat.strike(c, c.enemy)
				if hit and hit ~= "suppressed" then self:onHit(c, c.enemy, hit) end
			end
		end
	end
	-- children leaving: Delete, nothing to play, off the arena (DeleteOnWall), TryOnEnd triggers
	for _, c in table.clone(self.children) do
		if not c.removed then
			local px = c.fighter.px[c.pivotSlot] or c.offsetX
			local off = px < self.wallMin - 600 or px > self.wallMax + 600
			local wall = c.move and c.move.labelSet.DeleteOnWall and (px <= self.wallMin or px >= self.wallMax)
			if c.deleted or c.finished or off or wall then self:removeChild(c) end
		end
	end
	for _, e in self.engines do
		if e.tryOnEnd and (e.move ~= e.tryOnEndMove or e.ended) then
			local trig = Moves.trigger(e.tryOnEnd)
			e.tryOnEnd = nil
			for _, el in trig or {} do self:action(e, el) end
		end
		if e.rangedThrowMove ~= e.move and e.move and e.move.labelSet.RangedPlayer then
			e.rangedLeft = math.max(0, (e.rangedLeft or 0) - 1)
			self:hook("ranged", e.player, e.rangedLeft)
		end
		e.rangedThrowMove = e.move
	end
	if self.cooldowns then
		for _, cd in self.cooldowns do
			for k, v in cd do cd[k] = math.max(0, v - 1) end
		end
	end
	-- stages
	local a, b = self.engines[1], self.engines[2]
	if self.stage == "StartStance" then
		local done = not (a.move and a.move.labelSet.StartStance and not a.ended)
			and not (b.move and b.move.labelSet.StartStance and not b.ended)
		if (done and self.stageTicks >= START_STANCE_MIN) or self.stageTicks >= START_STANCE_MAX then
			self:setStage("Fight")
		end
	elseif self.stage == "Fight" then
		if self.roundTime > 0 then self.timer = math.max(0, self.timer - 1) end
		-- rules that run every tick: regeneration, ring-out, losing by a fall
		local out = 0
		for i, e in self.engines do
			local rule = e.rule
			e.sinceHit = (e.sinceHit or 0) + 1
			if rule.regeneration and e.health > 0 and e.sinceHit >= rule.regeneration.after then
				e.health = math.min(1, e.health + rule.regeneration.rate)
			end
			local function nodeValue(spec: any): number
				local x, y
				if spec.node == "COM" then x, y = e.fighter:com() else x, y = e:nodePos(e.slots[spec.node] or e.pivotSlot) end
				return spec.axis == "Y" and y or (x - (self.wallMin + self.wallMax) / 2)
			end
			if rule.ringout then
				local v = nodeValue(rule.ringout)
				if v < rule.ringout.min or v > rule.ringout.max then out = i end
			end
			if rule.loseFall and e.move then
				local hit = rule.loseFall.anims[e.move.name]
				for l in rule.loseFall.anims do if e.move.labelSet[l] then hit = true end end
				if hit and nodeValue(rule.loseFall) <= rule.loseFall.max then out = i end
			end
		end
		local ko1, ko2 = a.health <= 0, b.health <= 0
		if out > 0 then
			self:endRound(3 - out, "Ringout")
		elseif ko1 or ko2 then
			self:endRound((ko1 and ko2) and 0 or (ko1 and 2 or 1), "Lose")
		elseif self.roundTime > 0 and self.timer <= 0 then
			local w = (a.health > b.health) and 1 or ((b.health > a.health) and 2 or 0)
			if self.opts.timeoutWinner then w = self.opts.timeoutWinner end
			self:endRound(w, "Timeout")
		end
	elseif self.stage == "EndStance" then
		local busy = inStageMove(a) or inStageMove(b) or a.fighter.ragdoll and a.health > 0 or b.fighter.ragdoll and b.health > 0
		if (not busy and self.stageTicks >= END_STANCE_MIN) or self.stageTicks >= END_STANCE_MAX then
			self:finishRound()
		end
	end
end

-- Seconds left on the round timer (rounded up, like RoundTimer)
function Fight.secondsLeft(self: any): number
	return math.ceil(self.timer / 60)
end

return Fight
