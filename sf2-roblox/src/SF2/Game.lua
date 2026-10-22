--!strict
-- The game flow: the menu scenes (SF2.Menus), fights (SF2.FightScreen), rewards and progress (SF2.Profile),
-- all steered by the game's quest scripts (SF2.Quests), as in the original:
--  * a scene change the player asks for fires ChangeTab; FIGHT on the map fires FightEnter. When a quest
--    takes either over, the quests decide where to go and which fight starts (Quests header)
--  * one FIGHT plays one stages.xml <Fight>: the battle's next one not yet won, or a random one once all
--    are; SURVIVAL plays the several enemies of its single <Fight> in a row, carrying health over with
--    the fight's HealthRecovery
--  * a won fight pays its <Reward> (Money, Exp, Bonus, Items) plus the end screen's bonuses; then the
--    fight is counted (?Fight[...].WinCount / LossCount), FightEnd fires, and the end screen shows. Its
--    OK goes back to the scene the fight started from, where the FightEnd quests run
--  * which battles the map shows, which are locked and which acts are open all come from the scripts
--    (ShowBattle / HideBattle), not from rules of the port's own

local FightScreen = require(script.Parent.FightScreen)
local Stages = require(script.Parent.Stages)
local Xml = require(script.Parent.Xml)
local Profile = require(script.Parent.Profile)
local Menus = require(script.Parent.Menus)
local Warrior = require(script.Parent.Warrior)
local Quests = require(script.Parent.Quests)
local Rules = require(script.Parent.Rules)

local Game = {}

-- The place's default baseplate and spawn are not part of the game
local function hideWorld()
	for _, d in workspace:GetChildren() do
		if d:IsA("BasePart") and (d.Name == "Baseplate" or d:IsA("SpawnLocation")) then
			d.Transparency = 1
			for _, x in d:GetDescendants() do
				if x:IsA("Decal") or x:IsA("Texture") then x.Transparency = 1 end
			end
		end
	end
end

-- SF2 is flat 2D art: no haze, blur, bloom or sun rays over it
local function flatLighting()
	local L = game:GetService("Lighting")
	for _, c in L:GetChildren() do
		if c:IsA("Atmosphere") then
			c.Density = 0
			c.Haze = 0
			c.Glare = 0
		elseif c:IsA("PostEffect") then
			c.Enabled = false
		end
	end
	L.FogEnd = 1e6
	L.GlobalShadows = false
end

---------------------------------------------------------------- scenes

