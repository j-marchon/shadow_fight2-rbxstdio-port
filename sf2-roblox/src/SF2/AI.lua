-- SF2 fighting AI: a port of ModelAi (NGKBNOEJLPH) + Tactic / TacticFactors / AiData tables, driving a fighter
-- through the same keys a player presses (Fight.press / Fight.release). See README "## AI".
--
--   local AI = require(SF2.AI)
--   fight.controllers[2] = AI.new(fight, 2, "Standard")      -- tactic name from stages.xml (Warrior Tactic=)
--
-- Data: Data.Tactics.Settings (tacticSettings.xml + ComputerSettings.xml) and one packed module per tactic
-- archive (tools/build_tactics.py). Heavy work (JSON decode, table merge, key recipes) happens once in AI.new
-- and is cached per weapon pair; a tick is a few comparisons unless the AI is free to decide.
--
-- Decision order (ModelAi.BDHAMOEKNNK -> HMHLACOIDJI), when the AI is free (not inside its own Uninterrupt /
-- SemiUninterrupt interval, not Physical, decision wait over, response delay over):
--   1. missiles / magic of the enemy in the air: DodgeMissilesChance / DodgeMagicChance -> dodge table of the missile
--   2. enemy committed (inside its Uninterrupt interval): one UseDefense roll per enemy animation
--      (ModelAi.MNIODEEIJFC: r < counter -> CounterAttack, < counter+dodge -> Dodge, < +block -> Block, else none)
--      CounterAttack -> movement tables, else Dodge -> dodge tables, Block -> hold Back (StepBack / idle block)
--   3. otherwise: QuickAttacks (Throw...) and throw Evades, then ExpectedWait (P(act) = 1 / wait),
--      UseSafeAttackChance -> movement tables, TableAttackChance -> attack tables (hit must land before the enemy
--      can react: value <= enemy frame + EnemyResponseDelay), CautiousMovementsChance -> Step moves
--   + ConditionalDecisions (tacticSettings) whose conditions pass are added to the candidates
--   The candidates are weighted by the tactic's AnimationWeights and one is picked at random.
--   Tactics of Type="Random" (Beginner) and fights without tables for the current enemy animation use the random
--   path: every move that could start now, weighted by AnimationWeights.

local KeyBuffer = require(script.Parent.KeyBuffer)
local Pack = require(script.Parent.Pack)

local AI = {}
AI.__index = AI

local DIRS = { Forward = true, Back = true, Up = true, Down = true, ["Up-Forward"] = true, ["Up-Back"] = true,
	["Down-Forward"] = true, ["Down-Back"] = true }

---------------------------------------------------------------- data (cached per server)

local function tacticsFolder(): Instance
	return (script.Parent :: any).Data.Tactics
end

local settingsCache: any = nil
local function settings(): any
	if not settingsCache then
		settingsCache = Pack.json(tacticsFolder():FindFirstChild("Settings") :: ModuleScript)
	end
	return settingsCache
end
AI.settings = settings

local archiveCache: { [string]: any } = {}
local function archive(name: string): any
	local a = archiveCache[name]
	if a == nil then
		local mod = tacticsFolder():FindFirstChild(name)
		a = mod and Pack.json(mod :: ModuleScript) or false
		archiveCache[name] = a
	end
	return a or nil
end

-- every weapon name that has tables (entry group/name), and the archives holding (type, enemy, mine) entries
local tableNames: { [string]: boolean }? = nil
local function hasTables(w: string): boolean
	if not tableNames then
		local t = {}
		for _, meta in settings().archives do
			for _, m in meta do
				if m[2] ~= "" then t[m[2]] = true end
				if m[3] ~= "" then t[m[3]] = true end
			end
		end
		tableNames = t
	end
	return (tableNames :: any)[w] == true
end

-- Merged tables for my table weapon vs the enemy's: { attack = {[enemyAnim] = parts}, movement = ..., dodge = ... }
-- parts = { {a = animNames, t = {{node, start, rows}, ...}}, ... }
local pairCache: { [string]: any } = {}
local function pairTables(mine: string, enemy: string): any
	local key = mine .. "|" .. enemy
	local p = pairCache[key]
	if p then return p end
	p = { attack = {}, movement = {}, dodge = {}, any = false }
	local function add(kind: string, h: any)
		for anim, tabs in h.x do
			local list = p[kind][anim]
			if not list then list = {}; p[kind][anim] = list end
			table.insert(list, { a = h.a, t = tabs })
			p.any = true
		end
	end
	local kinds = { [0] = "attack", [1] = "movement", [2] = "dodge" }
	for name, meta in settings().archives do
		local want = false
		for _, m in meta do
			local t, g, n = m[1], m[2], m[3]
			if (t == 0 or t == 1) and (g == "" or g == enemy) and (n == "" or n == mine) then want = true end
			-- dodge tables: the shared set (EMPTY is a superset of default) + the enemy weapon's own attacks
			if t == 2 and ((g == "" and n == "" and name == "EMPTY") or (n ~= "" and n == enemy)) then want = true end
		end
		if want then
			local a = archive(name)
			for _, e in (a and a.e) or {} do
				local t, g, n = e.t, e.g, e.n
				if (t == 0 or t == 1) and (g == "" or g == enemy) and (n == "" or n == mine) then
					add(kinds[t], e.h)
				elseif t == 2 then
					add("dodge", e.h)
				end
			end
		end
	end
	pairCache[key] = p
	return p
