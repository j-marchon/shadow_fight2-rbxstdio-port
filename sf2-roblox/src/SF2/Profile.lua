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

-- Map battles and fight counters follow the game's Roster:
--  * records["ZONE|BATTLE"]: the battle is on the map (users.xml <Battles><Battle Name Locked Hidden
--    ReplayCount>); quest scripts add and remove them (ShowBattle / HideBattle / ToggleBattle)
--  * fightStats["ZONE|BATTLE|n"] = {w = wins, l = losses}: ?Fight[...].WinCount / .LossCount
--  * tutorial: the story tutorial's step (_$StoryTutorialStep), NotStarted .. END
--  * labels: shop item labels switched by ToggleItems
export type Data = {
	version: number, name: string, avatar: string, voice: string,
	money: number, bonus: number, level: number, exp: number,
	equipped: { [string]: string }, items: { [string]: { count: number, upgrade: number } },
	battles: { [string]: number }, currencies: { [string]: number }, perks: { [string]: number },
	quests: { [string]: any }, flags: { [string]: any }, zone: string, settings: { [string]: any },
	eclipse: { [string]: boolean },
	records: { [string]: { locked: boolean?, hidden: boolean?, off: boolean?, replay: number? } },
	fightStats: { [string]: { w: number, l: number } },
	tutorial: string, labels: { [string]: boolean }, unlocked: { [string]: boolean },
	power: number, powerSync: number,
	deliveries: { [string]: { kind: string, readyAt: number, price: number } },
}

local VERSION = 2

local data: Data? = nil
Profile.changed = Instance.new("BindableEvent")

local function default(): Data
	local u = Xml.doc("usersDefault")
	local w = Xml.path(u, "Warriors", "Warrior")
	local d: Data = {
		version = VERSION,
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
		records = {}, fightStats = {}, tutorial = "NotStarted", labels = {}, unlocked = {},
		power = Xml.num(w, "Power", 5) :: number, powerSync = os.time(), deliveries = {},
	}
	for _, slot in { "Skeleton", "Armor", "Helm", "Weapon", "Ranged", "Magic" } do
		d.equipped[slot] = Xml.attr(w, slot) or ""
	end
	for _, it in Xml.all(Xml.first(w, "Items"), "Item") do
		d.items[Xml.attr(it, "Name") :: string] = { count = Xml.num(it, "Count", 1) :: number, upgrade = 0 }
	end
	-- the map starts with the battles usersDefault lists (ZONE_1|BOSS_LYNX|)
	for _, b in Xml.all(Xml.first(w, "Battles"), "Battle") do
		d.records[Profile.key(Xml.attr(b, "Name") or "")] = {}
	end
	return d
end

-- "ZONE_1|Survival|" and "ZONE_1|Survival" name the same battle
function Profile.key(name: string): string
	local z, b = string.match(name, "^([^|]*)|([^|]*)")
	return z and (z .. "|" .. b) or name
end

-- Saves from before the quest-driven map (version 1) kept progress only; rebuild what the scripts would
-- have recorded by now: a win per fight already beaten, the tutorial done, and every battle the old map
-- showed for the acts that were open.
local function migrate(d: Data, old: any)
	if (old.version or 1) >= VERSION then return end
	d.version = VERSION
	local Stages = require(script.Parent.Stages)
	local any = false
	for key, n in d.battles do
		for i = 1, n do
			d.fightStats[key .. "|" .. i] = { w = 1, l = 0 }
			any = true
		end
	end
	if not any then return end
	d.tutorial = "END"
	d.records = {}
	local SKIP = { FAKE = true, TUTORIAL = true, HIDDEN = true, DUMMY = true }
	for _, z in Stages.zones() do
		local zn = Xml.attr(z, "Name") :: string
		if zn == "ZONE_1" or d.flags["zone_" .. zn] then
			for _, b in Stages.battles(z) do
				local bn = Xml.attr(b, "Name") or ""
				if not SKIP[Xml.attr(b, "Type") or ""] and Xml.attr(b, "X") and not string.find(bn, "_INTERMISSION")
					and not string.find(bn, "_LOCKED") then
					d.records[zn .. "|" .. bn] = {}
				end
			end
		end
	end
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
			migrate(d, v)
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
	d.tutorial = "END"
	for _, z in Stages.zones() do
		local zn = Xml.attr(z, "Name") :: string
		d.flags["zone_" .. zn] = true
		for _, b in Stages.battles(z) do
			local bn = Xml.attr(b, "Name") :: string
			local fights = Stages.fights(b)
			d.battles[zn .. "|" .. bn] = #fights
			for _, f in fights do
				d.fightStats[zn .. "|" .. bn .. "|" .. (Xml.attr(f, "Name") or "")] = { w = 1, l = 0 }
			end
			local t = Xml.attr(b, "Type") or ""
			if Xml.attr(b, "X") and t ~= "FAKE" and t ~= "TUTORIAL" and t ~= "DUMMY" and not string.find(bn, "_INTERMISSION")
				and not string.find(bn, "_LOCKED") then
				d.records[zn .. "|" .. bn] = {}
			end
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

