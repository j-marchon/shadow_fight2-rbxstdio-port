-- Studio Edit-mode harness: loads src/SF2 over HTTP into ReplicatedStorage.SF2Test, plays scripted
-- inputs and reports ticks where the body centre jumps (snap) plus the moves each script produced.
local RS = game:GetService("ReplicatedStorage")
local Http = game:GetService("HttpService")
local t = RS:FindFirstChild("SF2Test"); if t then t:Destroy() end
t = RS.SF2:Clone(); t.Name = "SF2Test"; t.Parent = RS
for _, n in { "KeyBuffer", "MoveEngine", "Fighter", "AnimClip" } do
	t[n].Source = Http:GetAsync("http://127.0.0.1:8765/src/SF2/" .. n .. ".lua?" .. os.clock())
end
t.Data.MoveSet_Shadow.Source = Http:GetAsync("http://127.0.0.1:8765/out/MoveSet_Shadow.lua?" .. os.clock())
local Fighter = require(t.Fighter); local ME = require(t.MoveEngine)
local rig = require(t.Data.Rigs.Shadow); local ms = require(t.Data.MoveSet_Shadow)
local LO = { { Name = "Skeleton", Type = "Skeleton", SubType = "Skeleton" }, { Name = "Fists", Type = "Weapon", SubType = "Fists" } }

-- script: { [tick] = { "+Key" / "-Key" ... } }
local SCRIPTS = {
	hold_fwd = { [5] = { "+Forward" }, [90] = { "-Forward" } },
	hold_back = { [5] = { "+Back" }, [90] = { "-Back" } },
	back_tap = { [5] = { "+Back" }, [8] = { "-Back" } },
	up = { [5] = { "+Up" }, [9] = { "-Up" } },
	down = { [5] = { "+Down" }, [40] = { "-Down" } },
	up_punch = { [5] = { "+Up" }, [7] = { "+Punch" }, [9] = { "-Punch", "-Up" } },
	down_kick = { [5] = { "+Down" }, [7] = { "+Kick" }, [9] = { "-Kick" }, [30] = { "-Down" } },
	fwd_back = { [5] = { "+Forward" }, [30] = { "-Forward", "+Back" }, [60] = { "-Back" } },
	punch_then_up = { [5] = { "+Punch" }, [7] = { "-Punch" }, [40] = { "+Up" }, [43] = { "-Up" } },
	punch_then_down = { [5] = { "+Punch" }, [7] = { "-Punch" }, [40] = { "+Down" }, [70] = { "-Down" } },
	combo_late = { [5] = { "+Forward" }, [6] = { "+Punch" }, [8] = { "-Punch" }, [19] = { "+Punch" }, [21] = { "-Punch" }, [60] = { "-Forward" } },
	combo_early = { [5] = { "+Forward" }, [6] = { "+Punch" }, [8] = { "-Punch" }, [9] = { "+Punch" }, [11] = { "-Punch" }, [60] = { "-Forward" } },
	up_fwd = { [5] = { "+Up-Forward" }, [9] = { "-Up-Forward" } },
	down_hold_punch = { [5] = { "+Down" }, [30] = { "+Punch" }, [32] = { "-Punch" }, [60] = { "-Down" } },
	heavy = { [5] = { "+Forward" }, [6] = { "+Punch" }, [8] = { "-Punch" }, [12] = { "-Forward" } },
	combo = { [5] = { "+Forward" }, [6] = { "+Punch" }, [8] = { "-Punch" }, [14] = { "+Punch" }, [16] = { "-Punch" }, [60] = { "-Forward" } },
}
local function centre(f)
	local s = 0
	for i = 1, f.animated do s += f.px[i] end
	return s / f.animated
end
local report = {}
for name, sc in SCRIPTS do
	local a = ME.new(Fighter.new(rig), ms, LO, 1); local b = ME.new(Fighter.new(rig), ms, LO, 2)
	a.enemy, b.enemy = b, a
	a:spawn(-200, 1); b:spawn(200, -1)
	local seen, jumps, last = {}, {}, centre(a.fighter)
	for i = 1, 200 do
		for _, ev in sc[i] or {} do
			local k = ev:sub(2)
			if ev:sub(1, 1) == "+" then a.keys:press(k) else a.keys:release(k) end
		end
		local before = a.move.name
		a:tick(); b:tick()
		local c = centre(a.fighter)
		if math.abs(c - last) > 10 then table.insert(jumps, string.format("t%d %s>%s %+.0f", i, before, a.move.name, c - last)) end
		last = c
		if seen[#seen] ~= a.move.name then table.insert(seen, a.move.name) end
	end
	table.insert(report, name .. ": " .. table.concat(seen, ">") .. (#jumps > 0 and ("\n   JUMPS " .. table.concat(jumps, "; ")) or ""))
end
t:Destroy()
table.sort(report)
return table.concat(report, "\n")
