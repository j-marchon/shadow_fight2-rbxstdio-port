--!strict
-- The game's quest scripts (Nekki.SF2.Core.Quests.QuestsManager). Every story beat, tutorial step, map
-- battle and act opening comes from these scripts, as in the original:
--  * files: quests, battles, tutorial_quests, forge_quests at start; the act stories
--    (quest_extensions/zone_N/story.xml, intermission/story.xml, zone_N/core.xml) are attached by
--    AttachQuestFile, which quests.xml's ApplicationStart quests run once the right fights are won
--  * scheduling (ScheduleQuests): an event queues every quest that listens for it and whose conditions
--    hold, unless it is already queued (AllowDoubles lifts that), snapshotting the event's parameters
--    (_$Fight, _$SceneTo, ...). The queue is sorted by Priority, highest first, and run one quest at a
--    time (KNCLEHBPCIN); a quest's dialogs wait for the player
--  * interception: FIGHT on the map fires FightEnter and a scene change fires ChangeTab. When any quest
--    is queued the fight or scene change does not happen by itself: the quests decide, with a Fight or
--    ChangeScene action (MGNPHCAAEIO.GJEPNOIHFEH; the ChangeTab quests all navigate themselves)
--  * values: literals; _Name user variables (unset reads "0"); _$Name event parameters (falling back to a
--    user variable of that name); ?Fight[id].WinCount / LossCount / Battle / Zone / Type ...,
--    ?Battle[id].Available / Locked / Hidden, ?Item[], ?Purchase[], ?Player[], ?Concat[], ?Slice[],
--    ?UniformIntRandom[]; + - * / % and Or / And between them
--  * ?SysInfo[]: this is the free Android build (F2P, AnyF2P = 1); not a Switch, Steam or China build
-- Port deviations (see the README's "Quests" section): offers, promotions, payments, ads, raids and
-- server calls do nothing; Place is not used to switch scenes; tutorial hand-holding (arrows, flashing
-- buttons, touch blocking) is skipped; ShowVideo plays nothing.

local Xml = require(script.Parent.Xml)
local UI = require(script.Parent.UI)
local Images = require(script.Parent.Images)
local Profile = require(script.Parent.Profile)
local Items = require(script.Parent.Items)
local Stages = require(script.Parent.Stages)
local Sound = require(script.Parent.Sound)
local W = require(script.Parent.Widgets)

local Quests = {}

-- What the game provides (set by SF2.Game): scene changes, the shop, fights, the map
export type Host = {
	scene: () -> string,
	changeScene: (dest: string) -> (),
	openShop: (tab: string?, item: string?) -> (),
	fight: (id: string) -> (),
	mapFocus: (battle: string) -> (),
	setZone: (zone: string) -> (),
	actScreen: (text: string) -> (),
	tutorial: (step: string) -> (),
	refresh: () -> (),
}
Quests.host = nil :: Host?
Quests.auto = nil :: ((dialog: any) -> string)? -- tests: which button side to press

---------------------------------------------------------------- scripts

-- AttachQuestFile paths and the generated documents that hold them (tools/build_game.py)
local FILES: { [string]: string } = {
	["quest_extensions/zone_1/core.xml"] = "qx_zone_1_core",
	["quest_extensions/zone_1/story.xml"] = "qx_zone_1_story",
	["quest_extensions/zone_2/core.xml"] = "qx_zone_2_core",
	["quest_extensions/zone_2/story.xml"] = "qx_zone_2_story",
	["quest_extensions/zone_3/story.xml"] = "qx_zone_3_story",
	["quest_extensions/zone_4/story.xml"] = "qx_zone_4_story",
	["quest_extensions/zone_5/story.xml"] = "qx_zone_5_story",
	["quest_extensions/zone_6/story.xml"] = "qx_zone_6_story",
	["quest_extensions/zone_7/story.xml"] = "qx_zone_7_story",
	["quest_extensions/intermission/story.xml"] = "qx_intermission_story",
}
local BASE = { "quests", "battles", "tutorial_quests", "forge_quests", "energy" }

type Quest = {
	name: string, priority: number, seq: number, events: { [string]: boolean }, conditions: any,
	actions: any, groups: { [string]: boolean }, allowDoubles: boolean,
}

local all: { Quest } = {}
local byName: { [string]: Quest } = {}
local byEvent: { [string]: { Quest } } = {}
local attached: { [string]: boolean } = {}
local seq = 0

local function addQuest(q: any)
	seq += 1
	local quest: Quest = {
		name = Xml.attr(q, "Name") or ("quest" .. seq), priority = Xml.num(q, "Priority", 0) :: number, seq = seq,
		events = {}, conditions = Xml.first(q, "Conditions"), actions = Xml.first(q, "Actions"), groups = {},
		allowDoubles = Xml.attr(q, "AllowDoubles") == "1",
	}
	for _, e in (Xml.first(q, "Events") or {}).c or {} do quest.events[e.t] = true end
	for g in string.gmatch(Xml.attr(q, "Group") or "", "[^|]+") do quest.groups[g] = true end
	-- a later file's quest of the same name replaces the earlier one
	local old = byName[quest.name]
	if old then
		local i = table.find(all, old)
		if i then table.remove(all, i) end
		for _, list in byEvent do
			local j = table.find(list, old)
			if j then table.remove(list, j) end
		end
	end
	byName[quest.name] = quest
	table.insert(all, quest)
	for e in quest.events do
		byEvent[e] = byEvent[e] or {}
		table.insert(byEvent[e], quest)
	end
end

local function attach(doc: string)
	if attached[doc] then return end
	attached[doc] = true
	local ok, root = pcall(Xml.doc, doc)
	if not ok or not root then return end
	for _, q in Xml.all(root, "Quest") do addQuest(q) end
end

---------------------------------------------------------------- variables

local params: { [string]: any } = {} -- the running quest's event parameters (_$Name)
local globals: { [string]: any } = {} -- Scope="Global": this session only
local locals: { [string]: any } = {} -- Scope="Local": the running quest only

local function users(): { [string]: any }
	local d = Profile.get()
	d.quests.vars = d.quests.vars or {}
	return d.quests.vars
end

local function getVar(name: string): string
	local v = locals[name]
	if v == nil then v = globals[name] end
	if v == nil then v = users()[name] end
	if v == nil then return "0" end
	return tostring(v)
end

---------------------------------------------------------------- values

local evaluate: (expr: string?) -> string

-- split "a,b,(c - 1)" on the commas outside brackets and parentheses
local function splitArgs(s: string): { string }
	local out, depth, start = {}, 0, 1
	for i = 1, #s do
		local ch = string.sub(s, i, i)
		if ch == "[" or ch == "(" then depth += 1
		elseif ch == "]" or ch == ")" then depth -= 1
		elseif ch == "," and depth == 0 then
			table.insert(out, string.sub(s, start, i - 1))
			start = i + 1
		end
	end
	table.insert(out, string.sub(s, start))
	return out
end

local function bestAcquired(slot: string): number
	local best = 0
	for name, it in Profile.get().items do
		local def = Items.get(name)
		if def and it.count > 0 and Xml.attr(def, "Type") == slot then
			local ups = Items.upgrades(def)
			local step = ups[it.upgrade or 0]
			local lvl = step and Xml.num(step, "UpgradeLevel", 0) or Xml.num(def, "UpgradeLevel", 0)
			best = math.max(best, lvl :: number)
		end
	end
	return best
end

-- ?Purchase[item].UpgradeLevel: the UpgradeLevel of the step the owned item is at
local function upgradeLevel(name: string): number
	local def = Items.get(name)
	if not def then return 0 end
	local it = Profile.get().items[name]
	local ups = Items.upgrades(def)
	local step = it and ups[it.upgrade or 0]
	return (step and Xml.num(step, "UpgradeLevel", 0) or Xml.num(def, "UpgradeLevel", 0)) :: number
end

-- the stages.xml fight behind an id "ZONE|BATTLE|n" (n is the <Fight Name>)
local function fightOf(id: string): (any, any, string?, string?, string?)
	local zone, battle, n = string.match(id, "^([^|]*)|([^|]*)|?(.*)$")
	if not zone then return nil, nil end
	local b = Stages.battle(zone, battle)
	if not b then return nil, nil, zone, battle, n end
	for _, f in Stages.fights(b) do
		if Xml.attr(f, "Name") == n then return f, b, zone, battle, n end
	end
	return nil, b, zone, battle, n
end
Quests.fightOf = fightOf

-- the item a challenge fight puts in a slot (its EquipItem rule), "" if none
local function fightItem(f: any, slot: string): (string, number)
	for _, r in (Xml.first(f, "Rules") or {}).c or {} do
		if r.t == "EquipItem" and (Xml.attr(r, "ApplyTo") or "All") ~= "Bot" then
			local name = Xml.attr(r, "Name") or ""
			local def = Items.get(name)
			if (Xml.attr(r, "Type") or (def and Xml.attr(def, "Type"))) == slot then
				return name, Xml.num(r, "Level", 0) :: number
			end
		end
	end
	return "", 0
end

local SLOTS = { Helm = true, Armor = true, Weapon = true, Ranged = true, Magic = true }

local function func(kind: string, arg: string, field: string): string
	local d = Profile.get()
	if kind == "Concat" then
		local s = ""
		for _, a in splitArgs(arg) do s ..= evaluate((string.gsub(a, "^%s+", ""))) end
		return s
	elseif kind == "Slice" then
		local a = splitArgs(arg)
		local s, from, len = evaluate(a[1]), tonumber(evaluate(a[2])) or 0, tonumber(evaluate(a[3])) or 0
		return string.sub(s, from + 1, from + len)
	elseif kind == "UniformIntRandom" then
		local a = splitArgs(arg)
		local lo, hi = tonumber(evaluate(a[1])) or 0, tonumber(evaluate(a[2])) or 0
		return tostring(math.random(math.min(lo, hi), math.max(lo, hi)))
	end
	local id = evaluate(arg)
	if kind == "Fight" then
		local s = Profile.fightStat(id)
		if field == "WinCount" then return tostring(s.w) end
		if field == "LossCount" then return tostring(s.l) end
		local f, b, zone, battle, n = fightOf(id)
		if field == "" or field == "Name" then return id end
		if field == "Zone" then return zone or "" end
		if field == "Battle" then return battle or "" end
		if field == "Fight" then return n or "" end
		if field == "Type" then return b and Xml.attr(b, "Type") or "" end
		if field == "Description" then return f and Xml.attr(f, "Description") or "" end
		if field == "Difficulty" then return f and Xml.attr(f, "Difficulty") or "0" end
		if SLOTS[field] then return f and (fightItem(f, field)) or "" end
		local slot = string.match(field, "^(%a+)Level$")
		if slot and SLOTS[slot] then
			if not f then return "0" end
			local _, lvl = fightItem(f, slot)
			return tostring(lvl)
		end
		return "0"
	elseif kind == "Battle" then
		local r = Profile.record(id)
		if field == "Available" then return r and "1" or "0" end
		if field == "Locked" then return (not r or r.locked) and "1" or "0" end
		if field == "Hidden" then return not r and "-1" or (r.hidden and "1" or "0") end
		if field == "IsOpened" then return (r and not r.locked and not r.hidden) and "1" or "0" end
		if field == "Name" then return id end
		return "0"
	elseif kind == "Item" or kind == "Purchase" then
		local def = Items.get(id)
		local owned = d.items[id]
		if field == "Quantity" then return tostring(owned and owned.count or 0) end
		if field == "UpgradeLevel" then return tostring(upgradeLevel(id)) end
		if field == "Timeout" then
			local dl = Profile.delivery(id)
			return tostring(dl and math.max(0, dl.readyAt - os.time()) or 0)
		end
		if field == "NextUpgradeDeliveryPrice" then
			local step = def and Items.upgrades(def)[(owned and owned.upgrade or 0) + 1]
			return step and (Xml.attr(step, "BonusDeliveryPrice") or "0") or "0"
		end
		if field == "Failure" then return "0" end
		if field == "Name" then return id end
		if SLOTS[field] then return d.equipped[field] or "" end
		if not def then return "0" end
		return Xml.attr(def, field) or "0"
	elseif kind == "Player" then
		if field == "Level" then return tostring(d.level) end
		if field == "Money" then return tostring(d.money) end
		if field == "Bonus" then return tostring(d.bonus) end
		if field == "Power" then return tostring((Profile.power())) end
		if field == "Language" then return Xml.language() end
		if field == "MapFocus" then return Quests.mapFocus or "" end
		if SLOTS[field] then return d.equipped[field] or "" end
		return "0"
	elseif kind == "SysInfo" then
		if field == "F2P" or field == "AnyF2P" then return "1" end
		if field == "Time" then return tostring(os.time()) end
		return "0"
	elseif kind == "UnlockedCharacters" then
		return d.unlocked[field] and "1" or "0"
	elseif kind == "DataVersion" or kind == "VersionController" then
		-- this build: 2.46.0 (usersDefault <Versions>)
		if field == "Version" or field == "Full" then return "2.46.0.0" end
		if field == "Production" then return "2" end
		if field == "Major" then return "46" end
		return "0"
	end
	return "0"
end

-- one operand: a function call, a variable or a literal
local function atom(tok: string): string
	if string.sub(tok, 1, 1) == "?" then
		local kind, rest = string.match(tok, "^%?(%w+)(%b[])")
		if kind then
			local field = string.match(string.sub(tok, #kind + 2 + #rest), "^%.(%w*)") or ""
			return func(kind, string.sub(rest, 2, -2), field)
		end
		return tok
	end
	if string.sub(tok, 1, 2) == "_$" then
		local name = string.sub(tok, 3)
		local v = params[name]
		if v ~= nil then return tostring(v) end
		local slot = string.match(name, "^BestAcquired(%a+)Level$")
		if slot then return tostring(bestAcquired(slot)) end
		if name == "StoryTutorialStep" then return Profile.get().tutorial end
		if name == "CurrentScene" then return Quests.host and Quests.host.scene() or "" end
		if name == "InLottery" or name == "GameStarted" then return "0" end
		return getVar(name)
	end
	if string.sub(tok, 1, 1) == "_" and #tok > 1 then return getVar(string.sub(tok, 2)) end
	return tok
end

-- tokens: operands, operators and parentheses, split on the spaces outside brackets
local function tokenize(s: string): { string }
	local out, depth, cur = {}, 0, ""
	local function push() if cur ~= "" then table.insert(out, cur) end cur = "" end
	for i = 1, #s do
		local ch = string.sub(s, i, i)
		if ch == "[" then depth += 1 elseif ch == "]" then depth -= 1 end
		if depth == 0 and (ch == "(" or ch == ")") and (cur == "" or ch == ")") then
			push()
			table.insert(out, ch)
		elseif depth == 0 and ch == " " then
			push()
		else
			cur ..= ch
		end
	end
	push()
	return out
end

local function arith(a: string, op: string, b: string): string
	if op == "Or" then return ((a ~= "0" and a ~= "") or (b ~= "0" and b ~= "")) and "1" or "0" end
	if op == "And" then return ((a ~= "0" and a ~= "") and (b ~= "0" and b ~= "")) and "1" or "0" end
	local x, y = tonumber(a) or 0, tonumber(b) or 0
	local r = 0
	if op == "+" then r = x + y elseif op == "-" then r = x - y elseif op == "*" then r = x * y
	elseif op == "/" then r = y ~= 0 and x / y or 0 elseif op == "%" then r = y ~= 0 and x % y or 0 end
	if r == math.floor(r) then return tostring(math.floor(r)) end
	return tostring(r)
end

local PREC = { Or = 1, And = 2, ["+"] = 3, ["-"] = 3, ["*"] = 4, ["/"] = 4, ["%"] = 4 }

evaluate = function(expr: string?): string
	if expr == nil then return "" end
	if not string.find(expr, " ") and not string.find(expr, "^%(") then return atom(expr) end
	local toks = tokenize(expr)
	local pos = 1
	local function parse(minPrec: number): string
		local t = toks[pos]
		pos += 1
		local left: string
		if t == "(" then
			left = parse(1)
			pos += 1 -- ")"
		else
			left = atom(t or "")
		end
		while true do
			local op = toks[pos]
			local p = op and PREC[op]
			if not p or p < minPrec then break end
			pos += 1
			left = arith(left, op, parse(p + 1))
		end
		return left
	end
	local v = parse(1)
	if pos <= #toks then return expr end -- not an expression after all: a text with spaces
	return v
end
Quests.value = evaluate

-- dialog text: "key{arg0}{arg1}..." is the localized key with {0}, {1} filled from the arguments (each a
-- value expression; "%{0}" localizes the argument, e.g. an item's name); "{img::...}" arguments are icons,
-- which are dropped; {br} breaks the line. A bare key may itself be a variable (_Title_Assistant).
local function localize(k: string): string
	local s = Xml.text(k)
	if string.sub(s, 1, 1) == "%" then s = Xml.text(string.sub(s, 2)) end
	return s
end

local function textOf(key: string?): string
	if not key then return "" end
	local head, rest = string.match(key, "^([^{]*)(.*)$")
	local args = {}
	for a in string.gmatch(rest or "", "%b{}") do
		local inner = string.sub(a, 2, -2)
		table.insert(args, string.sub(inner, 1, 5) == "img::" and "" or evaluate(inner))
	end
	local s = localize(evaluate(head))
	for i, v in args do
		s = string.gsub(s, "%%{" .. (i - 1) .. "}", function() return localize(v) end)
		s = string.gsub(s, "{" .. (i - 1) .. "}", function() return v end)
	end
	s = string.gsub(s, "{br}", "\n")
	return s
end
Quests.text = textOf

---------------------------------------------------------------- conditions

local function versionCmp(a: string, b: string): number
	local pa, pb = string.split(a, "."), string.split(b, ".")
	for i = 1, math.max(#pa, #pb) do
		local x, y = tonumber(pa[i]) or 0, tonumber(pb[i]) or 0
		if x ~= y then return x < y and -1 or 1 end
	end
	return 0
end

local function compare(el: any): boolean
	local a, b = evaluate(Xml.attr(el, "Value1")), evaluate(Xml.attr(el, "Value2"))
	local tag = el.t
	local c: number?
	if Xml.attr(el, "CompareType") == "Versions" then
		c = versionCmp(a, b)
	else
		local na, nb = tonumber(a), tonumber(b)
		if na and nb then c = na < nb and -1 or (na > nb and 1 or 0) end
	end
	if tag == "Equal" then
		if c then return c == 0 end
		return a == b
	end
	if not c then return false end
	if tag == "Greater" then return c > 0 end
	if tag == "GreaterEqual" then return c >= 0 end
	if tag == "Less" then return c < 0 end
	if tag == "LessEqual" then return c <= 0 end
	return false
end

local check: (el: any) -> boolean
check = function(el: any): boolean
	local v: boolean
	if el.t == "Operator" or el.t == "Or" or el.t == "And" then
		local typ = el.t == "Operator" and string.lower(Xml.attr(el, "Type") or "and") or string.lower(el.t)
		local isAnd = typ == "and"
		v = isAnd
		for _, k in el.c or {} do
			if check(k) ~= isAnd then v = not isAnd break end
		end
	elseif el.t == "Equal" or el.t == "Greater" or el.t == "GreaterEqual" or el.t == "Less" or el.t == "LessEqual" then
		v = compare(el)
	else
		v = true
	end
	if Xml.attr(el, "Not") == "1" then v = not v end
	return v
end

local function holds(conds: any): boolean
	for _, c in (conds or {}).c or {} do
		if not check(c) then return false end
	end
	return true
end

---------------------------------------------------------------- the queue

type Entry = { quest: Quest, params: { [string]: any } }
local queue: { Entry } = {}
local running: Entry? = nil
local busy = false
local pendingFight: string? = nil
local waiters: { () -> () } = {}

local function queued(q: Quest): boolean
	if running and running.quest == q then return true end
	for _, e in queue do if e.quest == q then return true end end
	return false
end

local function enqueue(q: Quest)
	table.insert(queue, { quest = q, params = table.clone(params) })
	table.sort(queue, function(a, b)
		if a.quest.priority ~= b.quest.priority then return a.quest.priority > b.quest.priority end
		return a.quest.seq < b.quest.seq
	end)
end

-- Queue the quests listening for an event whose conditions hold; true if any was queued
local function schedule(event: string): boolean
	local any = false
	for _, q in table.clone(byEvent[event] or {}) do
		if q.allowDoubles or not queued(q) then
			local ok, pass = pcall(holds, q.conditions)
			if ok and pass then
				enqueue(q)
				any = true
			elseif not ok then
				warn("SF2 quest " .. q.name .. " conditions: " .. tostring(pass))
			end
		end
	end
	return any
end

---------------------------------------------------------------- dialogs

local BUTTON_SPRITE = { Red = "CommonButtons.BtnDark", Green = "CommonButtons.BtnGreen", Gold = "CommonButtons.BtnGold" }
local function buttonSprite(color: string?): string
	return BUTTON_SPRITE[color or ""] or "CommonButtons.BtnWhite" -- LabelButton.GetBtnColor: White/Beige/other
end

local function layerGui(order: number): (ScreenGui, Frame)
	local gui = Instance.new("ScreenGui")
	gui.Name = "SF2Dialog"
	gui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling -- UI.build stacks by sibling index, as Unity does
	gui.IgnoreGuiInset = true
	gui.DisplayOrder = order
	gui.ResetOnSpawn = false
	gui.Parent = UI.playerGui()
	return gui, UI.canvas(gui)
end

local function setLabel(o: Instance?, text: string)
	local t = o
	while t and not t:IsA("TextLabel") do t = t:FindFirstChild("Text") end
	if t then (t :: TextLabel).Text = text end
end

local run: (actions: { any }) -> ()

-- Dialog Type="Regular" / "Multiline": StoryDialog (portrait, title, the lines one after another, then
-- the buttons; a button's children run when it is pressed). Type="Notification": NotificationGame, the
-- small scroll from the right with the speaker's icon, closed by its button or after ReadTime seconds.
local function dialog(el: any)
	local typ = Xml.attr(el, "Type") or "Regular"
	-- the lines, in order; a DeliveryDelay is a line showing the delivery's time left
	local lines = {}
	for _, k in el.c or {} do
		if k.t == "Line" or k.t == "DeliveryDelay" then table.insert(lines, k) end
	end
	local buttons = Xml.all(el, "Button")
	-- headless tests (tools/tests/story_test.luau) answer dialogs without drawing them
	if Quests.auto then
		local side = Quests.auto(el)
		local pick = buttons[#buttons]
		for _, b in buttons do
			if (Xml.attr(b, "Type") or "Right") == side then pick = b end
		end
		if pick then run(pick.c or {}) end
		return
	end
	local checkBox = Xml.first(el, "CheckBox")
	local done = Instance.new("BindableEvent")
	local pressed: any = nil
	local gui, canvas = layerGui(50)
	if typ == "Notification" then
		local built = UI.build("NotificationGame", canvas)
		local content = built and built:find("RenderRoot/Scroll/Content")
		local host = content or canvas
		local img = evaluate(Xml.attr(el, "Image"))
		if Images.has(img) then
			local av = W.image(host, img, UDim2.fromOffset(-330, 0), Vector2.new(300, 300))
			av.ScaleType = Enum.ScaleType.Fit
		end
		local label = W.label(host, textOf(Xml.attr(lines[1], "Text")), UDim2.fromOffset(170, 0), Vector2.new(700, 520), 52, W.DARK)
		label.TextWrapped = true
		local style = string.gsub(buttonSprite(buttons[#buttons] and Xml.attr(buttons[#buttons], "Color")), "^CommonButtons%.", "")
		local ok = W.textButton(host, style,
			string.upper(textOf(buttons[#buttons] and Xml.attr(buttons[#buttons], "Text") or "OK")),
			UDim2.fromOffset(170, 250), Vector2.new(360, 100), function()
				pressed = buttons[#buttons]
				done:Fire()
			end)
		ok.ZIndex += 10
		local t = tonumber(Xml.attr(el, "ReadTime") or "")
		if t then task.delay(t, function() done:Fire() end) end
		done.Event:Wait()
	else
		W.shade(canvas, 0.45)
		local built = UI.build("StoryDialog", canvas)
		if not built then gui:Destroy() return end
		local index = 1
		local okBtn, cancelBtn = built:find("btnOk"), built:find("btnCancel")
		local extra: { GuiObject } = {}
		local function show()
			setLabel(built:find("Header"), string.upper(textOf(Xml.attr(el, "Title"))))
			local line = lines[index]
			local text = line and textOf(Xml.attr(line, "Text")) or ""
			if line and line.t == "DeliveryDelay" then
				local dl = Profile.delivery(evaluate(Xml.attr(line, "Item")))
				local left = dl and math.max(0, dl.readyAt - os.time()) or 0
				text = string.format("%d:%02d", left // 60, left % 60)
			end
			setLabel(built:find("Content/Text"), text)
			local av = built:find("Content/ImgAvatar")
			if av then
				local img = evaluate(Xml.attr(el, "Image"))
				if Images.has(img) then
					UI.setSprite(av, img)
					av.ImageTransparency = 0
					if Xml.attr(el, "Mirrored") == "1" then (av :: any).Rotation = 0 end
				else
					av.ImageTransparency = 1
				end
			end
			for _, x in extra do x:Destroy() end
			table.clear(extra)
			local last = index >= #lines
			local function place(btn: any, b: any?, text: string, color: string?)
				if not btn then return end
				btn.Visible = true
				UI.setSprite(btn, buttonSprite(color))
				setLabel(btn:FindFirstChild("Content") and btn.Content:FindFirstChild("Text") or btn, string.upper(textOf(text)))
				local hint = btn:FindFirstChild("ButtonHint", true)
				if hint then hint.Visible = false end
			end
			if okBtn then okBtn.Visible = false end
			if cancelBtn then cancelBtn.Visible = false end
			if not last then
				-- a line's own button carries on to the next line
				place(okBtn, nil, Xml.attr(lines[index], "ButtonText") or "dlgStoryBtnMore", "White")
				return
			end
			for _, b in buttons do
				local side = Xml.attr(b, "Type") or "Right"
				local text = Xml.attr(b, "Text") or (side == "Right" and Xml.attr(lines[index], "ButtonText")) or "OK"
				if side == "Right" then
					place(okBtn, b, text, Xml.attr(b, "Color"))
				elseif side == "Left" then
					place(cancelBtn, b, text, Xml.attr(b, "Color"))
				elseif okBtn then
					-- Middle: a third button between the two
					local m = (okBtn :: any):Clone()
					m.Parent = okBtn.Parent
					local p = (okBtn :: any).Position
					m.Position = UDim2.new(p.X.Scale, (p.X.Offset + ((cancelBtn :: any) and cancelBtn.Position.X.Offset or 0)) / 2, p.Y.Scale, p.Y.Offset)
					place(m, b, text, Xml.attr(b, "Color"))
					table.insert(extra, m)
					m.Activated:Connect(function()
						pressed = b
						done:Fire()
					end)
				end
			end
		end
		local function onButton(side: string)
			Sound.play("snd_click_1")
			if index < #lines then
				index += 1
				show()
				return
			end
			for _, b in buttons do
				if (Xml.attr(b, "Type") or "Right") == side then pressed = b end
			end
			done:Fire()
		end
		if okBtn and okBtn:IsA("GuiButton") then okBtn.Activated:Connect(function() onButton("Right") end) end
		if cancelBtn and cancelBtn:IsA("GuiButton") then cancelBtn.Activated:Connect(function() onButton("Left") end) end
		-- the "don't show again" box (MultiLineScrollDialog's Checkbox)
		if checkBox then
			local on = evaluate(Xml.attr(checkBox, "InitialValue")) == "1"
			local box = W.button(canvas, on and "MiscSprites.checkboxOn" or "MiscSprites.checkboxOff", nil,
				UDim2.new(0.5, -700, 1, -260), Vector2.new(110, 110), function() end)
			W.label(canvas, textOf(Xml.attr(checkBox, "Text")), UDim2.new(0.5, -380, 1, -260), Vector2.new(520, 100), 44, W.GOLD)
			box.Activated:Connect(function()
				on = not on
				UI.setSprite(box, on and "MiscSprites.checkboxOn" or "MiscSprites.checkboxOff")
				local branch = Xml.first(checkBox, on and "On" or "Off")
				if branch then task.spawn(run, branch.c or {}) end
			end)
		end
		show()
		done.Event:Wait()
	end
	gui:Destroy()
	if pressed then run(pressed.c or {}) end
end

-- ActScreen: the act's title over the map ("Act II{br}Secret Path")
local function actScreen(text: string)
	if Quests.host then Quests.host.actScreen(text) return end
end

---------------------------------------------------------------- actions

local function battleName(s: string?): string
	return Profile.key(evaluate(s))
end

run = function(actions: { any })
	local host = Quests.host
	for _, a in actions do
		local t = a.t
		if t == "Dialog" then
			dialog(a)
		elseif t == "SetVariable" then
			local scope = Xml.attr(a, "Scope") or "Users"
			local name = Xml.attr(a, "Name") :: string
			local v = evaluate(Xml.attr(a, "Value"))
			if scope == "Local" then locals[name] = v
			elseif scope == "Global" then globals[name] = v
			else users()[name] = v end
		elseif t == "If" then
			local branch = Xml.first(a, holds(Xml.first(a, "Conditions")) and "Then" or "Else")
			if branch then run(branch.c or {}) end
		elseif t == "Activate" then
			local saved = params
			params = table.clone(params)
			params.ActionID = evaluate(Xml.attr(a, "ActionID"))
			schedule("Activate")
			params = saved
		elseif t == "Run" or t == "ForceExecution" then
			-- Run: the named quest goes into the queue if its conditions hold; ForceExecution: regardless
			local q = byName[evaluate(Xml.attr(a, "Name"))]
			if q and (t == "ForceExecution" or holds(q.conditions)) then enqueue(q) end
		elseif t == "ClearQuestQueue" then
			local g = Xml.attr(a, "Name")
			for i = #queue, 1, -1 do
				local q = queue[i].quest
				if not g or q.groups[g] or q.name == g then table.remove(queue, i) end
			end
		elseif t == "AttachQuestFile" then
			local doc = FILES[Xml.attr(a, "File") or ""]
			if doc then attach(doc) end
		elseif t == "ShowBattle" then
			local locked = Xml.attr(a, "Locked")
			local hidden = Xml.attr(a, "Hidden")
			Profile.showBattle(battleName(Xml.attr(a, "Name")), locked and locked == "1" or (locked == nil and nil),
				hidden and hidden == "1" or nil, tonumber(Xml.attr(a, "ReplayCount") or ""))
			if host then host.refresh() end
		elseif t == "HideBattle" then
			Profile.hideBattle(battleName(Xml.attr(a, "Name")))
			if host then host.refresh() end
		elseif t == "ToggleBattle" then
			local r = Profile.record(battleName(Xml.attr(a, "Name")))
			if r then r.off = Xml.attr(a, "Toggle") == "off" or nil end
			if host then host.refresh() end
		elseif t == "ToggleItems" then
			Profile.get().labels[Xml.attr(a, "Label") or ""] = Xml.attr(a, "Toggle") == "on"
		elseif t == "SetMapFocus" then
			Quests.mapFocus = battleName(Xml.attr(a, "Battle"))
			if host then host.mapFocus(Quests.mapFocus :: string) end
		elseif t == "SetCurrentZone" then
			local z = evaluate(Xml.attr(a, "Name"))
			Profile.get().zone = z
			if host then host.setZone(z) end
		elseif t == "ChangeScene" then
			if host then host.changeScene(evaluate(Xml.attr(a, "Destination"))) end
		elseif t == "OpenShop" then
			if host then host.openShop(evaluate(Xml.attr(a, "Tab")), Xml.attr(a, "Item") and evaluate(Xml.attr(a, "Item"))) end
		elseif t == "Fight" then
			local name = Xml.attr(a, "Name")
			pendingFight = name and evaluate(name) or params.Fight
		elseif t == "ActScreen" then
			actScreen(Xml.attr(a, "Text") or "")
		elseif t == "Wait" then
			local frames = tonumber(evaluate(Xml.attr(a, "Frames"))) or 0
			if not Quests.auto then task.wait(frames / 60) end
		elseif t == "GiveItem" then
			local name = evaluate(Xml.attr(a, "Name"))
			if Items.get(name) then
				Profile.give(name, tonumber(evaluate(Xml.attr(a, "Quantity") or "1")) or 1)
				if Xml.attr(a, "PutOn") == "1" then Profile.equip(name) end
			end
		elseif t == "TakeCurrency" then
			local d = Profile.get()
			local amount = tonumber(evaluate(Xml.attr(a, "Value"))) or 0
			local bonus = (Xml.attr(a, "Type") or Xml.attr(a, "Name")) == "Bonus"
			local have = bonus and d.bonus or d.money
			local ok = have >= amount
			if ok then
				if bonus then d.bonus -= amount else d.money -= amount end
			end
			local branch = Xml.first(a, ok and "Success" or "Error")
			if branch then run(branch.c or {}) end
		elseif t == "GivePerk" then
			local perk = Xml.first(a, "Perk")
			local item = evaluate(Xml.attr(a, "Item"))
			local owned = Profile.get().items[item]
			if perk and owned then
				owned.perks = owned.perks or {}
				owned.perks[Xml.attr(perk, "Name") or ""] = true
			end
		elseif t == "BuyItem" then
			-- Currency="Ruby": the item's BonusPrice in gems (Energy_Refill fills the energy);
			-- Currency="Real" (real money) has nothing behind it here
			local name = evaluate(Xml.attr(a, "Name"))
			local def = Items.get(name)
			local d = Profile.get()
			if def and Xml.attr(a, "Currency") == "Ruby" then
				local price = Xml.num(def, "BonusPrice", 0) :: number
				if d.bonus >= price then
					d.bonus -= price
					if Xml.attr(def, "Type") == "Energy" then
						local _, max = Profile.power()
						Profile.addPower(max)
					else
						Profile.give(name)
					end
					Profile.changed:Fire()
				end
			end
		elseif t == "Deliver" then
			-- finish a delivery now for its gems (the dialog's FINISH / UPGRADE button)
			local name = evaluate(Xml.attr(a, "Item"))
			local dl = Profile.delivery(name)
			local d = Profile.get()
			if dl and d.bonus >= dl.price then
				d.bonus -= dl.price
				if Profile.deliver(name) == "item" then Profile.equip(name) end
				Profile.changed:Fire()
				if host then host.refresh() end
			end
		elseif t == "Foreach" then
			-- Foreach Type="DeliveryItems|DeliveryUpgrades|DeliveryEnchantments" Name=quest: that quest once per
			-- entry of the Delivery event's list, with _$Iterator set to it
			local list = (params.lists or {})[Xml.attr(a, "Type") or ""] or {}
			local q = byName[Xml.attr(a, "Name") or ""]
			if q then
				for _, v in list do
					local saved = params
					params = table.clone(params)
					params.Iterator = v
					enqueue(q)
					params = saved
				end
			end
		elseif t == "UnlockCharacter" then
			Profile.get().unlocked[evaluate(Xml.attr(a, "Name"))] = true
		elseif t == "SetStoryTutorialStep" then
			Profile.get().tutorial = evaluate(Xml.attr(a, "Value"))
		elseif t == "StoryTutorialMove" or t == "StoryTutorialPunchbag" or t == "StoryTutorialDoubleSweep"
			or t == "StoryTutorialShowBlock" or t == "StoryTutorialLearnPerk" or t == "StoryTutorialBuyItem" then
			if host then host.tutorial(t) end
		elseif t == "ChangePlayerAvatar" then
			Profile.get().avatar = evaluate(Xml.attr(a, "Avatar"))
		elseif t == "ResetDuelTimer" or t == "Checkpoint" or t == "SetDataVersion" then
			-- duels here have no timer; checkpoints are for resuming after a restart
		end
	end
end

-- Run the queue until it is empty, then start the fight a quest asked for (if any)
local function drain()
	if busy then return end
	busy = true
	while #queue > 0 do
		local e = table.remove(queue, 1) :: Entry
		running = e
		params = e.params
		locals = {}
		local ok, err = pcall(run, e.quest.actions and e.quest.actions.c or {})
		if not ok then warn("SF2 quest " .. e.quest.name .. ": " .. tostring(err)) end
		running = nil
		-- the original's QuestsManager starts the next quest on a later frame (Update), so a quest that
		-- activates itself again never runs away
		task.wait()
	end
	busy = false
	Profile.save()
	local f = pendingFight
	pendingFight = nil
	local ws = waiters
	waiters = {}
	if f and Quests.host then
		Quests.host.fight(f)
	else
		for _, w in ws do w() end
	end
end

-- Run whatever is queued (in the background); then() runs after, unless a quest started a fight
function Quests.run(after: (() -> ())?)
	if after then table.insert(waiters, after) end
	task.spawn(drain)
end

function Quests.busy(): boolean
	return busy
end

-- Fire an event with its parameters; true if a quest was queued for it. The queue is not run.
function Quests.fire(event: string, vars: { [string]: any }?): boolean
	-- the running quest keeps its own parameters; the event's are only used to queue its quests
	local saved = params
	params = {}
	for k, v in vars or {} do params[k] = v end
	local any = schedule(event)
	params = saved
	return any
end

-- The map's FIGHT: the FightEnter quests take over when any is queued, else proceed()
function Quests.fightEnter(id: string, eclipse: boolean, proceed: () -> ())
	if Quests.fire("FightEnter", { Fight = id, InEclipseMode = eclipse and 1 or 0 }) then
		Quests.run()
	else
		proceed()
	end
end

-- A scene change asked for by the player: the ChangeTab quests take over when any is queued
function Quests.changeTab(from: string, to: string, proceed: () -> ())
	if busy then proceed() return end
	if Quests.fire("ChangeTab", { SceneFrom = from, SceneTo = to, StoryTutorialStep = Profile.get().tutorial,
		Fight = Quests.lastFight, FightResult = Quests.lastResult }) then
		Quests.run()
	else
		proceed()
	end
end

-- After a scene is shown (SceneLoaded), quests that react to it run
function Quests.sceneLoaded(scene: string)
	if Quests.fire("SceneLoaded", { SceneTo = scene, StoryTutorialStep = Profile.get().tutorial }) then Quests.run() end
end

Quests.lastFight = nil :: string?
Quests.lastResult = nil :: string?
Quests.mapFocus = nil :: string?

-- A fight's end: count it, then queue the FightEnd quests (they run once the map is shown)
function Quests.fightEnd(id: string, won: boolean, levelUp: boolean?)
	Profile.countFight(id, won)
	Quests.lastFight = id
	Quests.lastResult = won and "Win" or "Loss"
	Quests.fire("FightEnd", { Fight = id, FightResult = won and "Win" or "Loss", LevelUp = levelUp and 1 or 0,
		InEclipseMode = string.find(id, "_ECLIPSEMODE") and 1 or 0, StoryTutorialStep = Profile.get().tutorial,
		BestAcquiredArmorLevel = bestAcquired("Armor"), BestAcquiredHelmLevel = bestAcquired("Helm"),
		BestAcquiredWeaponLevel = bestAcquired("Weapon"), BestAcquiredRangedLevel = bestAcquired("Ranged"),
		BestAcquiredMagicLevel = bestAcquired("Magic") })
end

-- Forget every loaded script and queued quest (a new game, or the dev max-out)
function Quests.reset()
	table.clear(all)
	table.clear(byName)
	table.clear(byEvent)
	table.clear(attached)
	table.clear(queue)
	table.clear(globals)
	pendingFight = nil
	Quests.lastFight, Quests.lastResult, Quests.mapFocus = nil, nil, nil
end

-- A purchase in the shop (Purchase event: delivery dialogs, shop advice)
function Quests.purchase(name: string)
	if Quests.fire("Purchase", { Purchase = name }) then Quests.run() end
end

-- Hand over the deliveries whose time is up and fire Delivery for them (the notifications)
function Quests.checkDeliveries()
	if busy then return end
	local due = Profile.deliverDue()
	if #due.items + #due.upgrades == 0 then return end
	if Quests.fire("Delivery", { lists = { DeliveryItems = due.items, DeliveryUpgrades = due.upgrades, DeliveryEnchantments = {} } }) then
		Quests.run()
	end
	Profile.save()
end

-- Load the scripts and run ApplicationStart; after() shows the first scene, then SessionStart runs
function Quests.start(after: (() -> ())?)
	for _, doc in BASE do attach(doc) end
	Quests.fire("ApplicationStart")
	Quests.run(function()
		if after then after() end
		Quests.fire("SessionStart")
		Quests.run()
	end)
end

return Quests
