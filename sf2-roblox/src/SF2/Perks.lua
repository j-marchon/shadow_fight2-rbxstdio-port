--!strict
-- Perks (perks.xml; PerkEvent / PerkCondition / PerkAction): each fighter's perks are trigger lists run on
-- fight events. A perk inherits its template's triggers (Template=, e.g. EndStanceClear) and has variables
-- from <Set> (and the player's perk upgrade level, CharacterProgress <Perks><UpgradeLevel><Set>).
-- Mods are named timed states on a fighter (e.mods[name] = {frames, attrs, vars, icon}); MoveEngine's
-- ModExists conditions read the same table. A mod with attributes (ModAttributes) adds them to the fighter's
-- attributes while it lasts.
--  * events: RoundStageStart, HitPreCrit / HitPostCrit / PostHit (Player = the side being hit; filters Block,
--    Critical, Shock, Defense, Animation = the attack kind Weapon / Unarmed or a move label of the attacker),
--    EveryFrame Step, ModExpires, AnimationStart / AnimationEnd, MagicCharged
--  * conditions: ModExists, Random Chance, Equal / Greater / GreaterEqual / Less / LessEqual with value
--    expressions, CurrentAnimation, CurrentInterval, RoundStage, Health Min/Max, Round Number, Bullets,
--    PerkStart, Operator And/Or
--  * actions: ModFlag, ModIcon, ModAttributes, SetModFrames, ClearMods, SetModVariable, SetRangeVariable,
--    SetHit (Block, Critical, Shock, Damage), ChangeImpulse, Provoke, AddMagicCharge, AddBullets, SetCooldown
--  * values: numbers, _Var (perk variable), ?Variable[name], ?Hit[].Damage / .BaseDamage,
--    ?PlayerParameter[Me|Enemy].Health, ?Root[expr], + - * /
-- Not ported (visual or special-arena): ApplyModEffect, PerkArea, SlowModel, SetDarkness, ChangeModelColor,
-- MoveModel, ShowDebugLine, SetMovesVariable, SetTactic, StealMagicMod, TurnOffCollision, ModInvisibility.

local Xml = require(script.Parent.Xml)

local Perks = {}
Perks.__index = Perks

local defs: { [string]: any }? = nil
local function perkDefs(): { [string]: any }
	if not defs then
		defs = {}
		for _, p in Xml.all(Xml.doc("perks"), "Perk") do
			(defs :: any)[Xml.attr(p, "Name") or ""] = p
		end
	end
	return defs :: any
end
Perks.def = function(name: string): any return perkDefs()[name] end

local upgradeSets: { [string]: { any } }? = nil
local function upgradeSet(name: string, level: number): any
	if not upgradeSets then
		upgradeSets = {}
		for _, p in Xml.all(Xml.first(Xml.doc("CharacterProgress"), "Perks"), "Perk") do
			local list = {}
			for _, u in Xml.all(p, "UpgradeLevel") do
				list[Xml.num(u, "Value", 1) :: number] = Xml.first(u, "Set")
			end
			(upgradeSets :: any)[Xml.attr(p, "Name") or ""] = list
		end
	end
	local l = (upgradeSets :: any)[name]
	return l and l[level]
end

-- One perk on one fighter: triggers (own + template chain), variables
local function instance(name: string, level: number?): any
	local p = perkDefs()[name]
	if not p then return nil end
	local inst = { name = name, triggers = {}, vars = {}, named = {} }
	local chain, seen = {}, {}
	local cur = p
	while cur and not seen[cur] do
		seen[cur] = true
		table.insert(chain, 1, cur)
		local t = Xml.attr(cur, "Template")
		cur = t and perkDefs()[t]
	end
	for _, d in chain do
		for _, s in Xml.all(d, "Set") do
			for k, v in s.a or {} do inst.vars[k] = v end
		end
		for _, t in Xml.all(d, "Trigger") do
			table.insert(inst.triggers, t)
			local n = Xml.attr(t, "Name")
			if n then inst.named[n] = t end
		end
	end
	local up = upgradeSet(name, level or 1)
	if up then
		for k, v in up.a or {} do inst.vars[k] = v end
	end
	return inst
end

-- Perks of a fight: fighters' perk lists -> instances; attach as fight.perks
function Perks.new(fight: any)
	local self = setmetatable({ fight = fight, lists = {}, hit = nil, frame = 0 }, Perks)
	for i, e in fight.engines do
		local list = {}
		for name, level in e.perks or {} do
			local inst = instance(name, type(level) == "number" and level or 1)
			if inst then
				inst.owner = e
				table.insert(list, inst)
			end
		end
		self.lists[i] = list
		e.baseAttributes = table.clone(e.attributes)
	end
	return self
end

---------------------------------------------------------------- values

local function enemyOf(e: any): any
	return e.enemy
end

local function evalExpr(self: any, inst: any, s: string?): any
	if s == nil then return nil end
	s = string.gsub(s, "^%s+", "")
	s = string.gsub(s :: string, "%s+$", "")
	if s == "" then return nil end
	-- ?Root[ expr ] and plain arithmetic: split on the lowest-precedence operator outside brackets
	local inner = string.match(s, "^%?Root%[(.*)%]$")
	if inner then return evalExpr(self, inst, inner) end
	local depth, pos, op = 0, nil, nil
	for i = #s, 1, -1 do
		local ch = string.sub(s, i, i)
		if ch == "]" then depth += 1 elseif ch == "[" then depth -= 1
		elseif depth == 0 and i > 1 and (ch == "+" or ch == "-") then pos, op = i, ch break end
	end
	if not pos then
		depth = 0
		for i = #s, 1, -1 do
			local ch = string.sub(s, i, i)
			if ch == "]" then depth += 1 elseif ch == "[" then depth -= 1
			elseif depth == 0 and i > 1 and (ch == "*" or ch == "/") then pos, op = i, ch break end
		end
	end
	if pos then
		local a = tonumber(evalExpr(self, inst, string.sub(s, 1, pos - 1))) or 0
		local b = tonumber(evalExpr(self, inst, string.sub(s, pos + 1))) or 0
		if op == "+" then return a + b elseif op == "-" then return a - b elseif op == "*" then return a * b end
		return b ~= 0 and a / b or 0
	end
	local n = tonumber(s)
	if n then return n end
	if string.sub(s, 1, 1) == "_" then
		local v = inst.vars[string.sub(s, 2)]
		if type(v) == "string" and string.sub(v, 1, 1) == "?" then return evalExpr(self, inst, v) end
		return tonumber(v) or v
	end
	local kind, arg, field = string.match(s, "^%?(%w+)%[([^%]]*)%]%.?(%w*)")
	if kind == "Variable" then
		return tonumber(inst.owner.perkVars and inst.owner.perkVars[arg]) or 0
	elseif kind == "Hit" then
		local h = self.hit
		if not h then return 0 end
		if field == "BaseDamage" then return h.baseDamage or h.damage or 0 end
		return h.damage or 0
	elseif kind == "PlayerParameter" then
		local who = (string.find(arg, "Enemy") and enemyOf(inst.owner)) or inst.owner
		if field == "Health" then return who and who.health or 0 end
		if field == "MagicCharge" then return who and who.magicCharge or 0 end
	end
	return s
end

local function num(self: any, inst: any, s: string?, default: number?): number
	return tonumber(evalExpr(self, inst, s)) or default or 0
end

---------------------------------------------------------------- mods

-- Recompute a fighter's attributes: base + every mod's attributes (in place: children share the table)
local function refresh(e: any)
	local base = e.baseAttributes
	if not base then return end
	local attrs = e.attributes
	for k in attrs do if base[k] == nil then attrs[k] = nil end end
	for k, v in base do attrs[k] = v end
	for _, m in e.mods do
		if type(m) == "table" and m.attrs then
			for k, v in m.attrs do attrs[k] = (attrs[k] or 0) + v end
		end
	end
end

local function setMod(e: any, name: string, frames: number?, extra: any?)
	local m = e.mods[name]
	if type(m) ~= "table" then m = {}; e.mods[name] = m end
	m.frames = frames
	if extra then
		for k, v in extra do m[k] = v end
	end
	if m.attrs then refresh(e) end
end

local function clearMod(e: any, name: string?)
	if name then
		local had = e.mods[name]
		e.mods[name] = nil
		if type(had) == "table" and had.attrs then refresh(e) end
	else
		table.clear(e.mods)
		refresh(e)
	end
end

---------------------------------------------------------------- conditions

local ATTR_SKIP = { Frames = true, Player = true, Name = true, Namespace = true }

local function compare(tag: string, a: any, b: any): boolean
	local na, nb = tonumber(a), tonumber(b)
	if tag == "Equal" then
		if na and nb then return math.abs(na - nb) < 1e-9 end
		return tostring(a) == tostring(b)
	end
	if not na or not nb then return false end
	if tag == "Greater" then return na > nb end
	if tag == "GreaterEqual" then return na >= nb end
	if tag == "Less" then return na < nb end
	return na <= nb
end

local function who(inst: any, el: any): any
	local p = Xml.attr(el, "Player")
	if p == "Enemy" then return enemyOf(inst.owner) end
	return inst.owner
end

function Perks.check(self: any, inst: any, el: any): boolean
	local nt = Xml.attr(el, "Not") == "1"
	local t = el.t
	local v: boolean
	local e = who(inst, el)
	if t == "Operator" then
		local all = string.lower(Xml.attr(el, "Type") or "and") == "and"
		v = all
		for _, k in el.c or {} do
			if self:check(inst, k) ~= all then v = not all; break end
		end
	elseif t == "ModExists" then
		v = e ~= nil and e.mods[Xml.attr(el, "Name") or ""] ~= nil
	elseif t == "Random" then
		v = math.random() < num(self, inst, Xml.attr(el, "Chance"), 1)
	elseif t == "Equal" or t == "Greater" or t == "GreaterEqual" or t == "Less" or t == "LessEqual" then
		v = compare(t, evalExpr(self, inst, Xml.attr(el, "Value1")), evalExpr(self, inst, Xml.attr(el, "Value2")))
	elseif t == "CurrentAnimation" then
		v = e ~= nil and e:isAnimation(Xml.attr(el, "Name") or "")
	elseif t == "CurrentInterval" then
		v = e ~= nil and e:inInterval(Xml.attr(el, "Name") or "")
	elseif t == "RoundStage" then
		v = self.fight.stage == Xml.attr(el, "Name")
	elseif t == "Health" then
		local h = e and e.health or 0
		v = h >= num(self, inst, Xml.attr(el, "Min"), -1e9) and h <= num(self, inst, Xml.attr(el, "Max"), 1e9)
	elseif t == "Round" then
		v = self.fight.round == num(self, inst, Xml.attr(el, "Number"), 1)
	elseif t == "Bullets" then
		v = e ~= nil and (e.bullets[Xml.attr(el, "Type") or "MagicBullet"] or 0) >= num(self, inst, Xml.attr(el, "Min"), 1)
	elseif t == "PerkStart" or t == "RoundStageStart" then
		v = true
	else
		v = false
	end
	return v ~= nt
end

---------------------------------------------------------------- actions

function Perks.act(self: any, inst: any, a: any)
	local t = a.t
	local e = who(inst, a)
	if not e then return end
	local name = Xml.attr(a, "Name")
	local frames = Xml.attr(a, "Frames") and num(self, inst, Xml.attr(a, "Frames")) or nil
	if t == "ModFlag" then
		setMod(e, name or "Flag", frames)
	elseif t == "ModIcon" then
		setMod(e, name or "Icon", frames, { icon = Xml.attr(a, "Image") })
		self.fight:hook("perkIcon", e, Xml.attr(a, "Image"), frames)
	elseif t == "ModAttributes" then
		local attrs = {}
		for k, v in a.a or {} do
			if not ATTR_SKIP[k] then attrs[k] = num(self, inst, v) end
		end
		setMod(e, name or ("attr" .. tostring(attrs)), frames, { attrs = attrs })
	elseif t == "SetModFrames" then
		local m = e.mods[name or ""]
		if type(m) == "table" then m.frames = frames end
	elseif t == "ClearMods" then
		clearMod(e, name)
	elseif t == "SetModVariable" or t == "SetRangeVariable" then
		inst.owner.perkVars = inst.owner.perkVars or {}
		local v = num(self, inst, Xml.attr(a, "Value"))
		local lo, hi = Xml.attr(a, "MinValue"), Xml.attr(a, "MaxValue")
		if lo then v = math.max(v, num(self, inst, lo)) end
		if hi then v = math.min(v, num(self, inst, hi)) end
		inst.owner.perkVars[name or ""] = v
	elseif t == "SetHit" then
		local h = self.hit
		if h then
			if Xml.attr(a, "Block") then h.blocked = Xml.attr(a, "Block") == "1" end
			if Xml.attr(a, "Critical") then h.forceCritical = Xml.attr(a, "Critical") == "1" end
			if Xml.attr(a, "Shock") then h.forceShock = Xml.attr(a, "Shock") == "1" end
			if Xml.attr(a, "Damage") then h.setDamage = num(self, inst, Xml.attr(a, "Damage")) end
		end
	elseif t == "ChangeImpulse" then
		local h = self.hit
		if h then
			h.impulseMulX = num(self, inst, Xml.attr(a, "MultiplierX"), 1)
			h.impulseMulY = num(self, inst, Xml.attr(a, "MultiplierY"), 1)
		end
	elseif t == "Provoke" then
		local trig = inst.named[Xml.attr(a, "Trigger") or ""]
		if trig then self:runTrigger(inst, trig, true) end
	elseif t == "AddMagicCharge" then
		e.magicCharge = math.clamp((e.magicCharge or 0) + num(self, inst, Xml.attr(a, "Value")), 0, 1)
		if e.magicCharge >= 1 then e.bullets.MagicBullet = 1 end
	elseif t == "AddBullets" then
		local bt = Xml.attr(a, "BulletType") or "MagicBullet"
		e.bullets[bt] = math.max(0, (e.bullets[bt] or 0) + num(self, inst, Xml.attr(a, "Value")))
	elseif t == "SetCooldown" then
		local f = self.fight
		f.cooldowns = f.cooldowns or {}
		f.cooldowns[e.player] = f.cooldowns[e.player] or {}
		f.cooldowns[e.player][Xml.attr(a, "Button") or ""] = frames or 0
	end
end

function Perks.runTrigger(self: any, inst: any, trig: any, skipEvents: boolean?)
	for _, c in (Xml.first(trig, "Conditions") or {}).c or {} do
		if not self:check(inst, c) then return end
	end
	for _, a in (Xml.first(trig, "Actions") or {}).c or {} do
		self:act(inst, a)
	end
end

---------------------------------------------------------------- events

-- Does an event element match? filter(attrName, value) answers the event-specific filters
local function eventMatches(self: any, inst: any, ev: any, filter: (string, string) -> boolean): boolean
	for k, v in ev.a or {} do
		if k ~= "Not" then
			local val = v
			if string.sub(val, 1, 1) == "_" then val = tostring(evalExpr(self, inst, val)) end
			if not filter(k, val) then return false end
		end
	end
	return true
end

function Perks.fire(self: any, event: string, filter: ((inst: any, k: string, v: string) -> boolean)?)
	for _, list in self.lists do
		for _, inst in list do
			for _, trig in inst.triggers do
				local evs = Xml.first(trig, "Events")
				if evs then
					for _, ev in evs.c or {} do
						if ev.t == event and eventMatches(self, inst, ev, function(k, v)
								return filter == nil or filter(inst, k, v)
							end) then
							self:runTrigger(inst, trig)
							break
						end
					end
				end
			end
		end
	end
end

-- A hit at a stage (HitPreCrit / HitPostCrit / PostHit): Player is the side being hit
function Perks.onHit(self: any, stage: string, att: any, tgt: any, hit: any)
	self.hit = hit
	local attRoot, tgtRoot = att:root(), tgt
	self:fire(stage, function(inst, k, v)
		if k == "Player" then
			return (v == "Me" and inst.owner == tgtRoot) or (v == "Enemy" and inst.owner == attRoot)
		elseif k == "Block" then
			return (v == "1") == (hit.blocked == true)
		elseif k == "Critical" then
			return (v == "1") == (hit.critical == true)
		elseif k == "Shock" then
			return (v == "1") == (hit.shock == true)
		elseif k == "Defense" then
			return (v == "HeadDefense") == (hit.head == true)
		elseif k == "Animation" then
			local m = att.move
			if v == "Weapon" then return hit.weapon == true and not att.parent end
			if v == "Unarmed" then return hit.weapon ~= true and not att.parent end
			return m ~= nil and (m.name == v or m.labelSet[v] == true)
		end
		return true
	end)
	self.hit = nil
end

function Perks.stage(self: any, stage: string)
	self:fire("RoundStageStart", function(_, k, v) return k ~= "Name" or v == stage end)
end

-- Once per tick: mod timers (ModExpires), EveryFrame triggers
function Perks.tick(self: any)
	self.frame += 1
	for _, e in self.fight.engines do
		local expired = {}
		for name, m in e.mods do
			if type(m) == "table" and m.frames then
				m.frames -= 1
				if m.frames <= 0 then table.insert(expired, name) end
			end
		end
		for _, name in expired do
			clearMod(e, name)
			self:fire("ModExpires", function(inst, k, v)
				if k == "Name" then return v == name end
				if k == "Player" then return (v == "Enemy") == (inst.owner ~= e) end
				return true
			end)
		end
	end
	local frame = self.frame
	self:fire("EveryFrame", function(inst, k, v)
		if k == "Step" then
			local step = math.max(1, math.floor(tonumber(v) or 1))
			return frame % step == 0
		end
		return true
	end)
end

return Perks
