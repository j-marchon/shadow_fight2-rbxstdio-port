--!strict
-- Every weapon in the game (Data.Arsenal, from list.xml) and what a fighter needs to wield it:
--   rig     = base rig (Data.Rigs.Shadow) + the weapon model's part (Data.WeaponRigs.<model>)
--   moveSet = the moves in Data.MoveLib whose <Locks> pass for the loadout (compile_moves.locks_pass)
-- Results are cached per weapon; fighters with the same weapon share them, as required modules would be.

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

local function append(into: { any }, from: { any }?)
	for _, v in from or {} do
		table.insert(into, v)
	end
end

local rigs = {}
function Arsenal.rig(w: Weapon): any
	local base = require(Data.Rigs.Shadow) :: any
	if not w.model then
		return base
	end
	local rig = rigs[w.model]
	if rig then
		return rig
	end
	local part = require(Data.WeaponRigs:FindFirstChild(w.model) :: ModuleScript) :: any
	-- weaponStart: animation slots past animatedCount drive the weapon's nodes in model order (in the
	-- game's merged model the weapon follows the skeleton; here body and head come first)
	rig = { name = "Shadow+" .. w.model, animatedCount = base.animatedCount, weaponStart = #base.nodes + 1 }
	for _, key in { "nodes", "edges", "edgeInfo", "capsules", "triangles" } do
		local list = table.clone(base[key])
		append(list, part[key])
		rig[key] = list
	end
	rigs[w.model] = rig
	return rig
end

-- Locks (MoveLocks): Item tests the loadout, Operator And/Or, Not inverts; Perk/Screen are constants
local function itemMatches(loadout: { any }, c: any): boolean
	for _, it in loadout do
		if (c.type == "" or it.Type == c.type) and (c.sub == "" or it.SubType == c.sub) and (c.name == "" or it.Name == c.name) then
			return true
		end
	end
	return false
end

local function lockPasses(loadout: { any }, c: any): boolean
	if c.t == "const" then
		return c.v
	end
	local v: boolean
	if c.t == "item" then
		v = itemMatches(loadout, c)
	else
		local all = c.op == "and"
		v = all
		for _, k in c.kids do
			if lockPasses(loadout, k) ~= all then
				v = not all
				break
			end
		end
	end
	return v ~= c.nt
end

local library: { any }? = nil
local sets = {}
function Arsenal.moveSet(w: Weapon): { any }
	local set = sets[w.id]
	if set then
		return set
	end
	if not library then
		local all = {}
		for n = 1, #Data.MoveLib:GetChildren() do
			append(all, require(Data.MoveLib:FindFirstChild(tostring(n)) :: ModuleScript) :: any)
		end
		library = all
	end
	local loadout = Arsenal.loadout(w)
	set = {}
	for _, m in library :: { any } do
		local ok = true
		for _, c in m.locks or {} do
			if not lockPasses(loadout, c) then
				ok = false
				break
			end
		end
		if ok then
			table.insert(set, m)
		end
	end
	sets[w.id] = set
	return set
end

return Arsenal
