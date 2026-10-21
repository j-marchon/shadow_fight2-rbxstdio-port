-- SF2 Phase 4: playable fighter driven by the original move rules (moves.xml), with strikes, blocks and
-- hit reactions, vs a sparring dummy.
-- Controls: A/D or Left/Right = move (towards the opponent is Forward), W/Up = up, S/Down = down,
--           J or Z = Punch, K or X = Kick. Diagonals combine (e.g. W+D = Up-Right).
--           Dummy: 1 = stand (blocks), 2 = punches, 3 = kicks, 4 = sweeps, 5 = walks in and punches.
-- Weapons: the "Weapons" button (top right) opens the arsenal: every weapon in the game, grouped by act,
--          with a column for you and one for the dummy. Each has its own model and move set (the weapon
--          replaces the punch moves, kicks stay).

local ReplicatedStorage = game:GetService("ReplicatedStorage")
local RunService = game:GetService("RunService")
local UserInputService = game:GetService("UserInputService")
local Players = game:GetService("Players")

local SF2 = ReplicatedStorage:WaitForChild("SF2")
local Fighter = require(SF2.Fighter)
local Renderer = require(SF2.Renderer)
local MoveEngine = require(SF2.MoveEngine)
local Combat = require(SF2.Combat)
local Arsenal = require(SF2.Arsenal)

local TICK = 1 / 60
local SCALE = Renderer.SCALE
local folder = Instance.new("Folder")
folder.Name = "SF2Fight"
folder.Parent = workspace

local function makeFighter(x: number, facing: number, player: number, depth: number, w: Arsenal.Weapon)
	local f = Fighter.new(Arsenal.rig(w))
	f.wallMin, f.wallMax = -1200, 1200
	local engine = MoveEngine.new(f, Arsenal.moveSet(w), Arsenal.loadout(w), player)
	engine.weapon = w.name
	engine.weaponId = w.id
	engine:spawn(x, facing)
	local r = Renderer.new(f, folder, depth)
	return engine, r
end

local me, meRender = makeFighter(-200, 1, 1, 0, Arsenal.byId.Fists)
local enemy, enemyRender = makeFighter(200, -1, 2, -0.5, Arsenal.byId.Fists)
me.enemy, enemy.enemy = enemy, me

-- Swap a fighter's weapon: rebuild it where it stands, facing the same way
local function equip(who: string, w)
	local old = who == "me" and me or enemy
	local x = old.fighter.px[old.slots.NPivot]
	if who == "me" then
		meRender:destroy()
		me, meRender = makeFighter(x, old.facing, 1, 0, w)
	else
		enemyRender:destroy()
		enemy, enemyRender = makeFighter(x, old.facing, 2, -0.5, w)
	end
	me.enemy, enemy.enemy = enemy, me
end

-- Input: physical keys -> screen directions and buttons
local held = { left = false, right = false, up = false, down = false }
local currentDir: string? = nil
local KEYMAP = {
	[Enum.KeyCode.A] = "left", [Enum.KeyCode.Left] = "left",
	[Enum.KeyCode.D] = "right", [Enum.KeyCode.Right] = "right",
	[Enum.KeyCode.W] = "up", [Enum.KeyCode.Up] = "up",
	[Enum.KeyCode.S] = "down", [Enum.KeyCode.Down] = "down",
}
local BUTTONS = {
	[Enum.KeyCode.J] = "Punch", [Enum.KeyCode.Z] = "Punch",
	[Enum.KeyCode.K] = "Kick", [Enum.KeyCode.X] = "Kick",
}
-- Screen directions; each candidate move reads them as Forward/Back for the way it would face
local DIR_NAMES = {
	["0,1"] = "Up", ["1,1"] = "Up-Right", ["1,0"] = "Right", ["1,-1"] = "Down-Right",
	["0,-1"] = "Down", ["-1,-1"] = "Down-Left", ["-1,0"] = "Left", ["-1,1"] = "Up-Left",
}

local function directionName(): string?
	local h = (held.right and 1 or 0) - (held.left and 1 or 0)
	local v = (held.up and 1 or 0) - (held.down and 1 or 0)
	if h == 0 and v == 0 then return nil end
	return DIR_NAMES[h .. "," .. v]
end

-- Keyboard -> joystick. The phone stick jumps straight to a diagonal; two keys never go down on the
-- same tick, so a lone direction waits DIAGONAL_GRACE ticks for its partner before it is pressed.
-- Letting go of one key of a diagonal slides to the remaining direction without a new tap.
local DIAGONAL_GRACE = 3
local pendingDir: string? = nil
local pendingTicks = 0

