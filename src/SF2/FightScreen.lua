--!strict
-- The fight on screen: SF2.Fight simulation + location, fighters, effects, sounds and the original HUD.
--  * HUD from the game's own layouts: ViewerFight (health bars, names, avatars, rounds, timer, pause),
--    GameController (stick and Punch/Kick/Ranged/Magic buttons), ScreenFight (round banner),
--    PauseScreen, EndFightScreen
--  * announcements (internalSettings <Announcements Time="60"/>): round, fight, You win/lose, Time's up,
--    Critical, Head hit, Shock, Perfect - FightUI sprites in the middle of the screen
--  * keyboard: A/D/W/S or arrows move, J/Z punch, K/X kick, L/C ranged, I/V magic, Esc pause. The
--    phone stick jumps straight to a diagonal, so a lone key waits 3 ticks for its partner.
--  * camera: follows the fighters' midpoint (internalSettings <Camera>: centre of mass, MaxWidth 1100),
--    shows the location's height; ShakeScreen offsets it
-- FightScreen.run(config) -> handle; config.onEnd(result) is called once the result screen is over.

local RunService = game:GetService("RunService")
local UserInputService = game:GetService("UserInputService")
local Players = game:GetService("Players")

local Warrior = require(script.Parent.Warrior)
local Fight = require(script.Parent.Fight)
local Renderer = require(script.Parent.Renderer)
local Location = require(script.Parent.Location)
local Effects = require(script.Parent.Effects)
local Sound = require(script.Parent.Sound)
local UI = require(script.Parent.UI)
local Images = require(script.Parent.Images)
local Xml = require(script.Parent.Xml)

local FightScreen = {}

local TICK = 1 / 60
local SCALE = Renderer.SCALE
local ANNOUNCE_TICKS = 60
local MAX_WIDTH = 1100
local FOV = 20

local KEYMAP = {
	[Enum.KeyCode.A] = "left", [Enum.KeyCode.Left] = "left",
	[Enum.KeyCode.D] = "right", [Enum.KeyCode.Right] = "right",
	[Enum.KeyCode.W] = "up", [Enum.KeyCode.Up] = "up",
	[Enum.KeyCode.S] = "down", [Enum.KeyCode.Down] = "down",
}
local BUTTONS = {
	[Enum.KeyCode.J] = "Punch", [Enum.KeyCode.Z] = "Punch",
	[Enum.KeyCode.K] = "Kick", [Enum.KeyCode.X] = "Kick",
	[Enum.KeyCode.L] = "Ranged", [Enum.KeyCode.C] = "Ranged",
	[Enum.KeyCode.I] = "Magic", [Enum.KeyCode.V] = "Magic",
}
local DIR_NAMES = {
	["0,1"] = "Up", ["1,1"] = "Up-Right", ["1,0"] = "Right", ["1,-1"] = "Down-Right",
	["0,-1"] = "Down", ["-1,-1"] = "Down-Left", ["-1,0"] = "Left", ["-1,1"] = "Up-Left",
}
local DIAGONAL_GRACE = 3

local function isPartOf(part: string, whole: string): boolean
	return whole ~= part and string.find(whole, part, 1, true) ~= nil
end

