--!strict
-- The move library (Data.MoveLib: every move with its <Locks>) filtered for a loadout, as
-- compile_moves.locks_pass does: Item tests the loadout, Operator And/Or, Not inverts; Perk/Screen are
-- constants (no perk-gated moves, not on a special screen). Cached per loadout.
-- Also the named action lists of moves.xml <Triggers> (Data.Triggers).

local Data = script.Parent.Data

local Moves = {}

local function itemMatches(loadout: { any }, c: any): boolean
	for _, it in loadout do
		if (c.type == "" or it.Type == c.type) and (c.sub == "" or it.SubType == c.sub) and (c.name == "" or it.Name == c.name) then
			return true
		end
	end
	return false
end
Moves.itemMatches = itemMatches

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
function Moves.library(): { any }
	if not library then
		local all = {}
		for n = 1, #Data.MoveLib:GetChildren() do
			local part = require(Data.MoveLib:FindFirstChild(tostring(n)) :: ModuleScript) :: any
			table.move(part, 1, #part, #all + 1, all)
		end
		library = all
	end
	return library :: { any }
end

local sets = {}
function Moves.forLoadout(loadout: { any }): { any }
	local keyParts = {}
	for _, it in loadout do table.insert(keyParts, it.Type .. ":" .. it.Name .. ":" .. (it.SubType or "")) end
	local key = table.concat(keyParts, "|")
	local set = sets[key]
	if set then return set end
	set = {}
	for _, m in Moves.library() do
		local ok = true
		for _, c in m.locks or {} do
			if not lockPasses(loadout, c) then
				ok = false
				break
			end
		end
		if ok then table.insert(set, m) end
	end
	sets[key] = set
	return set
end

local triggers: { [string]: any }? = nil
function Moves.trigger(name: string): any
	if not triggers then
		local mod = Data:FindFirstChild("Triggers")
		triggers = mod and require(mod :: ModuleScript) :: any or {}
	end
	return (triggers :: any)[name]
end

return Moves
