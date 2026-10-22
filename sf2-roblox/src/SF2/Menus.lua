--!strict
-- The menu screens, each built from the prefabs its original scene mounts (UI.build), with only the
-- behaviour written here:
--  * every menu scene: MainMenu (top bar, the roll-down section scroll in the corner)
--  * dojo: the dojo in 3D with your warrior; map: StoryMapContainer + InfoBattle + MapButtonsPanel
--  * shop: scene_level4_Shop + ShopBottomPanel + ShopTableViewCell rows
--  * profile: scene_level7_Profile + ProfileBottomPanel, PerkCell / TrickCell rows
--  * settings: SettingsDialog over the current screen; end of a fight: EndFightScreen + EndFightContent
-- Deviations are noted at each screen and in the port README's UI section.

local Players = game:GetService("Players")
local UI = require(script.Parent.UI)
local W = require(script.Parent.Widgets)
local Xml = require(script.Parent.Xml)
local Items = require(script.Parent.Items)
local Stages = require(script.Parent.Stages)
local Profile = require(script.Parent.Profile)
local Warrior = require(script.Parent.Warrior)
local Sound = require(script.Parent.Sound)
local Location = require(script.Parent.Location)
local Showcase = require(script.Parent.Showcase)
local Images = require(script.Parent.Images)

local Menus = {}

local gui: ScreenGui? = nil
local canvas: Frame? = nil
local layer: Frame? = nil -- the current screen's widgets
local scene: any = nil -- {location, showcase, folder}
Menus.onPlay = nil :: ((zone: string, battle: any) -> ())?
Menus.onNavigate = nil :: ((scene: string) -> ())?
Menus.onRestart = nil :: (() -> ())?
Menus.onDisciple = nil :: ((on: boolean) -> ())?
Menus.discipleOn = nil :: (() -> boolean)?
Menus.onLeaveScene = nil :: (() -> ())? -- a screen the game doesn't know about replaces the scene
local menuRoot: any = nil -- the current scene's MainMenu
Menus.onEnergyPress = nil :: (() -> ())?
Menus.onPurchase = nil :: ((item: string) -> ())?
Menus.onDeliveryDue = nil :: (() -> ())?