end

---------------------------------------------------------------- factors (TacticFactors.PPOKEOHAHFG)

-- ctx: counter/damage/hit (memory of the enemy's current animation), health, enemyHealth, frames (enemy animation
-- ticks), childFrames, distance, magic, missiles, cond (names proposed by ConditionalDecisions), stats(name)
local function evalF(f: any, ctx: any, animName: string?): number
	if not f then return 0 end
	local s = (f.CounterFactor or 0) * ctx.counter + (f.DamageFactor or 0) * ctx.damage
		+ (f.HealthFactor or 0) * (1 - ctx.health) + (f.EnemyHealthFactor or 0) * (1 - ctx.enemyHealth)
		+ (f.AnimationFramesFactor or 0) * ctx.frames + (f.MagicBulletFactor or 0) * ctx.magic
		+ (f.MissileBulletFactor or 0) * ctx.missiles + (f.HitFactor or 0) * ctx.hit
		+ (f.ChildFramesFactor or 0) * ctx.childFrames + (f.DistanceFactor or 0) * ctx.distance + (f.Shift or 0)
	if f.anims then
		for _, af in f.anims do
			local c, d, h = ctx.stats(af.anim)
			s += h * (af.HitFactor or 0) + d * (af.DamageFactor or 0) + c * (af.CounterFactor or 0)
		end
	end
	if animName and ctx.cond[animName] then s += f.ConditionalDesigionFactor or 0 end
	local base, limit, anti = f.Base or 0, f.Limit or 0, f.AntiLimit or 0
	if f.linear then
		if s >= 0 then return base + math.min(s, 1) * (limit - base) end
		return base + math.min(-s, 1) * (anti - base)
	end
	-- exponential (FCNGGLHNDFB): Base at s = 0, tends to Limit as s grows and to AntiLimit as s falls
	if s >= 0 then return limit + 2 ^ -s * (base - limit) end
	return anti + 2 ^ s * (base - anti)
end
AI.evalF = evalF

local function minMax(rng: Random, mm: any, ctx: any): number
	if not mm then return 0 end
	local a, b = evalF(mm.min, ctx), evalF(mm.max, ctx)
	if b < a then a, b = b, a end
	return a + rng:NextNumber() * (b - a)
end

-- First entry of a named list (AnimationWeights, ExpectedWait, ...) whose name is the move's name or one of its
-- labels; the unnamed entry is the default
local function entryFor(list: any, m: any): any
	if not list then return nil end
	local default = nil
	for _, e in list do
		if e.name == "" then
			default = default or e
		elseif m and (m.name == e.name or m.labelSet[e.name]) then
			return e
		end
	end
	return default
end

---------------------------------------------------------------- moves -> keys

-- The key recipe of a move: the first Keys condition on the path through its condition tree (Or: first branch
-- that has keys). Forward/Back stay relative; converted with the facing the move would start with.
local function findKeys(conds: any, out: any): boolean
	for _, c in conds do
		if c.t == "keys" and not c.nt then
			for _, k in c.taps do table.insert(out.taps, k) end
			for _, k in c.holds do table.insert(out.holds, k) end
			return true
		elseif c.t == "op" and not c.nt then
			if c.op == "and" then
				if findKeys(c.kids, out) then return true end
			else
				for _, k in c.kids do
					if findKeys({ k }, out) then return true end
				end
			end
		end
	end
	return false
end

local function screenKey(k: string, facing: number): string
	if not DIRS[k] then return k end
	local fwd, back = "Right", "Left"
	if facing < 0 then fwd, back = "Left", "Right" end
	local s = string.gsub(k, "Forward", "#")
	s = string.gsub(s, "Back", back)
	return (string.gsub(s, "#", fwd))
end

local function hasEvent(m: any, ev: string): boolean
	for _, e in m.events do
		if e[1] == ev then return true end
	end
	return false
end

---------------------------------------------------------------- helpers on engines

-- AI frame of a model's animation: ticks since the animation's FirstFrame (ModelAnimation.OJEODKKHEPE + FANDONIBLKC)
local function aiFrame(e: any): number
	local m = e.move
	if not m then return 0 end
	return math.max(0, (e.c - (m.first or 0)) * (e.steps or 1) + (e.k or 1) - 1)
end

local function pivotX(e: any): number
	local s = e.slots.NPivot or e.pivotSlot
	return e.fighter.px[s] or e.offsetX or 0
end

