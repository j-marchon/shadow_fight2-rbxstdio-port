--!strict
-- The menu screens, built from the game's own sprites and data:
--  * top bar (TopPanel: coins, gems, level and experience) and bottom menu (MenuButtons: Map, Shop, Profile,
--    Settings, Dojo) on a canvas over the 3D scene
--  * dojo: the dojo location with your warrior in the peaceful stance
--  * map: the act's map (stages.xml Zone FileName), battle buttons at the Battle X/Y with the game's button
--    art (BattleBtn<state>.<state>_<icon>), act arrows, the battle info scroll with progress and rewards
--  * shop: Weapon / Armor / Helmet / Ranged / Magic tabs, list.xml prices and levels, buy, equip, upgrade
--  * profile: equipment and attributes; settings: sound, music, language, reset
-- Port deviations: the scroll animations and the radial menu wheel are laid out statically.

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

---------------------------------------------------------------- top bar and bottom menu

local function topBar(parent: Frame)
	local d = Profile.get()
	local bar = W.image(parent, "TopPanel.Top_Panel", UDim2.new(0.5, 0, 0, 0), Vector2.new(2400, 150), Vector2.new(0.5, 0))
	bar.ScaleType = Enum.ScaleType.Stretch
	bar.Size = UDim2.new(1, 0, 0, 150)
	-- level and experience
	W.image(parent, "TopPanel.level", UDim2.new(0.5, -760, 0, 62), Vector2.new(110, 110))
	W.label(parent, tostring(d.level), UDim2.new(0.5, -760, 0, 62), Vector2.new(100, 80), 56, Color3.new(1, 1, 1))
	local empty = W.image(parent, "TopPanel.Level_bar_Empty", UDim2.new(0.5, -690, 0, 62), Vector2.new(360, 40), Vector2.new(0, 0.5))
	empty.ScaleType = Enum.ScaleType.Stretch
	local fill = W.image(parent, "TopPanel.Level_bar", UDim2.new(0.5, -690, 0, 62), Vector2.new(360, 40), Vector2.new(0, 0.5))
	fill.ScaleType = Enum.ScaleType.Stretch
	fill:SetAttribute("fillMethod", "Horizontal")
	UI.setFill(fill, math.clamp(d.exp / math.max(1, Profile.expToNext(d.level)), 0, 1))
	-- coins and gems
	W.image(parent, "TopPanel.gold", UDim2.new(0.5, 180, 0, 62), Vector2.new(90, 90))
	W.label(parent, tostring(d.money), UDim2.new(0.5, 240, 0, 62), Vector2.new(300, 80), 60, W.GOLD, Enum.TextXAlignment.Left).AnchorPoint = Vector2.new(0, 0.5)
	W.image(parent, "TopPanel.ruby", UDim2.new(0.5, 560, 0, 62), Vector2.new(90, 90))
	W.label(parent, tostring(d.bonus), UDim2.new(0.5, 620, 0, 62), Vector2.new(250, 80), 60, Color3.fromRGB(255, 120, 120), Enum.TextXAlignment.Left).AnchorPoint = Vector2.new(0, 0.5)
end

local function bottomMenu(parent: Frame, current: string)
	local roll = W.image(parent, "CommonScrolls.MenuRoll_center", UDim2.new(0.5, 0, 1, 0), Vector2.new(1500, 230), Vector2.new(0.5, 1))
	roll.ScaleType = Enum.ScaleType.Stretch
	local entries = {
		{ "Dojo", function() Menus.dojo() end },
		{ "Map", function() Menus.map() end },
		{ "Shop", function() Menus.shop() end },
		{ "Profile", function() Menus.profile() end },
		{ "Settings", function() Menus.settings() end },
	}
	for i, e in entries do
		local name = e[1]
		local state = name == current and "_active" or "_normal"
		local x = (i - 3) * 270
		W.button(parent, "MenuButtons." .. name .. state, "MenuButtons." .. name .. "_pushed", UDim2.new(0.5, x, 1, -110), Vector2.new(230, 200), e[2])
	end
end

---------------------------------------------------------------- dojo

function Menus.dojo()
	local s = clear()
	setScene("dojo", true)
	topBar(s)
	bottomMenu(s, "Dojo")
	-- training: the punching bag opens the arsenal (every weapon in the game, for you and the dummy)
	W.button(s, "MenuButtons.btn_punching_bag", nil, UDim2.new(1, -170, 0.5, 0), Vector2.new(240, 240), function()
		Menus.arsenal()
	end)
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

