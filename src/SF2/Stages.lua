--!strict
-- stages.xml: zones (acts) -> battles -> fights -> warriors, and the warrior templates / groups.
-- A fight's enemy is its <Warrior Template=...> with the template's items, name, avatar and voice, overridden
-- by the warrior's own <Items> and attributes; templates inherit from their Template= parent.
-- Survival fights draw their enemies from <Groups> (WarriorGroups), Number= of them.

local Xml = require(script.Parent.Xml)

local Stages = {}

local root: any = nil
local templates: { [string]: any } = {}
local groups: { [string]: any } = {}
local function load()
	if root then return end
	root = Xml.doc("stages")
	local w = Xml.first(root, "Warriors")
	for _, t in Xml.all(Xml.first(w, "Templates"), "Template") do
		templates[Xml.attr(t, "Name") :: string] = t
	end
	for _, g in Xml.all(Xml.first(w, "WarriorGroups")) do
		groups[Xml.attr(g, "Name") or g.t] = g
	end
end

function Stages.zones(): { any }
	load()
	return Xml.all(Xml.first(root, "Zones"), "Zone")
end

function Stages.zone(name: string): any
	for _, z in Stages.zones() do
		if Xml.attr(z, "Name") == name then return z end
	end
	return nil
end

function Stages.battles(zone: any): { any }
	return Xml.all(zone, "Battle")
end

function Stages.battle(zoneName: string, battleName: string): any
	local z = Stages.zone(zoneName)
	for _, b in Stages.battles(z) do
		if Xml.attr(b, "Name") == battleName then return b end
	end
	return nil
end

function Stages.fights(battle: any): { any }
	return Xml.all(battle, "Fight")
end

-- Eclipse battles (<name>_ECLIPSEMODE) replay the base battle's fights with their own rewards and rules:
-- a fight without warriors takes them from the base battle's fight of the same number
function Stages.baseFight(zoneName: string, battle: any, index: number): any
	local name = Xml.attr(battle, "Name") or ""
	local base = string.gsub(name, "_ECLIPSEMODE$", "")
	if base == name then return nil end
	local b = Stages.battle(zoneName, base)
	return b and Stages.fights(b)[index]
end

local ATTR_SKIP = { Template = true, Tactic = true, Number = true, BeginnerCheat = true, WarriorPower = true }

-- Template chain resolved: items by slot, name, avatar, voice
local function templateDef(name: string?, depth: number?): any
	load()
	local def = { items = {}, attributes = {} }
	local t = name and templates[name]
	if not t or (depth or 0) > 8 then return def end
	local parent = Xml.attr(t, "Template")
	if parent and parent ~= name then def = templateDef(parent, (depth or 0) + 1) end
	def.name = Xml.attr(t, "FirstName") or def.name
	def.avatar = Xml.attr(t, "Avatar") or def.avatar
	def.voice = Xml.attr(t, "Voice") or def.voice
	local items = Xml.first(t, "Items")
	if items then
		local Items = require(script.Parent.Items)
		for _, it in Xml.all(items, "Item") do
			local n = Xml.attr(it, "Name")
			local item = Items.get(n)
			if n and item then def.items[Xml.attr(item, "Type") or "Weapon"] = n end
		end
	end
	return def
end
Stages.template = templateDef

-- A <Warrior> element of a fight as a Warrior.Def (level from the player's for aligned attributes)
function Stages.warrior(el: any, playerLevel: number?): any
	local def = templateDef(Xml.attr(el, "Template"))
	local items = Xml.first(el, "Items")
	if items then
		local Items = require(script.Parent.Items)
		for _, it in Xml.all(items, "Item") do
			local n = Xml.attr(it, "Name")
			local item = Items.get(n)
			if n and item then def.items[Xml.attr(item, "Type") or "Weapon"] = n end
		end
	end
	for k, v in el.a or {} do
		if not ATTR_SKIP[k] and tonumber(v) then def.attributes[k] = tonumber(v) end
	end
	def.tactic = Xml.attr(el, "Tactic") or "Standard"
	def.power = Xml.num(el, "WarriorPower")
	def.level = playerLevel or 1
	local perks = Xml.first(el, "Perks")
	if perks then
		def.perks = {}
		for _, p in Xml.all(perks, "Perk") do table.insert(def.perks, Xml.attr(p, "Name")) end
	end
	-- AttributesAlign: the enemy's attributes follow the player's (Delta Factor x player + Shift)
	local align = Xml.first(el, "AttributesAlign")
	if align then
		local best
		for _, d in Xml.all(align, "Delta") do
			if (Xml.num(d, "Factor", 0) :: number) > 0 then best = d end
		end
		if best then def.align = { factor = Xml.num(best, "Factor", 1), shift = Xml.num(best, "Shift", 0) } end
	end
	return def
end

-- The enemies of a fight, in order (survival: drawn from groups)
function Stages.enemies(fight: any, playerLevel: number?): { any }
	load()
	local out = {}
	for _, w in Xml.all(Xml.first(fight, "Warriors"), "Warrior") do
		local g = Xml.first(w, "Groups")
		if g then
			local n = Xml.num(w, "Number", 1) :: number
			local pool = {}
			for _, gr in Xml.all(g, "Group") do
				local grp = groups[Xml.attr(gr, "Name") or ""]
				for _, m in Xml.all(grp) do table.insert(pool, m) end
			end
			for i = 1, n do
				local pick = pool[((i - 1) % math.max(#pool, 1)) + 1]
				local def = pick and Stages.warrior(pick, playerLevel) or Stages.warrior(w, playerLevel)
				def.tactic = Xml.attr(w, "Tactic") or def.tactic
				table.insert(out, def)
			end
		else
			table.insert(out, Stages.warrior(w, playerLevel))
		end
	end
	return out
end

-- Fight rules (<Rules>): Attributes/ApplyTo -> per side attribute overrides, plus everything else raw
function Stages.rules(fight: any, eclipse: boolean?): any
	local out = { player = {}, bot = {}, raw = {} }
	for _, r in Xml.all(Xml.first(fight, "Rules")) do
		local ecl = Xml.attr(r, "Eclipse")
		if ecl == "1" and not eclipse then continue end
		if ecl == "0" and eclipse then continue end
		if r.t == "Attributes" then
			local to = Xml.attr(r, "ApplyTo") or "All"
			for k, v in r.a or {} do
				if k ~= "ApplyTo" and k ~= "Eclipse" and tonumber(v) then
					if to ~= "Bot" then out.player[k] = (out.player[k] or 0) + tonumber(v) end
					if to ~= "Player" then out.bot[k] = (out.bot[k] or 0) + tonumber(v) end
				end
			end
		else
			table.insert(out.raw, r)
		end
	end
	return out
end

return Stages
