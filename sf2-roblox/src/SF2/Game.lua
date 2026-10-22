--!strict
-- The game flow: dojo / map / shop / profile menus (SF2.Menus) -> VS screen -> fights (SF2.FightScreen)
-- -> rewards and progress (SF2.Profile).
-- Battle rules (stages.xml battle types):
--  * TOURNAMENT, CHALLENGE, SURVIVAL: the fights in a row from the first not yet won, until one is lost;
--    SURVIVAL carries health between fights with the fight's HealthRecovery
--  * BOSSES: the next fight only (bodyguards one at a time, then the boss)
--  * PERIODIC (duel) and REPLAYABLE: one fight, picked at random once all are won
--  * a won fight pays its <Reward> (Money, Exp, Bonus, Items) and advances the battle; beating the act's
--    boss opens the next act (port rule: the game's map unlocks come from story quests)

local FightScreen = require(script.Parent.FightScreen)
local Stages = require(script.Parent.Stages)
local Xml = require(script.Parent.Xml)
local Profile = require(script.Parent.Profile)
local Menus = require(script.Parent.Menus)
local Warrior = require(script.Parent.Warrior)
local Sound = require(script.Parent.Sound)
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

-- Battle types whose <Fight> entries are played back to back in one visit, instead of one per entry.
-- A tournament is not one of them: stages.xml gives it 8 to 24 <Fight> entries with a single <Warrior>
-- each, which is the ladder of separate opponents you come back to the map between, and chaining them
-- turned a tournament into one long wave. The same goes for a challenge. Survival does chain, but
-- through the several enemies inside its single <Fight> (Stages.enemies draws them from the groups and
-- nextEnemy carries the health over), not through this table.
local CHAIN: { [string]: boolean } = {}

-- Play one fight; done(result, playerHealth)
local function playOne(zone: string, battle: any, fight: any, enemy: any, startHealth: number?, done: (any) -> ())
	local fightId = zone .. "|" .. (Xml.attr(battle, "Name") or "") .. "|" .. (Xml.attr(fight, "Name") or "1")
	local eclipse = string.find(Xml.attr(battle, "Name") or "", "_ECLIPSEMODE") ~= nil
	Quests.fire("FightEnter", { Fight = fightId, InEclipseMode = eclipse and 1 or 0 })
	local rules = Stages.rules(fight, eclipse)
	local player = Profile.warrior()
	player.add = rules.player
	enemy.add = rules.bot
	enemy.alignTo = Warrior.build(player).attributes
	local fightRules, overrides = Rules.prepare(rules.raw, { player, enemy }, eclipse)
	Menus.vs(player, enemy, 2.2, function()
		Menus.hide()
		local screen
		screen = FightScreen.run({
			player = player, enemy = enemy,
			location = Xml.attr(battle, "Location"), music = Xml.attr(fight, "Music") or Xml.attr(battle, "Music"),
			rounds = overrides.rounds or Xml.num(fight, "Rounds", 2),
			roundTime = overrides.roundTime or Xml.num(fight, "RoundTime", 99),
			enemyTactic = enemy.tactic, battleType = Xml.attr(battle, "Type"),
			rules = fightRules, timeoutWinner = overrides.timeoutWinner, invertJoystick = overrides.invertJoystick,
			noHealthBar = overrides.noHealthBar, darkness = overrides.darkness,
			startHealth = startHealth and { startHealth, 1 } or nil,
			onEnd = function(result)
				task.defer(function()
					local hp = screen.fight and screen.fight.engines[1].health or 1
					screen.destroy()
					if result.winner == 1 then
						-- progress first: FightEnd scripts test ?Fight[...].WinCount
						local bname = Xml.attr(battle, "Name") :: string
						local n = tonumber(Xml.attr(fight, "Name")) or 0
						if n > Profile.progress(zone, bname) and #Stages.enemies(fight, 1) <= 1 then
							Profile.setProgress(zone, bname, n)
						end
					end
					Quests.fire("FightEnd", { Fight = fightId, FightResult = result.winner == 1 and "Win" or "Loss" })
					done(result, hp)
				end)
			end,
		})
	end)
end

function Game.playBattle(zone: string, battle: any)
	local name = Xml.attr(battle, "Name") :: string
	local t = Xml.attr(battle, "Type") or ""
	local fights = Stages.fights(battle)
	if #fights == 0 then return end
	local d = Profile.get()
	local progress = Profile.progress(zone, name)
	local start = progress + 1
	if start > #fights then
		start = math.random(1, #fights) -- all won: replay one
	end
	local total = { money = 0, exp = 0, bonus = 0 }
	-- the end-of-fight screen after a win, or after a loss with Retry (EndFightContent's RetryButton)
	local function finish(levels: number, lost: { timeout: boolean? }?)
		Profile.save()
		if lost then
			Menus.endFight({ win = false, timeout = lost.timeout }, total, levels, function() Menus.map(zone) end,
				function() Game.playBattle(zone, battle) end)
		else
			Menus.rewards(total, levels, function() Menus.map(zone) end)
		end
	end
	local levels = 0
	local function fightAt(i: number, health: number?)
		local fight = fights[i]
		local enemies = Stages.enemies(fight, d.level)
		if #enemies == 0 then
			local base = Stages.baseFight(zone, battle, i)
			if base then enemies = Stages.enemies(base, d.level) end
		end
		if #enemies == 0 then finish(levels) return end
		local enemyIdx = 1
		local function nextEnemy(hp: number?)
			local enemy = enemies[enemyIdx]
			playOne(zone, battle, fight, enemy, hp, function(result, hpLeft)
				if result.winner == 1 then
					local r = Menus.reward(fight, string.find(name, "_ECLIPSEMODE") ~= nil)
					if t == "SURVIVAL" then
						local rewards = Xml.all(Xml.first(fight, "Rewards"), "Reward")
						local rr = rewards[enemyIdx + 1]
						if rr then r = { money = Xml.num(rr, "Money", 0), exp = Xml.num(rr, "Exp", 0), bonus = 0, items = {} } end
					end
					d.money += r.money or 0
					d.bonus += r.bonus or 0
					total.money += r.money or 0
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
					if i > Profile.progress(zone, name) then Profile.setProgress(zone, name, i) end
					if (t == "BOSSES") and i == #fights then
						-- the act's boss beaten: next act opens
						local acts = {}
						for _, z in Stages.zones() do if Xml.attr(z, "FileName") then table.insert(acts, Xml.attr(z, "Name")) end end
						local at = table.find(acts, zone)
						if at and acts[at + 1] then d.flags["zone_" .. acts[at + 1]] = true end
					end
					if CHAIN[t] and i < #fights then
						Profile.save()
						fightAt(i + 1)
						return
					end
					finish(levels)
				else
					-- nobody knocked out: the round clock decided it (Label_Timesup)
					local h = result.health
					finish(levels, { timeout = h ~= nil and h[1] > 0 and h[2] > 0 })
				end
			end)
		end
		nextEnemy(health)
	end
	fightAt(start)
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

function Game.start()
	hideWorld()
	flatLighting()
	local d = Profile.load()
	Xml.setLanguage(d.settings.language or "eng")
	Sound.setVolumes(d.settings.sound == 0 and 0 or 1, d.settings.music == 0 and 0 or 0.6)
	Menus.onPlay = function(zone, battle) Game.playBattle(zone, battle) end
	Menus.onTraining = function(mine, dummy) Game.training(mine, dummy) end
	Menus.dojo()
end

return Game
