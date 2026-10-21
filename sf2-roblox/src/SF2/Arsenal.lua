--!strict
-- Every weapon in the game (Data.Arsenal, from list.xml) and what a fighter needs to wield it:
--   rig     = skeleton + weapon + body + head, merged by SF2.Rigs
--   moveSet = the moves in Data.MoveLib whose <Locks> pass for the loadout (SF2.Moves)

local Data = script.Parent.Data

local Arsenal = {}

export type Weapon = { id: string, name: string, item: string, sub: string, model: string? }

Arsenal.groups = require(Data.Arsenal) :: { { name: string, weapons: { Weapon } } }
Arsenal.byId = {} :: { [string]: Weapon }
for _, g in Arsenal.groups do
	for _, w in g.weapons do
		Arsenal.byId[w.id] = w
	end
end

-- Default warrior (usersDefault.xml) with the weapon item swapped in
function Arsenal.loadout(w: Weapon): { any }
	return {
		{ Name = "Skeleton", Type = "Skeleton", SubType = "Skeleton" },
		{ Name = "Body", Type = "Armor", SubType = "" },
		{ Name = "Head", Type = "Helm", SubType = "" },
		{ Name = w.item, Type = "Weapon", SubType = w.sub },
		{ Name = "NoRanged", Type = "Ranged", SubType = "" },
		{ Name = "NoMagic", Type = "Magic", SubType = "" },
	}
end

local Rigs = require(script.Parent.Rigs)
local Moves = require(script.Parent.Moves)

-- skeleton, then the weapon (animation slots past the skeleton drive its first nodes), then body and head
function Arsenal.rig(w: Weapon): any
	local models = { "mdl_skeleton" }
	if w.model then table.insert(models, w.model) end
	table.insert(models, "mdl_body")
	table.insert(models, "mdl_head")
	return Rigs.build(models)
end

function Arsenal.moveSet(w: Weapon): { any }
	return Moves.forLoadout(Arsenal.loadout(w))
end

return Arsenal
