--!strict
-- list.xml items (Data.Xml.list): lookup by name, upgrade tables, item sets.

local Xml = require(script.Parent.Xml)

local Items = {}

local byName: { [string]: any } = {}
local upgrades: { [string]: { any } } = {}
local sets: { any } = {}
local loaded = false

local function load()
	if loaded then return end
	loaded = true
	local root = Xml.doc("list")
	for _, it in Xml.all(Xml.first(root, "Items"), "Item") do
		local name = Xml.attr(it, "Name")
		if name and not byName[name] then byName[name] = it end
	end
	for _, u in Xml.all(Xml.first(root, "UpgradeList"), "Upgrades") do
		upgrades[Xml.attr(u, "Name") :: string] = Xml.all(u, "Upgrade")
	end
	sets = Xml.all(Xml.first(root, "ItemSets"), "ItemSet")
end

function Items.get(name: string?): any
	if not name then return nil end
	load()
	return byName[name]
end

function Items.all(): { [string]: any }
	load()
	return byName
end

function Items.sets(): { any }
	load()
	return sets
end

-- The <Upgrade> steps of an item (its <Upgrades Template="..."> list), in order
function Items.upgrades(item: any): { any }
	load()
	local u = Xml.first(item, "Upgrades")
	local template = u and Xml.attr(u, "Template")
	if template and upgrades[template] then return upgrades[template] end
	return u and Xml.all(u, "Upgrade") or {}
end

local STATS = { "WeaponDamage", "UnarmedDamage", "BodyDefense", "HeadDefense", "RangedDamage", "MagicDamage",
	"CriticalChance", "CriticalRating", "RangedQuantity", "EnchantmentResistance" }
Items.STATS = STATS

-- An item's attribute values at an upgrade step (0 = as bought)
function Items.stats(item: any, upgrade: number?): { [string]: number }
	local out = {}
	for _, s in STATS do
		local v = Xml.num(item, s)
		if v then out[s] = v end
	end
	local steps = Items.upgrades(item)
	local u = upgrade and steps[upgrade]
	if u then
		for _, s in STATS do
			local v = Xml.num(u, s)
			if v then out[s] = v end
		end
	end
	return out
end

-- Display name (localized) and icon sprite of an item
function Items.title(item: any): string
	local name = Xml.attr(item, "Name") or ""
	local t = Xml.text(name)
	if t == name then
		local key = Xml.attr(item, "Text")
		if key then t = Xml.text(key) end
	end
	return t
end

return Items