---------------------------------------------------------------- energy
-- internalSettings <Power Max="5" TimeMax="600"/>: up to 5 points (usersDefault Power, PowerSyncTime); one
-- comes back every 600 s while below the cap. A fight costs its stages.xml Power (Roster.AIIJFJLLIDB:
-- refused when it would go below 0).

local function powerSettings(): (number, number)
	local p = Xml.first(Xml.doc("internalSettings"), "Power")
	return (Xml.num(p, "Max", 5) :: number), (Xml.num(p, "TimeMax", 600) :: number)
end

function Profile.power(): (number, number, number)
	local d = Profile.get()
	local max, period = powerSettings()
	d.power = d.power or max
	d.powerSync = d.powerSync or os.time()
	local now = os.time()
	if d.power >= max then
		d.powerSync = now
	else
		local gained = (now - d.powerSync) // period
		if gained > 0 then
			d.power = math.min(max, d.power + gained)
			d.powerSync += gained * period
		end
	end
	-- seconds until the next point
	local left = d.power >= max and 0 or period - (now - d.powerSync)
	return d.power, max, left
end

-- Add (or with a negative n, spend) energy; false if it would go below 0
function Profile.addPower(n: number): boolean
	local cur, max = Profile.power()
	local v = math.min(max, cur + n)
	if v < 0 then return false end
	local d = Profile.get()
	if cur >= max and v < max then d.powerSync = os.time() end
	d.power = v
	return true
end

---------------------------------------------------------------- deliveries
-- An item or an upgrade with a DeliveryTime is made, not handed over: it is paid for, then ready
-- DeliveryTime seconds later, or at once for its BonusDeliveryPrice in gems (quests.xml Delivery /
-- DeliveryUpgrade). A bought item is not owned until then; an upgraded one keeps its old step until then.

function Profile.startDelivery(name: string, kind: string, seconds: number, gemPrice: number)
	Profile.get().deliveries[name] = { kind = kind, readyAt = os.time() + seconds, price = gemPrice }
end

function Profile.delivery(name: string): any
	return Profile.get().deliveries[name]
end

-- Hand an item or upgrade over now; returns its kind
function Profile.deliver(name: string): string?
	local d = Profile.get()
	local dl = d.deliveries[name]
	if not dl then return nil end
	d.deliveries[name] = nil
	if dl.kind == "upgrade" then
		local it = d.items[name]
		if it then it.upgrade = (it.upgrade or 0) + 1 end
	else
		Profile.give(name)
	end
	return dl.kind
end

-- The deliveries whose time is up, handed over: {items = {...}, upgrades = {...}}
function Profile.deliverDue(): { items: { string }, upgrades: { string } }
	local out = { items = {}, upgrades = {} }
	local now = os.time()
	for name, dl in table.clone(Profile.get().deliveries) do
		if dl.readyAt <= now then
			local kind = Profile.deliver(name)
			table.insert(kind == "upgrade" and out.upgrades or out.items, name)
		end
	end
	return out
end

-- Progress of a battle: number of fights won (zone|battle key)
function Profile.progress(zone: string, battle: string): number
	return Profile.get().battles[zone .. "|" .. battle] or 0
end

function Profile.setProgress(zone: string, battle: string, n: number)
	Profile.get().battles[zone .. "|" .. battle] = n
end

-- The battle's map record (nil: not on the map)
function Profile.record(name: string): any
	return Profile.get().records[Profile.key(name)]
end

function Profile.showBattle(name: string, locked: boolean?, hidden: boolean?, replay: number?)
	local d = Profile.get()
	local k = Profile.key(name)
	local r = d.records[k] or {}
	if locked ~= nil then r.locked = locked or nil end
	if hidden ~= nil then r.hidden = hidden or nil end
	if replay then r.replay = replay end
	d.records[k] = r
end

function Profile.hideBattle(name: string)
	Profile.get().records[Profile.key(name)] = nil
end

-- Wins and losses of one fight ("ZONE|BATTLE|n")
function Profile.fightStat(id: string): { w: number, l: number }
	return Profile.get().fightStats[id] or { w = 0, l = 0 }
end

function Profile.countFight(id: string, won: boolean)
	local d = Profile.get()
	local s = d.fightStats[id] or { w = 0, l = 0 }
	if won then s.w += 1 else s.l += 1 end
	d.fightStats[id] = s
end

return Profile