-- The x the AI measures table distances from (ModelAnimation.BKDCNNOOIJH): where the animation was aligned, i.e.
-- where its Align pivot node stood at the animation's first frame. (The port's raw offsetX is the clip's
-- coordinate origin, which can sit far from the body.)
local function alignX(e: any): number
	local m, clip = e.move, e.clip
	if not m or not clip then return pivotX(e) end
	local cache = e._aiAlign
	if cache and cache.m == m and cache.ox == e.offsetX and cache.f == e.facing then return cache.x end
	local slot = e.pivotSlot or 1
	if e.remap and e.remap[slot] then slot = e.remap[slot] end
	local ok, ax = pcall(clip.getPosition, clip, math.clamp(m.first or 0, 0, clip.frames - 1), slot)
	local x = e.offsetX + e.facing * (ok and ax or 0)
	e._aiAlign = { m = m, ox = e.offsetX, f = e.facing, x = x }
	return x
end

AI.alignX = alignX

local function tacticName(m: any): string
	if m.tacticEquivalent and m.tacticEquivalent ~= "" then return m.tacticEquivalent end
	return m.name
end

local function weaponSub(e: any): string
	for _, it in e.loadout do
		if it.Type == "Weapon" then return it.SubType or "" end
	end
	return ""
end

-- The weapon whose tables this fighter uses: its SubType, or the first TacticWeapon listed on its weapon moves
-- that has tables (Keris -> Knives, Katana -> NinjaSword), or "" (shared moves only).
local function tableWeapon(e: any): string
	local sub = weaponSub(e)
	if hasTables(sub) then return sub end
	for _, m in e.moves do
		if m.labelSet.Weapon and m.tacticWeapon and m.tacticWeapon ~= "" then
			for w in string.gmatch(m.tacticWeapon, "[^|]+") do
				if hasTables(w) then return w end
			end
		end
	end
	return ""
end

---------------------------------------------------------------- construction

