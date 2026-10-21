--!strict
-- Fight rules (stages.xml <Fight><Rules>, RulesInspector): applied to the two warriors before the fight
-- and to the fight while it runs. ApplyTo = Player / Bot / All (default All).
--  * before: EquipItem, Perk, SetTactic, RandomRule (one child, picked each fight), ComplexRule (all
--    children), ChangeFight Rounds, RulesWithConditions (skipped: account achievements)
--  * during (Fight.rules): Invulnerability, RemoveInterval, NoAnimation, NoButton, Ringout, LoseFall,
--    Regeneration, Lifesteal, DamageFactor (per move label), TimeOutWin, RechargeMagicEachRound,
--    NoBulletsReplenishment, InvertJoystick, NoHealthBar, Darkness (the FightScreen draws it)
-- Not ported (scoring and special arenas): Points, RandomArea, RatingEvaluation, WinStyle, WinCombo, WinShock,
-- HotGround, RequireItem, RandomAquiredItem.

local Xml = require(script.Parent.Xml)
local Items = require(script.Parent.Items)

local Rules = {}

local function sides(el: any): { number }
	local to = Xml.attr(el, "ApplyTo") or "All"
	if to == "Player" then return { 1 } end
	if to == "Bot" then return { 2 } end
	return { 1, 2 }
end

-- rules: list of rule elements (Stages.rules(...).raw); defs: {player def, enemy def} (changed in place)
-- Returns the in-fight rule set for Fight.new({rules = ...}) and overrides {rounds=...}
function Rules.prepare(rules: { any }, defs: { any }, eclipse: boolean?): (any, any)
	local fight = { [1] = {}, [2] = {}, overrides = {} }
	local function apply(el: any)
		local t = el.t
		local ecl = Xml.attr(el, "Eclipse")
		if ecl == "1" and not eclipse then return end
		if ecl == "0" and eclipse then return end
		if t == "EquipItem" then
			local name = Xml.attr(el, "Name")
			local it = Items.get(name)
			if it then
				local slot = Xml.attr(it, "Type") or "Weapon"
				for _, i in sides(el) do
					defs[i].items = table.clone(defs[i].items or {})
					defs[i].items[slot] = name
				end
			end
		elseif t == "Perk" then
			for _, i in sides(el) do
				defs[i].perks = defs[i].perks and table.clone(defs[i].perks) or {}
				table.insert(defs[i].perks, Xml.attr(el, "Name"))
			end
		elseif t == "SetTactic" then
			defs[2].tactic = Xml.attr(el, "Name") or defs[2].tactic
		elseif t == "RandomRule" then
			local kids = el.c or {}
			if #kids > 0 then apply(kids[math.random(1, #kids)]) end
		elseif t == "ComplexRule" then
			for _, k in el.c or {} do apply(k) end
		elseif t == "ChangeFight" then
			fight.overrides.rounds = Xml.num(el, "Rounds")
			fight.overrides.roundTime = Xml.num(el, "RoundTime")
		elseif t == "Invulnerability" then
			for _, i in sides(el) do fight[i].immortal = true end
		elseif t == "RemoveInterval" then
			for _, i in sides(el) do
				fight[i].removeIntervals = fight[i].removeIntervals or {}
				fight[i].removeIntervals[Xml.attr(el, "Type") or Xml.attr(el, "Name") or ""] = true
			end
		elseif t == "NoAnimation" then
			for _, i in sides(el) do
				fight[i].noAnimation = fight[i].noAnimation or {}
				fight[i].noAnimation[Xml.attr(el, "Name") or ""] = true
			end
		elseif t == "NoButton" then
			for _, i in sides(el) do
				fight[i].noButton = fight[i].noButton or {}
				fight[i].noButton[Xml.attr(el, "Name") or ""] = true
			end
		elseif t == "Ringout" then
			for _, i in sides(el) do
				fight[i].ringout = { node = Xml.attr(el, "Node") or "NPivot", axis = Xml.attr(el, "Axis") or "X",
					min = Xml.num(el, "Min", -1e9), max = Xml.num(el, "Max", 1e9) }
			end
		elseif t == "LoseFall" then
			local anims = {}
			for _, a in Xml.all(el, "Animation") do anims[Xml.attr(a, "Name") or ""] = true end
			for _, i in sides(el) do
				fight[i].loseFall = { node = Xml.attr(el, "Node") or "COM", axis = Xml.attr(el, "Axis") or "Y",
					max = Xml.num(el, "Max", 0), anims = anims }
			end
		elseif t == "Regeneration" then
			for _, i in sides(el) do
				fight[i].regeneration = { rate = Xml.num(el, "Rate", 0), after = Xml.num(el, "FramesAfterHit", 0) }
			end
		elseif t == "Lifesteal" then
			for _, i in sides(el) do fight[i].lifesteal = Xml.num(el, "DamagePart", 0) end
		elseif t == "DamageFactor" then
			for _, i in sides(el) do
				fight[i].damageFactor = fight[i].damageFactor or {}
				fight[i].damageFactor[Xml.attr(el, "Animation") or ""] = Xml.num(el, "Factor", 1)
			end
		elseif t == "TimeOutWin" then
			fight.overrides.timeoutWinner = 1
		elseif t == "RechargeMagicEachRound" then
			for _, i in sides(el) do fight[i].rechargeMagic = true end
		elseif t == "NoBulletsReplenishment" then
			for _, i in sides(el) do fight[i].noBulletsRefill = true end
		elseif t == "InvertJoystick" then
			fight.overrides.invertJoystick = true
		elseif t == "NoHealthBar" then
			fight.overrides.noHealthBar = true
		elseif t == "Darkness" then
			fight.overrides.darkness = {
				darkOn = Xml.num(el, "DarkOn", 60), dark = Xml.num(el, "DarkLasting", 180),
				lightOn = Xml.num(el, "LightOn", 60), light = Xml.num(el, "LightLasting", 30),
			}
		end
	end
	for _, r in rules do apply(r) end
	return fight, fight.overrides
end

return Rules
