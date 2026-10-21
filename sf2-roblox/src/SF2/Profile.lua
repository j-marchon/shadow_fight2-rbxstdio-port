--!strict
-- The player's save, shaped like the game's users.xml <Warrior> (usersDefault.xml): money (coins), bonus
-- (gems), level and experience, the six equipped slots, owned items with their upgrade step, battle progress,
-- currencies, perks, quest state and settings. Persisted by SF2Save.server.lua (DataStore) as JSON.
-- Levels (CharacterProgress <Thresholds>): Threshold Level=N Exp=X is the experience from level N to N+1.

local HttpService = game:GetService("HttpService")
local ReplicatedStorage = game:GetService("ReplicatedStorage")
local Xml = require(script.Parent.Xml)
local Items = require(script.Parent.Items)

local Profile = {}

export type Data = {
	version: number, name: string, avatar: string, voice: string,
	money: number, bonus: number, level: number, exp: number,
	equipped: { [string]: string }, items: { [string]: { count: number, upgrade: number } },
	battles: { [string]: number }, currencies: { [string]: number }, perks: { [string]: number },
	quests: { [string]: any }, flags: { [string]: any }, zone: string, settings: { [string]: any },
	eclipse: { [string]: boolean },
}

local data: Data? = nil
Profile.changed = Instance.new("BindableEvent")

local function default(): Data
	local u = Xml.doc("usersDefault")
	local w = Xml.path(u, "Warriors", "Warrior")
	local d: Data = {
		version = 1,
		name = Xml.attr(w, "FirstName") or "NAME_SHADOW",
		avatar = Xml.attr(w, "Avatar") or "avatar_hero",
		voice = Xml.attr(w, "Voice") or "Male",
		money = Xml.num(w, "Money", 0) :: number,
		bonus = Xml.num(w, "Bonus", 0) :: number,
		level = Xml.num(w, "Level", 1) :: number,
		exp = Xml.num(w, "Experience", 0) :: number,
		equipped = {}, items = {}, battles = {}, currencies = {}, perks = {}, quests = {}, flags = {},
		zone = Xml.attr(w, "CurrentZone") or "ZONE_1",
		settings = { sound = 1, music = 1, language = "eng" },
		eclipse = {},
	}
	for _, slot in { "Skeleton", "Armor", "Helm", "Weapon", "Ranged", "Magic" } do
		d.equipped[slot] = Xml.attr(w, slot) or ""
	end
	for _, it in Xml.all(Xml.first(w, "Items"), "Item") do
		d.items[Xml.attr(it, "Name") :: string] = { count = Xml.num(it, "Count", 1) :: number, upgrade = 0 }
	end
	return d
end

local remote: RemoteFunction? = nil
local function rpc(op: string, value: any?): any
	remote = remote or ReplicatedStorage:WaitForChild("SF2Remote", 10) :: RemoteFunction?
	if not remote then return nil end
	local ok, res = pcall(function() return (remote :: RemoteFunction):InvokeServer(op, value) end)
	return ok and res or nil
end

function Profile.load(): Data
	if data then return data end
	local saved = rpc("load")
	local d = default()
	if type(saved) == "string" then
		local ok, v = pcall(function() return HttpService:JSONDecode(saved) end)
		if ok and type(v) == "table" then
			for k, val in v do (d :: any)[k] = val end
		end
	end
	data = d
	return d
end

function Profile.get(): Data
	return data or Profile.load()
end

local saving = false
function Profile.save()
	if saving then return end
	saving = true
	task.delay(1, function()
		saving = false
		rpc("save", HttpService:JSONEncode(Profile.get()))
	end)
	Profile.changed:Fire()
end

function Profile.reset()
	data = default()
	Profile.save()
end

---------------------------------------------------------------- level / experience

local thresholds: { [number]: number }? = nil
function Profile.expToNext(level: number): number
	if not thresholds then
		thresholds = {}
		for _, t in Xml.all(Xml.first(Xml.doc("CharacterProgress"), "Thresholds"), "Threshold") do
			(thresholds :: any)[Xml.num(t, "Level") :: number] = Xml.num(t, "Exp") :: number
		end
	end
	return (thresholds :: any)[level] or math.huge
end

-- The last level the Thresholds list still has an entry for, plus one: the level cap
function Profile.maxLevel(): number
	Profile.expToNext(1)
	local best = 1
	for level in (thresholds :: any) or {} do
		if level > best then best = level end
	end
	return best + 1
end

-- DEV ONLY, and temporary: unlock everything so any act, boss or mode can be opened for testing.
-- Every battle is marked fully won, which Game.playBattle treats as "replay a random fight", so they all
-- stay playable. Remove this and the Settings button it hangs off once the progression is being tested
-- for real.
function Profile.maxOut()
	local Stages = require(script.Parent.Stages)
	local d = Profile.get()
	d.money = 99999999
	d.bonus = 999999
	d.level = Profile.maxLevel()
	d.exp = 0
	for _, z in Stages.zones() do
		local zn = Xml.attr(z, "Name") :: string
		d.flags["zone_" .. zn] = true
		for _, b in Stages.battles(z) do
			d.battles[zn .. "|" .. (Xml.attr(b, "Name") :: string)] = #Stages.fights(b)
		end
	end
	Profile.save()
end

-- Add experience; returns the number of levels gained
function Profile.addExp(n: number): number
	local d = Profile.get()
	d.exp += n
	local gained = 0
	while d.exp >= Profile.expToNext(d.level) do
		d.exp -= Profile.expToNext(d.level)
		d.level += 1
		gained += 1
	end
	return gained
end

---------------------------------------------------------------- items

function Profile.owns(name: string): boolean
	local it = Profile.get().items[name]
	return it ~= nil and it.count > 0
end

function Profile.give(name: string, count: number?)
	local d = Profile.get()
	local it = d.items[name]
	if it then it.count += count or 1 else d.items[name] = { count = count or 1, upgrade = 0 } end
end

function Profile.equip(name: string)
	local it = Items.get(name)
	local t = it and Xml.attr(it, "Type")
	if t then Profile.get().equipped[t] = name end
end

function Profile.upgrades(): { [string]: number }
	local out = {}
	for name, it in Profile.get().items do
		if it.upgrade and it.upgrade > 0 then out[name] = it.upgrade end
	end
	return out
end

-- The player as a Warrior.Def
function Profile.warrior(): any
	local d = Profile.get()
	local perks = {}
	for p in d.perks do table.insert(perks, p) end
	return {
		name = d.name, avatar = d.avatar, voice = d.voice, level = d.level,
		items = table.clone(d.equipped), upgrades = Profile.upgrades(), perks = perks,
	}
end

---------------------------------------------------------------- battles

-- Progress of a battle: number of fights won (zone|battle key)
function Profile.progress(zone: string, battle: string): number
	return Profile.get().battles[zone .. "|" .. battle] or 0
end

function Profile.setProgress(zone: string, battle: string, n: number)
	Profile.get().battles[zone .. "|" .. battle] = n
end

return Profile
