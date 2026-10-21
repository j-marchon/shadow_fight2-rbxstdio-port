-- SF2 Phase 2 viewer: one fighter, real SF2 rig + animations + cloth physics at the original 60 Hz tick.
-- Keys: Right/Left = next/previous move, Space = pause, F = single step (while paused), R = restart move,
--       Up/Down = playback speed (for frame-by-frame comparison with the phone).

local ReplicatedStorage = game:GetService("ReplicatedStorage")
local RunService = game:GetService("RunService")
local UserInputService = game:GetService("UserInputService")
local Players = game:GetService("Players")

local SF2 = ReplicatedStorage:WaitForChild("SF2")
local Fighter = require(SF2.Fighter)
local Renderer = require(SF2.Renderer)
local AnimClip = require(SF2.AnimClip)
local moves = require(SF2.Data.Moves)
local rig = require(SF2.Data.Rigs.Shadow)

local TICK = 1 / 60 -- TimeManager Fixed Timestep (FightScene.FixedUpdate -> Fight tick)
local SCALE = Renderer.SCALE

local folder = Instance.new("Folder")
folder.Name = "SF2Viewer"
folder.Parent = workspace

local fighter = Fighter.new(rig)
fighter.wallMin, fighter.wallMax = -2000, 2000
local renderer = Renderer.new(fighter, folder)

-- Pivot slot used to keep each move centered (stand-in for <Align> until the moves engine exists)
local PIVOT = 0
for i, node in rig.nodes do
	if node.name == "NPivot" then
		PIVOT = i
		break
	end
end

local moveIndex = 1
-- Playback state: keyframe segment c, sub-step k of `steps` (= MidFrames + 1 ticks per keyframe)
local clip, c, k, steps, offsetX = nil :: any, 0, 1, 3, 0
local paused, stepOnce, speed = false, false, 1

local function startMove(i: number)
	moveIndex = (i - 1) % #moves + 1
	local mv = moves[moveIndex]
	clip = AnimClip.load(mv.file)
	c, k = 0, 1
	steps = (mv.mid or 2) + 1
	local x0 = clip:getPosition(0, PIVOT)
	local newOffset = -x0
	fighter:translate(newOffset - offsetX, 0) -- carry cloth along instead of snapping it
	offsetX = newOffset
end

-- UI
local gui = Instance.new("ScreenGui")
gui.Name = "SF2ViewerGui"
gui.ResetOnSpawn = false
local label = Instance.new("TextLabel")
label.Size = UDim2.new(0, 520, 0, 64)
label.Position = UDim2.new(0, 12, 0, 12)
label.BackgroundTransparency = 0.35
label.BackgroundColor3 = Color3.new(1, 1, 1)
label.TextColor3 = Color3.new(0, 0, 0)
label.Font = Enum.Font.Code
label.TextSize = 16
label.TextXAlignment = Enum.TextXAlignment.Left
label.TextYAlignment = Enum.TextYAlignment.Top
label.Parent = gui
gui.Parent = Players.LocalPlayer:WaitForChild("PlayerGui")

-- Side-on camera, narrow FOV to approximate SF2's orthographic view.
-- Re-applied every frame after Roblox's camera scripts, which otherwise reset it to follow the avatar.
local CAMERA_CF = CFrame.lookAt(Vector3.new(0, 4, 48), Vector3.new(0, 4, 0))
RunService:BindToRenderStep("SF2Camera", Enum.RenderPriority.Camera.Value + 1, function()
	local camera = workspace.CurrentCamera
	camera.CameraType = Enum.CameraType.Scriptable
	camera.FieldOfView = 20
	camera.CFrame = CAMERA_CF
end)

-- Hide the default character so it doesn't block the view
local function hideCharacter(character: Model)
	for _, d in character:GetDescendants() do
		if d:IsA("BasePart") then
			d.LocalTransparencyModifier = 1
		end
	end
	character:PivotTo(CFrame.new(0, 3, 60))
end
if Players.LocalPlayer.Character then hideCharacter(Players.LocalPlayer.Character) end
Players.LocalPlayer.CharacterAdded:Connect(hideCharacter)

UserInputService.InputBegan:Connect(function(input, processed)
	if processed then return end
	local k = input.KeyCode
	if k == Enum.KeyCode.Right then startMove(moveIndex + 1)
	elseif k == Enum.KeyCode.Left then startMove(moveIndex - 1)
	elseif k == Enum.KeyCode.Space then paused = not paused
	elseif k == Enum.KeyCode.F then stepOnce = true
	elseif k == Enum.KeyCode.R then startMove(moveIndex)
	elseif k == Enum.KeyCode.Up then speed = math.min(speed * 2, 4)
	elseif k == Enum.KeyCode.Down then speed = math.max(speed / 2, 1 / 16)
	end
end)

startMove(1)
-- Let cloth settle on the first pose before showing anything
for _ = 1, 120 do
	fighter:tick(clip, 0, 0, steps, offsetX, 0)
end

local accumulator = 0
RunService.PreSimulation:Connect(function(dt)
	if paused and not stepOnce then
		renderer:render()
	else
		accumulator += dt * speed
		if stepOnce then accumulator = TICK; stepOnce = false end
		while accumulator >= TICK do
			accumulator -= TICK
			fighter:tick(clip, c, k, steps, offsetX, 0)
			k += 1
			if k > steps then
				k = 1
				c += 1
				if c >= clip.frames - 1 then c = 0 end -- last segment reached: loop the move
			end
		end
		renderer:render()
	end
	local mv = moves[moveIndex]
	label.Text = string.format("[%d/%d] %s  (%s)  %s\nkeyframe %d/%d  step %d/%d (MidFrames %d)   speed x%g   %s\n<-/-> move  Space pause  F step  R restart  Up/Down speed",
		moveIndex, #moves, mv.name, mv.file, mv.type, c, clip.frames - 1, k, steps, steps - 1, speed, paused and "PAUSED" or "")
end)
