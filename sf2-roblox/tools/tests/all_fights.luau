-- Headless test (Studio Edit, MCP execute_luau): every fight of every act, built the way Game does it
-- (stages.xml warriors, rules), run for TICKS ticks with scripted keys on both sides. Reports errors, NaN,
-- and how many fights reached a result. Runs in a task; poll ServerStorage.TestResult.
local SS = game.ServerStorage
local old = SS:FindFirstChild("SF2Test") if old then old:Destroy() end
local T = game.ReplicatedStorage.SF2:Clone()
T.Name = "SF2Test"
T.Parent = SS
local res = SS:FindFirstChild("TestResult") or Instance.new("StringValue", SS)
res.Name = "TestResult"
res.Value = "running"
local TICKS = 900
task.spawn(function()
	local Stages = require(T.Stages)
	local Warrior = require(T.Warrior)
	local Fight = require(T.Fight)
	local Rules = require(T.Rules)
	local Xml = require(T.Xml)
	local errors, nan, total, decided = {}, 0, 0, 0
	local keys = { "Punch", "Kick", "Ranged", "Magic", "Down", "Up" }
	for _, zone in Stages.zones() do
		local zname = Xml.attr(zone, "Name")
		for _, battle in Stages.battles(zone) do
			for fi, fight in Stages.fights(battle) do
				total += 1
				local ok, err = pcall(function()
					local rules = Stages.rules(fight)
					local enemy = Stages.enemies(fight, 10)[1]
					local player = { name = "NAME_SHADOW", level = 10, items = { Weapon = "WEAPON_KNIVES", Ranged = "RANGED_FISH" } }
					player.add = rules.player
					enemy.add = rules.bot
					enemy.alignTo = Warrior.build(player).attributes
					local fr, ov = Rules.prepare(rules.raw, { player, enemy })
					local f = Fight.new({ warriors = { Warrior.build(player), Warrior.build(enemy) },
						rounds = ov.rounds or Xml.num(fight, "Rounds", 2), roundTime = 10,
						location = Xml.attr(battle, "Location"), rules = fr })
					for i = 1, 2 do
						f.controllers[i] = function(fight, side)
							local t = (fight.ticks + side * 7) % 30
							if t == 0 then fight:press(side, keys[((fight.ticks // 30) + side) % #keys + 1])
							elseif t == 4 then for _, k in keys do fight:release(side, k) end end
						end
					end
					for _ = 1, TICKS do
						f:tick()
						if f.over then break end
					end
					for _, e in f.engines do
						local x = e.fighter.px[1]
						if x ~= x then nan += 1 end
					end
					if f.over or f.round > 1 then decided += 1 end
				end)
				if not ok then
					table.insert(errors, zname .. "|" .. tostring(Xml.attr(battle, "Name")) .. "|" .. fi .. ": " .. tostring(err))
				end
				if total % 20 == 0 then
					res.Value = string.format("running %d fights, %d errors", total, #errors)
					task.wait()
				end
			end
		end
	end
	res.Value = string.format("fights=%d errors=%d nan=%d decided=%d\n%s", total, #errors, nan, decided,
		table.concat(errors, "\n"):sub(1, 3500))
end)
return "started"