local function commitPending()
	if pendingDir then
		me.keys:press(pendingDir)
		pendingDir = nil
	end
end

local function isPartOf(part: string, whole: string): boolean
	return whole ~= part and string.find(whole, part, 1, true) ~= nil
end

local function updateDirection(asPress: boolean)
	local d = directionName()
	local old = pendingDir or currentDir
	if d == old then return end
	if pendingDir then
		-- not pressed yet: a quick tap still has to reach the buffer before it is let go
		if d == nil or not isPartOf(pendingDir, d) then commitPending() end
		pendingDir = nil
	end
	if currentDir then me.keys:release(currentDir) end
	local prev = currentDir
	currentDir = d
	if not d then return end
	if not asPress or (prev and isPartOf(d, prev)) then
		me.keys:hold(d) -- facing changed, or one key of a diagonal let go: no new tap
	elseif string.find(d, "-", 1, true) then
		me.keys:press(d)
	else
		pendingDir, pendingTicks = d, 0
	end
end

-- Sparring dummy: presses keys on its own buffer every DUMMY_PERIOD ticks (the AI comes in Phase 5)
local DUMMY_PERIOD = 90
local DUMMY_KEYS = {
	[Enum.KeyCode.One] = "stand", [Enum.KeyCode.Two] = "punch", [Enum.KeyCode.Three] = "kick",
	[Enum.KeyCode.Four] = "sweep", [Enum.KeyCode.Five] = "rush",
}
local dummyMode, dummyTimer = "stand", 0
local function towardsMe(): string
	return me.fighter.px[me.slots.NPivot] < enemy.fighter.px[enemy.slots.NPivot] and "Left" or "Right"
end
local function dummyTick()
	dummyTimer += 1
	local k = enemy.keys
	local t = dummyTimer % DUMMY_PERIOD
	if dummyMode == "punch" then
		if t == 0 then k:press("Punch") elseif t == 2 then k:release("Punch") end
	elseif dummyMode == "kick" then
		if t == 0 then k:press("Kick") elseif t == 2 then k:release("Kick") end
	elseif dummyMode == "sweep" then
		if t == 0 then k:press("Down") elseif t == 2 then k:press("Kick") elseif t == 4 then k:release("Kick")
		elseif t == 30 then k:release("Down") end
	elseif dummyMode == "rush" then
		local dist = math.abs(me.fighter.px[me.slots.NPivot] - enemy.fighter.px[enemy.slots.NPivot])
		local dir = towardsMe()
		if dist > 260 then
			if not k.down[dir] then k:press(dir) end
		else
			if k.down.Left then k:release("Left") end
			if k.down.Right then k:release("Right") end
			if t % 45 == 0 then k:press("Punch") elseif t % 45 == 2 then k:release("Punch") end
		end
	end
end

UserInputService.InputBegan:Connect(function(input, processed)
	if processed then return end
	local dir = KEYMAP[input.KeyCode]
	if dir then
		held[dir] = true
		updateDirection(true)
		return
	end
	local mode = DUMMY_KEYS[input.KeyCode]
	if mode then
		dummyMode, dummyTimer = mode, 0
		return
	end
	local b = BUTTONS[input.KeyCode]
	if b then
		commitPending() -- Up + Punch: the direction must be down before the button
		me.keys:press(b)
	end
end)
UserInputService.InputEnded:Connect(function(input)
	local dir = KEYMAP[input.KeyCode]
	if dir then
		held[dir] = false
		updateDirection(true)
		return
	end
	local b = BUTTONS[input.KeyCode]
	if b then me.keys:release(b) end
end)

-- HUD
local gui = Instance.new("ScreenGui")
gui.Name = "SF2FightGui"
gui.ResetOnSpawn = false
local label = Instance.new("TextLabel")
label.Size = UDim2.new(0, 620, 0, 150)
label.Position = UDim2.new(0, 12, 0, 12)
label.BackgroundTransparency = 0.35
label.BackgroundColor3 = Color3.new(1, 1, 1)
label.TextColor3 = Color3.new(0, 0, 0)
label.Font = Enum.Font.Code
label.TextSize = 15
label.TextXAlignment = Enum.TextXAlignment.Left
label.TextYAlignment = Enum.TextYAlignment.Top
label.Parent = gui
gui.Parent = Players.LocalPlayer:WaitForChild("PlayerGui")