function AI.new(fight: any, index: number, tactic: string?, opts: any?)
	local s = settings()
	local me = fight.engines[index]
	local name = tactic or (me.build and me.build.def and me.build.def.tactic) or "Standard"
	local t = s.tactics[name]
	if not t then
		warn(("SF2.AI: unknown tactic %q, using Standard"):format(tostring(name)))
		t = s.tactics.Standard
	end
	local self = setmetatable({
		fight = fight, index = index, me = me, tactic = t, s = s,
		rng = Random.new((opts and opts.seed) or (os.clock() * 1e6 + index) // 1),
		random = t.type == "Random",
		pressed = {}, -- screen key -> "hold" | "tap"
		pending = nil :: any,
		wait = 0, block = 0, react = 0,
		enemyMove = nil :: any, enemyFrame = -1, inst = 0, rolls = {},
		memory = {}, seenHit = { nil, nil } :: { any },
		stats = { flow = {}, decisions = 0, started = 0, attacks = 0, blocks = 0, dodges = 0, byKind = {} },
		debug = opts and opts.debug,
	}, AI)
	self.strikes = (t.memory and t.memory.strikes) or 3
	if not (opts and opts.engage == false) then
		self.engage = (opts and type(opts.engage) == "table" and opts.engage) or AI.ENGAGE
	end
	-- set sizes from settings
	local function set(list: any): { [string]: boolean }
		local out = {}
		for _, n in list or {} do out[n] = true end
		return out
	end
	self.noDecisionIv = self.random and set(s.random.intervals) or set(s.noDecision.intervals)
	self.noDecisionMoves = set(s.noDecision.moves)
	self.unexpected = set(s.unexpected)
	self.missileLabels = set(s.missiles)
	self.magicLabels = set(s.magic)
	self.cautiousLabels = set(s.cautious)
	self.evadeThrow = set(s.evadeThrowDodges)
	self.throwLabels = set(s.throws)
	self.conditional = {}
	for _, pa in s.conditional or {} do self.conditional[pa.anim] = pa.reactions end
	self.delays = {}
	for _, d in s.random.delays or {} do self.delays[d.name] = d end
	self:setupMoves()
	fight._ai = fight._ai or {}
	fight._ai[index] = self
	-- tables are built lazily on the first tick: the enemy is known once the fight exists
	return function(f: any, i: number)
		self:tick()
	end, self
end

-- Key recipes and per-move constants (once per fight; moves keep their identity across rounds)
function AI.setupMoves(self: any)
	local me = self.me
	self.recipes = {}
	self.keyMoves = {}
	self.byTactic = {} -- table animation name -> my moves
	for _, m in me.moves do
		if hasEvent(m, "KeyPressed") then
			local r = { taps = {}, holds = {} }
			if findKeys(m.conditions, r) and (#r.taps > 0 or #r.holds > 0) then
				self.recipes[m] = r
				table.insert(self.keyMoves, m)
				for _, n in { m.name, m.tacticEquivalent } do
					if n and n ~= "" then
						local l = self.byTactic[n]
						if not l then l = {}; self.byTactic[n] = l end
						-- weapon-specific equivalents (KatanaStepBack) first: they win on Priority anyway
						if n == m.tacticEquivalent then table.insert(l, 1, m) else table.insert(l, m) end
					end
				end
			end
		end
	end
	self.weightOf = {}
	self.waitOf = {}
	for _, m in me.moves do
		self.weightOf[m] = entryFor(self.tactic.weights, m)
		self.waitOf[m] = entryFor(self.tactic.expectedWait, m)
	end
end

function AI.setupTables(self: any)
	local en = self.me.enemy
	self.enemy = en
	self.myWeapon = tableWeapon(self.me)
	self.enemyWeapon = en and tableWeapon(en) or ""
	local ok, p = pcall(pairTables, self.myWeapon, self.enemyWeapon)
	if not ok then
		warn("SF2.AI: tactic tables failed to load: " .. tostring(p))
		p = { attack = {}, movement = {}, dodge = {}, any = false }
	end
	self.tables = p
end

---------------------------------------------------------------- keys

function AI.releaseAll(self: any)
	for k in self.pressed do
		self.fight:release(self.index, k)
	end
	table.clear(self.pressed)
end

function AI.press(self: any, k: string, how: string)
	local f = self.fight
	if self.pressed[k] then f:release(self.index, k) end
	f:press(self.index, k)
	self.pressed[k] = how
end

-- Press a move's keys (holds first, then taps); the engine starts it on this tick's KeyPressed
function AI.perform(self: any, m: any, kind: string)
	self.waitPassed = false
	local r = self.recipes[m]
	local facing = self.me:facingFor(m)
	self:releaseAll()
	for _, k in r.holds do self:press(screenKey(k, facing), "hold") end
	for _, k in r.taps do self:press(screenKey(k, facing), "tap") end
	self.pending = { move = m, t = 0, from = self.me.move, kind = kind }
	self.stats.decisions += 1
	self.stats.byKind[kind] = (self.stats.byKind[kind] or 0) + 1
	if self.debug then print(("[AI %d] %s %s"):format(self.index, kind, m.name)) end
end

-- Would the engine start m if its keys were pressed now? (its <Conditions> with a key buffer holding exactly
-- the recipe, plus the move's AI-only <Tactics> conditions) -- ModelAi.POOHKPDCICO / IIIHAJGCPGP
function AI.available(self: any, m: any): boolean
	local me = self.me
	local r = self.recipes[m]
	if not r then return false end
	local facing = me:facingFor(m)
	local kb = KeyBuffer.new()
	for _, k in r.holds do kb:press(screenKey(k, facing)) end
	for _, k in r.taps do
		local sk = screenKey(k, facing)
		kb:release(sk); kb:press(sk)
	end
	local saved = me.keys
	me.keys = kb
	local ok, res = pcall(me.conditionsPass, me, m)
	me.keys = saved
	if not ok or not res then return false end
	if m.tactics then
		for _, c in m.tactics do
			if not me:check(c, m) then return false end
		end
	end
	if m.labelSet.RangedPlayer and (me.rangedLeft or 0) <= 0 then return false end
	return true
end

---------------------------------------------------------------- perception

-- Memory (ModelStatistics, the "true" table of my model, keyed by the enemy's animation):
--   counter = how many times the enemy played it into its Uninterrupt interval (Model.KBPBCOHJFHH ->
--             ModelStatistics.FKCBGOIECHC, +1 per use), damage = damage it did to me, hit = times it hit me
--             (KBBHCAAFDCO, committed by ADMAIMDJBLI). Accumulated over the fight (RoundFactor 1 keeps it).
function AI.remember(self: any, m: any, hit: number, damage: number, counter: number)
	if not m then return end
	local l = self.memory[m.name]
	if not l then l = { labels = m.labelSet, name = m.name, counter = 0, damage = 0, hit = 0 }; self.memory[m.name] = l end
	l.counter += counter; l.damage += damage; l.hit += hit
end

function AI.statsFor(self: any, name: string): (number, number, number)
	local c, d, h = 0, 0, 0
	for n, l in self.memory do
		if n == name or l.labels[name] then c += l.counter; d += l.damage; h += l.hit end
	end
	return c, d, h
end

function AI.observe(self: any)
	local me, en = self.me, self.enemy
	-- strikes taken / given
	local h = me.lastHit
	if h and h ~= self.seenHit[1] then
		self.seenHit[1] = h
		local att = h.attacker
		if att and att:root() == en then
			self:remember(att.move, 1, h.damage or 0, 0)
		end
	end
	-- a new enemy animation: new rolls, response delay
	local frame = aiFrame(en)
	-- the factor context's frame count (ModelAnimation.FANDONIBLKC) keeps counting while the same move loops
	-- (an idle stance replaying itself); only a different move resets it
	if en.move ~= self.enemyMove then self.enemySince = self.fight.ticks end
	if en.move ~= self.enemyMove or frame < self.enemyFrame then
		self.enemyMove = en.move
		self.inst += 1
		self:reroll()
		local ctx = self:context()
		local delay = minMax(self.rng, self.tactic.responseDelay, ctx)
		if self.random and en.move then
			-- <Random><Delays>: the random AI waits after seeing these enemy animations
			for lab, d in self.delays do
				if en.move.name == lab or en.move.labelSet[lab] then
					delay = math.max(delay, d.min + self.rng:NextNumber() * (d.max - d.min))
				end
			end
		end
		self.react = math.floor(delay + 0.5)
		self.frameError = math.floor(minMax(self.rng, self.tactic.frameError, ctx) + 0.5)
		self.distError = minMax(self.rng, self.tactic.distanceError, ctx)
		self.enemyDelay = minMax(self.rng, self.tactic.enemyResponseDelay, ctx)
	end
	self.enemyFrame = frame
	if me.move ~= self.myMove then
		self.myMove = me.move
		if me.move and me.move.type == "ATTACK" then self.lastAttack = self.fight.ticks end
	end
	-- the enemy committed to this animation (its Uninterrupt interval began): one more use of it
	if en.move and self.countedInst ~= self.inst and en:inInterval("Uninterrupt") then
		self.countedInst = self.inst
		self:remember(en.move, 0, 0, 1)
	end
end

function AI.reroll(self: any)
	local r = self.rng
	local rolls = self.rolls
	rolls.safe, rolls.table, rolls.cautious = r:NextNumber(), r:NextNumber(), r:NextNumber()
	rolls.missiles, rolls.magic = r:NextNumber(), r:NextNumber()
	rolls.defense = nil
	rolls.quick, rolls.evade = {}, {}
	for k in self.tactic.quickAttacks or {} do rolls.quick[k] = r:NextNumber() end
	for k in self.tactic.evades or {} do rolls.evade[k] = r:NextNumber() end
end

function AI.context(self: any, child: any?): any
	local me, en = self.me, self.enemy
	local c, d, h = 0, 0, 0
	if en.move then c, d, h = self:statsFor(en.move.name) end
	local ctx = self.ctx
	if not ctx then
		ctx = { cond = {} }
		ctx.stats = function(name) return self:statsFor(name) end
		self.ctx = ctx
	end
	ctx.counter, ctx.damage, ctx.hit = c, d, h
	ctx.health, ctx.enemyHealth = me.health or 1, en.health or 1
	ctx.frames = math.max(aiFrame(en), self.fight.ticks - (self.enemySince or self.fight.ticks))
	ctx.childFrames = child and aiFrame(child) or 0
	ctx.distance = math.abs(pivotX(me) - pivotX(en))
	ctx.magic = (me.bullets and me.bullets.MagicBullet) or 0
	local rl = me.rangedLeft or 0
	ctx.missiles = rl == math.huge and 99 or rl
	return ctx
end

---------------------------------------------------------------- tables

-- Table lookup (ModelAi.ANLJPOPMFKC / PEFJCLPHJFA): for each table of the enemy animation, the row of the
-- enemy frame, my node's distance to the enemy's animation origin in the enemy's facing -> (response, value)
function AI.lookup(self: any, parts: any, frame: number, src: any, emit: (string, number) -> ())
	if not parts then return end
	local me = self.me
	local ox, facing = alignX(src), src.facing or 1
	for _, part in parts do
		local names = part.a
		for _, tab in part.t do
			local row = tab[3][frame - tab[2] + 1]
			if row and row ~= 0 then
				local slot = me.slots[tab[1]] or me.slots.NPivot
				local d = ((me.fighter.px[slot] or 0) - ox) * facing + (self.distError or 0)
				local i, n = 1, #row
				while i <= n do
					local k = row[i + 1]
					if k >= 2 and d >= row[i + 2] and d < row[i + 1 + k] then
						for j = 1, k - 1 do
							if d < row[i + 2 + j] then
								local v = row[i + 1 + k + j]
								if v > 0 then emit(names[row[i] + 1], v) end
								break
							end
						end
					end
					i += 2 + k + math.max(k - 1, 0)
				end
			end
		end
	end
end

-- Table rows are every `step` ticks (TablesReduction Step 5): round the frame up, as AHJODDBEOGP does
function AI.tableFrame(self: any, frame: number): number
	local step = self.s.step or 5
	return math.ceil(frame / step) * step
end

-- Candidates from a table kind for the enemy (or a missile) animation
function AI.fromTables(self: any, kind: string, src: any, filter: ((string, number) -> boolean)?): { any }
	local out = {}
	local m = src.move
	if not m then return out end
	local list = self.tables[kind][m.name] or self.tables[kind][tacticName(m)]
	if not list then return out end
	local frame = self:tableFrame(aiFrame(src) + (self.frameError or 0))
	local seen = {}
	self:lookup(list, frame, src, function(name: string, v: number)
		if seen[name] or (filter and not filter(name, v)) then return end
		seen[name] = true
		if name == "StanceIdle" then
			table.insert(out, { idle = true, value = v, name = name })
			return
		end
		for _, mv in self.byTactic[name] or {} do
			table.insert(out, { move = mv, value = v, name = name })
			break
		end
	end)
	return out
end

function AI.hasTablesFor(self: any, m: any): boolean
	if not m then return false end
	local t = self.tables
	local n, e = m.name, tacticName(m)
	return (t.attack[n] or t.attack[e] or t.movement[n] or t.movement[e] or t.dodge[n] or t.dodge[e]) ~= nil
end

---------------------------------------------------------------- TacticConditions (ConditionalDecisions)

function AI.who(self: any, p: string): any
	if p == "Me" then return self.me end
	if p == "Enemy" then return self.enemy end
	if p == "EnemyChild" then return self.enemy.children and self.enemy.children[1] end
	if p == "Child" then return self.me.children and self.me.children[1] end
	return nil
end

local function cmp(op: string, a: number, b: number): boolean
	if op == "Less" then return a < b end
	if op == "LessEqual" then return a <= b end
	if op == "Greater" then return a > b end
	if op == "GreaterEqual" then return a >= b end
	return a == b
end

function AI.tcond(self: any, c: any): boolean
	local v = false
	local t = c.t
	if t == "Operator" then
		if c.op == "and" then
			v = true
			for _, k in c.kids do if not self:tcond(k) then v = false; break end end
		else
			for _, k in c.kids do if self:tcond(k) then v = true; break end end
		end
	elseif t == "Animation" then
		local w = self:who(c.player)
		local m = w and w.move
		if m then
			for _, n in c.names do
				if m.name == n or m.labelSet[n] then v = true; break end
			end
		end
	elseif t == "AnimationFrame" then
		local w = self:who(c.player)
		v = w ~= nil and w.move ~= nil and cmp(c.op, aiFrame(w), c.v)
	elseif t == "Distance" then
		local a, b = self:who(c.from), self:who(c.to)
		v = a ~= nil and b ~= nil and cmp(c.op, math.abs(pivotX(a) - pivotX(b)), c.v)
	elseif t == "ModelItem" then
		local w = self:who(c.player)
		for _, it in (w and w.loadout) or {} do
			if (c.slot == "" or it.Type == c.slot) and (c.sub == "" or it.SubType == c.sub) and (c.name == "" or it.Name == c.name) then
				v = true; break
			end
		end
	elseif t == "Random" then
		v = self.rng:NextNumber() * 100 < (c.p or 0)
	end
	if c.nt then return not v end
	return v
end

-- ModelAi.MICDGNKHCOB: the reactions to the enemy's animation whose conditions pass; only the best Priority
function AI.conditionalCandidates(self: any, out: { any })
	local em = self.enemy.move
	if not em then return end
	local cond = self.ctx.cond
	table.clear(cond)
	local best, bestP = nil, -math.huge
	for anim, reacts in self.conditional do
		if em.name == anim or em.labelSet[anim] then
			for _, r in reacts do
				if r.priority > bestP then
					local ok = true
					for _, c in r.conds do
						if not self:tcond(c) then ok = false; break end
					end
					if ok then best, bestP = r, r.priority end
				end
			end
		end
	end
	if best then
		for _, n in best.names do
			cond[n] = true
			for _, mv in self.byTactic[n] or {} do
				table.insert(out, { move = mv, value = 0, name = n, conditional = true })
				break
			end
		end
	end
end

---------------------------------------------------------------- choosing

-- Tactic.BKAIGLDAJPC: weighted random pick by AnimationWeights; a candidate that cannot start now is dropped
function AI.choose(self: any, cands: { any }, kind: string): boolean
	local ctx = self.ctx
	local ws, total = {}, 0
	for i, c in cands do
		local e = c.move and self.weightOf[c.move] or entryFor(self.tactic.weights, nil)
		local w = e and evalF(e.f, ctx, c.name) or 100
		if c.idle then w = 100 end
		w = math.max(w, 0)
		ws[i] = w
		total += w
	end
	for _ = 1, #cands do
		if total <= 0 then return false end
		local r = self.rng:NextNumber() * total
		local pick = #cands
		for i, w in ws do
			r -= w
			if r < 0 and w > 0 then pick = i; break end
		end
		local c = cands[pick]
		if c.idle then
			-- StanceIdle: stand (the idle stance blocks) until the value runs out
			self:releaseAll()
			self.wait = math.clamp(c.value or 10, 3, 30)
			self.waitPassed = false
			self.stats.byKind[kind .. ":idle"] = (self.stats.byKind[kind .. ":idle"] or 0) + 1
			return true
		end
		if self:available(c.move) then
			self:perform(c.move, kind)
			return true
		end
		total -= ws[pick]
		ws[pick] = 0
	end
	return false
end

-- Every key move that could start now (the random path)
function AI.randomCandidates(self: any, labels: { [string]: boolean }?): { any }
	local out = {}
	for _, m in self.keyMoves do
		if not labels or (function()
				for l in labels do if m.name == l or m.labelSet[l] then return true end end
				return false
			end)() then
			table.insert(out, { move = m, value = 0, name = m.name })
		end
	end
	return out
end

---------------------------------------------------------------- deciding

function AI.canDecide(self: any): boolean
	local me = self.me
	if me.fighter.ragdoll then return false end
	local m = me.move
	if not m then return true end
	for n in self.noDecisionMoves do
		if m.labelSet[n] or m.name == n then return false end
	end
	for _, iv in m.intervals do
		if (self.noDecisionIv[iv.name] or self.noDecisionIv[iv.type]) and me.c >= iv.start and me.c <= iv.stop and not me.ended then
			return false
		end
	end
	return true
end

local function roll(self: any, f: any, r: number): boolean
	return f ~= nil and r < evalF(f, self.ctx)
end

-- Engagement floor: NOT from the decompile. In the game the TableAttack/UseSafeAttack chances start at Base 0 and
-- grow with the enemy's frames and with ModelStatistics counters that a human opponent's constant attacking fills
-- up; two table AIs facing each other barely raise them. So the port lets a table attack/safe-attack candidate
-- through with probability rising from 0 to `max` between `delay` and `delay + ramp` ticks after this fighter's
-- last attack. AI.new(..., {engage = false}) turns it off (pure tactic data).
AI.ENGAGE = { delay = 20, ramp = 60, max = 1 }

function AI.engageFloor(self: any): number
	local e = self.engage
	if not e then return 0 end
	local since = self.fight.ticks - (self.lastAttack or 0)
	return math.clamp((since - e.delay) / e.ramp, 0, 1) * e.max
end

-- counters of where decisions end (debug / tests)
function AI.flow(self: any, k: string)
	local f = self.stats.flow
	f[k] = (f[k] or 0) + 1
end

function AI.decide(self: any)
	local me, en, t = self.me, self.enemy, self.tactic
	local ctx = self:context()
	-- BLFKPBELDKF / HBMGBBBLLJC: quick-attack and evade rolls are new on every decision call;
	-- GEAOFEACDMA: while the enemy plays a RandomizingEnemyAnimation (Stance) the other rolls and the
	-- distance/frame errors are new on every call too (otherwise once per enemy animation, see observe)
	local r = self.rng
	for k in self.rolls.quick do self.rolls.quick[k] = r:NextNumber() end
	for k in self.rolls.evade do self.rolls.evade[k] = r:NextNumber() end
	if en.move then
		for _, l in self.s.randomizingEnemy or {} do
			if en.move.labelSet[l] or en.move.name == l then
				local def = self.rolls.defense
				self:reroll()
				self.rolls.defense = def
				self.frameError = math.floor(minMax(r, t.frameError, ctx) + 0.5)
				self.distError = minMax(r, t.distanceError, ctx)
				break
			end
		end
	end
	local cands = {}
	self:conditionalCandidates(cands)
	local tabular = not self.random and self.tables.any

	-- 1. missiles and magic in the air (ModelAi.CAHGELFIKDM / ECPDPNNJNKJ)
	if tabular then
		for _, c in en.children or {} do
			local m = c.move
			if m and not c.removed then
				local magic, missile = false, false
				for l in self.magicLabels do if m.labelSet[l] then magic = true end end
				for l in self.missileLabels do if m.labelSet[l] then missile = true end end
				if magic or missile then
					local cctx = self:context(c)
					local f = magic and t.dodgeMagic or t.dodgeMissiles
					local r = magic and self.rolls.magic or self.rolls.missiles
					if f and r < evalF(f, cctx) then
						local list = self:fromTables("dodge", c)
						if #list > 0 and self:choose(list, "dodgeMissile") then
							self.stats.dodges += 1
							return
						end
					end
					ctx = self:context()
				end
			end
		end
	end

	-- 2. the enemy is committed to his move
	if tabular and en.move and en:inInterval("Uninterrupt") and self:hasTablesFor(en.move) then
		local mode = self.rolls.defense
		if mode == "done" then self:flow("defended") return end -- one defensive answer per enemy animation
		if not mode then
			local r = self.rng:NextNumber()
			local c, d, b = evalF(t.counter, ctx), evalF(t.dodge, ctx), evalF(t.block, ctx)
			mode = (r < c and "counter") or (r < c + d and "dodge") or (r < c + d + b and "block") or "none"
			self.rolls.defense = mode
		end
		if mode == "block" then
			if en.move.type == "ATTACK" then
				self.rolls.defense = "done"
				self:startBlock()
				return
			end
		elseif mode == "counter" or mode == "dodge" then
			if mode == "counter" then
				local list = self:fromTables("movement", en)
				for _, c in cands do table.insert(list, c) end
				if #list > 0 and self:choose(list, "counter") then
					self.rolls.defense = "done"
					return
				end
			end
			local list = self:fromTables("dodge", en)
			if #list > 0 and self:choose(list, "dodge") then
				self.rolls.defense = "done"
				self.stats.dodges += 1
				return
			end
		end
		if #cands > 0 and self:choose(cands, "conditional") then
			self.rolls.defense = "done"
			return
		end
		self.wait = 2 -- SetWaitRandAttack
		self:flow("defense:" .. mode)
		return
	end

	-- 3. quick attacks and throw evades (rolled once per enemy animation)
	if tabular then
		local quick = {}
		for k, qa in t.quickAttacks or {} do
			if self.rolls.quick[k] and self.rolls.quick[k] < evalF(qa.f, ctx) then
				for _, m in self.keyMoves do
					if m.name == qa.name or m.labelSet[qa.name] then
						table.insert(quick, { move = m, value = 0, name = m.name })
					end
				end
			end
		end
		if #quick > 0 and self:choose(quick, "quick") then return end
	end
	-- Evades (MJAHINLIPIK): the roll passed and the enemy could start one of those moves on me now
	-- (approximation of ModelAi.POOHKPDCICO on the enemy: throws need <= 100 between pivots and a free enemy)
	-- (ModelAi.HMHLACOIDJI asks the ENEMY's ModelAi whether it could start the move: a human enemy has none,
	-- so evades only happen against another AI, as in the original)
	local evade = false
	local eai = self.fight._ai and self.fight._ai[3 - self.index]
	if tabular and eai and en.move then
		for k, ev in t.evades or {} do
			if self.rolls.evade[k] and self.rolls.evade[k] < evalF(ev.f, ctx) then
				for _, m in eai.keyMoves do
					if (m.name == ev.name or m.labelSet[ev.name]) and eai:available(m) then
						evade = true
						break
					end
				end
			end
		end
	end

	-- ExpectedWait (Tactic.DAMEJECEIOA): act with probability 1 / wait (an evade is never delayed)
	local we = self.waitOf[me.move] or entryFor(t.expectedWait, nil)
	-- JNNIDCGMNPD: once the wait has passed it stays passed until a decision is made
	if we and not evade and not self.waitPassed then
		local w = math.max(evalF(we.f, ctx), 1)
		if self.rng:NextNumber() <= 1 - 1 / w then self:flow("expectedWait") return end
		self.waitPassed = true
	end

	if tabular and self:hasTablesFor(en.move) then
		-- engagement floor (port bias, see AI.ENGAGE): the longer since my last attack, the surer a table hit is taken
		local floor = self:engageFloor()
		if roll(self, t.safeAttack, self.rolls.safe) or self.rolls.safe < floor then
			for _, c in self:fromTables("movement", en) do table.insert(cands, c) end
		end
		if roll(self, t.tableAttack, self.rolls.table) or self.rolls.table < floor then
			local limit = aiFrame(en) + (self.enemyDelay or 30)
			for _, c in self:fromTables("attack", en, function(_, v) return v <= limit end) do table.insert(cands, c) end
		end
		if #cands > 0 and self:choose(cands, "table") then return end
		if evade then
			local list = self:randomCandidates(self.evadeThrow)
			if #list > 0 and self:choose(list, "evade") then return end
		end
		if roll(self, t.cautious, self.rolls.cautious) then
			local list = self:randomCandidates(self.cautiousLabels)
			if #list > 0 and self:choose(list, "cautious") then return end
		end
		self:flow("nothing")
		return -- SetWaitRandUnint: nothing this time
	end

	-- random path (Type="Random", or no tables for this enemy animation)
	local list = self:randomCandidates(nil)
	for _, c in cands do table.insert(list, c) end
	self:choose(list, "random")
end

-- Block: hold Back (StepBack is a Block interval, the idle stance too) while the enemy's attack lasts
function AI.startBlock(self: any)
	self:releaseAll()
	local me, en = self.me, self.enemy
	local away = (pivotX(en) > pivotX(me)) and "Left" or "Right"
	self:press(away, "hold")
	self.block = 45
	self.stats.blocks += 1
	self.stats.byKind.block = (self.stats.byKind.block or 0) + 1
end

---------------------------------------------------------------- tick

function AI.tick(self: any)
	local fight, me = self.fight, self.me
	if not self.tables then self:setupTables() end
	local en = self.enemy
	if fight.stage ~= "Fight" or fight.over or not en or (me.health or 0) <= 0 then
		if next(self.pressed) then self:releaseAll() end
		self.pending, self.wait, self.block = nil, 0, 0
		self.enemyMove = nil
		self.lastAttack = fight.ticks
		return
	end
	self:observe()
	-- keys of the last decision: taps are let go the tick after, holds once the move has started
	for k, how in self.pressed do
		if how == "tap" then
			fight:release(self.index, k)
			self.pressed[k] = nil
		end
	end
	local p = self.pending
	if p then
		p.t += 1
		if me.move ~= p.from or p.t > 4 then
			if me.move == p.move then
				self.stats.started += 1
				if p.move.type == "ATTACK" then self.stats.attacks += 1 end
			end
			self.pending = nil
			self:releaseAll()
		end
		return
	end
	-- interrupted by a hit / throw / fall (UnexpectedMoves): drop plans
	local m = me.move
	local hurt = false
	if m then
		for n in self.unexpected do if m.labelSet[n] then hurt = true end end
	end
	if hurt and self.wait > 0 then self.wait = 0 end
	if m and self.block > 0 then
		self.block -= 1
		if hurt or self.block <= 0 or not (en.move and (en:inInterval("Uninterrupt") or en.move.type == "ATTACK")) then
			self.block = 0
			self:releaseAll()
		end
		return
	end
	if self.wait > 0 then
		self.wait -= 1
		return
	end
	if self.react > 0 then
		self.react -= 1
		return
	end
	if not self:canDecide() then self:flow("busy") return end
	self:flow("decide")
	self:decide()
end

return AI
