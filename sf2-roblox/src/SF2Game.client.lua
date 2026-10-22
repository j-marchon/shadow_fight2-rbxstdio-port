-- Shadow Fight 2 (Roblox port): the game client. Screens are SF2.Game modules; this script only starts it.

local ReplicatedStorage = game:GetService("ReplicatedStorage")
local Players = game:GetService("Players")

local SF2 = ReplicatedStorage:WaitForChild("SF2")
local Game = require(SF2:WaitForChild("Game"))

-- hide the default avatar: park it anchored out of view and make every part invisible
local function hide(d: Instance)
	if d:IsA("BasePart") or d:IsA("Decal") then
		(d :: any).Transparency = 1
	end
end
local function hideCharacter(character: Model)
	for _, d in character:GetDescendants() do hide(d) end
	character.DescendantAdded:Connect(hide)
	local root = character:WaitForChild("HumanoidRootPart", 10) :: BasePart?
	if root then
		character:PivotTo(CFrame.new(0, 3, 300))
		root.Anchored = true
	end
end
if Players.LocalPlayer.Character then hideCharacter(Players.LocalPlayer.Character) end
Players.LocalPlayer.CharacterAdded:Connect(hideCharacter)

-- Studio-only test hook: Studio's MCP runs its own copy of every module, and its mouse injection does not
-- reach the game, so tests drive the live menus through this (PlayerGui.SF2Debug:Invoke("map", ...)).
if game:GetService("RunService"):IsStudio() then
	local hook = Instance.new("BindableFunction")
	hook.Name = "SF2Debug"
	hook.OnInvoke = function(fn: string, ...)
		local Menus = require(SF2:WaitForChild("Menus")) :: any
		return Menus[fn](...)
	end
	hook.Parent = Players.LocalPlayer:WaitForChild("PlayerGui")
end

Game.start()