-- Weapon menu (the arsenal): a "Weapons" button shows or hides it. Tabs pick an act or category; below,
-- one column for you and one for the dummy, scrolling when the group is long.
local MENU_W, ROW_H, COL_W = 300, 30, 140
local toggle = Instance.new("TextButton")
toggle.Name = "WeaponToggle"
toggle.Size = UDim2.new(0, 120, 0, 30)
toggle.Position = UDim2.new(1, -132, 0, 12)
toggle.Font = Enum.Font.GothamBold
toggle.TextSize = 14
toggle.Text = "Weapons [+]"
toggle.BackgroundColor3 = Color3.fromRGB(40, 40, 40)
toggle.TextColor3 = Color3.new(1, 1, 1)
toggle.Parent = gui

local menu = Instance.new("Frame")
menu.Name = "WeaponMenu"
menu.Size = UDim2.new(0, MENU_W, 1, -66)
menu.Position = UDim2.new(1, -(MENU_W + 12), 0, 48)
menu.BackgroundTransparency = 0.35
menu.BackgroundColor3 = Color3.new(1, 1, 1)
menu.Visible = false
menu.Parent = gui
toggle.Activated:Connect(function()
	menu.Visible = not menu.Visible
	toggle.Text = menu.Visible and "Weapons [-]" or "Weapons [+]"
end)

