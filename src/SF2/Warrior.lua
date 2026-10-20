--!strict
-- A warrior's build: equipped items (list.xml) -> model list, loadout for move locks, move set, attributes.
-- Rig order: skeleton, weapon (animation slots past the skeleton drive it), ranged, magic, armor, helm,
-- decoration. A warrior with no armor/helm item wears the defaults (internalSettings <Armor Name="Body"/>,
-- <Helmet Name="Head"/>).
-- Attributes (CharacterProgress.xml): StartingAttributes + LevelAttributeGain x (level - 1) + item stats,
-- then any explicit overrides (stages.xml Warrior attributes, rules).

local Xml = require(script.Parent.Xml)
local Items = require(script.Parent.Items)
local Rigs = require(script.Parent.Rigs)
local Moves = require(script.Parent.Moves)

local Warrior = {}

export type Def = {
	name: string?, avatar: string?, voice: string?, level: number?,
	items: { [string]: string }, upgrades: { [string]: number }?,
	attributes: { [string]: number }?, perks: { string }?, tactic: string?,
}

local SLOTS = { "Skeleton", "Weapon", "Ranged", "Magic", "Armor", "Helm", "Decorate" }
Warrior.SLOTS = SLOTS
local DEFAULTS = { Skeleton = "Skeleton", Armor = "Body", Helm = "Head", Weapon = "Fists", Ranged = "NoRanged", Magic = "NoMagic" }
Warrior.DEFAULTS = DEFAULTS

local progress: any = nil
local function charProgress()
	if not progress then progress = Xml.doc("CharacterProgress") end
	return progress
end

function Warrior.baseAttributes(level: number): { [string]: number }
	local cp = charProgress()
	local out = {}
	for k, v in (Xml.first(cp, "StartingAttributes") :: any).a or {} do
		out[k] = tonumber(v) or 0
	end
	for k, v in (Xml.first(cp, "LevelAttributeGain") :: any).a or {} do
		out[k] = (out[k] or 0) + (tonumber(v) or 0) * math.max(0, level - 1)
	end
	-- StartingAttributes spells it InitialMagicCharge, MagicSettings reads MagicInitialCharge
	if out.InitialMagicCharge and not out.MagicInitialCharge then out.MagicInitialCharge = out.InitialMagicCharge end
	return out
end

-- Fill missing slots with the defaults; an item placed in the wrong slot moves to its own type's slot.
function Warrior.normalize(items: { [string]: string }): { [string]: string }
	local out = {}
	for slot, name in items do
		local it = Items.get(name)
		local t = it and Xml.attr(it, "Type") or slot
		out[t] = name
	end
	for slot, name in DEFAULTS do
		if not out[slot] then out[slot] = name end
	end
	return out
end

function Warrior.build(def: Def): any
	local items = Warrior.normalize(def.items or {})
	local loadout, models = {}, {}
	for _, slot in SLOTS do
		local name = items[slot]
		local it = Items.get(name)
		if name then
			table.insert(loadout, {
				Name = name, Type = slot,
				SubType = it and Xml.attr(it, "SubType") or (slot == "Skeleton" and "Skeleton" or ""),
			})
			local model = it and Xml.attr(it, "Model")
			if model and Rigs.exists(model) then table.insert(models, model) end
		end
	end
	if #models == 0 or (Items.get(items.Skeleton) == nil) then
		table.insert(models, 1, "mdl_skeleton")
	end
	local attributes = Warrior.baseAttributes(def.level or 1)
	for _, slot in SLOTS do
		local it = Items.get(items[slot])
		if it then
			for k, v in Items.stats(it, def.upgrades and def.upgrades[items[slot]]) do
				attributes[k] = (attributes[k] or 0) + v
			end
		end
	end
	for k, v in def.attributes or {} do attributes[k] = v end
	return {
		def = def,
		items = items,
		loadout = loadout,
		models = models,
		rig = Rigs.build(models),
		moves = Moves.forLoadout(loadout),
		attributes = attributes,
		voice = def.voice or "Male",
		name = def.name or "",
	}
end

return Warrior