local function root(): (ScreenGui, Frame)
	if not gui then
		local g = Instance.new("ScreenGui")
		g.Name = "SF2Menu"
		-- UI.build gives a node its sibling index as ZIndex, the way Unity stacks children, so the whole
		-- screen has to compare ZIndex within a parent. Left on Global, a layout's later top-level pieces
		-- (a scroll's frame and rolls) painted over everything nested deeper, item rows included.
		g.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
		g.ResetOnSpawn = false
		g.IgnoreGuiInset = true
		g.DisplayOrder = 5
		g.Parent = Players.LocalPlayer:WaitForChild("PlayerGui")
		gui = g
		canvas = UI.canvas(g)
	end
	return gui :: ScreenGui, canvas :: Frame
end

function Menus.hide()
	if gui then gui.Enabled = false end
	if scene then
		if scene.showcase then scene.showcase.destroy() end
		if scene.location then scene.location:destroy() end
		if scene.folder then scene.folder:Destroy() end
		if scene.conn then scene.conn:Disconnect() end
		scene = nil
	end
end

local function clear(): Frame
	local _, c = root()
	;(gui :: ScreenGui).Enabled = true
	if layer then layer:Destroy() end
	Images.releaseScreen()
	local f = Instance.new("Frame")
	f.Name = "Screen"
	f.BackgroundTransparency = 1
	f.Size = UDim2.fromScale(1, 1)
	f.Parent = c
	layer = f
	return f
end

-- 3D backdrop: a location with the player's warrior in the middle, camera fixed on it
-- where the shop stands the warrior: left of the scroll, as in the original (game units; 1 canvas unit is
-- a third of one at the menu camera)
local SHOP_WARRIOR_X = -260

local function setScene(locationName: string?, showWarrior: boolean, def: any?, warriorX: number?)
	if scene then
		if scene.showcase then scene.showcase.destroy() end
		if scene.location then scene.location:destroy() end
		if scene.folder then scene.folder:Destroy() end
		if scene.conn then scene.conn:Disconnect() end
	end
	scene = nil
	if not locationName then return end
	-- the place's default Baseplate and SpawnLocation sit behind the 2D scene and show past its edges;
	-- hide rather than delete them, since they belong to the place and not to the port
	for _, n in { "Baseplate", "SpawnLocation" } do
		local p = workspace:FindFirstChild(n)
		if p and p:IsA("BasePart") then p.Transparency = 1 end
	end
	local folder = Instance.new("Folder")
	folder.Name = "SF2MenuScene"
	folder.Parent = workspace
	local loc = Location.new(locationName, folder)
	local sc = showWarrior and Showcase.new(def or Profile.warrior(), folder, warriorX or 0, 1) or nil
	local cam = workspace.CurrentCamera
	local dist = (256 / 40) / math.tan(math.rad(10))
	local conn = game:GetService("RunService").RenderStepped:Connect(function(dt)
		cam.CameraType = Enum.CameraType.Scriptable
		cam.FieldOfView = 20
		local cy = (loc.centerY or 176) / 40
		cam.CFrame = CFrame.lookAt(Vector3.new(0, cy, dist), Vector3.new(0, cy, 0))
		loc:update(0, dt, dist, cy)
	end)
	scene = { folder = folder, location = loc, showcase = sc, conn = conn }
end

---------------------------------------------------------------- helpers for built layouts

-- A node the layout marks as a button comes out as an ImageButton, but not every tappable thing in the
-- original carries a Button component -- the side panels' flag tabs are plain Images the panel script
-- listens on. Give anything that isn't already a button a transparent one over it.
local function clickable(o: any): any
	if o:IsA("GuiButton") then return o end
	local hit = Instance.new("TextButton")
	hit.Text = ""
	hit.BackgroundTransparency = 1
	hit.Size = UDim2.fromScale(1, 1)
	hit.ZIndex = o.ZIndex + 1
	hit.Parent = o
	return hit
end

local function onClick(o: any, fn: () -> (), sound: string?)
	if not o then return end
	clickable(o).Activated:Connect(function()
		Sound.play(sound or "snd_click_1")
		fn()
	end)
end

-- the TextLabel of a built text node (a node named "Text" carries its own "Text" label)
local function textOf(o: Instance?): TextLabel?
	local t = o
	while t and not t:IsA("TextLabel") do t = t:FindFirstChild("Text") end
	return t :: TextLabel?
end

local function setText(o: Instance?, text: string)
	local t = textOf(o)
	if t then t.Text = text end
end

local function hideAll(b: any, names: { string })
	for _, n in names do
		local o = b and b:find(n)
		if o then o.Visible = false end
	end
end

-- "1 000 000", the way the original's labels group digits
local function group(n: number): string
	local s = tostring(math.floor(n))
	local neg = string.sub(s, 1, 1) == "-"
	if neg then s = string.sub(s, 2) end
	local out = string.reverse((string.gsub(string.reverse(s), "(%d%d%d)", "%1 ")))
	out = string.gsub(out, "^ ", "")
	return (neg and "-" or "") .. out
end

-- A count the way the labels show it: grouped digits ("12 345"), as the original's "#,###0", up to
-- 99 999; past that K, M, B and T with one decimal ("123.4K", "11.4T"). Port deviation: the original's
-- int counters never get that big and it always prints the full number, which overflows the labels.
local SUFFIXES = { { 1e12, "T" }, { 1e9, "B" }, { 1e6, "M" }, { 1e3, "K" } }
local function fmt(n: number): string
	n = math.floor(n)
	if math.abs(n) < 100000 then return group(n) end
	for _, u in SUFFIXES do
		if math.abs(n) >= u[1] then
			local v = math.floor(n / u[1] * 10) / 10
			local s = math.abs(v) >= 100 and tostring(math.floor(v)) or string.format("%.1f", v)
			return (string.gsub(s, "%.0$", "")) .. u[2]
		end
	end
	return group(n)
end
Menus.fmt = fmt

-- The localized text of a key whose value may point at another key ("%DoubleSweep")
local function loc(key: string?): string
	local t = Xml.text(key)
	if string.sub(t, 1, 1) == "%" then t = Xml.text(string.sub(t, 2)) end
	return t
end

---------------------------------------------------------------- main menu (MainMenu prefab)
-- Every menu scene mounts the MainMenu prefab: the top bar (experience, coins, gems, laid out by the
-- bar's own HorizontalLayoutGroups) and the section scroll in the top-left corner. The scroll is rolled
-- up to its wheel; tapping the wheel unrolls it in 0.3 s (MenuScroll.OnMenuBtnClick) over a darkening
-- backdrop that rolls it up again when tapped (OnBackgroundClick). The current section's button shows
-- its _active sprite and is not interactable (MainMenu.SetCurrentButton).

local TweenService = game:GetService("TweenService")
local SECTIONS = { "Dojo", "Map", "Shop", "Profile", "Settings" }
local SCROLL_LENGTH = 1240 -- the Scroll rect's height in the prefab, its fully unrolled length
local SCROLL_TIME = 0.3 -- MenuScroll's tween duration

-- DOTween Ease.InOutCirc (MainMenu._F2P_SpacerWidthLerpParams.Ease = 22)
local function inOutCirc(t: number): number
	if t < 0.5 then return (1 - math.sqrt(1 - (2 * t) ^ 2)) / 2 end
	return (math.sqrt(1 - (-2 * t + 2) ^ 2) + 1) / 2
end

local function mainMenu(parent: Instance, section: string): any
	local m = UI.build("MainMenu", parent)
	if not m then return nil end
	local d = Profile.get()
	-- pieces with nothing behind them here: energy (raid/event modes), the raid rating, the forge
	-- materials, the tutorial's skip button and input blocker, the ruby sale badge and the server value
	hideAll(m, {
		"Content/StaticPanel/RaidRaiting", "Content/MaterialsPanel",
		"SkipTutBtn", "MenuBlocker", "Content/SceneTitlePanel",
		"Content/StaticPanel/MoneyPanel/BonusInfoGroup/RubyServerValue",
		"Content/StaticPanel/MoneyPanel/BtnRubyInfo/RubySale",
		"Content/StaticPanel/ExperiencePanel/BarExp/HintRoot",
	})

	-- experience: off in the prefab, MenuExpPanel shows it in every menu scene
	local exp = m:find("Content/StaticPanel/ExperiencePanel")
	if exp then
		exp.Visible = true
		local maxed = d.level >= Profile.maxLevel()
		setText(m:find("Content/StaticPanel/ExperiencePanel/LabelLevel"), tostring(d.level))
		local stripe = m:find("Content/StaticPanel/ExperiencePanel/BarExp/BarStripe")
		if stripe then
			stripe:SetAttribute("fillMethod", "horizontal")
			UI.setFill(stripe, maxed and 1 or math.clamp(d.exp / math.max(1, Profile.expToNext(d.level)), 0, 1))
		end
		local maxIcon = m:find("Content/StaticPanel/ExperiencePanel/IconMaxLevel")
		if maxIcon then maxIcon.Visible = maxed end
	end
	-- the LabelLevel node carries a Text component the dump records without its settings
	local lvl = textOf(m:find("Content/StaticPanel/ExperiencePanel/LabelLevel"))
	if not lvl then
		local host = m:find("Content/StaticPanel/ExperiencePanel/LabelLevel")
		if host then
			local t = Instance.new("TextLabel")
			t.Name = "Text"
			t.BackgroundTransparency = 1
			t.Size = UDim2.fromScale(1, 1)
			t.FontFace = W.FONT
			t.TextColor3 = Color3.new(1, 1, 1)
			t.TextScaled = true
			t.Text = tostring(d.level)
			t.ZIndex = host.ZIndex
			t.Parent = host
		end
	end

	-- energy (MenuEnergyPanel): off in the prefab, shown in every menu scene. The StepBar shows the points
	-- left of the 5 (Profile.power); tapping it fires EnergyBarPress (energy.xml's refill dialogs). The
	-- unlimited-energy icon is the paid state, which the port has no way to buy.
	local energy = m:find("Content/StaticPanel/EnergyPanel")
	if energy then
		energy.Visible = true
		local maxIcon = m:find("Content/StaticPanel/EnergyPanel/EnergyMaxIcon")
		if maxIcon then maxIcon.Visible = false end
		local stripe = m:find("Content/StaticPanel/EnergyPanel/EnergyBar/BarStripe")
		local function refreshPower()
			local cur, max = Profile.power()
			if stripe and stripe.Parent then
				stripe:SetAttribute("fillMethod", "horizontal")
				UI.setFill(stripe, cur / math.max(1, max))
			end
		end
		refreshPower()
		task.spawn(function()
			while stripe and stripe.Parent do
				task.wait(1)
				refreshPower()
			end
		end)
		onClick(m:find("Content/StaticPanel/EnergyPanel/DlgBtn"), function()
			if Menus.onEnergyPress then Menus.onEnergyPress() end
		end)
	end

	-- coins and gems
	setText(m:find("Content/StaticPanel/MoneyPanel/CoinInfoGroup/CoinsLabel"), fmt(d.money))
	setText(m:find("Content/StaticPanel/MoneyPanel/BonusInfoGroup/RubyLabel"), fmt(d.bonus))
	local function toShop()
		if Menus.onNavigate then Menus.onNavigate("Shop") else Menus.shop() end
	end
	onClick(m:find("Content/StaticPanel/MoneyPanel/GoToShopBtn"), toShop)
	onClick(m:find("Content/StaticPanel/MoneyPanel/BtnRubyInfo/BtnRuby"), toShop)

	-- F2P spacers: MainMenu lerps their width from 0 to 300 as the aspect goes from 1.23 to 2.0
	local cam = workspace.CurrentCamera
	local aspect = cam.ViewportSize.X / math.max(1, cam.ViewportSize.Y)
	local spacer = 300 * inOutCirc(math.clamp((aspect - 1.23) / (2.0 - 1.23), 0, 1))
	for _, n in { "Content/StaticPanel/F2P_LeftSpace", "Content/StaticPanel/F2P_RightSpace" } do
		local o = m:find(n)
		if o then UI.setPreferred(o, spacer, nil) end
	end

	-- the section scroll
	local scroll = m:find("Content/ScrollParent/Scroll")
	local back = m:find("Content/ScrollParent/ScrollBack")
	-- ScrollBack's Image is recorded without its settings: a black backdrop MenuScroll fades in to half
	local backAlpha = 0.5
	if back then
		back.BackgroundColor3 = Color3.new(0, 0, 0)
		back.BorderSizePixel = 0
	end
	local open = false
	local function setLength(len: number, time: number)
		if not scroll then return end
		local size = UDim2.new(scroll.Size.X.Scale, scroll.Size.X.Offset, 0, len)
		local t = len / SCROLL_LENGTH
		if back then
			back.Visible = len > 0
			local goal = { BackgroundTransparency = 1 - backAlpha * t }
			if time > 0 then TweenService:Create(back, TweenInfo.new(time), goal):Play()
			else back.BackgroundTransparency = goal.BackgroundTransparency end
		end
		if time > 0 then
			TweenService:Create(scroll, TweenInfo.new(time, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), { Size = size }):Play()
		else
			scroll.Size = size
		end
	end
	setLength(0, 0)
	local function toggle()
		open = not open
		setLength(open and SCROLL_LENGTH or 0, SCROLL_TIME)
	end
	if back then
		onClick(back, function()
			if open then toggle() end
		end)
	end
	local wheel = m:find("Content/ScrollParent/Scroll/MenuWheel")
	if wheel then
		-- the MenuRoll_center sprite carries the word MENU itself; MenuButton (the tap target) lives in a
		-- nested prefab the dump does not carry, so the wheel is made clickable directly
		onClick(wheel, toggle)
	end
	for _, name in SECTIONS do
		local btn = m:find("Content/ScrollParent/Scroll/ClippingSprite/Toggles/" .. name)
		if btn then
			local current = name == section
			UI.setSprite(btn, "MenuButtons." .. name .. (current and "_active" or "_normal"))
			if not current then
				local pushed = "MenuButtons." .. name .. "_pushed"
				local function go()
					open = false
					setLength(0, 0)
					-- a scene change goes through the quests (ChangeTab); Settings is a dialog over the scene
					if name ~= "Settings" and Menus.onNavigate then
						Menus.onNavigate(name)
						return
					end
					local f =({ Dojo = Menus.dojo, Map = Menus.map, Shop = Menus.shop, Profile = Menus.profile,
						Settings = Menus.settings }) [name]
					f()
				end
				local hit = clickable(btn)
				if Images.sprite(pushed) then
					hit.MouseButton1Down:Connect(function() UI.setSprite(btn, pushed) end)
					hit.MouseLeave:Connect(function() UI.setSprite(btn, "MenuButtons." .. name .. "_normal") end)
				end
				hit.Activated:Connect(function()
					Sound.play("snd_click_1")
					go()
				end)
				-- "Additional TouchZone" widens the tap target past the icon
				local zone = btn:FindFirstChild("Additional TouchZone")
				if zone then onClick(zone, go) end
			end
		end
	end

	-- the dojo's corner toggle (MainMenu.btnDojoDisciple, Dojo_PunchbagOrDisciple): the punching bag or the
	-- disciple to spar with. It shows once the disciple has joined (quests.xml DojoDiscipleGreetings sets
	-- _DiscipleFlag 2; in the free build that follows a real-money purchase).
	local disciple = m:find("Content/TgglDisciple")
	if disciple then
		local vars = d.quests.vars or {}
		disciple.Visible = section == "Dojo" and tostring(vars.DiscipleFlag) == "2"
		local on = Menus.discipleOn and Menus.discipleOn() or false
		local bg = disciple:FindFirstChild("Background")
		if bg then UI.setSprite(bg, on and "MenuButtons.btn_disciple" or "MenuButtons.btn_punching_bag") end
		local mark = bg and bg:FindFirstChild("Checkmark")
		if mark then (mark :: any).Visible = false end
		onClick(disciple, function()
			on = not on
			if bg then UI.setSprite(bg, on and "MenuButtons.btn_disciple" or "MenuButtons.btn_punching_bag") end
			if Menus.onDisciple then Menus.onDisciple(on) end
		end)
	end
	menuRoot = m
	m:relayout()
	return m
end
Menus.mainMenu = mainMenu

---------------------------------------------------------------- dojo

-- The dojo scene: MainMenu over the dojo. With live set, the room is SF2.Game's running dojo fight (the
-- punching bag, GameController's stick and buttons) and the menu only draws over it; without, the dojo
-- is a still backdrop with your warrior (used when no game is running).
function Menus.dojo(live: boolean?)
	local s = clear()
	setScene(not live and "dojo" or nil, not live)
	mainMenu(s, "Dojo")
	Sound.music("menu")
end

-- MainMenu.IsEnabled: the tutorial's dojo steps take the menu away until they are done
function Menus.setMenuEnabled(on: boolean)
	local m = menuRoot
	if m and m.root and m.root.Parent then
		local content = m:find("Content/ScrollParent")
		if content then content.Visible = on end
	end
end

---------------------------------------------------------------- training (arsenal)

Menus.onTraining = nil :: ((mine: any, dummy: any) -> ())?
local picks = { me = "Fists", dummy = "Fists" }
-- DEV ONLY (the port's own, behind Settings' ARSENAL (DEV) button): every weapon of the arsenal, you and a
-- dummy that can't lose
function Menus.arsenal(groupName: string?)
	local Arsenal = require(script.Parent.Arsenal)
	if Menus.onLeaveScene then Menus.onLeaveScene() end
	local s = clear()
	setScene("dojo", false)
	local group = Arsenal.groups[1]
	for _, g in Arsenal.groups do if g.name == groupName then group = g end end
	local panel = W.panel(s, UDim2.fromScale(0.5, 0.52), Vector2.new(1900, 1150))
	-- group tabs
	for i, g in Arsenal.groups do
		local col, row = (i - 1) % 7, (i - 1) // 7
		W.textButton(panel, g.name == group.name and "BtnGold" or "BtnWhite", string.format("%s (%d)", g.name, #g.weapons),
			UDim2.new(0, 160 + col * 265, 0, 70 + row * 90), Vector2.new(255, 80), function() Menus.arsenal(g.name) end)
	end
	for col, who in { "me", "dummy" } do
		W.label(panel, who == "me" and "YOU" or "DUMMY", UDim2.new(0, 480 + (col - 1) * 940, 0, 270), Vector2.new(400, 70), 56, W.DARK)
		local list = Instance.new("ScrollingFrame")
		list.ZIndex = W.nextZ()
		list.BackgroundTransparency = 1
		list.Position = UDim2.new(0, 60 + (col - 1) * 940, 0, 320)
		list.Size = UDim2.new(0, 860, 0, 680)
		list.ScrollBarThickness = 12
		list.AutomaticCanvasSize = Enum.AutomaticSize.Y
		list.CanvasSize = UDim2.new()
		list.Parent = panel
		local grid = Instance.new("UIGridLayout")
		grid.CellSize = UDim2.fromOffset(420, 70)
		grid.CellPadding = UDim2.fromOffset(8, 8)
		grid.Parent = list
		for _, w in group.weapons do
			local b = W.textButton(list, picks[who] == w.id and "BtnGreen" or "btnBeige", w.name, UDim2.new(), Vector2.new(420, 70), function()
				picks[who] = w.id
				Menus.arsenal(group.name)
			end)
			local t = b:FindFirstChild("Text") :: TextLabel?
			if t then t.TextSize = 32 end
		end
	end
	W.textButton(panel, "BtnGreen", "TRAIN", UDim2.new(0.5, 0, 1, -70), Vector2.new(420, 110), function()
		if Menus.onTraining then
			Menus.onTraining(Arsenal.byId[picks.me], Arsenal.byId[picks.dummy])
		end
	end)
	W.button(panel, "CommonButtons.ButtonQuit", nil, UDim2.new(1, -60, 0, 60), Vector2.new(100, 100), function()
		if Menus.onNavigate then Menus.onNavigate("Dojo") else Menus.dojo() end
	end)
end

---------------------------------------------------------------- map

-- The act's map battles: the ones the quest scripts put on the map (Profile records, ShowBattle) and did
-- not hide, or with Eclipse on, the *_ECLIPSEMODE set (EclipseToggleName) of the shown story battles
local function visibleBattles(zone: any, eclipse: boolean?): { any }
	local out = {}
	local zn = Xml.attr(zone, "Name") or ""
	for _, b in Stages.battles(zone) do
		local name = Xml.attr(b, "Name") or ""
		local r = Profile.record(zn .. "|" .. name)
		if Xml.attr(b, "X") then
			if eclipse then
				local base = string.match(name, "^(.*)_ECLIPSEMODE$")
				local rb = base and Profile.record(zn .. "|" .. base)
				if rb and not rb.hidden then table.insert(out, b) end
			elseif r and not r.hidden and not string.find(name, "_ECLIPSEMODE") then
				table.insert(out, b)
			end
		end
	end
	return out
end

-- Eclipse mode opens once the act's boss is beaten
function Menus.eclipseOpen(zoneName: string): boolean
	local zone = Stages.zone(zoneName)
	for _, b in Stages.battles(zone) do
		if Xml.attr(b, "Type") == "BOSSES" then
			local name = Xml.attr(b, "Name") :: string
			if Profile.progress(zoneName, name) >= #Stages.fights(b) then return true end
		end
	end
	return false
end
Menus.visibleBattles = visibleBattles

-- Act order (stages.xml): ZONE_1..ZONE_7 with maps
local function acts(): { any }
	local out = {}
	for _, z in Stages.zones() do
		if Xml.attr(z, "FileName") then table.insert(out, z) end
	end
	return out
end

-- An act is open once the scripts have put any of its battles on the map
function Menus.zoneUnlocked(zoneName: string): boolean
	if zoneName == "ZONE_1" then return true end
	local prefix = zoneName .. "|"
	for k in Profile.get().records do
		if string.sub(k, 1, #prefix) == prefix then return true end
	end
	return false
end

local function buttonSprite(b: any, state: string): string
	local atlas = Xml.attr(b, "IconAtlas") or "BattleBtn"
	local icon = Xml.attr(b, "Icon") or "tournament"
	local word = ({ Base = "base", Active = "active", Lock = "locked", Pressed = "pressed" })[state]
	local name = atlas .. state .. "." .. word .. "_" .. icon
	if not Images.sprite(name) then
		-- the plain tournament/duel art lives in the act 1 atlas (BattleBtnStart*)
		local alt = "BattleBtnStart" .. state .. "." .. word .. "_" .. icon
		if Images.sprite(alt) then return alt end
		if state ~= "Active" then return buttonSprite(b, "Active") end
	end
	return name
end

-- The battle picked on each act's map (ZoneScrollItem.SetLastBattle), kept while the session lasts
local pickedBattle: { [string]: string } = {}

-- DifficultyPanel: diff0..diff4 and the matching DifficultyBars stripe. Port approximation: the
-- original rates the enemy against the player at runtime; here the rating comes from how far the
-- fight's AttributesAlign pushes the enemy past the player (Factor), which is what makes it harder.
local DIFF_BARS = { "very_easy", "easy", "middle", "hard", "very_hard" }
local function difficulty(fight: any): number
	local d = Profile.get()
	local enemies = fight and Stages.enemies(fight, d.level) or {}
	local e = enemies[1]
	local f = e and e.align and e.align.factor or 1
	if f < 0.95 then return 0 end
	if f < 1.05 then return 1 end
	if f < 1.15 then return 2 end
	if f < 1.3 then return 3 end
	return 4
end

local function fillDifficulty(panel: Instance?, fight: any)
	if not panel then return end
	local k = difficulty(fight)
	for _, bar in panel:GetDescendants() do
		if bar.Name == "BarStripe" or (bar.Name == "Bar" and bar:IsA("ImageLabel")) then
			UI.setSprite(bar, "DifficultyBars." .. DIFF_BARS[k + 1])
		end
		if bar.Name == "lblDifficulty" or (bar.Name == "Label" and bar.Parent == panel) then
			setText(bar, Xml.text("diff" .. k))
		end
	end
end

-- PrizePanel/BattlePrize: one BattlePrizeElement per currency or item, in the prize row's layout group
local function fillPrize(prize: Instance?, r: any)
	if not prize then return end
	local row = prize:FindFirstChild("ElementsLayoutGroup", true)
	if not row then return end
	for _, c in row:GetChildren() do
		if c:IsA("GuiObject") and c.Name == "BattlePrizeElement" then c:Destroy() end
	end
	local n = 0
	local function add(icon: string?, value: string)
		local e = UI.build("BattlePrizeElement", row, { layout = false })
		if not e then return end
		n += 1
		UI.setOrder(e.root, n)
		local ic = e:find("Icon")
		if ic and icon then
			UI.setSprite(ic, icon)
			ic.ScaleType = Enum.ScaleType.Fit
		end
		setText(e:find("Value"), value)
	end
	if (r.money or 0) > 0 then add("MiscSprites.gold", fmt(r.money)) end
	if (r.bonus or 0) > 0 then add("MiscSprites.ruby", fmt(r.bonus)) end
	if (r.exp or 0) > 0 then add("MiscSprites.level", fmt(r.exp)) end
	for _, name in r.items or {} do
		local it = Items.get(name)
		if it then add(Xml.attr(it, "Image"), "") end
	end
	UI.relayout(row)
end

-- InfoBattle: the scroll on the right of the map describing the picked battle. Each battle type has its
-- own Contents child, as in the original (ContentChallTour for tournaments and challenges, ContentBosses,
-- ContentDuel, ContentSurvival, ContentClosed for a locked one, ContentCompleteOrLocked once done).
local function fillInfoBattle(info: any, zoneName: string, b: any, eclipse: boolean, bossLocked: boolean)
	local panel = info:find("Panel")
	if not b then
		if panel then panel.Visible = false end
		return
	end
	if panel then panel.Visible = true end
	hideAll(info, { "Panel/btnSkipFight", "Panel/btnRemoveFight" })
	setText(info:find("Panel/lblBattleName"), loc(Xml.attr(b, "Title")))
	local img = info:find("Panel/imgBattle")
	if img then
		UI.setSprite(img, Xml.attr(b, "Preview"))
		img.ScaleType = Enum.ScaleType.Fit
	end
	local contents = info:find("Panel/Contents")
	if contents then
		for _, c in contents:GetChildren() do
			if c:IsA("GuiObject") then c.Visible = false end
		end
	end
	local t = Xml.attr(b, "Type") or ""
	local name = Xml.attr(b, "Name") :: string
	local fights = Stages.fights(b)
	local done = Profile.progress(zoneName, name)
	local nextIdx = math.clamp(done + 1, 1, math.max(1, #fights))
	local fight = fights[nextIdx]
	local r = fight and Menus.reward(fight, eclipse) or { money = 0, exp = 0, bonus = 0, items = {} }
	local complete = #fights > 0 and done >= #fights and t ~= "PERIODIC" and t ~= "SURVIVAL"
	local function show(n: string): any
		local o = contents and contents:FindFirstChild(n)
		if o then o.Visible = true end
		return o
	end
	local fightBtn = info:find("Panel/btnFight")
	if fightBtn then fightBtn.Visible = not bossLocked end
	if bossLocked then
		local c = show("ContentClosed")
		local msg = Xml.text("BOSS_LOCKED")
		setText(c and c:FindFirstChild("lblDescription"), msg ~= "BOSS_LOCKED" and msg or Xml.text("LockedDuelDescription"))
	elseif t == "SURVIVAL" then
		local c = show("ContentSurvival")
		if c then
			local rewards = fight and Xml.all(Xml.first(fight, "Rewards"), "Reward") or {}
			local lo, hi = rewards[2] or rewards[1], rewards[#rewards]
			local function rr(x: any): any
				return x and { money = Xml.num(x, "Money", 0), exp = Xml.num(x, "Exp", 0), bonus = Xml.num(x, "Bonus", 0), items = {} } or r
			end
			fillPrize(c:FindFirstChild("BattlePrizeMin"), rr(lo))
			fillPrize(c:FindFirstChild("BattlePrizeMax"), rr(hi))
		end
	elseif t == "PERIODIC" then
		local c = show("ContentDuel")
		if c then
			local desc = Xml.attr(b, "Description")
			setText(c:FindFirstChild("lblDescription"), desc and loc(desc) or "")
			fillDifficulty(c:FindFirstChild("Difficulty"), fight)
			fillPrize(c:FindFirstChild("Reward"), r)
			local reset = c:FindFirstChild("btnPeriodicReset")
			if reset then (reset :: any).Visible = false end
		end
	elseif complete and t ~= "BOSSES" then
		local c = show("ContentCompleteOrLocked")
		if c then
			setText(c:FindFirstChild("lblLocked", true), Xml.text("battleCompleted"))
			for _, n in { "btnPlayVideo", "timer", "btnPeriodicReset" } do
				local o = c:FindFirstChild(n)
				if o then (o :: any).Visible = false end
			end
		end
		if fightBtn then fightBtn.Visible = t == "REPLAYABLE" or t == "BOSSES_REPLAYABLE" end
	else
		local c = show(t == "BOSSES" and "ContentBosses" or "ContentChallTour")
		if c then
			local tour = c:FindFirstChild("lblTour", true)
			if t == "BOSSES" then
				setText(tour, Xml.text("bodyguards"))
			else
				local fmtS = Xml.text("stage")
				setText(tour, (string.gsub(string.gsub(fmtS, "{0}", tostring(nextIdx)), "{1}", tostring(#fights))))
			end
			-- ProgressBricksPanel: one IndicatorFight (96x96, indicatorOn / Off) per fight in centred rows,
			-- overlapping by 5; scale 0.71 from six fights up. The original's references show rows of 8.
			local bricks = c:FindFirstChild("Bricks")
			if bricks and #fights > 0 then
				local n = #fights
				local k = n < 6 and 1 or 0.71
				local cell = 96 * k
				local perRow = math.min(n, 8)
				local rows = math.ceil(n / perRow)
				local grid = Instance.new("Frame")
				grid.Name = "Indicators"
				grid.BackgroundTransparency = 1
				grid.AnchorPoint = Vector2.new(0.5, 0)
				grid.Position = UDim2.fromScale(0.5, 0)
				grid.Size = UDim2.new(1, 0, 0, cell * rows)
				grid.ZIndex = 5
				grid.Parent = bricks
				for i = 1, n do
					local row = (i - 1) // perRow
					local inRow = (row == rows - 1) and (n - row * perRow) or perRow
					local col = (i - 1) % perRow
					local width = cell * inRow - 5 * k * (inRow - 1)
					local x = -width / 2 + cell / 2 + col * (cell - 5 * k)
					local ind = W.image(grid, i <= done and "MiscSprites.indicatorOn" or "MiscSprites.indicatorOff",
						UDim2.new(0.5, x, 0, cell / 2 + row * cell), Vector2.new(cell, cell))
					ind.ScaleType = Enum.ScaleType.Fit
				end
			end
			fillDifficulty(c:FindFirstChild("Difficulty"), fight)
			fillPrize(c:FindFirstChild("Reward"), r)
			local replays = c:FindFirstChild("lblReplays")
			if replays then (replays :: any).Visible = false end
		end
	end
	-- btnFight's FIGHT! label and the controller hint beside it
	local hint = info:find("Panel/btnFight/Image/Content/ButtonHint")
	if hint then hint.Visible = false end
	info:relayout()
end

-- The map scene: MapScene mounts MainMenu, StoryMapContainer, InfoBattle and MapButtonsPanel
-- (RaidMapUIModule and PaymentUI have nothing behind them here). StoryMapContainer holds the acts side by
-- side, one StoryZoneScrollItem each (2730x1298, the act's map as its image), dragged left and right; the
-- LampsPanel under it shows one bulb per act, the act's name, and lets you jump. ZoneScrollItem puts each
-- BattleButton at localPosition = 2 x the battle's X/Y from stages.xml.
function Menus.map(zoneName: string?)
	local d = Profile.get()
	local list = acts()
	local idx = 1
	for i, z in list do
		if Xml.attr(z, "Name") == (zoneName or d.zone) then idx = i end
	end
	if not Menus.zoneUnlocked(Xml.attr(list[idx], "Name") :: string) then idx = 1 end
	local zone = list[idx]
	zoneName = Xml.attr(zone, "Name") :: string
	d.zone = zoneName :: string
	local zn = zoneName :: string
	local s = clear()
	setScene(nil, false)
	local backdrop = Instance.new("Frame")
	backdrop.Name = "Backdrop"
	-- the [Map] scene's own Image: the dark brown under the strip below the map
	backdrop.BackgroundColor3 = Color3.new(0.0627, 0.0275, 0.0118)
	backdrop.BorderSizePixel = 0
	backdrop.Size = UDim2.fromScale(1, 1)
	backdrop.Parent = s

	local sm = UI.build("StoryMapContainer", s)
	local info = UI.build("InfoBattle", s)
	local actions = UI.build("MapButtonsPanel", s)
	mainMenu(s, "Map")

	local eclipse = d.eclipse[zn] == true and Menus.eclipseOpen(zn)
	local battles = visibleBattles(zone, eclipse)
	local function stateOf(b: any): (string, boolean)
		local name = Xml.attr(b, "Name") :: string
		local total = #Stages.fights(b)
		local done = Profile.progress(zn, name)
		-- ShowBattle Locked="1" / ToggleBattle "off": on the map, but closed
		local r = Profile.record(zn .. "|" .. name)
		local bossLocked = not eclipse and r ~= nil and (r.locked == true or r.off == true)
		local st = bossLocked and "Lock" or (done >= total and total > 0 and Xml.attr(b, "Type") ~= "PERIODIC" and "Base" or "Active")
		return st, bossLocked
	end
	-- the picked battle: the last one tapped, else the first one still to win (SelectFirstBattle)
	local pick
	for _, b in battles do
		if Xml.attr(b, "Name") == pickedBattle[zn] then pick = b end
	end
	if not pick then
		for _, b in battles do
			if not pick and stateOf(b) == "Active" then pick = b end
		end
		pick = pick or battles[1]
	end

	---------------- the act's map and its battle buttons
	local view = sm and sm:find("MoveableMapPanel/MapPanel/ItemsScrollObject")
	local strip = Instance.new("Frame")
	strip.Name = "Strip"
	strip.BackgroundTransparency = 1
	strip.Size = UDim2.fromScale(1, 1)
	strip.Parent = view or s
	local item = UI.build("StoryZoneScrollItem", strip)
	local buttons: { [any]: any } = {}
	if item then
		local root = item.root :: any
		root.AnchorPoint = Vector2.new(0.5, 0.5)
		root.Position = UDim2.fromScale(0.5, 0.5)
		UI.setSprite(root, Xml.attr(zone, "FileName"))
		root.ScaleType = Enum.ScaleType.Stretch
		root.AutoButtonColor = false
		-- the zone is 2730x1298, exactly a 16:9 screen; on a wider one it would leave black bands at the
		-- sides, so it is scaled up to cover the map panel (buttons and all), as the wide-screen build does
		local area = UI.rectSize(view or s)
		local cover = math.max(1, area.X / 2730, area.Y / 1298)
		if cover > 1 then
			local sc = root:FindFirstChildOfClass("UIScale") or Instance.new("UIScale")
			sc.Scale = cover
			sc.Parent = root
		end
		local toggles = item:find("BattleToggles") or root
		for _, b in battles do
			local bb = UI.build("BattleButton", toggles, { layout = false })
			if bb then
				local btn = bb.root :: any
				local x, y = Xml.num(b, "X", 0) :: number, Xml.num(b, "Y", 0) :: number
				btn.Position = UDim2.new(0.5, 2 * x, 0.5, -2 * y)
				btn.ScaleType = Enum.ScaleType.Fit
				-- the battle's name under its button, in capitals, dark with a pale halo
				local nm = bb:find("Name")
				if nm then
					setText(nm, string.upper(loc(Xml.attr(b, "Title"))))
					local t = textOf(nm)
					if t then t:SetAttribute("glyphOutline", Color3.fromRGB(236, 222, 190)) end
				end
				buttons[b] = btn
			end
		end
	end
	local dragged = false
	local function refresh()
		for b, btn in buttons do
			local st = stateOf(b)
			UI.setSprite(btn, buttonSprite(b, b == pick and st ~= "Lock" and "Pressed" or st))
		end
		if info then
			local locked = false
			if pick then
				local _st, l = stateOf(pick)
				locked = l
			end
			fillInfoBattle(info, zn, pick, eclipse, locked)
		end
	end
	for b, btn in buttons do
		btn.Activated:Connect(function()
			if dragged then return end
			Sound.play("snd_click_1")
			pick = b
			pickedBattle[zn] = Xml.attr(b, "Name") :: string
			refresh()
		end)
	end
	refresh()
	if info then
		onClick(info:find("Panel/btnFight"), function()
			if not pick then return end
			local _, locked = stateOf(pick)
			if locked then return end
			if Menus.onPlay then Menus.onPlay(zn, pick) end
		end, "snd_click_2")
	end

	---------------- lamps: one bulb per act (LampsPanel.AddLamps), the lit one marks this act
	local lamps = sm and sm:find("Lamps")
	if lamps then
		setText(sm:find("Lamps/LocationName"), loc(zn))
		local holder = sm:find("Lamps/LampsContainer") or lamps
		local n = #list
		local function lampX(i: number): number
			return -(n * 68 + (n - 1) * 22) * 0.5 + (i - 1) * 90 + 34
		end
		for i, z in list do
			local lb = UI.build("LampButton", holder, { layout = false })
			if lb then
				local r = lb.root :: any
				r.Position = UDim2.new(0.5, lampX(i), 0.5, 55)
				local zname = Xml.attr(z, "Name") :: string
				if Menus.zoneUnlocked(zname) and i ~= idx then
					onClick(r, function() Menus.map(zname) end)
				end
			end
		end
		local on = sm:find("Lamps/LampOn")
		if on then
			on.Position = UDim2.new(0.5, lampX(idx), 0.5, 55)
			on.ZIndex = 50
		end
	end

	---------------- swiping the map to the next or previous act (ItemsScroll drag)
	local UIS = game:GetService("UserInputService")
	local conns: { RBXScriptConnection } = {}
	local startX: number? = nil
	local function canvasDX(px: number): number
		return px / math.max(UI.scaleOf(canvas :: Frame), 1e-3)
	end
	local function inView(pos: Vector3): boolean
		if not view then return false end
		local p, sz = view.AbsolutePosition, view.AbsoluteSize
		return pos.X >= p.X and pos.X <= p.X + sz.X and pos.Y >= p.Y + 192 * UI.scaleOf(canvas :: Frame) and pos.Y <= p.Y + sz.Y
	end
	table.insert(conns, UIS.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			if inView(input.Position) then
				startX = input.Position.X
				dragged = false
			end
		end
	end))
	table.insert(conns, UIS.InputChanged:Connect(function(input)
		if not startX then return end
		if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
			local dx = canvasDX(input.Position.X - startX)
			if math.abs(dx) > 30 then dragged = true end
			strip.Position = UDim2.new(0, dx, 0, 0)
		end
	end))
	table.insert(conns, UIS.InputEnded:Connect(function(input)
		if not startX then return end
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			local dx = canvasDX(input.Position.X - startX)
			startX = nil
			local target = dx < -300 and idx + 1 or (dx > 300 and idx - 1 or idx)
			local tz = list[target]
			if target ~= idx and tz and Menus.zoneUnlocked(Xml.attr(tz, "Name") :: string) then
				Sound.play("snd_click_1")
				Menus.map(Xml.attr(tz, "Name"))
			else
				TweenService:Create(strip, TweenInfo.new(0.2), { Position = UDim2.new() }):Play()
				task.defer(function() dragged = false end)
			end
		end
	end))
	s.Destroying:Connect(function()
		for _, c in conns do c:Disconnect() end
	end)

	---------------- the act's Eclipse toggle: a sun (off) or the eclipse (on), top right of the map just
	-- under the top bar's + and left of the battle scroll, as in the original. With Eclipse on the map is
	-- darkened. MapButtonsPanel's actions row (bottom left) holds video/offer buttons with nothing behind them.
	local row = actions and actions:find("ActionsPanel")
	if row then row.Visible = false end
	if Menus.eclipseOpen(zn) then
		local e = W.button(s, eclipse and "MiscSprites.eclipse" or "MiscSprites.sun_icon", nil,
			UDim2.new(1, -840, 0, 330), Vector2.new(150, 150), function()
				d.eclipse[zn] = not eclipse
				Profile.save()
				Menus.map(zn)
			end)
		e.ScaleType = Enum.ScaleType.Fit
		e.ZIndex = 20
	end
	if eclipse and item then
		(item.root :: any).ImageColor3 = Color3.fromRGB(150, 110, 80)
	end
	Sound.music("act")
end

-- SetMapFocus: the battle the act's map picks next time it is shown
function Menus.focus(zoneName: string, battleName: string)
	pickedBattle[zoneName] = battleName
end

-- ActScreen: the act's title ("Act II{br}Secret Path") over the scene, held, then gone.
-- Port deviation, pending a screenshot of the original: a black screen with the title centred in the
-- game's colours, faded in and out.
function Menus.actScreen(key: string)
	local _, c = root()
	local f = Instance.new("TextButton")
	f.Name = "ActScreen"
	f.Text = ""
	f.AutoButtonColor = false
	f.BackgroundColor3 = Color3.new(0, 0, 0)
	f.BackgroundTransparency = 1
	f.Size = UDim2.fromScale(1, 1)
	f.ZIndex = 1000
	f.Parent = c
	local text = string.gsub(Xml.text(key), "{br}", "\n")
	local t = W.label(f, text, UDim2.fromScale(0.5, 0.5), Vector2.new(1800, 600), 120, W.GOLD)
	t.ZIndex = 1001
	t.TextTransparency = 1
	TweenService:Create(f, TweenInfo.new(0.5), { BackgroundTransparency = 0 }):Play()
	TweenService:Create(t, TweenInfo.new(0.5), { TextTransparency = 0 }):Play()
	task.wait(3)
	TweenService:Create(f, TweenInfo.new(0.5), { BackgroundTransparency = 1 }):Play()
	TweenService:Create(t, TweenInfo.new(0.5), { TextTransparency = 1 }):Play()
	task.wait(0.5)
	f:Destroy()
end

local TYPE_TEXT = {
	TOURNAMENT = "Tournament", SURVIVAL = "Survival", PERIODIC = "Duel", CHALLENGE = "Challenge",
	BOSSES = "Boss", BOSSES_REPLAYABLE = "Boss", REPLAYABLE = "Eclipse", DUMMY = "Training",
	FINAL_BATTLE = "Final battle", FINAL_BATTLE_TITAN = "Final battle",
}

-- The reward of a fight (the <Reward> with a NormalModeReward)
function Menus.reward(fight: any, eclipse: boolean?): any
	local rewards = Xml.first(fight, "Rewards")
	local pick
	for _, r in Xml.all(rewards, "Reward") do
		if Xml.first(r, eclipse and "EclipseModeReward" or "NormalModeReward") then pick = r end
	end
	pick = pick or Xml.all(rewards, "Reward")[2] or Xml.all(rewards, "Reward")[1]
	if not pick then return { money = 0, exp = 0, bonus = 0, items = {} } end
	local items = {}
	for _, it in Xml.all(pick, "Item") do table.insert(items, Xml.attr(it, "Name")) end
	return { money = Xml.num(pick, "Money", 0), exp = Xml.num(pick, "Exp", 0), bonus = Xml.num(pick, "Bonus", 0), items = items }
end

---------------------------------------------------------------- VS screen and rewards

-- The VS screen (VsScreen layout) for seconds, then done()
function Menus.vs(player: any, enemy: any, seconds: number, done: () -> ())
	local s = clear()
	setScene(nil, false)
	local back = Instance.new("Frame")
	back.BackgroundColor3 = Color3.new(0, 0, 0)
	back.Size = UDim2.fromScale(1, 1)
	back.Parent = s
	local vs = UI.build("VsScreen", s)
	if not vs then
		task.delay(seconds, done)
		return
	end
	-- VsScreen.Init's sequence, with the prefab's own values: the avatars slide in from off-screen to
	-- (-650, -200) and (650, 200) in 0.6 s, pause 0.2; the VS sign drops from scale 100 to 0.78 while it
	-- fades in, 0.2 s, pause 0.2; the two stripe halves fill, 0.1 s each, pause 0.2; the names show, and
	-- the screen holds 2 s
	local la, ra = vs:find("LeftAvatar"), vs:find("RightAvatar")
	if la and player.avatar then UI.setSprite(la, player.avatar) end
	if ra and enemy.avatar then UI.setSprite(ra, enemy.avatar) end
	local names = {}
	for side, def in { LeftName = player, RightName = enemy } do
		local n = vs:find(side)
		if n then
			n.Visible = false
			setText(n, string.upper(Xml.text(def.name or "")))
			table.insert(names, n)
		end
	end
	local sign = vs:find("VSImage")
	local signScale = sign and sign:FindFirstChildOfClass("UIScale")
	if sign then sign.ImageTransparency = 1 end
	local stripes = { vs:find("VSStripe/Left"), vs:find("VSStripe/Right") }
	for _, st in stripes do
		if st then UI.setFill(st, 0) end
	end
	local function tween(o: Instance?, t: number, goal: { [string]: any })
		if o then TweenService:Create(o, TweenInfo.new(t, Enum.EasingStyle.Linear), goal):Play() end
	end
	local function fill(st: any, t: number)
		if not st then return end
		local v = Instance.new("NumberValue")
		v.Changed:Connect(function(x) UI.setFill(st, x) end)
		TweenService:Create(v, TweenInfo.new(t, Enum.EasingStyle.Linear), { Value = 1 }):Play()
		task.delay(t + 0.05, function() v:Destroy() UI.setFill(st, 1) end)
	end
	Sound.play("snd_gong")
	task.spawn(function()
		tween(la, 0.6, { Position = UDim2.new(0.5, -650, 0.5, 200) })
		tween(ra, 0.6, { Position = UDim2.new(0.5, 650, 0.5, -200) })
		task.wait(0.6 + 0.2)
		tween(signScale, 0.2, { Scale = 0.78 })
		tween(sign, 0.2, { ImageTransparency = 0 })
		task.wait(0.2 + 0.2)
		fill(stripes[1], 0.1)
		task.wait(0.1)
		fill(stripes[2], 0.1)
		task.wait(0.1 + 0.2)
		for _, n in names do n.Visible = true end
		task.wait(2)
		if done then done() end
	end)
end

-- The end of a fight (EndFightScreen + EndFightContent): FightUI.Label_Win / Label_Lose / Label_Timesup
-- over the shadow, then the prize lines (TextAndMoneyLine, ExpAndMoneyLine) and the button line, all
-- stacked by the prefabs' own VerticalLayoutGroups. A win offers OK; a loss offers Retry, OK and Shop.
-- Port deviation: the count-up animation (AnimationFinishButton skips it) is not played, the totals show
-- at once; the video-reward button has nothing behind it and stays hidden.
function Menus.endFight(result: { win: boolean, timeout: boolean? }, r: any, levels: number, onOk: () -> (), onRetry: (() -> ())?)
	local s = clear()
	setScene("dojo", false)
	local scr = UI.build("EndFightScreen", s)
	if not scr then onOk() return end
	hideAll(scr, { "AnimationFinishButton" })
	-- the shadow is at alpha 0 in the prefab; EndFightScreen fades it in over the scene
	local shadow = scr:find("Background")
	if shadow then
		shadow:SetAttribute("alpha", 0)
		TweenService:Create(shadow, TweenInfo.new(0.3), { ImageTransparency = 0 }):Play()
	end
	local header = scr:find("Content/ResultHeader")
	if header then
		UI.setSprite(header, result.win and "FightUI.Label_Win" or (result.timeout and "FightUI.Label_Timesup" or "FightUI.Label_Lose"))
	end
	local content = scr:find("Content")
	local c = content and UI.build("EndFightContent", content, { layout = false })
	if c then
		UI.setOrder(c.root, 2)
		local order = 0
		local function line(name: string): any
			local b = UI.build(name, c.root, { layout = false })
			if b then
				order += 1
				UI.setOrder(b.root, order)
			end
			return b
		end
		if result.win then
			-- TextAndMoneyLine rows: PRIZE, PERFECT xN, FIRST STRIKE xN, MAX COMBO xN, SHOCK xN, then the style
			-- reached (goldHardStyle ... goldFantasticStyle), each with its coins; ExpAndMoneyLine last
			local function moneyLine(text: string, coins: number)
				local l = line("TextAndMoneyLine")
				if not l then return end
				setText(l:find("Text"), text)
				local ruby = l:find("PrizePanel/RubyCount")
				if ruby then ruby.Visible = false end
				local icon = l:find("PrizePanel/MoneyCount/Icon")
				if icon then UI.setSprite(icon, "MiscSprites.gold") end
				setText(l:find("PrizePanel/MoneyCount/Text"), fmt(coins))
				l:relayout()
			end
			local function times(key: string, n: number): string
				return (string.gsub(Xml.text(key), "{0}", tostring(n)))
			end
			moneyLine(Xml.text("goldPrize"), r.prize or r.money or 0)
			if r.perfect then
				moneyLine(times("goldPerfect", r.perfect), r.perfect * 5)
				moneyLine(times("goldFirstStrike", r.firstStrike or 0), (r.firstStrike or 0) * 2)
				moneyLine(times("goldCombo", r.maxCombo or 0), r.maxCombo or 0)
				moneyLine(times("goldShock", r.shock or 0), (r.shock or 0) * 3)
				-- level 0 (Start) reads PASSIVE STYLE; the strings spell Aggressive "Agressive"
				local STYLES = { [0] = "goldTurtleStyle", "goldHardStyle", "goldBrutalStyle", "goldAgressiveStyle",
					"goldCrazyStyle", "goldFantasticStyle" }
				moneyLine(Xml.text(STYLES[math.clamp(r.style or 0, 0, 5)]), r.styleCoins or 0)
			end
			-- ExpAndMoneyLine: the experience gained and the coins total
			local total = line("ExpAndMoneyLine")
			if total then
				setText(total:find("Exp/Text"), fmt(r.exp or 0))
				setText(total:find("Prize/MoneyCount/Text"), fmt(r.money or 0))
				total:relayout()
			end
		end
		local buttons = c:find("ButtonLine")
		if buttons then UI.setOrder(buttons, order + 1) end
		for _, n in { "RetryButton", "LabelButton", "VideoRewardButton", "ShopButton" } do
			local hint = c:find("ButtonLine/" .. n .. "/Content/ButtonHint")
			if hint then hint.Visible = false end
		end
		hideAll(c, { "ButtonLine/VideoRewardButton" })
		local retry, shop = c:find("ButtonLine/RetryButton"), c:find("ButtonLine/ShopButton")
		if retry then retry.Visible = not result.win and onRetry ~= nil end
		if shop then shop.Visible = not result.win end
		onClick(c:find("ButtonLine/LabelButton"), onOk, "snd_click_2")
		onClick(retry, function() if onRetry then onRetry() end end, "snd_click_2")
		onClick(shop, function() Menus.shop() end, "snd_click_2")
	end
	scr:relayout()
	if result.win then
		Sound.play(levels > 0 and "snd_upgrade" or "snd_win")
	end
end

-- After a won battle: the end screen with what it paid (kept for Game's call)
function Menus.rewards(r: any, levels: number, done: () -> ())
	Menus.endFight({ win = true }, r, levels, done)
end

---------------------------------------------------------------- shop

-- The bar's tabs in the order the original shows them, {ShopBottomPanel node, item type or nil for the
-- store tabs, sprite base}. Payment (gems), Raid (the coin bag) and Free are real-money and offer stores
-- with nothing behind them here: they are shown, as in the original, but do nothing.
local SHOP_TABS = {
	{ "Payment", nil, "ShopButtons2.Payment" }, { "Raid", nil, "ShopButtons2.meshok_2" }, { "Free", nil, "ShopButtons2.Free" },
	{ "Weapon", "Weapon", "ShopButtons1.Weapon" }, { "Armor", "Armor", "ShopButtons1.Armor" },
	{ "Helmet", "Helm", "ShopButtons1.Helmet" }, { "Ranged", "Ranged", "ShopButtons1.Ranged_weapon" },
	{ "Magic", "Magic", "ShopButtons1.Magic" },
}
-- ShopScene._<Type>ImageSize: the art box of a row; a row is that box plus the 120-high IconPanel
local SHOP_ART = { Weapon = 302, Armor = 704, Helm = 706, Ranged = 302, Magic = 682 }
local SHOP_ART_W = 778
local ICON_STRIP = 120
-- ItemsPanel._InactiveCellOpacity: every row but the centred one is drawn at half opacity
local INACTIVE_ALPHA = 0.5

-- Items.STATS -> the Attributes atlas icon the original shows beside each value
local STAT_ICON: { [string]: string } = {
	WeaponDamage = "weapon_attack", UnarmedDamage = "unarmed_attack",
	BodyDefense = "body_armor", HeadDefense = "head_armor",
	RangedDamage = "ranged_attack", RangedQuantity = "ranged_quantity",
	MagicDamage = "magic_attack", EnchantmentResistance = "magic_resistance",
	CriticalChance = "critical_chance", CriticalRating = "critical_chance",
}

local function shopItems(t: string): { any }
	local out = {}
	for name, it in Items.all() do
		if Xml.attr(it, "Type") == t and Xml.attr(it, "Model") and Xml.attr(it, "ShopHide") ~= "1"
			and Xml.attr(it, "Hidden") ~= "1" and (Xml.attr(it, "Price") or Xml.attr(it, "BonusPrice")) then
			table.insert(out, it)
		end
	end
	table.sort(out, function(a, b)
		local la, lb = Xml.num(a, "Level", 0) :: number, Xml.num(b, "Level", 0) :: number
		if la ~= lb then return la < lb end
		return (Xml.attr(a, "Name") :: string) < (Xml.attr(b, "Name") :: string)
	end)
	return out
end
Menus.shopItems = shopItems

-- The item's attributes in Items.STATS order (the order the original lists them in)
local function statRows(it: any, upgrade: number?): { { name: string, value: number } }
	local stats = Items.stats(it, upgrade)
	local out = {}
	for _, k in Items.STATS do
		local v = stats[k]
		if v and v ~= 0 then table.insert(out, { name = k, value = v }) end
	end
	return out
end

-- One item row from the game's ShopTableViewCell: the art in the type's box, then the IconPanel strip
-- (level star and number on the left, equipped figure and owned tick on the right)
local function shopCell(parent: Instance, it: any, tab: string, owned: boolean, equipped: boolean, locked: boolean): any
	local b = UI.build("ShopTableViewCell", parent, { layout = false })
	if not b then return nil end
	local cell = b.root :: any
	local artH = SHOP_ART[tab] or 302
	cell.AnchorPoint = Vector2.new(0.5, 0)
	cell.Size = UDim2.fromOffset(800, artH + ICON_STRIP)
	local content = b:find("Content")
	local art = b:find("Content/Image")
	if art then
		art.AnchorPoint = Vector2.new(0.5, 0)
		art.Position = UDim2.new(0.5, 0, 0, 0)
		art.Size = UDim2.fromOffset(SHOP_ART_W, artH)
		art.ScaleType = Enum.ScaleType.Fit
		W.setImage(art, Xml.attr(it, "Image"))
	end
	for _, n in { "Content/CompositeImage", "Content/AddPercentImage", "Content/TicketLabel",
		"Content/IconPanel/DiscountIcon", "Content/IconPanel/PerksPanel" } do
		local o = b:find(n)
		if o then o.Visible = false end
	end
	local lock = b:find("LockIcon")
	if lock then
		lock.Visible = locked
		lock.Position = UDim2.new(0.5, 0, 0, artH / 2)
	end
	local icons = b:find("Content/IconPanel")
	if icons then
		icons.AnchorPoint = Vector2.new(0.5, 0)
		icons.Position = UDim2.new(0.5, 0, 0, artH)
		icons.Size = UDim2.fromOffset(800, ICON_STRIP)
	end
	local eq = b:find("Content/IconPanel/EquippedIcon")
	if eq then eq.Visible = equipped end
	local jack = b:find("Content/IconPanel/JackdawIcon")
	if jack then jack.Visible = owned end
	-- LevelLabel is "<quad name=MiscSprites.star ...> N"; a quad is a sprite the text can't carry here, so
	-- the star sits beside the number as its own image
	local lvl = b:find("Content/IconPanel/LevelLabel")
	if lvl then
		local t = textOf(lvl)
		if t then
			t.Text = "      " .. (Xml.num(it, "Level", 0) :: number)
			t.TextXAlignment = Enum.TextXAlignment.Left
			t.TextColor3 = locked and Color3.fromRGB(200, 60, 40) or Color3.fromRGB(58, 40, 26)
		end
		local star = W.image(lvl, "MiscSprites.star", UDim2.new(0, 40, 0.5, 0), Vector2.new(70, 64))
		star.ImageColor3 = Color3.fromRGB(58, 40, 26)
	end
	if content then content:SetAttribute("rowArt", true) end
	return cell
end

-- A row's opacity (ItemsPanel: the centred row full, the others at _InactiveCellOpacity)
local function cellAlpha(cell: Instance, a: number)
	for _, o in cell:GetDescendants() do
		if o:IsA("ImageLabel") or o:IsA("ImageButton") then
			local base = o:GetAttribute("alpha") or 0
			o.ImageTransparency = 1 - (1 - base) * a
		end
	end
end

-- The shop, laid out as the original. scene_level4_Shop gives the parchment scroll in the middle, the side
-- panels and the left-hand buttons; ShopBottomPanel the category bar; ShopTableViewCell each row.
--  * The list snaps: when a scroll or drag settles, the nearest row slides to the centre and becomes the
--    selected item (TableView.scrollToHighlighted), its info panel filled at once; tapping a row centres it.
--  * ItemInfoPanel sits right of the scroll with InfoPanelContent: the name, one ItemParameterScrollItem
--    per attribute (icon, value, next upgrade's gain, bar), then the price buttons (IconLabelButton).
--  * ButtonsContainer, left: TRY ON for an item you don't own (puts it on the warrior), EQUIP or UNEQUIP
--    for one you do. The forge's ENCHANT has nothing behind it here and stays hidden.
--  * The two flags on the scroll's left edge are the side panels: attributes (opens the full list to the
--    left of the scroll) and item perks (none here).
function Menus.shop(tab: string?, item: string?)
	tab = tab or "Weapon"
	local d = Profile.get()
	local s = clear()
	local items = shopItems(tab :: string)
	local selected = 1
	for i, it in items do
		if d.equipped[tab :: string] == Xml.attr(it, "Name") then selected = i end
	end
	-- OpenShop Item=...: the scripts point at one item
	for i, it in items do
		if item and Xml.attr(it, "Name") == item then selected = i end
	end
	local tryOn = false
	local function previewDef(): any
		local def = table.clone(Profile.warrior())
		local it = items[selected]
		if tryOn and it then
			def.items = table.clone(def.items)
			def.items[tab :: string] = Xml.attr(it, "Name")
		end
		return def
	end
	setScene("dojo", true, previewDef(), SHOP_WARRIOR_X)

	local shop = UI.build("scene_level4_Shop", s)
	if not shop then return end
	local function node(name: string): any
		return shop:find(name)
	end
	hideAll(shop, { "ItemPropertiesPanel", "ForgePanel", "BorderLeft", "BorderRight", "ShopBackground",
		"ButtonsContainer/ForgeButton", "ButtonsContainer/RestorePurchasesButton", "ItemsPanel/Slider",
		"ItemsPanel/BtnLoadRaid", "ButtonsContainer/TryItemButton/Content/ButtonHint" })

	---------------- the category bar
	local tabs = UI.build("ShopBottomPanel", s)
	if tabs then
		local strip = tabs:find("SimpleScroll")
		if strip then strip.Visible = false end
		for i, t in SHOP_TABS do
			local btn = tabs:find("HorizontalLayout/" .. t[1])
			if btn then
				UI.setOrder(btn, i)
				local active = t[2] == tab
				UI.setSprite(btn, t[3] .. (active and (t[2] and "_active" or "") or ""))
				local dot = btn:FindFirstChild("Indicator")
				if dot then (dot :: any).Visible = false end
				if t[2] and not active then
					onClick(btn, function() Menus.shop(t[2]) end)
				end
			end
		end
		tabs:relayout()
	end
	mainMenu(s, "Shop")

	---------------- side panels: info on the right; attributes behind the lower flag, opening on the left
	local PANEL_X = 425 + 304 + 40
	local function placePanel(panel: any, side: number): any
		if not panel then return nil end
		panel.AnchorPoint = Vector2.new(0.5, 0.5)
		panel.Position = UDim2.new(0.5, PANEL_X * side, 0.5, -40)
		panel.Size = UDim2.fromOffset(608, 866)
		local inner = panel:FindFirstChild("Panel")
		if not inner then return nil end
		inner.AnchorPoint = Vector2.new(0.5, 0.5)
		inner.Position = UDim2.fromScale(0.5, 0.5)
		inner.Size = UDim2.fromScale(1, 1)
		local flag = inner:FindFirstChild("MoveButton")
		if flag then (flag :: any).Visible = false end
		local art = inner:FindFirstChild("InfoPanel")
		if art then
			art.AnchorPoint = Vector2.new(0.5, 0.5)
			art.Position = UDim2.fromScale(0.5, 0.5)
			art.Size = UDim2.fromScale(1, 1)
		end
		return art
	end
	local infoFace = placePanel(node("ItemInfoPanel"), 1)
	local params = node("ItemParametersPanel")
	local paramsFace = placePanel(params, -1)
	if params then params.Visible = false end
	local scroll = node("ItemsPanel")
	local function flag(y: number, sprite: string): any
		if not scroll then return nil end
		local f = W.button(scroll, sprite, nil, UDim2.new(0, -40, 0.5, y), Vector2.new(110, 150), function() end)
		f.ScaleType = Enum.ScaleType.Fit
		f.ZIndex = 1
		return f
	end
	flag(-89, "ShopPieces.Left_flag_properties_none")
	local paramsFlag = flag(65, "ShopPieces.Left_flag")

	---------------- the info panel's content and the buttons, refilled on every selection
	local panelContent: any = nil
	local paramsContent: any = nil
	-- the bars measure against the strongest item of the tab you could buy at your level
	local maxStat: { [string]: number } = {}
	for _, it in items do
		if (Xml.num(it, "Level", 0) :: number) <= d.level then
			for _, r in statRows(it) do maxStat[r.name] = math.max(maxStat[r.name] or 0, r.value) end
		end
	end
	local function fillParameters(holder: Instance, it: any, up: number, withNext: boolean): any
		local c = UI.build("InfoPanelContent", holder)
		if not c then return nil end
		hideAll(c, { "Image", "DescriptionDonate", "TimerLabel" })
		setText(c:find("Header"), Items.title(it))
		local desc = Xml.attr(it, "Description")
		setText(c:find("Description"), desc and Xml.text(desc) or "")
		local list = c:find("ParametersPanel/ScrollContent")
		local nextUp = withNext and Items.upgrades(it)[up + 1] and statRows(it, up + 1) or nil
		local rows = statRows(it, up)
		-- ParametersPanel sizes itself to its rows (ItemParameterScrollItem 100 high, ScrollContent 20 apart)
		local panel = c:find("ParametersPanel")
		if panel then UI.setPreferred(panel, nil, math.max(100, #rows * 100 + math.max(0, #rows - 1) * 20)) end
		if list then
			list.Size = UDim2.new(list.Size.X.Scale, list.Size.X.Offset, 0, #rows * 120)
		end
		for i, r in rows do
			local row = list and UI.build("ItemParameterScrollItem", list)
			if row then
				UI.setOrder(row.root, i)
				local icon = STAT_ICON[r.name]
				if icon then UI.setSprite(row:find("HorizontalLayout/ParameterIcon"), "Attributes." .. icon) end
				setText(row:find("HorizontalLayout/VerticalLayout/ParamNumbers/Value"), fmt(r.value))
				local gain = 0
				for _, n in nextUp or {} do
					if n.name == r.name then gain = n.value - r.value end
				end
				local add = row:find("HorizontalLayout/VerticalLayout/ParamNumbers/AdditionalValue")
				if add then
					add.Visible = gain > 0
					setText(add, "(+" .. fmt(gain) .. ")")
				end
				local max = math.max(1, maxStat[r.name] or r.value)
				local bar = "HorizontalLayout/VerticalLayout/ParameterProgressBar/"
				local bg = row:find(bar .. "Background")
				if bg then UI.setFill(bg, 1) end
				local red = row:find(bar .. "StripeRed")
				if red then red.Visible = false end
				local green = row:find(bar .. "StripeGreen")
				if green then UI.setFill(green, math.clamp((r.value + gain) / max, 0, 1)) end
				local orange = row:find(bar .. "StripeOrange")
				if orange then UI.setFill(orange, math.clamp(r.value / max, 0, 1)) end
				row:relayout()
			end
		end
		c:relayout()
		return c
	end
	local function priceButton(parent: Instance, order: number, style: string, icon: string, text: string, onBuy: () -> ()): any
		local b = UI.build("IconLabelButton", parent)
		if not b then return nil end
		UI.setOrder(b.root, order)
		UI.setSprite(b.root, "CommonButtons." .. style, { t = "sliced", d = { 99, 0, 99, 0 } })
		hideAll(b, { "Content/ButtonHint" })
		UI.setSprite(b:find("Content/Image"), icon)
		setText(b:find("Content/Text"), text)
		onClick(b.root, onBuy, "snd_click_2")
		b:relayout()
		return b
	end

	local function select(i: number)
		selected = i
		local it = items[i]
		if panelContent then panelContent.root:Destroy() panelContent = nil end
		if paramsContent then paramsContent.root:Destroy() paramsContent = nil end
		local info = node("ItemInfoPanel")
		if info then info.Visible = it ~= nil end
		local tryBtn = node("ButtonsContainer/TryItemButton")
		if tryBtn then tryBtn.Visible = it ~= nil end
		if not it then return end
		local name = Xml.attr(it, "Name") :: string
		local owned = Profile.owns(name)
		local up = owned and d.items[name] and d.items[name].upgrade or 0
		local lvl = Xml.num(it, "Level", 0) :: number
		if infoFace then
			panelContent = fillParameters(infoFace, it, up, owned)
			local buttons = panelContent and panelContent:find("ButtonPanel")
			if buttons then
				local function refresh() Menus.shop(tab, name) end
				local dl = Profile.delivery(name)
				if dl then
					-- being made (shopMaking) or upgraded: the time left, and finish now for gems
					-- (InfoPanelContent's ImmediatelyDeliveryButton, "ShopUpgradeNow")
					local label = panelContent:find("TimerLabel")
					local function tick()
						local left = math.max(0, dl.readyAt - os.time())
						if label then
							label.Visible = true
							setText(label, string.upper(Xml.text("shopMaking")) .. "  " .. string.format("%d:%02d", left // 60, left % 60))
						end
						return left
					end
					tick()
					task.spawn(function()
						while label and label.Parent and Profile.delivery(name) == dl do
							task.wait(1)
							if tick() <= 0 then
								if Menus.onDeliveryDue then Menus.onDeliveryDue() end
								refresh()
								break
							end
						end
					end)
					priceButton(buttons, 1, "BtnGreen", "MiscSprites.ruby", fmt(dl.price), function()
						if d.bonus < dl.price then return end
						d.bonus -= dl.price
						if Profile.deliver(name) == "item" then Profile.equip(name) end
						Profile.save()
						Sound.play("snd_upgrade")
						refresh()
					end)
				elseif owned then
					local nextStep = Items.upgrades(it)[up + 1]
					if nextStep then
						local label = panelContent:find("TimerLabel")
						if label then
							label.Visible = true
							setText(label, string.upper(Xml.text("dlgUpgradeTitle")) .. " " .. (up + 1))
						end
						local p, g = Xml.num(nextStep, "Price"), Xml.num(nextStep, "BonusPrice")
						local function pay(cost: number, field: string)
							if d[field] < cost then return end
							d[field] -= cost
							-- an upgrade with a DeliveryTime is delivered later (quests.xml DeliveryUpgrade)
							local wait = Xml.num(nextStep, "DeliveryTime", 0) :: number
							if wait > 0 then
								Profile.startDelivery(name, "upgrade", wait, Xml.num(nextStep, "BonusDeliveryPrice", 0) :: number)
							else
								d.items[name].upgrade = up + 1
							end
							Profile.save()
							Sound.play("snd_upgrade")
							refresh()
							if Menus.onPurchase then Menus.onPurchase(name) end
						end
						if p then priceButton(buttons, 1, "BtnYellow", "MiscSprites.gold", fmt(p), function() pay(p, "money") end) end
						if g then priceButton(buttons, 2, "BtnGold", "MiscSprites.ruby", fmt(g), function() pay(g, "bonus") end) end
					end
				elseif lvl <= d.level then
					local price, gems = Xml.num(it, "Price"), Xml.num(it, "BonusPrice")
					priceButton(buttons, 1, "BtnGreen", price and "MiscSprites.gold" or "MiscSprites.ruby",
						fmt(price or gems or 0), function()
							if price then
								if d.money < price then return end
								d.money -= price
							else
								if d.bonus < (gems :: number) then return end
								d.bonus -= gems :: number
							end
							-- an item with a DeliveryTime is made first (quests.xml Delivery)
							local wait = Xml.num(it, "DeliveryTime", 0) :: number
							if wait > 0 then
								Profile.startDelivery(name, "item", wait, Xml.num(it, "BonusDeliveryPrice", 0) :: number)
							else
								Profile.give(name)
								Profile.equip(name)
							end
							Profile.save()
							Sound.play("snd_buy")
							refresh()
							if Menus.onPurchase then Menus.onPurchase(name) end
						end)
				else
					priceButton(buttons, 1, "BtnDark", "MiscSprites.star", tostring(lvl), function() end)
				end
				panelContent:relayout()
			end
		end
		if paramsFace and params and params.Visible then
			paramsContent = fillParameters(paramsFace, it, up, false)
		end
		-- TRY ON / EQUIP / UNEQUIP
		local equipped = d.equipped[tab :: string] == name
		local key = not owned and "TryOn_hint" or (equipped and "btnShopUnequip" or "btnShopEquip")
		setText(node("ButtonsContainer/TryItemButton/Content/Text"), string.upper(Xml.text(key)))
		local actions = node("ButtonsContainer")
		if actions then shop:relayout() end
		if scene and scene.showcase then
			scene.showcase.destroy()
			scene.showcase = Showcase.new(previewDef(), scene.folder, SHOP_WARRIOR_X, 1)
		end
	end
	onClick(node("ButtonsContainer/TryItemButton"), function()
		local it = items[selected]
		if not it then return end
		local name = Xml.attr(it, "Name") :: string
		if not Profile.owns(name) then
			tryOn = not tryOn
			select(selected)
		elseif d.equipped[tab :: string] == name then
			d.equipped[tab :: string] = nil
			Profile.save()
			Menus.shop(tab)
		else
			Profile.equip(name)
			Profile.save()
			Menus.shop(tab)
		end
	end, "snd_click_2")
	if paramsFlag then
		paramsFlag.Activated:Connect(function()
			if not params then return end
			params.Visible = not params.Visible
			W.setImage(paramsFlag, params.Visible and "ShopPieces.Right_flag" or "ShopPieces.Left_flag")
			select(selected)
		end)
	end

	---------------- the rows: a snapping list, only the rows near the view alive
	local artH = SHOP_ART[tab :: string] or 302
	local step = artH + ICON_STRIP
	local view = node("TableView")
	local viewH = view and UI.rectSize(view).Y or 946
	local pad = math.max(0, viewH / 2 - step / 2)
	local list = Instance.new("ScrollingFrame")
	list.BackgroundTransparency = 1
	list.BorderSizePixel = 0
	list.ScrollBarThickness = 0
	list.ScrollingDirection = Enum.ScrollingDirection.Y
	list.ElasticBehavior = Enum.ElasticBehavior.Never
	list.Size = UDim2.fromScale(1, 1)
	list.CanvasSize = UDim2.fromOffset(0, #items * step + pad * 2)
	list.Parent = view or s
	-- CanvasPosition is in screen pixels while the rows are laid out in canvas units
	local function px(): number
		return math.max(UI.scaleOf(canvas :: Frame), 1e-3)
	end
	-- the CanvasPosition (pixels) that centres row i
	local function centreOf(i: number): number
		return (i - 1) * step * px()
	end
	local live: { [number]: any } = {}
	local liveTex: { [number]: string } = {}
	local shopTextures: { string } = {}
	local function window()
		local scale = px()
		local top = list.CanvasPosition.Y / scale
		local height = list.AbsoluteWindowSize.Y / scale
		local first = math.max(1, math.floor((top - pad) / step))
		local last = math.min(#items, math.ceil((top + height - pad) / step) + 1)
		for i, cell in live do
			if i < first or i > last then
				cell:Destroy()
				live[i], liveTex[i] = nil, nil
			end
		end
		for i = first, last do
			if not live[i] then
				local it = items[i]
				local name = Xml.attr(it, "Name") :: string
				local cell = shopCell(list, it, tab :: string, Profile.owns(name), d.equipped[tab :: string] == name,
					(Xml.num(it, "Level", 0) :: number) > d.level)
				if cell then
					cell.Position = UDim2.new(0.5, 0, 0, pad + (i - 1) * step)
					live[i] = cell
					local hit = clickable(cell)
					hit.ZIndex = 50
					hit.Activated:Connect(function()
						if i ~= selected then
							Sound.play("snd_click_1")
							TweenService:Create(list, TweenInfo.new(0.25, Enum.EasingStyle.Quad), { CanvasPosition = Vector2.new(0, centreOf(i)) }):Play()
						end
					end)
					local sp = Images.sprite(Xml.attr(it, "Image"))
					if sp then liveTex[i] = sp.texture end
				end
			end
		end
		for i, cell in live do cellAlpha(cell, i == selected and 1 or INACTIVE_ALPHA) end
		local keep: { [string]: boolean } = {}
		for _, t in liveTex do keep[t] = true end
		for _, t in shopTextures do
			if not keep[t] then Images.release(t) end
		end
		table.clear(shopTextures)
		for _, t in liveTex do table.insert(shopTextures, t) end
	end
	-- snapping: once the list has been still for a moment, slide the nearest row to the centre and select it
	local settleToken = 0
	local snapping = false
	list:GetPropertyChangedSignal("CanvasPosition"):Connect(function()
		window()
		if snapping then return end
		settleToken += 1
		local token = settleToken
		task.delay(0.15, function()
			if token ~= settleToken or not list.Parent then return end
			local i = math.clamp(math.floor(list.CanvasPosition.Y / px() / step + 0.5) + 1, 1, math.max(1, #items))
			local target = centreOf(i)
			if i ~= selected then select(i) end
			if math.abs(list.CanvasPosition.Y - target) > 1 then
				snapping = true
				local tw = TweenService:Create(list, TweenInfo.new(0.2, Enum.EasingStyle.Quad), { CanvasPosition = Vector2.new(0, target) })
				tw.Completed:Connect(function() snapping = false window() end)
				tw:Play()
			end
		end)
	end)
	list.CanvasPosition = Vector2.new(0, centreOf(selected))
	window()
	select(selected)
	local none = node("NoItemsMessage")
	if none then none.Visible = #items == 0 end
end

---------------------------------------------------------------- profile

-- CharacterProgress <PerkTree> as rows: the perks a level opens, and how often each has been upgraded
-- by the player's level (<Upgrade Name>)
local function perkRows(level: number): ({ { level: number, perks: { string } } }, { [string]: number })
	local rows, ups = {}, {}
	for _, l in Xml.all(Xml.first(Xml.doc("CharacterProgress"), "PerkTree"), "Level") do
		local lv = Xml.num(l, "Value", 1) :: number
		local names = {}
		for _, p in Xml.all(l, "Perk") do table.insert(names, Xml.attr(p, "Name") :: string) end
		if #names > 0 then table.insert(rows, { level = lv, perks = names }) end
		if lv <= level then
			for _, u in Xml.all(l, "Upgrade") do
				local n = Xml.attr(u, "Name") :: string
				ups[n] = (ups[n] or 0) + 1
			end
		end
	end
	return rows, ups
end

local perkDefs: { [string]: any }? = nil
local function perkDef(name: string): any
	if not perkDefs then
		perkDefs = {}
		for _, p in Xml.all(Xml.doc("perks"), "Perk") do
			(perkDefs :: any)[Xml.attr(p, "Name") or ""] = p
		end
	end
	return (perkDefs :: any)[name]
end

-- the learnable moves are perks too; their art lives in the Trick atlases
local function isTrick(name: string): boolean
	local img = Xml.attr(perkDef(name), "Image") or ""
	return string.sub(img, 1, 5) == "Trick"
end

-- CharacterProgress <Perks>: each <UpgradeLevel Value="n" Description="KEY{a}{b}{c}"> names the sentence
-- and the numbers to put in it at that level
local function perkDescription(name: string, level: number): string
	local text = nil
	for _, p in Xml.all(Xml.first(Xml.doc("CharacterProgress"), "Perks"), "Perk") do
		if Xml.attr(p, "Name") == name then
			for _, u in Xml.all(p, "UpgradeLevel") do
				if (Xml.num(u, "Value", 1) :: number) <= level or text == nil then
					text = Xml.attr(u, "Description")
				end
			end
		end
	end
	local key, args = string.match(text or "", "^([^{]+)(.*)$")
	key = key or ("PERKDESCRIPTION_" .. string.sub(name, 6))
	local t = Xml.text(key)
	if t == key then return "" end
	local vals = {}
	for v in string.gmatch(args or "", "{([^}]*)}") do table.insert(vals, v) end
	t = string.gsub(t, "{(%d+)}", function(i) return vals[tonumber(i) + 1] or "?" end)
	return (string.gsub(t, "%%%%", "%%"))
end

local PROFILE_TABS = { "Perks", "Strikes", "Achievements", "Seals", "BattlePass" }
local PROFILE_TAB_SPRITE = { Perks = "Progress", Strikes = "Strikes", Achievements = "Achiev", Seals = "Seal", BattlePass = "BattlePass" }

-- The profile scene (ProfileScene mounts MainMenu and ProfileBottomPanel): the scroll in the middle lists
-- the perk tree (PerkCell, one row per level, two perks side by side where the level offers two) or the
-- learnable strikes (TrickCell); InfoPanel on the right describes the one picked and UserPerksPanel on the
-- left lists the perks you have. Port deviations: Achievements, Seals and the Battle Pass have no system
-- behind them here, so their tabs are hidden; where a level offers two perks the original makes you pick
-- one (the other is "Skipped") -- the port's fights grant both, so both show as learned.
function Menus.profile(tab: string?, picked: string?)
	tab = tab or "Perks"
	local d = Profile.get()
	local s = clear()
	-- the dojo with your warrior behind the panels, as the original's profile shows it
	setScene("dojo", true)
	local p = UI.build("scene_level7_Profile", s)
	local bottom = UI.build("ProfileBottomPanel", s)
	mainMenu(s, "Profile")
	if not p then return end
	hideAll(p, { "ShopBackground", "BorderLeft", "BorderRight", "BattlePassPanel", "ButtonsContainer", "LabelButton",
		"AchievementsTableView", "SealsTableView" })
	local rows, ups = perkRows(d.level)
	local learned = Warrior.perksForLevel(d.level)

	---------------- tabs
	if bottom then
		for _, t in PROFILE_TABS do
			local btn = bottom:find("HorizontalLayout/" .. t)
			if btn then
				-- all five tabs show, as in the original; Achievements, Seals and the Battle Pass have no
				-- system behind them here and do nothing
				local live = t == "Perks" or t == "Strikes"
				btn.Visible = true
				UI.setSprite(btn, "ProfileButtons." .. (t == tab and "Active_" or "Inactive_") .. PROFILE_TAB_SPRITE[t])
				local dot = btn:FindFirstChild("Indicator")
				if dot then (dot :: any).Visible = false end
				if live and t ~= tab then onClick(btn, function() Menus.profile(t) end) end
			end
		end
		bottom:relayout()
	end

	---------------- the list in the middle
	local view = p:find(tab == "Perks" and "ItemsPanel/PerksTableView" or "ItemsPanel/TricksTableView")
	local other = p:find(tab == "Perks" and "ItemsPanel/TricksTableView" or "ItemsPanel/PerksTableView")
	if other then other.Visible = false end
	local list = Instance.new("ScrollingFrame")
	list.BackgroundTransparency = 1
	list.BorderSizePixel = 0
	list.ScrollBarThickness = 0
	list.Size = UDim2.fromScale(1, 1)
	list.Parent = view or s
	local CELL = 270
	local y = 0
	local first: string? = nil
	local function pickable(sub: Instance, name: string)
		onClick(sub, function() Menus.profile(tab, name) end)
	end
	local function subItem(sub: any, name: string, lv: number)
		if not sub then return end
		local def = perkDef(name)
		local icon = sub:FindFirstChild("Icon")
		if icon then
			UI.setSprite(icon, Xml.attr(def, "Image"))
			icon.ScaleType = Enum.ScaleType.Fit
		end
		local badge = sub:FindFirstChild("Level")
		if badge then
			local n = (ups[name] or 0) + 1
			badge.Visible = learned[name] == true
			if Images.sprite("ProfilePieces.level" .. n) then UI.setSprite(badge, "ProfilePieces.level" .. n) end
		end
		local lock = sub:FindFirstChild("LockIcon")
		if lock then lock.Visible = lv > d.level end
		local skipped = sub:FindFirstChild("Skipped")
		if skipped then skipped.Visible = false end
		local frame = sub:FindFirstChild("Frame")
		if frame then frame.Visible = name == picked end
		-- a perk not learned yet is drawn faded
		if not learned[name] then
			for _, o in sub:GetDescendants() do
				if o:IsA("ImageLabel") and o.Name ~= "LockIcon" then o.ImageTransparency = 0.55 end
			end
		end
		pickable(sub, name)
	end
	if tab == "Perks" then
		for _, row in rows do
			local perks = {}
			for _, n in row.perks do
				if not isTrick(n) then table.insert(perks, n) end
			end
			if #perks > 0 then
				local cell = UI.build("PerkCell", list, { layout = false })
				if cell then
					local r = cell.root :: any
					r.AnchorPoint = Vector2.new(0.5, 0)
					r.Position = UDim2.new(0.5, 0, 0, y)
					first = first or perks[1]
					local two = #perks > 1
					local right = cell:find("SubItems/RightPerkSubItem")
					if right then right.Visible = two end
					local lines = cell:find("Lines/LineForTwoPerks")
					if lines then lines.Visible = two end
					local top, bot = cell:find("Lines/Top"), cell:find("Lines/Bottom")
					if top then top.Visible = y > 0 end
					if bot then bot.Visible = true end
					cell:relayout()
					subItem(cell:find("SubItems/LeftPerkSubItem"), perks[1], row.level)
					if two then subItem(right, perks[2], row.level) end
					y += CELL
				end
			end
		end
		-- the last row's line has nothing below it
		local last = list:GetChildren()[#list:GetChildren()]
		local bot = last and last:FindFirstChild("Bottom", true)
		if bot then (bot :: any).Visible = false end
	else
		for _, row in rows do
			for _, n in row.perks do
				if isTrick(n) then
					local cell = UI.build("TrickCell", list)
					if cell then
						local r = cell.root :: any
						r.AnchorPoint = Vector2.new(0.5, 0)
						r.Position = UDim2.new(0.5, 0, 0, y)
						first = first or n
						local sub = cell:find("TrickSubtem")
						-- the keys column hangs off the icon's right edge; TrickCell shifts the pair left
						-- so both fit the 766-wide row
						if sub then sub.Position = UDim2.new(0.5, -230, 0.5, 0) end
						subItem(sub, n, row.level)
						setText(cell:find("TrickSubtem/KeysLayout/KeysDescription"), loc(n))
						y += CELL
					end
				end
			end
		end
	end
	list.CanvasSize = UDim2.fromOffset(0, y)
	picked = picked or first

	---------------- InfoPanel: the picked perk or strike
	local info = p:find("SidePanels/InfoPanel")
	if info then
		for _, n in { "PerkContent", "TrickContent", "AchievmentContent", "SealsContent" } do
			local o = p:find("SidePanels/InfoPanel/Contents/" .. n)
			if o then o.Visible = false end
		end
		setText(p:find("SidePanels/InfoPanel/NoContentMessage"), "")
		if picked then
			setText(p:find("SidePanels/InfoPanel/Title"), loc(picked))
			local c = p:find("SidePanels/InfoPanel/Contents/" .. (tab == "Perks" and "PerkContent" or "TrickContent"))
			if c then
				c.Visible = true
				local keys = c:FindFirstChild("Keys")
				if keys then (keys :: any).Visible = false end
				setText(c:FindFirstChild("DescriptionLabel"), perkDescription(picked, (ups[picked] or 0) + 1))
				-- learning is by level here (Warrior.perksForLevel), so the LEARN button has nothing to do
				local improve, improved = c:FindFirstChild("ImproveButton"), c:FindFirstChild("ImprovedLabel")
				if improve then (improve :: any).Visible = false end
				if improved then (improved :: any).Visible = learned[picked] == true end
				local show = c:FindFirstChild("ShowButton")
				if show then (show :: any).Visible = false end
				setText(c:FindFirstChild("DamageLabel"), "")
			end
		end
	end

	---------------- UserPerksPanel: the perks you have
	local mine = {}
	for _, row in rows do
		for _, n in row.perks do
			if learned[n] and not isTrick(n) then table.insert(mine, n) end
		end
	end
	local none = p:find("SidePanels/UserPerksPanel/NoPerks")
	if none then none.Visible = #mine == 0 end
	-- two columns of perk tiles (back, icon, level badge), as the original's PerksController lists them
	local table_ = p:find("SidePanels/UserPerksPanel/TableView")
	if table_ and #mine > 0 then
		local TILE, PITCH = 180, 205
		local scroller = Instance.new("ScrollingFrame")
		scroller.BackgroundTransparency = 1
		scroller.BorderSizePixel = 0
		scroller.ScrollBarThickness = 0
		scroller.Size = UDim2.fromScale(1, 1)
		scroller.CanvasSize = UDim2.fromOffset(0, PITCH * math.ceil(#mine / 2) + 40)
		scroller.Parent = table_
		for i, n in mine do
			local col, row = (i - 1) % 2, (i - 1) // 2
			local pos = UDim2.new(0.5, (col - 0.5) * PITCH, 0, 30 + TILE / 2 + row * PITCH)
			W.image(scroller, "ProfilePieces.perkback", pos, Vector2.new(TILE, TILE)).ScaleType = Enum.ScaleType.Fit
			W.image(scroller, Xml.attr(perkDef(n), "Image"), pos, Vector2.new(TILE, TILE)).ScaleType = Enum.ScaleType.Fit
			local lv = (ups[n] or 0) + 1
			if Images.sprite("ProfilePieces.level" .. lv) then
				W.image(scroller, "ProfilePieces.level" .. lv, pos + UDim2.fromOffset(TILE * 0.33, TILE * 0.33), Vector2.new(56, 55))
			end
		end
	end
	p:relayout()
end

---------------------------------------------------------------- settings

-- SettingsButtons sprite for each of the port's languages, and the string naming it
local LANGS = {
	{ "eng", "usbr", "English" }, { "rus", "rus", "Russian" }, { "ger", "ger", "German" }, { "fra", "fra", "French" },
	{ "ita", "ita", "Italian" }, { "spa", "spa", "Spanish" }, { "por", "ptbr", "Portuguese" }, { "tur", "tur", "Turkish" },
	{ "chn", "chn", "ChineseSimplified" }, { "chn_tr", "chn", "ChineseTraditional" }, { "jpn", "jpn", "Japanese" },
	{ "kor", "kor", "Korean" },
}

-- A dialog over the current screen on a dark backdrop that swallows taps; returns the backdrop
local function dialogLayer(): Frame
	local _, c = root()
	local shade = Instance.new("TextButton")
	shade.Name = "Dialog"
	shade.Text = ""
	shade.AutoButtonColor = false
	shade.BackgroundColor3 = Color3.new(0, 0, 0)
	shade.BackgroundTransparency = 0.4
	shade.Size = UDim2.fromScale(1, 1)
	shade.ZIndex = 1000
	shade.Parent = layer or c
	return shade :: any
end

-- Volumes: the on/off toggles (settings.sound / music) and the advanced dialog's sliders (soundVol /
-- musicVol, 0..1). Game.start applies the same at launch.
function Menus.applyVolumes()
	local st = Profile.get().settings
	local sv = st.soundVol or 1
	local mv = st.musicVol or 1
	Sound.setVolumes(st.sound == 0 and 0 or sv, st.music == 0 and 0 or 0.6 * mv)
end

-- The settings (SettingsDialog, opened from the menu over whatever screen is up, as in the original). The
-- original's runtime layout, from its screenshots: Music, Sound, Credits and Support down the left;
-- the language and Soundtrack down the right (where Facebook's slot is in the prefab); the user id under
-- them. Credits, Support and Soundtrack open external pages or a credits roll the port doesn't have, so
-- they are shown but do nothing; Facebook, Game Center and cloud saves stay hidden.
function Menus.settings()
	local d = Profile.get()
	local holder = dialogLayer()
	local dlg = UI.build("SettingsDialog", holder)
	if not dlg then return end
	hideAll(dlg, { "buttons/btnCloudSaves", "Content/btnFacebook", "Content/btnGameCenter" })
	local RIGHT_X = -35
	for name, y in { btnLanguage = 200, btnItunes = 0 } do
		local b = dlg:find("Content/" .. name)
		if b then
			b.Visible = true
			b.Position = UDim2.new(0.5, RIGHT_X, 0.5, -y)
		end
	end
	for _, name in { "btnCredits", "btnSupport" } do
		local b = dlg:find("Content/" .. name)
		if b then b.Visible = true end
	end
	-- the original draws every option label the size of Soundtrack's (the prefab's 69 is replaced at run time)
	for _, name in { "btnMusic", "btnSound", "btnCredits", "btnSupport", "btnLanguage", "btnItunes" } do
		local t = textOf(dlg:find("Content/" .. name .. "/Text"))
		if t then
			t.TextScaled = true
			local lim = t:FindFirstChildOfClass("UITextSizeConstraint") or Instance.new("UITextSizeConstraint")
			lim.MaxTextSize = 100
			lim.Parent = t
			t.TextXAlignment = Enum.TextXAlignment.Left
		end
	end
	local function close() holder:Destroy() end
	local function refresh()
		UI.setSprite(dlg:find("Content/btnMusic/Icon"), "SettingsButtons." .. (d.settings.music == 0 and "music_off" or "music"))
		UI.setSprite(dlg:find("Content/btnSound/Icon"), "SettingsButtons." .. (d.settings.sound == 0 and "sound_off" or "sound"))
		local lang = d.settings.language or "eng"
		for _, l in LANGS do
			if l[1] == lang then
				UI.setSprite(dlg:find("Content/btnLanguage/Icon"), "SettingsButtons." .. l[2])
				setText(dlg:find("Content/btnLanguage/Text"), Xml.text(l[3]))
			end
		end
		setText(dlg:find("Header"), string.upper(Xml.text("Settings_Title")))
		setText(dlg:find("Content/btnMusic/Text"), Xml.text("Settings_Music"))
		setText(dlg:find("Content/btnSound/Text"), Xml.text("Settings_Sound"))
		setText(dlg:find("Content/btnCredits/Text"), Xml.text("Settings_Credits"))
		setText(dlg:find("Content/btnSupport/Text"), Xml.text("Settings_Support"))
		setText(dlg:find("Content/btnItunes/Text"), Xml.text("Settings_Soundtack"))
		setText(dlg:find("buttons/btnBack/Text"), Xml.text("Settings_Back"))
		setText(dlg:find("buttons/btnMore/Text"), Xml.text("Settings_Advanced"))
		setText(dlg:find("Content/userID"), Xml.text("Settings_UserID") .. ": " .. tostring(Players.LocalPlayer.UserId))
	end
	refresh()
	onClick(dlg:find("Content/btnMusic"), function()
		d.settings.music = d.settings.music == 0 and 1 or 0
		Menus.applyVolumes()
		Profile.save()
		refresh()
	end)
	onClick(dlg:find("Content/btnSound"), function()
		d.settings.sound = d.settings.sound == 0 and 1 or 0
		Menus.applyVolumes()
		Profile.save()
		refresh()
	end)
	onClick(dlg:find("Content/btnLanguage"), function()
		local i = 1
		for k, l in LANGS do if l[1] == (d.settings.language or "eng") then i = k end end
		d.settings.language = LANGS[i % #LANGS + 1][1]
		Xml.setLanguage(d.settings.language)
		Profile.save()
		refresh()
	end)
	onClick(dlg:find("buttons/btnBack"), close)
	onClick(dlg:find("buttons/btnMore"), function()
		close()
		Menus.settingsMore()
	end)
	dlg:relayout()
end

-- A Slider of the advanced dialog: Fill is a filled image, Handle UI rides the slide area; a press or
-- drag on the track sets the value. onChange gets 0..1.
local function slider(track: any, value: number, onChange: (number) -> ())
	if not track then return end
	local fill = track:FindFirstChild("Fill", true)
	local area = track:FindFirstChild("Handle Slide Area")
	local handle = area and area:FindFirstChild("Handle UI")
	local function show(v: number)
		if fill then
			fill:SetAttribute("fillMethod", "horizontal")
			UI.setFill(fill, v)
		end
		if handle then
			handle.AnchorPoint = Vector2.new(0.5, 0.5)
			handle.Position = UDim2.new(v, 0, 0.5, 0)
		end
	end
	show(value)
	local UIS = game:GetService("UserInputService")
	local dragging = false
	local function at(x: number)
		local ref = area or track
		local v = math.clamp((x - ref.AbsolutePosition.X) / math.max(1, ref.AbsoluteSize.X), 0, 1)
		show(v)
		onChange(v)
	end
	local hit = clickable(track)
	hit.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			dragging = true
			at(input.Position.X)
		end
	end)
	local moved = UIS.InputChanged:Connect(function(input)
		if dragging and (input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch) then
			at(input.Position.X)
		end
	end)
	local ended = UIS.InputEnded:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			dragging = false
		end
	end)
	track.Destroying:Connect(function()
		moved:Disconnect()
		ended:Disconnect()
	end)
end

-- SettingsAdvancedDialog, as the original shows it: Graphics Quality, Location Resolution and Controller
-- Scale (each tap steps through its values), then the music and sound sliders, and BACK. The port renders
-- one quality, so graphics and location resolution are remembered but change nothing; the controller scale
-- sizes the touch controls. The port's own reset and the temporary dev max-out sit small under the rows.
local GRAPHICS = { "Low", "Medium", "High" }
local SCALES = { "Small", "Large" }
function Menus.settingsMore()
	local d = Profile.get()
	local st = d.settings
	local holder = dialogLayer()
	local dlg = UI.build("SettingsAdvancedDialog", holder)
	if not dlg then return end
	hideAll(dlg, { "Content/Scroll", "btnContainer/btnOk", "Content/Static/btnWithdrawGDPRGroup", "Content/Static/userID" })
	local static = dlg:find("Content/Static")
	if static then static.Visible = true end
	setText(dlg:find("Header"), string.upper(Xml.text("Settings_Advanced_Title")))
	setText(dlg:find("btnContainer/btnCancel/Text"), Xml.text("Settings_Back"))
	local function cycle(list: { string }, cur: string?): string
		local i = table.find(list, cur or list[#list]) or #list
		return list[i % #list + 1]
	end
	local function refresh()
		setText(dlg:find("Content/Static/btnGraphics/Text"),
			Xml.text("Settings_Graphics_Quality") .. Xml.text("Settings_Graphics_" .. (st.graphics or "High")))
		setText(dlg:find("Content/Static/btnLocationRes/Text"),
			Xml.text("Settings_Location_Resolution") .. Xml.text("Settings_Graphics_" .. (st.locationRes or "High")))
		setText(dlg:find("Content/Static/btnController/Text"),
			Xml.text("Settings_Controller_Scale") .. Xml.text("Settings_Controller_" .. (st.controllerScale or "Large")))
		UI.setSprite(dlg:find("Content/Static/btnMusicGroup/btnMusic/Icon"), "SettingsButtons." .. (st.music == 0 and "music_off" or "music"))
		UI.setSprite(dlg:find("Content/Static/btnSoundGroup/btnSound/Icon"), "SettingsButtons." .. (st.sound == 0 and "sound_off" or "sound"))
	end
	refresh()
	local function save()
		Profile.save()
		refresh()
	end
	onClick(dlg:find("Content/Static/btnGraphics"), function() st.graphics = cycle(GRAPHICS, st.graphics) save() end)
	onClick(dlg:find("Content/Static/btnLocationRes"), function() st.locationRes = cycle(GRAPHICS, st.locationRes) save() end)
	onClick(dlg:find("Content/Static/btnController"), function() st.controllerScale = cycle(SCALES, st.controllerScale) save() end)
	onClick(dlg:find("Content/Static/btnMusicGroup/btnMusic"), function()
		st.music = st.music == 0 and 1 or 0
		Menus.applyVolumes()
		save()
	end)
	onClick(dlg:find("Content/Static/btnSoundGroup/btnSound"), function()
		st.sound = st.sound == 0 and 1 or 0
		Menus.applyVolumes()
		save()
	end)
	slider(dlg:find("Content/Static/btnMusicGroup/trackMusic"), st.musicVol or 1, function(v)
		st.musicVol = v
		Menus.applyVolumes()
	end)
	slider(dlg:find("Content/Static/btnSoundGroup/trackSound"), st.soundVol or 1, function(v)
		st.soundVol = v
		Menus.applyVolumes()
	end)
	local function close()
		Profile.save()
		holder:Destroy()
	end
	onClick(dlg:find("btnContainer/btnCancel"), function()
		close()
		Menus.settings()
	end)
	-- the port's own tools, small and out of the original's rows
	local reset = W.textButton(holder, "BtnDark", "RESET PROGRESS", UDim2.new(0.5, -260, 1, -80), Vector2.new(420, 80), function()
		close()
		Profile.reset()
		-- a new game: the scripts start over from the tutorial
		if Menus.onRestart then Menus.onRestart() else Menus.dojo() end
	end)
	reset.ZIndex = 50
	-- DEV ONLY, temporary: unlock every act, boss and mode for testing (Profile.maxOut)
	local dev = W.textButton(holder, "BtnGreen", "MAX OUT (DEV)", UDim2.new(0.5, 260, 1, -80), Vector2.new(420, 80), function()
		close()
		Profile.maxOut()
		-- start the scripts over, so the act stories the wins now call for get attached
		if Menus.onRestart then Menus.onRestart() else Menus.map(Profile.get().zone) end
	end)
	dev.ZIndex = 50
	-- DEV ONLY: the port's arsenal training (every weapon against a dummy)
	local arsenal = W.textButton(holder, "BtnGold", "ARSENAL (DEV)", UDim2.new(0.5, 700, 1, -80), Vector2.new(420, 80), function()
		close()
		Menus.arsenal()
	end)
	arsenal.ZIndex = 50
	dlg:relayout()
end

return Menus