-- config: {player = Warrior.Def, enemy = Warrior.Def, location, music, rounds, roundTime, battleType,
--          enemyTactic, rules/mods, startHealth, onEnd, title}
function FightScreen.run(config: any): any
	local player = Players.LocalPlayer
	local folder = Instance.new("Folder")
	folder.Name = "SF2Fight"
	folder.Parent = workspace

	local b1 = Warrior.build(config.player)
	local b2 = Warrior.build(config.enemy)
	local loc = Location.new(config.location, folder)
	local effects = Effects.new(folder)
	local renders: { [any]: any } = {}
	local self: any = { folder = folder, ended = false }

	-- HUD
	local gui = Instance.new("ScreenGui")
	gui.Name = "SF2FightHUD"
	gui.ResetOnSpawn = false
	gui.IgnoreGuiInset = true
	gui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
	gui.Parent = player:WaitForChild("PlayerGui")
	local canvas = UI.canvas(gui)
	local hud = UI.build("ViewerFight", canvas) :: any
	local controls = UI.build("GameController", canvas) :: any
	local banner = Instance.new("ImageLabel")
	banner.Name = "Announcement"
	banner.BackgroundTransparency = 1
	banner.AnchorPoint = Vector2.new(0.5, 0.5)
	banner.Position = UDim2.fromScale(0.5, 0.42)
	banner.ZIndex = 50
	banner.Visible = false
	banner.Parent = canvas
	local bannerTicks = 0
	local function announce(sprite: string, ticks: number?)
		local s = Images.sprite(sprite)
		if not s then return end
		Images.apply(banner, sprite)
		banner.ImageTransparency = 0
		banner.Size = UDim2.fromOffset(s.source.X, s.source.Y)
		banner.Visible = true
		bannerTicks = ticks or ANNOUNCE_TICKS
	end
	local roundNumber = Instance.new("TextLabel")
	roundNumber.BackgroundTransparency = 1
	roundNumber.AnchorPoint = Vector2.new(0, 0.5)
	roundNumber.Position = UDim2.new(1, 20, 0.5, 0)
	roundNumber.Size = UDim2.fromOffset(160, 200)
	roundNumber.FontFace = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Bold)
	roundNumber.TextSize = 190
	roundNumber.TextColor3 = Color3.fromRGB(255, 236, 160)
	roundNumber.TextStrokeTransparency = 0.3
	roundNumber.Text = ""
	roundNumber.Parent = banner

	local function find(b: any, path: string): any
		return b and b:find(path)
	end
	local function setText(node: any, text: string)
		local t = node and node:FindFirstChild("Text")
		if t then t.Text = text end
	end
	local function warriorName(def: any): string
		return string.upper(Xml.text(def.name or ""))
	end
	setText(find(hud, "Models/Name_left"), warriorName(config.player))
	setText(find(hud, "Models/Name_right"), warriorName(config.enemy))
	for side, def in { left = config.player, right = config.enemy } do
		local av = find(hud, "Models/Avatar_" .. side)
		if av and def.avatar then UI.setSprite(av, def.avatar) end
	end
	for _, p in { "Models/WinFightButton_left", "Models/WinFightButton_right", "Models/PlayerLifeLevel_right" } do
		local n = find(hud, p)
		if n then n.Visible = false end
	end
	local bars = {}
	for i, side in { "left", "right" } do
		local health = find(hud, "Models/PlayerLifeBar_" .. side .. "/BarPanel/HealthBar")
		local hit = find(hud, "Models/PlayerLifeBar_" .. side .. "/BarPanel/HitBar")
		for _, b in { health, hit } do
			if b and side == "right" then b:SetAttribute("fillOrigin", 1) end
		end
		bars[i] = { health = health, hit = hit, shown = 1 }
	end
	-- round marks: one circle per win needed
	local roundMarks = { {}, {} }
	for i, side in { "left", "right" } do
		local panel = find(hud, "Models/RoundsPanel_" .. side)
		if panel then
			local layout = Instance.new("UIListLayout")
			layout.FillDirection = Enum.FillDirection.Horizontal
			layout.HorizontalAlignment = side == "left" and Enum.HorizontalAlignment.Right or Enum.HorizontalAlignment.Left
			layout.VerticalAlignment = Enum.VerticalAlignment.Center
			layout.Padding = UDim.new(0, 6)
			layout.Parent = panel
			for r = 1, config.rounds or 2 do
				local m = Instance.new("ImageLabel")
				m.BackgroundTransparency = 1
				m.Size = UDim2.fromOffset(44, 44)
				m.LayoutOrder = side == "left" and -r or r
				m.ZIndex = 10
				Images.apply(m, "FightUI.Round_Undone")
				m.Parent = panel
				roundMarks[i][r] = m
			end
		end
	end
	local timerLabel = find(hud, "RoundTimer")
	local magicBtn, rangedBtn = find(controls, "ActionButtons/BtnMagic"), find(controls, "ActionButtons/BtnRanged")
	local raidBtn = find(controls, "LeftContainer/BtnRaidCharge")
	if raidBtn then raidBtn.Visible = false end
	if magicBtn then magicBtn.Visible = b1.items.Magic ~= "NoMagic" end
	if rangedBtn then rangedBtn.Visible = b1.items.Ranged ~= "NoRanged" end

	-- fight
	local hooks = {}
	local fight = Fight.new({
		warriors = { b1, b2 }, rounds = config.rounds or 2, roundTime = config.roundTime or 99,
		location = config.location, battleType = config.battleType, mods = config.mods,
		startHealth = config.startHealth, noBulletsRefill = config.noBulletsRefill, hooks = hooks,
	})
	self.fight = fight
	for i, e in fight.engines do
		renders[e] = Renderer.new(e.fighter, folder, i == 1 and 0 or -0.5)
	end
	hooks.childAdded = function(c)
		renders[c] = Renderer.new(c.fighter, folder, 0.1)
	end
	hooks.childRemoved = function(c)
		local r = renders[c]
		if r then r:destroy(); renders[c] = nil end
	end
	hooks.sound = function(name, opts) Sound.play(name, opts) end
	hooks.stopSound = function(name) Sound.stop(name) end
	hooks.effect = function(e, el) effects:fromAction(e, el) end
	hooks.stopEffect = function(e, name) effects:stop(e, name) end
	hooks.hitEffect = function(e, file)
		local x, y = e:nodePos(e.pivotSlot)
		effects:play({ sequence = file, x = x, y = y + 120, facing = e.facing })
	end
	hooks.hitPicture = function(pic, x, y, att)
		effects:play({ sequence = pic, x = x, y = y, facing = att.facing })
	end
	local shake = { t = 0, total = 0, ax = 0, ay = 0, fx = 1, fy = 1 }
	hooks.shake = function(s)
		shake.t, shake.total, shake.ax, shake.ay, shake.fx, shake.fy = s.time, s.time, s.ax, s.ay, s.fx, s.fy
	end
	local firstStrike = false
	hooks.hit = function(att, tgt, hit)
		local root = att:root()
		if hit.critical then announce("FightUI.Critical")
		elseif hit.shock then announce("FightUI.shock")
		elseif hit.head and not hit.blocked and root.player == 1 then announce("FightUI.Head_Hit") end
		if not firstStrike and not hit.blocked then
			firstStrike = true
			if root.player == 1 then announce("FightUI.First_Strike") end
		end
	end
	hooks.roundStart = function(r)
		firstStrike = false
		effects:clear()
		announce("FightUI.round", 100)
		roundNumber.Text = tostring(r)
	end
	hooks.stage = function(stage)
		if stage == "Fight" then
			roundNumber.Text = ""
			announce("FightUI.fight", 50)
			Sound.play("snd_gong")
		end
	end
	hooks.roundEnd = function(winner, reason, round)
		roundNumber.Text = ""
		if reason == "Timeout" then
			announce("FightUI.timesup", 90)
		elseif winner == 1 and fight.engines[1].health >= 1 then
			announce("FightUI.perfect", 90)
		end
		if winner > 0 then
			local m = roundMarks[winner][fight.wins[winner]]
			if m then Images.apply(m, "FightUI.Round_Done") end
		end
	end
	hooks.fightEnd = function(result)
		self.result = result
		announce(result.winner == 1 and "FightUI.youwin" or "FightUI.youlose", 150)
		if result.winner == 1 then Sound.play("snd_win") end
		task.delay(3, function()
			if self.ended then return end
			self.ended = true
			if config.onEnd then config.onEnd(result) end
		end)
	end

	-- enemy controller: the AI when present
	local okAI, AI = pcall(require, script.Parent:FindFirstChild("AI"))
	if okAI and AI and AI.new then
		local ok, ctl = pcall(AI.new, fight, 2, config.enemyTactic or "Standard")
		if ok and ctl then fight.controllers[2] = ctl end
	end
	if config.playerAI and okAI and AI and AI.new then
		fight.controllers[1] = AI.new(fight, 1, "Standard")
	end
	if config.music then Sound.music(config.music) end

	-- input
	local held = { left = false, right = false, up = false, down = false }
	local currentDir: string? = nil
	local pendingDir: string? = nil
	local pendingTicks = 0
	local stickDir: { number }? = nil
	local function press(k: string) fight:press(1, k) end
	local function release(k: string) fight:release(1, k) end
	local function commitPending()
		if pendingDir then press(pendingDir); pendingDir = nil end
	end
	local function directionName(): string?
		local h = (held.right and 1 or 0) - (held.left and 1 or 0)
		local v = (held.up and 1 or 0) - (held.down and 1 or 0)
		if stickDir then h, v = stickDir[1], stickDir[2] end
		if h == 0 and v == 0 then return nil end
		return DIR_NAMES[h .. "," .. v]
	end
	local function updateDirection(asPress: boolean)
		local d = directionName()
		local old = pendingDir or currentDir
		if d == old then return end
		if pendingDir then
			if d == nil or not isPartOf(pendingDir, d) then commitPending() end
			pendingDir = nil
		end
		if currentDir then release(currentDir) end
		local prev = currentDir
		currentDir = d
		if not d then return end
		if not asPress or (prev and isPartOf(d, prev)) then
			fight.engines[1].keys:hold(d)
		elseif string.find(d, "-", 1, true) or stickDir then
			press(d)
		else
			pendingDir, pendingTicks = d, 0
		end
	end
	local paused = false
	local pauseUI: any = nil
	local function setPaused(on: boolean)
		paused = on
		if pauseUI then pauseUI.root:Destroy(); pauseUI = nil end
		if on then
			pauseUI = UI.build("PauseScreen", canvas)
			if pauseUI then
				pauseUI.root.ZIndex = 100
				local play = pauseUI:find("Content/Buttons/Panel/Play")
				local home = pauseUI:find("Content/Buttons/Panel/Home")
				for _, b in { play, home } do
					if b and b:IsA("GuiButton") then
						b.Activated:Connect(function()
							if b == play then setPaused(false) else self:quit() end
						end)
					end
				end
			end
		end
	end
	local conns = {}
	table.insert(conns, UserInputService.InputBegan:Connect(function(input, processed)
		if processed then return end
		if input.KeyCode == Enum.KeyCode.Escape or input.KeyCode == Enum.KeyCode.P then
			setPaused(not paused)
			return
		end
		local dir = KEYMAP[input.KeyCode]
		if dir then
			held[dir] = true
			updateDirection(true)
			return
		end
		local b = BUTTONS[input.KeyCode]
		if b then
			commitPending()
			press(b)
		end
	end))
	table.insert(conns, UserInputService.InputEnded:Connect(function(input)
		local dir = KEYMAP[input.KeyCode]
		if dir then
			held[dir] = false
			updateDirection(true)
			return
		end
		local b = BUTTONS[input.KeyCode]
		if b then release(b) end
	end))
	-- on-screen buttons
	for name, key in { BtnPunch = "Punch", BtnKick = "Kick", BtnRanged = "Ranged", BtnMagic = "Magic" } do
		local btn = find(controls, "ActionButtons/" .. name)
		if btn and btn:IsA("GuiObject") then
			btn.Active = true
			table.insert(conns, btn.InputBegan:Connect(function(input)
				if input.UserInputType == Enum.UserInputType.Touch or input.UserInputType == Enum.UserInputType.MouseButton1 then
					commitPending()
					press(key)
				end
			end))
			table.insert(conns, btn.InputEnded:Connect(function(input)
				if input.UserInputType == Enum.UserInputType.Touch or input.UserInputType == Enum.UserInputType.MouseButton1 then
					release(key)
				end
			end))
		end
	end
	local pauseBtn = find(hud, "PauseButton")
	if pauseBtn and pauseBtn:IsA("GuiButton") then
		table.insert(conns, pauseBtn.Activated:Connect(function() setPaused(not paused) end))
	end
	-- stick: drag inside the left container; the knob follows within its ring, 8 directions
	local stick = find(controls, "LeftContainer/Stick")
	local knob = find(controls, "LeftContainer/Stick/StickNormal")
	local stickInput: InputObject? = nil
	local stickCenter = Vector2.zero
	local function stickUpdate(pos: Vector2)
		local d = pos - stickCenter
		local scale = UI.scaleOf(canvas)
		local dead = 40 * scale
		local h, v = 0, 0
		if d.Magnitude > dead then
			local a = math.atan2(-d.Y, d.X)
			local sector = math.floor((a + math.pi / 8) / (math.pi / 4)) % 8
			local dirs = { { 1, 0 }, { 1, 1 }, { 0, 1 }, { -1, 1 }, { -1, 0 }, { -1, -1 }, { 0, -1 }, { 1, -1 } }
			h, v = dirs[sector + 1][1], dirs[sector + 1][2]
		end
		stickDir = (h ~= 0 or v ~= 0) and { h, v } or nil
		if knob then
			local m = math.min(d.Magnitude, 160 * scale)
			local off = d.Magnitude > 0 and d.Unit * m / scale or Vector2.zero
			knob.Position = UDim2.new(0.5, off.X, 0.5, off.Y)
		end
		updateDirection(true)
	end
	if stick then
		stick.Active = true
		table.insert(conns, stick.InputBegan:Connect(function(input)
			if input.UserInputType == Enum.UserInputType.Touch or input.UserInputType == Enum.UserInputType.MouseButton1 then
				stickInput = input
				stickCenter = stick.AbsolutePosition + stick.AbsoluteSize / 2
				stickUpdate(Vector2.new(input.Position.X, input.Position.Y))
			end
		end))
		table.insert(conns, UserInputService.InputChanged:Connect(function(input)
			if stickInput and (input == stickInput or input.UserInputType == Enum.UserInputType.MouseMovement) then
				stickUpdate(Vector2.new(input.Position.X, input.Position.Y))
			end
		end))
		table.insert(conns, UserInputService.InputEnded:Connect(function(input)
			if stickInput and (input == stickInput or input.UserInputType == Enum.UserInputType.MouseButton1) then
				stickInput = nil
				stickDir = nil
				if knob then knob.Position = UDim2.fromScale(0.5, 0.5) end
				updateDirection(true)
			end
		end))
	end

	-- camera
	local camX, camW = 0, 0
	local cam = workspace.CurrentCamera
	local function updateCamera(dt: number)
		cam.CameraType = Enum.CameraType.Scriptable
		-- SF2 draws in 2D; Location corrects its layers for this camera's perspective
		cam.FieldOfView = FOV
		local a, b = fight.engines[1], fight.engines[2]
		local ax = a.fighter.px[a.slots.NPivot] or 0
		local bx = b.fighter.px[b.slots.NPivot] or 0
		local mid = (ax + bx) / 2
		local half = (cam.ViewportSize.X / math.max(cam.ViewportSize.Y, 1)) * 256
		mid = math.clamp(mid, fight.wallMin - 150 + half, fight.wallMax + 150 - half)
		camX += (mid - camX) * math.min(1, dt * 6)
		camW = math.max(camW, math.abs(ax - bx))
		local sx, sy = 0, 0
		if shake.t > 0 then
			local k = shake.t / math.max(shake.total, 1)
			local t = (shake.total - shake.t)
			sx = math.sin(t * shake.fx) * shake.ax * k
			sy = math.sin(t * shake.fy) * shake.ay * k
		end
		local cy = (loc.centerY or 176)
		-- show the location's height (512 units) at FOV 20
		local dist = (256 * SCALE) / math.tan(math.rad(FOV / 2))
		local cx = (camX + sx) * SCALE
		cam.CFrame = CFrame.lookAt(Vector3.new(cx, (cy + sy) * SCALE, dist), Vector3.new(cx, (cy + sy) * SCALE, 0))
		loc:update(camX + sx, dt, dist, (cy + sy) * SCALE)
	end

	-- main loop
	local accumulator = 0
	table.insert(conns, RunService.PreSimulation:Connect(function(dt)
		if self.ended then return end
		accumulator += math.min(dt, 0.25)
		while accumulator >= TICK do
			accumulator -= TICK
			if paused then continue end
			if pendingDir then
				pendingTicks += 1
				if pendingTicks >= DIAGONAL_GRACE then commitPending() end
			end
			fight:tick()
			if shake.t > 0 then shake.t -= 1 end
			if bannerTicks > 0 then
				bannerTicks -= 1
				if bannerTicks == 0 then banner.Visible = false end
			end
		end
		for _, r in renders do r:render() end
		effects:update(dt)
		updateCamera(dt)
		-- HUD
		for i, e in fight.engines do
			local bar = bars[i]
			bar.shown += (e.health - bar.shown) * math.min(1, dt * 3)
			if e.health > bar.shown then bar.shown = e.health end
			if bar.health then UI.setFill(bar.health, e.health) end
			if bar.hit then UI.setFill(bar.hit, bar.shown) end
		end
		if timerLabel then setText(timerLabel, tostring(fight:secondsLeft())) end
		local me = fight.engines[1]
		if magicBtn then
			local prog = magicBtn:FindFirstChild("Progress")
			local full = magicBtn:FindFirstChild("Complete")
			if prog then UI.setFill(prog, me.magicCharge or 0) end
			if full then full.Visible = (me.bullets.MagicBullet or 0) >= 1 end
		end
		if rangedBtn then
			local full = rangedBtn:FindFirstChild("Complete")
			if full then full.Visible = (me.rangedLeft or 0) > 0 end
		end
	end))

	function self.quit(_)
		if self.ended then return end
		self.ended = true
		if config.onEnd then config.onEnd({ winner = 2, quit = true, wins = fight.wins }) end
	end

	function self.destroy(_)
		self.ended = true
		for _, c in conns do c:Disconnect() end
		for _, r in renders do r:destroy() end
		effects:clear()
		loc:destroy()
		folder:Destroy()
		gui:Destroy()
		Sound.stopAll()
	end
	return self
end

return FightScreen