-- group tabs, wrapping into rows
local tabs = Instance.new("Frame")
tabs.Name = "Groups"
tabs.BackgroundTransparency = 1
tabs.Position = UDim2.new(0, 6, 0, 6)
tabs.Size = UDim2.new(1, -12, 0, 0)
tabs.AutomaticSize = Enum.AutomaticSize.Y
tabs.Parent = menu
local grid = Instance.new("UIGridLayout")
grid.CellSize = UDim2.new(0, 92, 0, 22)
grid.CellPadding = UDim2.new(0, 4, 0, 4)
grid.SortOrder = Enum.SortOrder.LayoutOrder
grid.Parent = tabs
local tabRows = math.ceil(#Arsenal.groups / 3)
local headerY = 6 + tabRows * 26 + 4

for col, who in { "me", "enemy" } do
	local title = Instance.new("TextLabel")
	title.Size = UDim2.new(0, COL_W, 0, 24)
	title.Position = UDim2.new(0, 6 + (col - 1) * (COL_W + 8), 0, headerY)
	title.BackgroundTransparency = 1
	title.Font = Enum.Font.GothamBold
	title.TextSize = 14
	title.Text = who == "me" and "YOU" or "DUMMY"
	title.Parent = menu
end
local list = Instance.new("ScrollingFrame")
list.Name = "List"
list.Position = UDim2.new(0, 0, 0, headerY + 26)
list.Size = UDim2.new(1, 0, 1, -(headerY + 32))
list.BackgroundTransparency = 1
list.BorderSizePixel = 0
list.ScrollBarThickness = 6
list.AutomaticCanvasSize = Enum.AutomaticSize.Y
list.CanvasSize = UDim2.new()
list.Parent = menu

local menuButtons = { me = {}, enemy = {} }
local tabButtons = {}
local currentGroup = Arsenal.groups[1].name
local function refreshMenu()
	for who, buttons in menuButtons do
		local current = (who == "me" and me or enemy).weaponId
		for id, button in buttons do
			button.BackgroundColor3 = id == current and Color3.fromRGB(40, 40, 40) or Color3.fromRGB(230, 230, 230)
			button.TextColor3 = id == current and Color3.new(1, 1, 1) or Color3.new(0, 0, 0)
		end
	end
	for name, button in tabButtons do
		button.BackgroundColor3 = name == currentGroup and Color3.fromRGB(40, 40, 40) or Color3.fromRGB(200, 200, 200)
		button.TextColor3 = name == currentGroup and Color3.new(1, 1, 1) or Color3.new(0, 0, 0)
	end
end
local function showGroup(group)
	currentGroup = group.name
	list:ClearAllChildren()
	menuButtons = { me = {}, enemy = {} }
	for col, who in { "me", "enemy" } do
		for i, w in group.weapons do
			local b = Instance.new("TextButton")
			b.Name = who .. "_" .. w.id
			b.Size = UDim2.new(0, COL_W, 0, ROW_H - 4)
			b.Position = UDim2.new(0, 6 + (col - 1) * (COL_W + 8), 0, (i - 1) * ROW_H)
			b.Font = Enum.Font.Gotham
			b.TextSize = 12
			b.TextTruncate = Enum.TextTruncate.AtEnd
			b.Text = w.name
			b.AutoButtonColor = true
			b.Parent = list
			menuButtons[who][w.id] = b
			b.Activated:Connect(function()
				equip(who, w)
				refreshMenu()
			end)
		end
	end
	list.CanvasPosition = Vector2.zero
	refreshMenu()
end
for i, group in Arsenal.groups do
	local t = Instance.new("TextButton")
	t.Name = "Tab_" .. group.name
	t.LayoutOrder = i
	t.Font = Enum.Font.GothamMedium
	t.TextSize = 11
	t.Text = string.format("%s (%d)", group.name, #group.weapons)
	t.TextTruncate = Enum.TextTruncate.AtEnd
	t.Parent = tabs
	tabButtons[group.name] = t
	t.Activated:Connect(function()
		showGroup(group)
	end)
end
showGroup(Arsenal.groups[1])

-- Camera: side-on, follows the midpoint between fighters
local cameraX = 0
RunService:BindToRenderStep("SF2Camera", Enum.RenderPriority.Camera.Value + 1, function()
	local cam = workspace.CurrentCamera
	cam.CameraType = Enum.CameraType.Scriptable
	cam.FieldOfView = 20
	local mx = (me.fighter.px[me.slots.NPivot] + enemy.fighter.px[enemy.slots.NPivot]) * 0.5 * SCALE
	cameraX += (mx - cameraX) * 0.1
	cam.CFrame = CFrame.lookAt(Vector3.new(cameraX, 4, 52), Vector3.new(cameraX, 4, 0))
end)

-- Hide the default avatar: park it anchored behind the camera and make every part invisible, including
-- accessories that load later (LocalTransparencyModifier would be reset by the default camera scripts)
local function hide(d: Instance)
	if d:IsA("BasePart") then
		d.Transparency = 1
	elseif d:IsA("Decal") then
		d.Transparency = 1
	end
end
local function hideCharacter(character: Model)
	for _, d in character:GetDescendants() do hide(d) end
	character.DescendantAdded:Connect(hide)
	local root = character:WaitForChild("HumanoidRootPart", 10) :: BasePart?
	if root then
		character:PivotTo(CFrame.new(0, 3, 120))
		root.Anchored = true
	end
end
if Players.LocalPlayer.Character then hideCharacter(Players.LocalPlayer.Character) end
Players.LocalPlayer.CharacterAdded:Connect(hideCharacter)

-- Fixed 60 Hz simulation
local accumulator = 0
local fightTick = 0
RunService.PreSimulation:Connect(function(dt)
	accumulator += dt
	while accumulator >= TICK do
		accumulator -= TICK
		if pendingDir then
			pendingTicks += 1
			if pendingTicks >= DIAGONAL_GRACE then commitPending() end
		end
		dummyTick()
		me:tick()
		enemy:tick()
		-- strikes after both poses are final for this tick; reactions start next tick
		fightTick += 1
		Combat.exchange(me, enemy, fightTick)
		-- sparring only (rounds come in Phase 6): a knocked-out fighter gets full health once up again
		for _, e in { me, enemy } do
			if e.health <= 0 and e.move.labelSet.GetUp then e.health = 1 end
		end
	end
	meRender:render()
	enemyRender:render()
	local function hitText(e)
		local h = e.lastHit
		if not h then return "-" end
		return string.format("%s%s%s on %s%s", (h.head and not h.blocked) and "HEAD HIT " or "",
			h.type ~= "" and (h.type .. " ") or "", h.name, h.edge, h.blocked and " (in block)" or "")
	end
	label.Text = string.format(
		"YOU [%s]: %s  (keyframe %d/%d)  facing %s  HP %d%%\nrecent: %s\ntaps {%s}  held {%s}   last hit taken: %s\n"
			.. "DUMMY [%s, %s]: %s  HP %d%%   last hit taken: %s\nrecent: %s\n"
			.. "A/D move  W up  S down  J punch  K kick   dummy: 1 stand 2 punch 3 kick 4 sweep 5 rush",
		me.weapon, me.move.name, me.c, me.lastFrame, me.facing > 0 and "right" or "left", math.floor(me.health * 100 + 0.5),
		table.concat(me.log, " > "), table.concat(me.keys.taps, ","), table.concat(me.keys.held, ","), hitText(me),
		enemy.weapon, dummyMode, enemy.move.name, math.floor(enemy.health * 100 + 0.5), hitText(enemy), table.concat(enemy.log, " > "))
end)
