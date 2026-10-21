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
	Sound.music("menu")
end

---------------------------------------------------------------- map

local SKIP_TYPES = { FAKE = true, TUTORIAL = true, HIDDEN = true }
local function visibleBattles(zone: any): { any }
	local out = {}
	for _, b in Stages.battles(zone) do
		local name = Xml.attr(b, "Name") or ""
		local t = Xml.attr(b, "Type") or ""
		if not SKIP_TYPES[t] and not string.find(name, "_INTERMISSION") and not string.find(name, "_ECLIPSEMODE")
			and not string.find(name, "_LOCKED") and Xml.attr(b, "X") then
			table.insert(out, b)
		end
	end
	return out
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
	return atlas .. state .. "." .. word .. "_" .. icon
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
	for _, b in visibleBattles(zone) do
		local name = Xml.attr(b, "Name") :: string
		local total = #Stages.fights(b)
		local done = Profile.progress(zoneName :: string, name)
		local bossLocked = Xml.attr(b, "Type") == "BOSSES" and not Menus.bossOpen(zoneName :: string)
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

local SHOP_TABS = {
	{ "Weapon", "ShopButtons1.Weapon" }, { "Armor", "ShopButtons1.Armor" }, { "Helm", "ShopButtons1.Helmet" },
	{ "Ranged", "ShopButtons1.Ranged_weapon" }, { "Magic", "ShopButtons1.Magic" },
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

local function statLine(it: any, upgrade: number?): string
	local parts = {}
	for k, v in Items.stats(it, upgrade) do
		if v ~= 0 then table.insert(parts, k:gsub("(%l)(%u)", "%1 %2") .. " " .. v) end
	end
	table.sort(parts)
	return table.concat(parts, "   ")
end

function Menus.shop(tab: string?, selected: string?)
	tab = tab or "Weapon"
	local d = Profile.get()
	local s = clear()
	local preview = table.clone(Profile.warrior())
	if selected then
		preview.items = table.clone(preview.items)
		preview.items[tab :: string] = selected
	end
	setScene("dojo", true, preview)
	-- tabs
	for i, t in SHOP_TABS do
		local active = t[1] == tab
		W.button(s, t[2] .. (active and "_active" or ""), t[2] .. "_pushed", UDim2.new(0, 140, 0, 230 + (i - 1) * 190), Vector2.new(200, 170), function()
			Menus.shop(t[1])
		end)
	end
	-- item list
	local list = Instance.new("ScrollingFrame")
	list.BackgroundTransparency = 1
	list.Position = UDim2.new(1, -40, 0, 170)
	list.AnchorPoint = Vector2.new(1, 0)
	list.Size = UDim2.new(0, 760, 1, -420)
	list.ScrollBarThickness = 14
	list.AutomaticCanvasSize = Enum.AutomaticSize.Y
	list.CanvasSize = UDim2.new()
	list.Parent = s
	local grid = Instance.new("UIGridLayout")
	grid.CellSize = UDim2.fromOffset(240, 300)
	grid.CellPadding = UDim2.fromOffset(10, 10)
	grid.Parent = list
	for _, it in shopItems(tab :: string) do
		local name = Xml.attr(it, "Name") :: string
		local cell = Instance.new("ImageButton")
		cell.BackgroundColor3 = name == selected and Color3.fromRGB(120, 80, 40) or Color3.fromRGB(60, 40, 25)
		cell.BackgroundTransparency = 0.25
		cell.AutoButtonColor = true
		cell.Parent = list
		local icon = W.image(cell, Xml.attr(it, "Image"), UDim2.new(0.5, 0, 0, 110), Vector2.new(200, 190))
		icon.ScaleType = Enum.ScaleType.Fit
		local lvl = Xml.num(it, "Level", 0) :: number
		local owned = Profile.owns(name)
		local equipped = d.equipped[tab :: string] == name
		local tag = equipped and "EQUIPPED" or (owned and "OWNED" or ((Xml.attr(it, "Price") and (Xml.attr(it, "Price") .. " coins")) or ((Xml.attr(it, "BonusPrice") or "?") .. " gems")))
		W.label(cell, Items.title(it), UDim2.new(0.5, 0, 0, 230), Vector2.new(230, 50), 30)
		W.label(cell, (lvl > d.level and ("Lvl " .. lvl .. "  ") or "") .. tag, UDim2.new(0.5, 0, 0, 275), Vector2.new(230, 40), 26,
			lvl > d.level and Color3.fromRGB(255, 90, 90) or Color3.new(1, 1, 1))
		cell.Activated:Connect(function() Menus.shop(tab, name) end)
	end
	-- selected item details
	if selected then
		local it = Items.get(selected)
		local panel = W.panel(s, UDim2.new(0, 760, 1, -330), Vector2.new(860, 330))
		W.label(panel, Items.title(it), UDim2.new(0.5, 0, 0, 60), Vector2.new(800, 70), 54, W.DARK)
		local up = d.items[selected] and d.items[selected].upgrade or 0
		W.label(panel, statLine(it, up), UDim2.new(0.5, 0, 0, 140), Vector2.new(800, 80), 34, W.DARK)
		local lvl = Xml.num(it, "Level", 0) :: number
		if Profile.owns(selected) then
			if d.equipped[tab :: string] ~= selected then
				W.textButton(panel, "BtnGreen", "EQUIP", UDim2.new(0.3, 0, 1, -70), Vector2.new(300, 100), function()
					Profile.equip(selected)
					Profile.save()
					Sound.play("snd_click_2")
					Menus.shop(tab, selected)
				end)
			end
			local steps = Items.upgrades(it)
			local nextStep = steps[up + 1]
			if nextStep then
				local price = Xml.num(nextStep, "Price")
				local gems = Xml.num(nextStep, "BonusPrice")
				local label = price and (price .. " coins") or ((gems or 0) .. " gems")
				W.textButton(panel, "BtnGold", "UPGRADE " .. label, UDim2.new(0.72, 0, 1, -70), Vector2.new(420, 100), function()
					if price and d.money >= price then d.money -= price
					elseif gems and d.bonus >= gems then d.bonus -= gems
					else return end
					d.items[selected].upgrade = up + 1
					Profile.save()
					Sound.play("snd_upgrade")
					Menus.shop(tab, selected)
				end)
			end
		elseif lvl <= d.level then
			local price = Xml.num(it, "Price")
			local gems = Xml.num(it, "BonusPrice")
			local afford = (price and d.money >= price) or (not price and gems and d.bonus >= gems)
			W.textButton(panel, afford and "BtnGreen" or "BtnDark", "BUY  " .. (price and (price .. " coins") or ((gems or 0) .. " gems")),
				UDim2.new(0.5, 0, 1, -70), Vector2.new(460, 100), function()
					if not afford then return end
					if price then d.money -= price else d.bonus -= gems :: number end
					Profile.give(selected)
					Profile.equip(selected)
					Profile.save()
					Sound.play("snd_buy")
					Menus.shop(tab, selected)
				end)
		else
			W.label(panel, "Requires level " .. lvl, UDim2.new(0.5, 0, 1, -70), Vector2.new(600, 80), 44, Color3.fromRGB(150, 20, 20))
		end
	end
	topBar(s)
	bottomMenu(s, "Shop")
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
	local panel = W.panel(s, UDim2.fromScale(0.5, 0.5), Vector2.new(1000, 900))
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
	W.textButton(panel, "BtnDark", "RESET PROGRESS", UDim2.new(0.5, 0, 0, 760), Vector2.new(560, 110), function()
		Profile.reset()
		Menus.dojo()
	end)
	topBar(s)
	bottomMenu(s, "Settings")
end

return Menus