function Menus.map(zoneName: string?)
	local d = Profile.get()
	zoneName = zoneName or d.zone or "ZONE_1"
	local zone = Stages.zone(zoneName :: string)
	if not zone then zoneName = "ZONE_1"; zone = Stages.zone("ZONE_1") end
	d.zone = zoneName :: string
	local s = clear()
	setScene(nil, false)
	local back = Instance.new("Frame")
	back.BackgroundColor3 = Color3.new(0, 0, 0)
	back.Size = UDim2.fromScale(1, 1)
	back.Parent = s
	local mapSprite = Xml.attr(zone, "FileName")
	local ms = Images.sprite(mapSprite)
	local mapH = 1536
	local srcH = ms and ms.source.Y * 1.5 or 973.5 -- the atlas holds the map at 2/3 of its size
	local k = mapH / srcH
	local map = W.image(s, mapSprite, UDim2.fromScale(0.5, 0.5), Vector2.new((ms and ms.source.X * 1.5 or 2048) * k, mapH))
	map.ScaleType = Enum.ScaleType.Stretch
	local eclipse = d.eclipse[zoneName :: string] == true and Menus.eclipseOpen(zoneName :: string)
	for _, b in visibleBattles(zone, eclipse) do
		local name = Xml.attr(b, "Name") :: string
		local total = #Stages.fights(b)
		local done = Profile.progress(zoneName :: string, name)
		local bossLocked = Xml.attr(b, "Type") == "BOSSES" and not eclipse and not Menus.bossOpen(zoneName :: string)
		local state = bossLocked and "Lock" or (done >= total and total > 0 and Xml.attr(b, "Type") ~= "PERIODIC" and "Base" or "Active")
		local x, y = (Xml.num(b, "X", 0) :: number) * 1.5 * k, (Xml.num(b, "Y", 0) :: number) * 1.5 * k
		local btn = W.button(map, buttonSprite(b, state), buttonSprite(b, "Pressed"), UDim2.new(0.5, x, 0.5, -y), Vector2.new(240, 240), function()
			Menus.battleInfo(zoneName :: string, b, bossLocked)
		end)
		btn.ScaleType = Enum.ScaleType.Fit
	end
	-- act arrows
	local list = acts()
	local idx = 1
	for i, z in list do if Xml.attr(z, "Name") == zoneName then idx = i end end
	if idx > 1 then
		local arrow = W.button(s, "MiscSprites.Arrow", nil, UDim2.new(0, 120, 0.5, 0), Vector2.new(120, 160), function()
			Menus.map(Xml.attr(list[idx - 1], "Name"))
		end)
		arrow.Rotation = 180
	end
	if idx < #list and Menus.zoneUnlocked(Xml.attr(list[idx + 1], "Name") :: string) then
		W.button(s, "MiscSprites.Arrow", nil, UDim2.new(1, -120, 0.5, 0), Vector2.new(120, 160), function()
			Menus.map(Xml.attr(list[idx + 1], "Name"))
		end)
	end
	W.label(s, Xml.text("ACT_" .. idx) ~= "ACT_" .. idx and Xml.text("ACT_" .. idx) or ("ACT " .. idx), UDim2.new(0.5, 0, 0, 200), Vector2.new(800, 100), 80)
	if Menus.eclipseOpen(zoneName :: string) then
		local e = W.button(s, "MiscSprites.eclipse", nil, UDim2.new(1, -170, 0, 280), Vector2.new(170, 170), function()
			d.eclipse[zoneName :: string] = not eclipse
			Profile.save()
			Menus.map(zoneName)
		end)
		e.ImageTransparency = eclipse and 0 or 0.45
		W.label(s, "ECLIPSE", UDim2.new(1, -170, 0, 390), Vector2.new(260, 60), 44)
	end
	topBar(s)
	bottomMenu(s, "Map")
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

