--!strict
-- The game shell: which screen is up, and the flow between them.
-- (Grows into the full menu flow; for now it plays Act 1 fights back to back.)

local FightScreen = require(script.Parent.FightScreen)
local Stages = require(script.Parent.Stages)
local Xml = require(script.Parent.Xml)

local Game = {}

local PLAYER = {
	name = "NAME_SHADOW", avatar = "avatar_hero", voice = "Male", level = 1,
	items = { Weapon = "Fists", Armor = "Body", Helm = "Head", Ranged = "NoRanged", Magic = "NoMagic" },
}
Game.player = PLAYER

-- Play one fight of a battle (zone/battle/fight index) and call done(result)
function Game.playFight(zone: string, battle: string, index: number, done: (any) -> ())
	local b = Stages.battle(zone, battle)
	local fights = Stages.fights(b)
	local f = fights[index]
	local enemies = Stages.enemies(f, PLAYER.level)
	local rules = Stages.rules(f)
	local enemy = enemies[1]
	local player = table.clone(PLAYER)
	player.add = rules.player
	enemy.add = rules.bot
	local screen
	screen = FightScreen.run({
		player = player, enemy = enemy,
		location = Xml.attr(b, "Location"), music = Xml.attr(b, "Music"),
		rounds = Xml.num(f, "Rounds", 2), roundTime = Xml.num(f, "RoundTime", 99),
		enemyTactic = enemy.tactic, battleType = Xml.attr(b, "Type"),
		onEnd = function(result)
			task.defer(function()
				screen.destroy()
				done(result)
			end)
		end,
	})
end

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

-- SF2 is flat 2D art: no haze, blur, bloom or sun rays over it (the camera sits far away, see FightScreen)
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

function Game.start()
	hideWorld()
	flatLighting()
	local i = 1
	local function nextFight()
		local fights = Stages.fights(Stages.battle("ZONE_1", "Tournament"))
		Game.playFight("ZONE_1", "Tournament", i, function(result)
			if result.winner == 1 then i = i % #fights + 1 end
			nextFight()
		end)
	end
	nextFight()
end

return Game