local current = "Loader" -- the scene on screen (QuestCondition's _$CurrentScene)
local returnTo = "Map" -- where a fight's end screen goes back to

---------------------------------------------------------------- the dojo
-- DojoScene builds zone 0, battle 0, fight 0 of stages.xml (Punchbag|Training|1: the punching bag, NotAI)
-- and steps it every FixedUpdate under GameController and MainMenu: you move and strike freely, nothing
-- ends. The disciple toggle swaps in fight 2 (the dojo disciple, who spars). The tutorial's dojo steps
-- count the player's moves from the model's move-changed event.

local dojo: any = nil
local disciple = false
local moveListeners: { (m: any) -> () } = {}

local function stopDojo()
	if dojo then
		dojo.destroy()
		dojo = nil
	end
end

local function startDojo()
	stopDojo()
	local id = "Punchbag|Training|" .. (disciple and "2" or "1")
	local fight = Quests.fightOf(id)
	local enemy = fight and Stages.enemies(fight, Profile.get().level)[1]
	if not enemy then return end
	local player = Profile.warrior()
	enemy.alignTo = Warrior.build(player).attributes
	local screen
	screen = FightScreen.run({
		player = player, enemy = enemy, location = "dojo", rounds = 1, roundTime = 0, dojo = true,
		enemyTactic = enemy.tactic, battleType = "DUMMY",
		onMove = function(e, m)
			if screen and screen.fight and e == screen.fight.engines[1] then
				for _, f in table.clone(moveListeners) do f(m) end
			end
		end,
	})
	dojo = screen
end

-- Wait in the dojo until n of the player's moves pass test (StoryTutorialMove/Punchbag/DoubleSweep)
local function waitMoves(n: number, test: (m: any) -> boolean)
	local count = 0
	local done = Instance.new("BindableEvent")
	local function f(m: any)
		if test(m) then
			count += 1
			if count >= n then done:Fire() end
		end
	end
	table.insert(moveListeners, f)
	Menus.setMenuEnabled(false)
	done.Event:Wait()
	Menus.setMenuEnabled(true)
	local i = table.find(moveListeners, f)
	if i then table.remove(moveListeners, i) end
end

-- Show a scene as it is, without asking the quests (ChangeScene, or a change they let through)
local function show(scene: string, opts: any?)
	opts = opts or {}
	current = scene
	stopDojo()
	if scene == "Dojo" then
		-- the menu first: building a screen releases the textures of the one before, the fight's included
		Menus.dojo(true)
		startDojo()
	elseif scene == "Shop" then Menus.shop(opts.tab, opts.item)
	elseif scene == "Profile" then Menus.profile()
	else
		current = "Map"
		Menus.map(opts.zone)
	end
	Quests.sceneLoaded(current)
	Quests.run()
end

-- A scene change the player asked for: ChangeTab first
function Game.go(scene: string)
	Quests.changeTab(current, scene, function() show(scene) end)
end

---------------------------------------------------------------- fights

-- The fight id the map's FIGHT plays for a battle: its next fight not yet won, else a random one
local function nextFight(zone: string, battle: any): string?
	local fights = Stages.fights(battle)
	if #fights == 0 then return nil end
	local name = Xml.attr(battle, "Name") :: string
	local i = Profile.progress(zone, name) + 1
	if i > #fights then i = math.random(1, #fights) end
	return zone .. "|" .. name .. "|" .. (Xml.attr(fights[i], "Name") or tostring(i))
end

-- The end screen's bonuses, paid in coins (internalSettings: Perfect 5, FirstStrike 2, ComboCount 1 per
-- hit of the longest combo, Shock 3; style 3 per level reached)
local function bonuses(result: any): any
	local st = result.stats or {}
	local function n(t: any): number return t and t[1] or 0 end
	return { perfect = n(st.perfectRounds), firstStrike = n(st.firstStrikes), maxCombo = n(st.maxCombo),
		shock = n(st.shocks), style = n(st.bestStyle) }
end

-- The fight's energy (stages.xml Power): spent when it starts; false if there isn't enough
local function spendPower(id: string): boolean
	local fight = Quests.fightOf(id)
	local cost = fight and Xml.num(fight, "Power", 0) or 0
	return Profile.addPower(-(cost :: number))
end

