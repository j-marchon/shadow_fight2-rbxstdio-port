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
local function setScene(locationName: string?, showWarrior: boolean, def: any?)
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
	local sc = showWarrior and Showcase.new(def or Profile.warrior(), folder, 0, 1) or nil
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
local function fmt(n: number): string
	local s = tostring(math.floor(n))
	local neg = string.sub(s, 1, 1) == "-"
	if neg then s = string.sub(s, 2) end
	local out = string.reverse((string.gsub(string.reverse(s), "(%d%d%d)", "%1 ")))
	out = string.gsub(out, "^ ", "")
	return (neg and "-" or "") .. out
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
		"Content/StaticPanel/EnergyPanel", "Content/StaticPanel/RaidRaiting", "Content/MaterialsPanel",
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

	-- coins and gems
	setText(m:find("Content/StaticPanel/MoneyPanel/CoinInfoGroup/CoinsLabel"), fmt(d.money))
	setText(m:find("Content/StaticPanel/MoneyPanel/BonusInfoGroup/RubyLabel"), fmt(d.bonus))
	onClick(m:find("Content/StaticPanel/MoneyPanel/GoToShopBtn"), function() Menus.shop() end)
	onClick(m:find("Content/StaticPanel/MoneyPanel/BtnRubyInfo/BtnRuby"), function() Menus.shop() end)

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
					local f = ({ Dojo = Menus.dojo, Map = Menus.map, Shop = Menus.shop, Profile = Menus.profile,
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

	-- the dojo's corner toggle: MENU_BUTTON_DISCIPLE_ON is the punching bag. The port's training
	-- (every weapon, you and the dummy) sits behind it.
	local disciple = m:find("Content/TgglDisciple")
	if disciple then
		disciple.Visible = section == "Dojo"
		local bg = disciple:FindFirstChild("Background")
		if bg then UI.setSprite(bg, "MenuButtons.btn_punching_bag") end
		local mark = bg and bg:FindFirstChild("Checkmark")
		if mark then (mark :: any).Visible = false end
		onClick(disciple, function() Menus.arsenal() end)
	end
	m:relayout()
	return m
end
Menus.mainMenu = mainMenu

---------------------------------------------------------------- dojo

-- The dojo scene: the dojo in 3D with your warrior, and the MainMenu over it (DojoScene mounts nothing
-- else). Port deviation: the original's dojo is a free-roam room; here it is the backdrop for the menu.
function Menus.dojo()
	local s = clear()
	setScene("dojo", true)
	mainMenu(s, "Dojo")
	Sound.music("menu")
end

---------------------------------------------------------------- training (arsenal)

Menus.onTraining = nil :: ((mine: any, dummy: any) -> ())?
local picks = { me = "Fists", dummy = "Fists" }
function Menus.arsenal(groupName: string?)
	local Arsenal = require(script.Parent.Arsenal)
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
		Menus.dojo()
	end)
end

---------------------------------------------------------------- map

local SKIP_TYPES = { FAKE = true, TUTORIAL = true, HIDDEN = true }
-- The act's map battles: the story set, or with Eclipse on, the *_ECLIPSEMODE set (EclipseToggleName)
local function visibleBattles(zone: any, eclipse: boolean?): { any }
	local out = {}
	for _, b in Stages.battles(zone) do
		local name = Xml.attr(b, "Name") or ""
		local t = Xml.attr(b, "Type") or ""
		local isEclipse = string.find(name, "_ECLIPSEMODE") ~= nil
		if not SKIP_TYPES[t] and not string.find(name, "_INTERMISSION") and isEclipse == (eclipse == true)
			and not string.find(name, "_LOCKED") and Xml.attr(b, "X") then
			table.insert(out, b)
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

function Menus.zoneUnlocked(zoneName: string): boolean
	if zoneName == "ZONE_1" then return true end
	return Profile.get().flags["zone_" .. zoneName] == true
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
	setText(info:find("Panel/lblBattleName"), string.upper(loc(Xml.attr(b, "Title"))))
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
			-- ProgressBricksPanel: one brick per fight, lit once won
			local bricks = c:FindFirstChild("Bricks")
			if bricks and #fights > 0 then
				local row = Instance.new("Frame")
				row.Name = "BrickRow"
				row.BackgroundTransparency = 1
				row.AnchorPoint = Vector2.new(0.5, 0.5)
				row.Position = UDim2.fromScale(0.5, 0.5)
				row.Size = UDim2.new(0, 480, 0, 60)
				row.ZIndex = 5
				row.Parent = bricks
				local n = #fights
				local w = math.min(60, 480 / n)
				for i = 1, n do
					local brick = W.image(row, "MiscSprites.brick", UDim2.new(0.5, (i - (n + 1) / 2) * w, 0.5, 0), Vector2.new(w - 4, 44))
					brick.ScaleType = Enum.ScaleType.Stretch
					brick.ImageTransparency = i <= done and 0 or 0.65
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
	backdrop.BackgroundColor3 = Color3.new(0, 0, 0)
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
		local bossLocked = Xml.attr(b, "Type") == "BOSSES" and not eclipse and not Menus.bossOpen(zn)
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
		local toggles = item:find("BattleToggles") or root
		for _, b in battles do
			local bb = UI.build("BattleButton", toggles, { layout = false })
			if bb then
				local btn = bb.root :: any
				local x, y = Xml.num(b, "X", 0) :: number, Xml.num(b, "Y", 0) :: number
				btn.Position = UDim2.new(0.5, 2 * x, 0.5, -2 * y)
				btn.ScaleType = Enum.ScaleType.Fit
				local nm = bb:find("Name")
				if nm then nm.Visible = false end
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

	---------------- MapButtonsPanel: the act's Eclipse toggle sits in its actions row
	local row = actions and actions:find("ActionsPanel")
	if row then
		row.Visible = Menus.eclipseOpen(zn)
		if row.Visible then
			local e = W.button(row, "MiscSprites.eclipse", nil, UDim2.fromScale(0.5, 0.5), Vector2.new(200, 200), function()
				d.eclipse[zn] = not eclipse
				Profile.save()
				Menus.map(zn)
			end)
			e.ImageTransparency = eclipse and 0 or 0.45
		end
	end
	Sound.music("act")
end

-- The act's boss opens once every other story battle of the act has been won at least once
function Menus.bossOpen(zoneName: string): boolean
	local zone = Stages.zone(zoneName)
	for _, b in visibleBattles(zone) do
		local t = Xml.attr(b, "Type")
		if t == "TOURNAMENT" or t == "CHALLENGE" then
			if Profile.progress(zoneName, Xml.attr(b, "Name") :: string) < 1 then return false end
		end
	end
	return true
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
	if vs then
		local la, ra = vs:find("LeftAvatar"), vs:find("RightAvatar")
		if la and player.avatar then UI.setSprite(la, player.avatar) end
		if ra and enemy.avatar then UI.setSprite(ra, enemy.avatar) end
		for side, def in { LeftName = player, RightName = enemy } do
			local n = vs:find(side)
			if n then
				n.Visible = true
				local t = n:FindFirstChild("Text")
				if t then t.Text = string.upper(Xml.text(def.name or "")) end
			end
		end
	end
	Sound.play("snd_gong")
	task.delay(seconds, done)
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
			-- TextAndMoneyLine: "PRIZE" with the fight's coins (and gems when it gives any)
			local prize = line("TextAndMoneyLine")
			if prize then
				setText(prize:find("Text"), Xml.text("goldPrize"))
				local ruby = prize:find("PrizePanel/RubyCount")
				if ruby then ruby.Visible = (r.bonus or 0) > 0 end
				setText(prize:find("PrizePanel/RubyCount/Text"), fmt(r.bonus or 0))
				local icon = prize:find("PrizePanel/MoneyCount/Icon")
				if icon then UI.setSprite(icon, "MiscSprites.gold") end
				setText(prize:find("PrizePanel/MoneyCount/Text"), fmt(r.money or 0))
			end
			-- ExpAndMoneyLine: the experience gained and the coins total
			local total = line("ExpAndMoneyLine")
			if total then
				setText(total:find("Exp/Text"), fmt(r.exp or 0))
				setText(total:find("Prize/MoneyCount/Text"), fmt(r.money or 0))
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

-- {item type, ShopBottomPanel node, ShopButtons1 sprite base}. The panel also carries Payment, Raid and
-- Free -- real-money and raid store tabs with nothing behind them here, so they are hidden, not shown dead.
local SHOP_TABS = {
	{ "Weapon", "Weapon", "Weapon" }, { "Armor", "Armor", "Armor" }, { "Helm", "Helmet", "Helmet" },
	{ "Ranged", "Ranged", "Ranged_weapon" }, { "Magic", "Magic", "Magic" },
}
local SHOP_DEAD_TABS = { "Payment", "Raid", "Free" }
-- ShopTableViewCell is 800x400; the original leaves a little air between rows
local CELL_STEP = 412

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

-- The item's attributes in Items.STATS order (the order the original lists them in), each with its icon
local function statRows(it: any, upgrade: number?): { { name: string, value: number } }
	local stats = Items.stats(it, upgrade)
	local out = {}
	for _, k in Items.STATS do
		local v = stats[k]
		if v and v ~= 0 then table.insert(out, { name = k, value = v }) end
	end
	return out
end

-- One row of the ItemParameterScrollItem kind: the attribute's icon, then its value
local function statRow(parent: Instance, row: any, y: number)
	local icon = STAT_ICON[row.name]
	if icon then W.image(parent, "Attributes." .. icon, UDim2.new(0, 80, 0, y), Vector2.new(90, 90)) end
	W.label(parent, (row.name:gsub("(%l)(%u)", "%1 %2")), UDim2.new(0, 145, 0, y), Vector2.new(280, 56), 34, W.GOLD, Enum.TextXAlignment.Left)
		.AnchorPoint = Vector2.new(0, 0.5)
	W.label(parent, tostring(row.value), UDim2.new(1, -40, 0, y), Vector2.new(150, 56), 42, Color3.new(1, 1, 1), Enum.TextXAlignment.Right)
		.AnchorPoint = Vector2.new(1, 0.5)
end

-- One item row, built from the game's own ShopTableViewCell. The prefab stacks its bands with Unity layout
-- groups the port does not run, so the art and the icon strip are placed here; the sprites, fonts, colours
-- and the equipped/owned marks are the prefab's own.
local function shopCell(parent: Instance, it: any, owned: boolean, equipped: boolean, locked: boolean, selected: boolean, pick: () -> ()): any
	local b = UI.build("ShopTableViewCell", parent, { layout = false })
	if not b then return nil end
	local cell = b.root :: any
	cell.AnchorPoint = Vector2.new(0.5, 0)
	cell.Position = UDim2.new()
	-- the prefab row is 800 wide, a little wider than the scroll's 750: fit the width, keep the height
	cell.Size = UDim2.new(1, -16, 0, 400)
	if selected then
		cell.BackgroundColor3 = Color3.fromRGB(120, 80, 40)
		cell.BackgroundTransparency = 0.45
	end
	local art = b:find("Content/Image")
	if art then
		art.AnchorPoint = Vector2.new(0.5, 0)
		art.Position = UDim2.new(0.5, 0, 0, 24)
		art.Size = UDim2.new(1, -80, 0, 240)
		art.ScaleType = Enum.ScaleType.Fit
		W.setImage(art, Xml.attr(it, "Image"))
	end
	-- CompositeImage layers a multi-part item's pieces, AddPercentImage and TicketLabel belong to the money
	-- packs, DiscountIcon to a sale and PerksPanel to item perks; none of them applies to an equipment row
	for _, n in { "Content/CompositeImage", "Content/AddPercentImage", "Content/TicketLabel",
		"Content/IconPanel/DiscountIcon", "Content/IconPanel/PerksPanel" } do
		local o = b:find(n)
		if o then o.Visible = false end
	end
	-- the padlock the original puts over an item the warrior is not high enough level for
	local lock = b:find("LockIcon")
	if lock then lock.Visible = locked end
	local icons = b:find("Content/IconPanel")
	if icons then
		icons.AnchorPoint = Vector2.new(0.5, 1)
		icons.Position = UDim2.new(0.5, 0, 1, -12)
		icons.Size = UDim2.fromOffset(800, 120)
	end
	local eq = b:find("Content/IconPanel/EquippedIcon")
	if eq then eq.Visible = equipped end
	local jack = b:find("Content/IconPanel/JackdawIcon")
	if jack then jack.Visible = owned and not equipped end
	-- LevelLabel is "<quad name=MiscSprites.star ...> N" in the original; a quad is a sprite the text can't
	-- carry here, so the star sits beside the number as its own image
	local lvl = b:find("Content/IconPanel/LevelLabel")
	if lvl then
		local t = lvl:FindFirstChild("Text") :: any
		if t then
			t.Text = "      " .. (Xml.num(it, "Level", 0) :: number)
			t.TextXAlignment = Enum.TextXAlignment.Left
			t.TextColor3 = locked and Color3.fromRGB(255, 90, 90) or W.GOLD
		end
		W.image(lvl, "MiscSprites.star", UDim2.new(0, 52, 0.5, 0), Vector2.new(84, 76))
	end
	-- the original's row carries no name: the art identifies the item and ItemInfoPanel names the one picked
	local hit = Instance.new("TextButton")
	hit.Text = ""
	hit.BackgroundTransparency = 1
	hit.Size = UDim2.fromScale(1, 1)
	hit.ZIndex = 50
	hit.Parent = cell
	hit.Activated:Connect(function()
		Sound.play("snd_click_1")
		pick()
	end)
	return cell
end

-- The shop, laid out as the original: scene_level4_Shop gives the parchment scroll in the middle, the side
-- panels and the left-hand buttons; ShopBottomPanel the category tabs along the bottom; ShopTableViewCell
-- each 800x400 item row. The three side panels sit on top of each other in the scene because SidePanel
-- slides them in and out at runtime and only one is ever on screen -- the port places them statically, so
-- the parameters panel waits behind its flag button instead. ItemPropertiesPanel (item perks) and
-- ForgePanel (forging) have nothing behind them here and stay hidden.
function Menus.shop(tab: string?, selected: string?, showParams: boolean?)
	tab = tab or "Weapon"
	local d = Profile.get()
	local s = clear()
	local preview = table.clone(Profile.warrior())
	if selected then
		preview.items = table.clone(preview.items)
		preview.items[tab :: string] = selected
	end
	setScene("dojo", true, preview)

	local shop = UI.build("scene_level4_Shop", s, { layout = false })
	local function node(name: string): any
		return shop and shop:find(name)
	end
	for _, n in { "ItemPropertiesPanel", "ForgePanel", "BorderLeft", "BorderRight" } do
		local o = node(n)
		if o then o.Visible = false end
	end
	-- ShopBackground is the scene's 2D backdrop sprite; the port shows the dojo in 3D behind the canvas
	local bg = node("ShopBackground")
	if bg then bg.Visible = false end

	-- A SidePanel sits centred in the scene and is slid into place at runtime, through a Panel child that
	-- carries most of the offset. With nothing sliding them they would stack over the item scroll, so each
	-- is given a place clear of it (the scroll is 850 wide and centred). The original slides both out on
	-- the left one at a time; with both on screen at once here the attribute panel takes the right.
	local PANEL_X = 425 + 304 + 40
	local function placePanel(panel: any, side: number)
		if not panel then return nil end
		panel.AnchorPoint = Vector2.new(0.5, 0.5)
		panel.Position = UDim2.new(0.5, PANEL_X * side, 0.5, -40)
		panel.Size = UDim2.fromOffset(608, 866)
		local inner = panel:FindFirstChild("Panel")
		if not inner then return nil end
		inner.AnchorPoint = Vector2.new(0.5, 0.5)
		inner.Position = UDim2.fromScale(0.5, 0.5)
		inner.Size = UDim2.fromScale(1, 1)
		local art = inner:FindFirstChild("InfoPanel")
		if art then
			art.AnchorPoint = Vector2.new(0.5, 0.5)
			art.Position = UDim2.fromScale(0.5, 0.5)
			art.Size = UDim2.fromScale(1, 1)
		end
		-- the flag tab rides the edge facing the scroll, as it does in the original
		local flag = inner:FindFirstChild("MoveButton")
		if flag then
			flag.AnchorPoint = Vector2.new(side < 0 and 0 or 1, 0.5)
			flag.Position = UDim2.new(side < 0 and 1 or 0, -4 * side, 0.5, 0)
		end
		return art
	end

	-- the chrome is built before the item rows: its atlases are small and shared, and whatever is decoded
	-- first wins the EditableImage budget
	local tabs = UI.build("ShopBottomPanel", s, { layout = false })
	if tabs then
		local strip = tabs:find("SimpleScroll")
		if strip then strip.Visible = false end -- the scrolling copy; the fixed row below is the one shown
		for i, t in SHOP_TABS do
			local btn = tabs:find("HorizontalLayout/" .. t[2]) or tabs:find(t[2])
			if btn then
				local active = t[1] == tab
				btn.AnchorPoint = Vector2.new(0.5, 0.5)
				btn.Position = UDim2.new(0.5, (i - (#SHOP_TABS + 1) / 2) * 252, 0.5, 0)
				btn.Size = UDim2.fromOffset(247, 235)
				UI.setSprite(btn, "ShopButtons1." .. t[3] .. (active and "_active" or ""))
				-- Indicator is the "new item here" dot, driven by data the port has no counterpart for
				local dot = btn:FindFirstChild("Indicator")
				if dot then (dot :: any).Visible = false end
				clickable(btn).Activated:Connect(function()
					Sound.play("snd_click_1")
					Menus.shop(t[1])
				end)
			end
		end
		for _, n in SHOP_DEAD_TABS do
			local btn = tabs:find("HorizontalLayout/" .. n) or tabs:find(n)
			if btn then btn.Visible = false end
		end
	end
	mainMenu(s, "Shop")

	---------------- item rows
	local items = shopItems(tab :: string)
	local view = node("TableView")
	local list = Instance.new("ScrollingFrame")
	list.BackgroundTransparency = 1
	list.BorderSizePixel = 0
	list.ScrollBarThickness = 0
	list.Size = UDim2.fromScale(1, 1)
	list.CanvasSize = UDim2.fromOffset(0, #items * CELL_STEP)
	list.Parent = view or s
	-- The original's TableView keeps only the rows near the viewport alive, and here that is not just a
	-- speed question: a tab's art spans up to 28 textures, each decoded into an EditableImage, and the
	-- device's budget for those is finite. Building all 80-odd rows at once exhausted it, which left every
	-- atlas asked for afterwards -- the category tabs among them -- silently blank. So rows outside the
	-- window are destroyed and their art released once no live row still needs it.
	local live: { [number]: any } = {}
	local liveTex: { [number]: string } = {}
	local shopTextures: { string } = {}
	local function window()
		local scale = math.max(UI.scaleOf(canvas :: Frame), 1e-3)
		local top = list.CanvasPosition.Y
		local height = list.AbsoluteWindowSize.Y / scale
		local first = math.max(1, math.floor(top / CELL_STEP))
		local last = math.min(#items, math.ceil((top + height) / CELL_STEP) + 1)
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
				local lvl = Xml.num(it, "Level", 0) :: number
				local cell = shopCell(list, it, Profile.owns(name), d.equipped[tab :: string] == name,
					lvl > d.level, name == selected, function()
						Menus.shop(tab, name, showParams)
					end)
				if cell then
					cell.Position = UDim2.new(0.5, 0, 0, (i - 1) * CELL_STEP)
					live[i] = cell
					local sp = Images.sprite(Xml.attr(it, "Image"))
					if sp then liveTex[i] = sp.texture end
				end
			end
		end
		-- free the art of every texture no row on screen is still using
		local keep: { [string]: boolean } = {}
		for _, t in liveTex do keep[t] = true end
		for _, t in shopTextures do
			if not keep[t] then Images.release(t) end
		end
		table.clear(shopTextures)
		for _, t in liveTex do table.insert(shopTextures, t) end
	end
	window()
	list:GetPropertyChangedSignal("CanvasPosition"):Connect(window)
	local none = node("NoItemsMessage")
	if none then none.Visible = #items == 0 end

	---------------- the selected item: name, price and what you can do with it
	local info = node("ItemInfoPanel")
	local panel = info and info:FindFirstChild("Panel")
	local face = placePanel(info, -1)
	if face then
		if not selected then
			info.Visible = false
		else
			local it = Items.get(selected)
			local up = d.items[selected] and d.items[selected].upgrade or 0
			local lvl = Xml.num(it, "Level", 0) :: number
			W.label(face, Items.title(it), UDim2.new(0.5, 0, 0, 90), Vector2.new(520, 120), 52, W.GOLD)
			local art = W.image(face, Xml.attr(it, "Image"), UDim2.new(0.5, 0, 0, 300), Vector2.new(440, 300))
			art.ScaleType = Enum.ScaleType.Fit
			local desc = Xml.attr(it, "Description")
			if desc then
				W.label(face, Xml.text(desc), UDim2.new(0.5, 0, 0, 500), Vector2.new(520, 140), 32, Color3.new(1, 1, 1))
			end
			local y = 600
			for _, row in statRows(it, up) do
				statRow(face, row, y)
				y += 70
			end
			-- the flag button on the panel's edge pulls out the full attribute list, as in the original
			local flag = panel:FindFirstChild("MoveButton") :: any
			if flag then
				clickable(flag).Activated:Connect(function()
					Sound.play("snd_click_1")
					Menus.shop(tab, selected, not showParams)
				end)
			end

			local price, gems = Xml.num(it, "Price"), Xml.num(it, "BonusPrice")
			if Profile.owns(selected) then
				if d.equipped[tab :: string] ~= selected then
					W.textButton(face, "BtnGreen", "EQUIP", UDim2.new(0.5, 0, 1, -200), Vector2.new(420, 110), function()
						Profile.equip(selected)
						Profile.save()
						Sound.play("snd_click_2")
						Menus.shop(tab, selected, showParams)
					end)
				end
				local nextStep = Items.upgrades(it)[up + 1]
				if nextStep then
					local p, g = Xml.num(nextStep, "Price"), Xml.num(nextStep, "BonusPrice")
					W.textButton(face, "BtnGold", "UPGRADE " .. (p and (p .. " coins") or ((g or 0) .. " gems")),
						UDim2.new(0.5, 0, 1, -80), Vector2.new(520, 110), function()
							if p and d.money >= p then d.money -= p
							elseif g and d.bonus >= g then d.bonus -= g
							else return end
							d.items[selected].upgrade = up + 1
							Profile.save()
							Sound.play("snd_upgrade")
							Menus.shop(tab, selected, showParams)
						end)
				end
			elseif lvl <= d.level then
				local afford = (price and d.money >= price) or (not price and gems and d.bonus >= gems)
				W.textButton(face, afford and "BtnGreen" or "BtnDark",
					"BUY  " .. (price and (price .. " coins") or ((gems or 0) .. " gems")),
					UDim2.new(0.5, 0, 1, -110), Vector2.new(520, 120), function()
						if not afford then return end
						if price then d.money -= price else d.bonus -= gems :: number end
						Profile.give(selected)
						Profile.equip(selected)
						Profile.save()
						Sound.play("snd_buy")
						Menus.shop(tab, selected, showParams)
					end)
			else
				W.label(face, "Requires level " .. lvl, UDim2.new(0.5, 0, 1, -110), Vector2.new(520, 100), 44,
					Color3.fromRGB(255, 90, 90))
			end
		end
	end

	---------------- the attribute panel behind the flag
	local params = node("ItemParametersPanel")
	if params then
		params.Visible = showParams == true and selected ~= nil
		local pface = placePanel(params, 1)
		if pface and params.Visible then
			local sel = selected :: string
			local it = Items.get(sel)
			local up = d.items[sel] and d.items[sel].upgrade or 0
			W.label(pface, "ATTRIBUTES", UDim2.new(0.5, 0, 0, 90), Vector2.new(520, 100), 48, W.GOLD)
			local y = 220
			for _, row in statRows(it, up) do
				statRow(pface, row, y)
				y += 90
			end
		end
	end

	-- ButtonsContainer: "try on" puts the item on the warrior for a look, which selecting it already does
	-- here, and the forge is not ported -- so the container has nothing left to show. It also sits under
	-- ItemInfoPanel, which only clears it in the original because SidePanel slides the panel off-screen.
	local buttons = node("ButtonsContainer")
	if buttons then buttons.Visible = false end

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

local function perkDescription(name: string): string
	local key = "PERKDESCRIPTION_" .. string.sub(name, 6)
	local t = Xml.text(key)
	if t == key then return "" end
	-- the {n} values come from the perk's script at runtime; the port shows the sentence without them
	return (string.gsub(string.gsub(t, "{%d}", "?"), "%%%%", "%%"))
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
	-- no 3D here: the original shows a dimmed 2D backdrop (ShopBackground/Bg, tinted 0.64), and the
	-- profile's dozen atlases leave no EditableImage budget for the 3D dojo, which then renders blank
	setScene(nil, false)
	local backdrop = Instance.new("Frame")
	backdrop.Name = "Backdrop"
	backdrop.BackgroundColor3 = Color3.fromRGB(38, 24, 14)
	backdrop.BorderSizePixel = 0
	backdrop.Size = UDim2.fromScale(1, 1)
	backdrop.Parent = s
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
				local live = t == "Perks" or t == "Strikes"
				btn.Visible = live
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
			setText(p:find("SidePanels/InfoPanel/Title"), string.upper(loc(picked)))
			local c = p:find("SidePanels/InfoPanel/Contents/" .. (tab == "Perks" and "PerkContent" or "TrickContent"))
			if c then
				c.Visible = true
				local keys = c:FindFirstChild("Keys")
				if keys then (keys :: any).Visible = false end
				setText(c:FindFirstChild("DescriptionLabel"), perkDescription(picked))
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
	local table_ = p:find("SidePanels/UserPerksPanel/TableView")
	if table_ and #mine > 0 then
		local scroller = Instance.new("ScrollingFrame")
		scroller.BackgroundTransparency = 1
		scroller.BorderSizePixel = 0
		scroller.ScrollBarThickness = 0
		scroller.Size = UDim2.fromScale(1, 1)
		scroller.CanvasSize = UDim2.fromOffset(0, 120 * #mine)
		scroller.Parent = table_
		for i, n in mine do
			local yy = 60 + (i - 1) * 120
			local icon = W.image(scroller, Xml.attr(perkDef(n), "Image"), UDim2.new(0, 80, 0, yy), Vector2.new(100, 100))
			icon.ScaleType = Enum.ScaleType.Fit
			W.label(scroller, loc(n), UDim2.new(0, 150, 0, yy), Vector2.new(380, 90), 44, W.GOLD, Enum.TextXAlignment.Left)
				.AnchorPoint = Vector2.new(0, 0.5)
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

-- The settings (SettingsDialog, opened from the menu over whatever screen is up, as in the original):
-- music, sound, language and the user id. Credits, support and the store/social buttons have nothing
-- behind them here and stay hidden. "More" opens SettingsAdvancedDialog, which here holds the port's
-- own reset and the temporary dev max-out instead of the graphics/controller settings it has there.
function Menus.settings()
	local d = Profile.get()
	local holder = dialogLayer()
	local dlg = UI.build("SettingsDialog", holder)
	if not dlg then return end
	hideAll(dlg, { "Content/btnCredits", "buttons/btnCloudSaves" })
	local function close() holder:Destroy() end
	local function applySound()
		Sound.setVolumes(d.settings.sound == 1 and 1 or 0, d.settings.music == 1 and 0.6 or 0)
	end
	local function refresh()
		UI.setSprite(dlg:find("Content/btnMusic/Icon"), "SettingsButtons." .. (d.settings.music == 1 and "music" or "music_off"))
		UI.setSprite(dlg:find("Content/btnSound/Icon"), "SettingsButtons." .. (d.settings.sound == 1 and "sound" or "sound_off"))
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
		setText(dlg:find("buttons/btnBack/Text"), Xml.text("Settings_Back"))
		setText(dlg:find("buttons/btnMore/Text"), Xml.text("Settings_Advanced"))
		setText(dlg:find("Content/userID"), Xml.text("Settings_UserID") .. ": " .. tostring(Players.LocalPlayer.UserId))
	end
	refresh()
	onClick(dlg:find("Content/btnMusic"), function()
		d.settings.music = d.settings.music == 1 and 0 or 1
		applySound()
		Profile.save()
		refresh()
	end)
	onClick(dlg:find("Content/btnSound"), function()
		d.settings.sound = d.settings.sound == 1 and 0 or 1
		applySound()
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

function Menus.settingsMore()
	local holder = dialogLayer()
	local dlg = UI.build("SettingsAdvancedDialog", holder)
	if not dlg then return end
	hideAll(dlg, { "Content/Static", "Content/Scroll", "btnContainer/btnOk" })
	setText(dlg:find("Header"), string.upper(Xml.text("Settings_Advanced_Title")))
	local function close() holder:Destroy() end
	onClick(dlg:find("btnContainer/btnCancel"), function()
		close()
		Menus.settings()
	end)
	local content = dlg:find("Content") or holder
	W.textButton(content, "BtnDark", "RESET PROGRESS", UDim2.new(0.5, 0, 0.5, -90), Vector2.new(640, 120), function()
		close()
		Profile.reset()
		Menus.dojo()
	end)
	-- DEV ONLY, temporary: unlock every act, boss and mode for testing (Profile.maxOut)
	W.textButton(content, "BtnGreen", "MAX OUT (DEV)", UDim2.new(0.5, 0, 0.5, 90), Vector2.new(640, 120), function()
		close()
		Profile.maxOut()
		Menus.map(Profile.get().zone)
	end)
	dlg:relayout()
end

return Menus