function Menus.battleInfo(zoneName: string, b: any, locked: boolean)
	local s = layer :: Frame
	local shade = W.shade(s)
	local panel = W.panel(shade, UDim2.fromScale(0.5, 0.5), Vector2.new(1100, 900))
	local name = Xml.attr(b, "Name") :: string
	local title = Xml.text(Xml.attr(b, "Title"))
	W.label(panel, title, UDim2.new(0.5, 0, 0, 110), Vector2.new(900, 120), 80, W.DARK)
	W.label(panel, TYPE_TEXT[Xml.attr(b, "Type") or ""] or "", UDim2.new(0.5, 0, 0, 200), Vector2.new(900, 70), 50, W.DARK)
	local fights = Stages.fights(b)
	local done = Profile.progress(zoneName, name)
	local preview = Xml.attr(b, "Preview")
	if preview then
		W.image(panel, preview, UDim2.new(0.5, 0, 0, 430), Vector2.new(560, 320)).ScaleType = Enum.ScaleType.Fit
	end
	local nextIdx = math.min(done + 1, #fights)
	local fight = fights[nextIdx]
	local r = fight and Menus.reward(fight) or { money = 0, exp = 0 }
	local info = string.format("%d / %d", math.min(done, #fights), #fights)
	W.label(panel, info, UDim2.new(0.5, 0, 0, 630), Vector2.new(600, 70), 56, W.DARK)
	W.image(panel, "TopPanel.gold", UDim2.new(0.5, -200, 0, 710), Vector2.new(70, 70))
	W.label(panel, tostring(r.money or 0), UDim2.new(0.5, -110, 0, 710), Vector2.new(200, 70), 50, W.DARK)
	W.label(panel, "XP " .. tostring(r.exp or 0), UDim2.new(0.5, 130, 0, 710), Vector2.new(260, 70), 50, W.DARK)
	if locked then
		W.label(panel, Xml.text("BOSS_LOCKED") ~= "BOSS_LOCKED" and Xml.text("BOSS_LOCKED") or "Win the tournament and challenge first",
			UDim2.new(0.5, 0, 0, 810), Vector2.new(900, 80), 44, Color3.fromRGB(150, 20, 20))
	else
		W.textButton(panel, "BtnGreen", "FIGHT", UDim2.new(0.5, 0, 0, 820), Vector2.new(420, 130), function()
			shade:Destroy()
			if Menus.onPlay then Menus.onPlay(zoneName, b) end
		end)
	end
	W.button(panel, "CommonButtons.ButtonQuit", nil, UDim2.new(1, -60, 0, 60), Vector2.new(100, 100), function()
		shade:Destroy()
	end)
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

-- Rewards popup after a won fight
function Menus.rewards(r: any, levels: number, done: () -> ())
	local s = clear()
	setScene("dojo", true)
	local shade = W.shade(s, 0.4)
	local panel = W.panel(shade, UDim2.fromScale(0.5, 0.5), Vector2.new(1000, 760))
	W.label(panel, Xml.text("VICTORY") ~= "VICTORY" and Xml.text("VICTORY") or "VICTORY", UDim2.new(0.5, 0, 0, 120), Vector2.new(800, 120), 90, W.DARK)
	W.image(panel, "TopPanel.gold", UDim2.new(0.5, -150, 0, 300), Vector2.new(90, 90))
	W.label(panel, "+" .. tostring(r.money or 0), UDim2.new(0.5, 30, 0, 300), Vector2.new(300, 90), 70, W.DARK)
	W.label(panel, "XP +" .. tostring(r.exp or 0), UDim2.new(0.5, 0, 0, 410), Vector2.new(500, 90), 64, W.DARK)
	if (r.bonus or 0) > 0 then
		W.image(panel, "TopPanel.ruby", UDim2.new(0.5, -150, 0, 510), Vector2.new(80, 80))
		W.label(panel, "+" .. tostring(r.bonus), UDim2.new(0.5, 30, 0, 510), Vector2.new(300, 90), 64, W.DARK)
	end
	if levels > 0 then
		W.label(panel, "LEVEL UP! " .. tostring(Profile.get().level), UDim2.new(0.5, 0, 0, 600), Vector2.new(800, 90), 70, Color3.fromRGB(160, 30, 10))
		Sound.play("snd_upgrade")
	end
	W.textButton(panel, "BtnGreen", "OK", UDim2.new(0.5, 0, 1, -90), Vector2.new(340, 120), done)
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

-- A node the layout marks as a button comes out as an ImageButton, but not every tappable thing in the
-- original carries a Button component -- the side panels' flag tabs are plain Images the panel script
-- listens on. Give anything that isn't already a button a transparent one over it.
local function clickable(o: any): any
	if o:IsA("GuiButton") then return o end
	local hit = Instance.new("TextButton")
	hit.Text = ""
	hit.BackgroundTransparency = 1
	hit.Size = UDim2.fromScale(1, 1)
	hit.ZIndex = o.ZIndex
	hit.Parent = o
	return hit
end

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
	local b = UI.build("ShopTableViewCell", parent)
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

	local shop = UI.build("scene_level4_Shop", s)
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
	local tabs = UI.build("ShopBottomPanel", s)
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
	topBar(s)
	-- the tab row takes the bottom, so the way out is the original's quit button in the corner
	W.button(s, "CommonButtons.ButtonQuit", nil, UDim2.new(0, 110, 0, 230), Vector2.new(130, 130), function()
		Menus.dojo()
	end)

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

function Menus.profile()
	local d = Profile.get()
	local s = clear()
	setScene("dojo", true)
	local panel = W.panel(s, UDim2.new(0, 560, 0.5, 20), Vector2.new(900, 1080))
	W.label(panel, string.upper(Xml.text(d.name)) .. "   LEVEL " .. d.level, UDim2.new(0.5, 0, 0, 90), Vector2.new(820, 90), 60, W.DARK)
	local y = 190
	for _, slot in { "Weapon", "Armor", "Helm", "Ranged", "Magic" } do
		local it = Items.get(d.equipped[slot])
		if it then
			W.image(panel, Xml.attr(it, "Image"), UDim2.new(0, 110, 0, y + 50), Vector2.new(120, 110)).ScaleType = Enum.ScaleType.Fit
			W.label(panel, Items.title(it), UDim2.new(0, 470, 0, y + 50), Vector2.new(600, 80), 42, W.DARK, Enum.TextXAlignment.Left)
		end
		y += 120
	end
	local b = Warrior.build(Profile.warrior())
	local lines = {}
	for _, k in { "WeaponDamage", "UnarmedDamage", "BodyDefense", "HeadDefense", "RangedDamage", "MagicDamage" } do
		table.insert(lines, k:gsub("(%l)(%u)", "%1 %2") .. ": " .. math.floor(b.attributes[k] or 0))
	end
	W.label(panel, table.concat(lines, "\n"), UDim2.new(0.5, 0, 0, 940), Vector2.new(800, 260), 36, W.DARK)
	topBar(s)
	bottomMenu(s, "Profile")
end

---------------------------------------------------------------- settings

function Menus.settings()
	local d = Profile.get()
	local s = clear()
	setScene("dojo", false)
	local panel = W.panel(s, UDim2.fromScale(0.5, 0.5), Vector2.new(1000, 1000))
	W.label(panel, "SETTINGS", UDim2.new(0.5, 0, 0, 100), Vector2.new(800, 100), 80, W.DARK)
	local function toggle(y: number, text: string, key: string, apply: () -> ())
		W.textButton(panel, d.settings[key] == 1 and "BtnGreen" or "BtnDark", text .. ": " .. (d.settings[key] == 1 and "ON" or "OFF"),
			UDim2.new(0.5, 0, 0, y), Vector2.new(560, 120), function()
				d.settings[key] = d.settings[key] == 1 and 0 or 1
				apply()
				Profile.save()
				Menus.settings()
			end)
	end
	local function applySound() Sound.setVolumes(d.settings.sound == 1 and 1 or 0, d.settings.music == 1 and 0.6 or 0) end
	toggle(260, "SOUND", "sound", applySound)
	toggle(420, "MUSIC", "music", applySound)
	local langs = { "eng", "rus", "ger", "fra", "ita", "spa", "por", "tur", "chn", "chn_tr", "jpn", "kor" }
	W.textButton(panel, "BtnGold", "LANGUAGE: " .. string.upper(d.settings.language or "eng"), UDim2.new(0.5, 0, 0, 580), Vector2.new(560, 120), function()
		local i = table.find(langs, d.settings.language or "eng") or 1
		d.settings.language = langs[i % #langs + 1]
		Xml.setLanguage(d.settings.language)
		Profile.save()
		Menus.settings()
	end)
	W.textButton(panel, "BtnDark", "RESET PROGRESS", UDim2.new(0.5, 0, 0, 740), Vector2.new(560, 110), function()
		Profile.reset()
		Menus.dojo()
	end)
	-- DEV ONLY, temporary: unlock every act, boss and mode for testing (Profile.maxOut)
	W.textButton(panel, "BtnGreen", "MAX OUT (DEV)", UDim2.new(0.5, 0, 0, 860), Vector2.new(560, 110), function()
		Profile.maxOut()
		Menus.map(Profile.get().zone)
	end)
	topBar(s)
	bottomMenu(s, "Settings")
end

return Menus
