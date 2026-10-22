-- Headless test (Studio Edit, MCP execute_luau): play the whole story through the quest scripts, the way
-- a player would, without drawing anything. Every dialog's main (Right) button is pressed, every fight a
-- quest or the map starts is won at once, and the "player" follows the tutorial's steps, then fights
-- each act's battles until the map has nothing left to win. Reports how far the story got (acts with
-- battles on the map, bosses beaten), the act screens shown, and any quest error. Runs in a task; poll
-- ServerStorage.TestResult.
local SS = game.ServerStorage
local old = SS:FindFirstChild("SF2Test") if old then old:Destroy() end
local T = game.ReplicatedStorage.SF2:Clone()
T.Name = "SF2Test"
T.Parent = SS
local res = SS:FindFirstChild("TestResult") or Instance.new("StringValue", SS)
res.Name = "TestResult"
res.Value = "running"
local MAX_STEPS = 4000
task.spawn(function()
	local errors, log = {}, {}
	local conn = game:GetService("LogService").MessageOut:Connect(function(msg, kind)
		if kind == Enum.MessageType.MessageWarning and string.find(msg, "SF2") then table.insert(errors, msg) end
	end)
	local ok, err = pcall(function()
		local Quests = require(T.Quests)
		local Profile = require(T.Profile)
		local Stages = require(T.Stages)
		local Xml = require(T.Xml)
		Profile.reset()
		local d = Profile.get()
		d.money, d.bonus = 10000000, 1000000
		local scene, returnTo = "Loader", "Map"
		local fights = {}
		local acts = {}
		Quests.auto = function(_dialog) return "Right" end
		local function show(s)
			scene = s
			Quests.sceneLoaded(s)
		end
		Quests.host = {
			scene = function() return scene end,
			changeScene = function(dest) if dest ~= "Fight" and dest ~= "" and dest ~= "0" then show(dest) end end,
			openShop = function() show("Shop") end,
			fight = function(id) table.insert(fights, id) end,
			mapFocus = function(b) local z = string.match(b, "^([^|]*)") if z then d.zone = z end end,
			setZone = function(z) d.zone = z end,
			actScreen = function(text) table.insert(acts, text) end,
			tutorial = function(step)
				if step == "StoryTutorialBuyItem" then
					Profile.give("WEAPON_KNIVES")
					Profile.equip("WEAPON_KNIVES")
				end
			end,
			refresh = function() end,
		}
		local function idle()
			repeat task.wait() until not Quests.busy()
			task.wait()
			repeat task.wait() until not Quests.busy()
		end
		local function go(to)
			Quests.changeTab(scene, to, function() show(to) end)
			idle()
		end
		Quests.start(function() Quests.changeTab("Loader", "Dojo", function() show("Dojo") end) end)
		idle()
		-- the next battle to fight: the open ones of the current act first, story types before the boss
		local ORDER = { TOURNAMENT = 1, CHALLENGE = 1, SURVIVAL = 2, BOSSES = 3, FINAL_BATTLE = 3, FINAL_BATTLE_TITAN = 3,
			BOSSES_INTERMISSION = 3 }
		local function pick()
			local best, bestRank
			for _, z in Stages.zones() do
				local zn = Xml.attr(z, "Name")
				for _, b in Stages.battles(z) do
					local bn = Xml.attr(b, "Name")
					local r = Profile.record(zn .. "|" .. bn)
					local rank = ORDER[Xml.attr(b, "Type") or ""]
					if r and not r.locked and not r.off and not r.hidden and rank and Xml.attr(b, "X") then
						local nfights = #Stages.fights(b)
						if nfights > 0 and Profile.progress(zn, bn) < nfights then
							local key = (zn == d.zone and 0 or 10) + rank
							if not bestRank or key < bestRank then best, bestRank = { zn, b }, key end
						end
					end
				end
			end
			return best
		end
		local steps, lastZone = 0, ""
		while steps < MAX_STEPS do
			steps += 1
			if d.zone ~= lastZone then
				table.insert(log, "zone " .. d.zone .. " at step " .. steps)
				lastZone = d.zone
			end
			if #fights > 0 then
				local id = table.remove(fights, 1)
				local f, b, zn, bn = Quests.fightOf(id)
				local levels = 0
				if f and b then
					local n = table.find(Stages.fights(b), f) or 0
					if n > Profile.progress(zn, bn) then Profile.setProgress(zn, bn, n) end
					local rw = Xml.all(Xml.first(f, "Rewards"), "Reward")
					levels = Profile.addExp(Xml.num(rw[2] or rw[1], "Exp", 0) or 0)
				else
					table.insert(errors, "no fight " .. tostring(id))
				end
				if scene ~= "Fight" then returnTo = scene end
				scene = "Fight"
				Quests.fightEnd(id, true, levels > 0)
				Quests.changeTab("Fight", returnTo, function() show(returnTo) end)
				idle()
			else
				local step = d.tutorial
				if step == "STEP_BUY_ITEM" and scene ~= "Shop" then go("Shop")
				elseif step == "MAP" and scene ~= "Map" then go("Map")
				elseif (step == "LEARN_PERK" or step == "SHOW_BLOCK") and scene ~= "Profile" then
					if d.level < 2 then d.level = 2 end
					go("Profile")
				elseif step == "SHOW_DOUBLE_SWEEP" and scene ~= "Dojo" then go("Dojo")
				else
					if scene ~= "Map" then go("Map") end
					local p = pick()
					if not p then break end
					local zn, b = p[1], p[2]
					local bn = Xml.attr(b, "Name")
					local list = Stages.fights(b)
					local i = Profile.progress(zn, bn) + 1
					local id = zn .. "|" .. bn .. "|" .. (Xml.attr(list[i], "Name") or tostring(i))
					d.zone = zn
					Quests.fightEnter(id, false, function() table.insert(fights, id) end)
					idle()
					if #fights == 0 then
						-- the quests took over and started nothing (a "leave" answer, a refusal): don't loop on it
						Profile.setProgress(zn, bn, Profile.progress(zn, bn) + 1)
						table.insert(log, "no fight started for " .. id)
					end
				end
			end
		end
		local opened, beaten = {}, {}
		for _, z in Stages.zones() do
			local zn = Xml.attr(z, "Name")
			local n = 0
			for k in d.records do if string.sub(k, 1, #zn + 1) == zn .. "|" then n += 1 end end
			if n > 0 then table.insert(opened, zn .. "(" .. n .. ")") end
			for _, b in Stages.battles(z) do
				local t = Xml.attr(b, "Type") or ""
				if (t == "BOSSES" or t == "FINAL_BATTLE" or t == "FINAL_BATTLE_TITAN") and Profile.progress(zn, Xml.attr(b, "Name")) >= #Stages.fights(b) then
					table.insert(beaten, zn .. "|" .. Xml.attr(b, "Name"))
				end
			end
		end
		res.Value = string.format("steps=%d tutorial=%s zone=%s\nacts opened: %s\nbosses beaten: %s\nact screens: %s\nlog: %s\nerrors(%d): %s",
			steps, d.tutorial, d.zone, table.concat(opened, " "), table.concat(beaten, " "), table.concat(acts, ", "),
			table.concat(log, "; "), #errors, table.concat(errors, "\n", 1, math.min(#errors, 30)))
	end)
	conn:Disconnect()
	if not ok then res.Value = "FAILED: " .. tostring(err) .. "\n" .. table.concat(errors, "\n") end
end)