-- Play one stages.xml fight by id ("ZONE|BATTLE|n")
function Game.playFight(id: string)
	local fight, battle, zone, bname = Quests.fightOf(id)
	if not fight or not battle then
		warn("SF2: no fight " .. id)
		show(current)
		return
	end
	local zn, bn = zone :: string, bname :: string
	local t = Xml.attr(battle, "Type") or ""
	local eclipse = string.find(bn, "_ECLIPSEMODE") ~= nil
	local d = Profile.get()
	local enemies = Stages.enemies(fight, d.level)
	if #enemies == 0 then
		local fights = Stages.fights(battle)
		local base = Stages.baseFight(zn, battle, table.find(fights, fight) or 1)
		if base then enemies = Stages.enemies(base, d.level) end
	end
	if #enemies == 0 then show(current) return end
	stopDojo()
	if current ~= "Fight" then returnTo = current end
	current = "Fight"
	local total = { money = 0, exp = 0, bonus = 0, prize = 0,
		perfect = 0, firstStrike = 0, maxCombo = 0, shock = 0, style = 0, styleCoins = 0 }
	local levels = 0
	local enemyIdx = 1

	local function back()
		Quests.changeTab("Fight", returnTo, function() show(returnTo) end)
	end

	local function finish(won: boolean, timeout: boolean?)
		if won then
			local n = table.find(Stages.fights(battle), fight) or 0
			if n > Profile.progress(zn, bn) then Profile.setProgress(zn, bn, n) end
		end
		Quests.fightEnd(id, won, levels > 0)
		Profile.save()
		-- the tutorial's practice fights end straight back in the scene they came from
		if t == "TUTORIAL" or t == "DUMMY" then
			back()
			return
		end
		if won then
			Menus.endFight({ win = true }, total, levels, back)
		else
			Menus.endFight({ win = false, timeout = timeout }, total, levels, back, function()
				Quests.fightEnter(id, eclipse, function()
					if spendPower(id) then Game.playFight(id) else back() end
				end)
			end)
		end
	end

	local function nextEnemy(startHealth: number?)
		local enemy = enemies[enemyIdx]
		local rules = Stages.rules(fight, eclipse)
		local player = Profile.warrior()
		player.add = rules.player
		enemy.add = rules.bot
		enemy.alignTo = Warrior.build(player).attributes
		local fightRules, overrides = Rules.prepare(rules.raw, { player, enemy }, eclipse)
		local function start()
			Menus.hide()
			local screen
			screen = FightScreen.run({
				player = player, enemy = enemy,
				location = Xml.attr(battle, "Location"), music = Xml.attr(fight, "Music") or Xml.attr(battle, "Music"),
				rounds = overrides.rounds or Xml.num(fight, "Rounds", 2),
				roundTime = overrides.roundTime or Xml.num(fight, "RoundTime", 99),
				enemyTactic = enemy.tactic, battleType = t,
				rules = fightRules, timeoutWinner = overrides.timeoutWinner, invertJoystick = overrides.invertJoystick,
				noHealthBar = overrides.noHealthBar, darkness = overrides.darkness,
				startHealth = startHealth and { startHealth, 1 } or nil,
				onEnd = function(result)
					task.defer(function()
						local hpLeft = screen.fight and screen.fight.engines[1].health or 1
						screen.destroy()
						if result.winner ~= 1 then
							-- nobody knocked out: the round clock decided it (Label_Timesup)
							local h = result.health
							finish(false, h ~= nil and h[1] > 0 and h[2] > 0)
							return
						end
						local r = Menus.reward(fight, eclipse)
						if t == "SURVIVAL" then
							local rewards = Xml.all(Xml.first(fight, "Rewards"), "Reward")
							local rr = rewards[enemyIdx + 1]
							if rr then r = { money = Xml.num(rr, "Money", 0), exp = Xml.num(rr, "Exp", 0), bonus = 0, items = {} } end
						end
						local b = bonuses(result)
						total.prize += r.money or 0
						total.perfect += b.perfect
						total.firstStrike += b.firstStrike
						total.maxCombo = math.max(total.maxCombo, b.maxCombo)
						total.shock += b.shock
						total.style = math.max(total.style, b.style)
						total.styleCoins += b.style * 3
						local money = (r.money or 0) + b.perfect * 5 + b.firstStrike * 2 + b.maxCombo + b.shock * 3 + b.style * 3
						d.money += money
						d.bonus += r.bonus or 0
						total.money += money
						total.exp += r.exp or 0
						total.bonus += r.bonus or 0
						for _, it in r.items or {} do Profile.give(it) end
						levels += Profile.addExp(r.exp or 0)
						if enemyIdx < #enemies then
							enemyIdx += 1
							local rec = Xml.num(fight, "HealthRecovery", 0) :: number
							nextEnemy(math.min(1, hpLeft + rec))
							return
						end
						finish(true)
					end)
				end,
			})
		end
		if enemyIdx == 1 and t ~= "DUMMY" then
			Menus.vs(player, enemy, 2.2, start)
		else
			start()
		end
	end
	nextEnemy(nil)
end

