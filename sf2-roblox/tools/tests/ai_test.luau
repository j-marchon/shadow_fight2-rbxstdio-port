-- Headless AI test (Studio command bar / MCP execute_luau, edit mode).
-- Expects game.ServerStorage.SF2Test = a fresh clone of ReplicatedStorage.SF2 (with Data.Tactics installed).
-- Two knife fighters (level 5), both driven by SF2.AI, 2 rounds to win, 99 s rounds, dojo.
-- Reports rounds, the winner, attacks started per side, AI decision kinds and any errors.

local SF2 = game.ServerStorage.SF2Test
local Warrior = require(SF2.Warrior)
local Fight = require(SF2.Fight)
local AI = require(SF2.AI)

local MAX_TICKS = 6000
local TACTICS = { "Standard", "Standard" }

local errors = {}
local function err(where: string, e: any)
	if #errors < 20 then table.insert(errors, where .. ": " .. tostring(e)) end
end

local t0 = os.clock()
local b1 = Warrior.build({ items = { Weapon = "WEAPON_KNIVES" }, level = 5 })
local b2 = Warrior.build({ items = { Weapon = "WEAPON_KNIVES" }, level = 5 })
local fight = Fight.new({ warriors = { b1, b2 }, rounds = 2, roundTime = 99, location = "dojo" })

local ais = {}
local tBuild = os.clock() - t0
local tSetup = os.clock()
for i = 1, 2 do
	local ok, ctl, obj = pcall(AI.new, fight, i, TACTICS[i], { seed = 1000 + i })
	if ok then
		fight.controllers[i] = ctl
		ais[i] = obj
	else
		err("AI.new " .. i, ctl)
	end
end
tSetup = os.clock() - tSetup

-- attacks started: count move starts of Type="ATTACK" on each fighter
local attacks = { 0, 0 }
local moves = { 0, 0 }
local last = { nil, nil } :: { any }
local lastC = { -1, -1 }
local rounds = {}
fight.hooks.roundEnd = function(winner, reason, round)
	table.insert(rounds, ("round %d: winner %d (%s) at tick %d"):format(round, winner, reason, fight.ticks))
end

local ticks = 0
local tickTime = 0
for n = 1, MAX_TICKS do
	local s = os.clock()
	local ok, e = pcall(fight.tick, fight)
	tickTime += os.clock() - s
	ticks = n
	if not ok then
		err("tick " .. n, e)
		if #errors >= 20 then break end
	end
	for i = 1, 2 do
		local en = fight.engines[i]
		local m = en.move
		if m and (m ~= last[i] or en.c < lastC[i]) then
			moves[i] += 1
			if m.type == "ATTACK" then attacks[i] += 1 end
		end
		last[i] = m
		lastC[i] = en.c
	end
	if fight.over then break end
end

local lines = {}
local function out(s: string) table.insert(lines, s) end
out(("setup: build+fight %.2fs, AI.new %.2fs; %d ticks in %.2fs (%.3f ms/tick incl. engines)")
	:format(tBuild, tSetup, ticks, tickTime, 1000 * tickTime / math.max(ticks, 1)))
for _, r in rounds do out(r) end
if fight.result then
	out(("fight over: winner %d, wins %d-%d, rounds %d, health %.2f / %.2f"):format(fight.result.winner,
		fight.result.wins[1], fight.result.wins[2], fight.result.rounds, fight.result.health[1], fight.result.health[2]))
else
	out(("fight not over after %d ticks: round %d, stage %s, wins %d-%d, health %.2f / %.2f"):format(ticks, fight.round,
		fight.stage, fight.wins[1], fight.wins[2], fight.engines[1].health, fight.engines[2].health))
end
for i = 1, 2 do
	local a = ais[i]
	local kinds = {}
	if a then
		for k, v in a.stats.byKind do table.insert(kinds, k .. "=" .. v) end
		table.sort(kinds)
		local fl = {}
		for k, v in a.stats.flow or {} do table.insert(fl, k .. "=" .. v) end
		table.sort(fl)
		table.insert(kinds, "| ticks: " .. table.concat(fl, " "))
	end
	out(("P%d %s [%s vs %s tables]: attacks started %d, moves %d, hits %d, AI decisions %d (started %d, attacks %d, blocks %d, dodges %d) {%s}")
		:format(i, TACTICS[i], a and a.myWeapon or "?", a and a.enemyWeapon or "?", attacks[i], moves[i], fight.stats.hits[i],
			a and a.stats.decisions or 0, a and a.stats.started or 0, a and a.stats.attacks or 0, a and a.stats.blocks or 0,
			a and a.stats.dodges or 0, table.concat(kinds, " ")))
end
out(("errors: %d"):format(#errors))
for _, e in errors do out("  " .. e) end
local report = table.concat(lines, "\n")
print(report)
return report