-- FIGHT on the map: the FightEnter quests first (energy.xml's EnergyChecker among them, at 0 energy);
-- else the energy check, then the fight
function Game.playBattle(zone: string, battle: any)
	local id = nextFight(zone, battle)
	if not id then return end
	local eclipse = string.find(Xml.attr(battle, "Name") or "", "_ECLIPSEMODE") ~= nil
	Quests.fightEnter(id, eclipse, function()
		if spendPower(id) then Game.playFight(id) end
	end)
end

-- Training in the dojo: you and the dummy with any weapon of the arsenal, no timer, the dummy can't lose
function Game.training(mine: any, dummy: any)
	local player = Profile.warrior()
	player.items = table.clone(player.items)
	player.items.Weapon = mine.item
	local enemy = { name = "NAME_DUMMY", avatar = "avatar_hero", items = { Weapon = dummy.item }, level = player.level }
	Menus.hide()
	local screen
	screen = FightScreen.run({
		player = player, enemy = enemy, location = "dojo", music = "fight6_sparring",
		rounds = 99, roundTime = 0, training = true, enemyTactic = "Standard",
		onEnd = function()
			task.defer(function()
				screen.destroy()
				Menus.arsenal()
			end)
		end,
	})
end

---------------------------------------------------------------- what the quests drive

local refreshQueued = false
Quests.host = {
	scene = function() return current end,
	changeScene = function(dest: string)
		if dest == "Fight" or dest == "" or dest == "0" then return end
		show(dest)
	end,
	openShop = function(tab: string?, item: string?)
		if tab == "Helmet" then tab = "Helm" end
		show("Shop", { tab = tab, item = item })
	end,
	fight = function(id: string)
		-- a quest's Fight costs its energy too, when there is some (EnergyChecker stops them at 0)
		spendPower(id)
		Game.playFight(id)
	end,
	mapFocus = function(battle: string)
		local zone, name = string.match(battle, "^([^|]*)|([^|]*)")
		if zone then
			Profile.get().zone = zone
			Menus.focus(zone, name :: string)
			if current == "Map" then Menus.map(zone) end
		end
	end,
	setZone = function(zone: string)
		Profile.get().zone = zone
	end,
	actScreen = function(text: string) Menus.actScreen(text) end,
	-- the story tutorial's own steps (decompiled action classes in the README's "Dojo" section)
	tutorial = function(step: string)
		if step == "StoryTutorialMove" then
			waitMoves(3, function(m) return m.type == "MOVE" end)
		elseif step == "StoryTutorialPunchbag" then
			waitMoves(3, function(m) return m.type == "ATTACK" end)
		elseif step == "StoryTutorialDoubleSweep" then
			waitMoves(1, function(m) return m.name == "DoubleSweep" end)
		elseif step == "StoryTutorialBuyItem" then
			-- the shop points at the knives (OpenShop before it); the step ends once they are bought
			while not Profile.owns("WEAPON_KNIVES") do task.wait(0.25) end
		elseif step == "StoryTutorialLearnPerk" then
			local before = 0
			for _ in Profile.get().perks do before += 1 end
			while true do
				local n = 0
				for _ in Profile.get().perks do n += 1 end
				if n > before then break end
				task.wait(0.25)
			end
		end
	end,
	refresh = function()
		if refreshQueued then return end
		refreshQueued = true
		task.defer(function()
			refreshQueued = false
			if current == "Map" then Menus.map(Profile.get().zone) end
		end)
	end,
}

function Game.start()
	hideWorld()
	flatLighting()
	local d = Profile.load()
	Xml.setLanguage(d.settings.language or "eng")
	Menus.applyVolumes()
	Menus.onPlay = function(zone, battle) Game.playBattle(zone, battle) end
	Menus.onTraining = function(mine, dummy) Game.training(mine, dummy) end
	Menus.onNavigate = function(scene) Game.go(scene) end
	Menus.onDisciple = function(on: boolean)
		disciple = on
		if current == "Dojo" then startDojo() end
	end
	Menus.discipleOn = function() return disciple end
	Menus.onLeaveScene = function() stopDojo() end
	Menus.onPurchase = function(item) Quests.purchase(item) end
	Menus.onDeliveryDue = function() Quests.checkDeliveries() end
	-- deliveries that come due while you play are handed over on the menu screens, not mid-fight
	task.spawn(function()
		while true do
			task.wait(5)
			if current ~= "Fight" and current ~= "Loader" then Quests.checkDeliveries() end
		end
	end)
	Menus.onEnergyPress = function()
		if Quests.fire("EnergyBarPress") then Quests.run() end
	end
	local function boot()
		current = "Loader"
		Quests.start(function()
			-- the game opens on the dojo; the first scene change comes from the loader
			Quests.changeTab("Loader", "Dojo", function() show("Dojo") end)
		end)
	end
	Menus.onRestart = function()
		Quests.reset()
		boot()
	end
	boot()
end

return Game
