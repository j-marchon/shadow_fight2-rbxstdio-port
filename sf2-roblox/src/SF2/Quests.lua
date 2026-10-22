--!strict
-- The game's quest scripts (QuestsManager): <Quest><Events><Conditions><Actions>, run when one of their
-- events fires and every condition holds, highest Priority first. Scripts loaded: the act stories that
-- shipped in the APK (story, story__1: acts 2-5) and battles.xml.
--  * events used: FightEnter (before a fight, _$Fight = "ZONE|BATTLE|n"), FightEnd (_$FightResult = Win /
--    Loss), ChangeTab (_$SceneFrom/_$SceneTo), SessionStart
--  * conditions: Equal / Greater / GreaterEqual / Less / LessEqual (Value1, Value2, Not), Operator And/Or
--  * values: literals, _$System variables, _User variables (saved in the profile), ?Fight[id].WinCount /
--    .Battle / .Zone / .Type, ?Battle[id].Locked / .Available, ?Item[name].Quantity, ?Player[].Level / .Bonus /
--    .Money, ?SysInfo[] (all 0: not a Switch, Steam or China build)
--  * actions: Dialog (StoryDialog: portrait, title, lines, buttons), SetVariable, If/Then/Else, GiveItem,
--    TakeCurrency, ShowBattle/HideBattle, Wait, ActScreen, Fight (inside the greeting button: the fight goes on)
-- Port deviation: scene changes, shop/tab openings and tutorial hand-holding are not replayed (the port's
-- own menu flow stays in control); missing act scripts (1, 6, 7) aren't in the shipped data.

local UI = require(script.Parent.UI)
local Xml = require(script.Parent.Xml)
local Images = require(script.Parent.Images)
local Profile = require(script.Parent.Profile)
local Items = require(script.Parent.Items)
local W = require(script.Parent.Widgets)

local Quests = {}

local quests: { any }? = nil
local function load(): { any }
	if quests then return quests end
	local list = {}
	for _, doc in { "story", "story__1", "battles" } do
		local ok, root = pcall(Xml.doc, doc)
		if ok and root then
			for _, q in Xml.all(root, "Quest") do table.insert(list, q) end
		end
	end
	table.sort(list, function(a, b) return (Xml.num(a, "Priority", 0) :: number) > (Xml.num(b, "Priority", 0) :: number) end)
	quests = list
	return list
end

local system: { [string]: any } = {}

local function userVars(): { [string]: any }
	local d = Profile.get()
	d.quests.vars = d.quests.vars or {}
	return d.quests.vars
end

-- Resolve a value expression
local function value(expr: string?): any
	if expr == nil then return nil end
	if string.sub(expr, 1, 2) == "_$" then
		return system[string.sub(expr, 3)]
	end
	if string.sub(expr, 1, 1) == "_" then
		return userVars()[string.sub(expr, 2)]
	end
	local kind, arg, field = string.match(expr, "^%?(%w+)%[([^%]]*)%]%.?(%w*)")
	if not kind then return expr end
	if string.sub(arg, 1, 2) == "_$" then arg = tostring(system[string.sub(arg, 3)] or "") end
	if kind == "Fight" then
		local zone, battle, n = string.match(arg, "^([^|]*)|([^|]*)|?(%d*)")
		if field == "WinCount" then
			return (zone and Profile.progress(zone, battle) >= (tonumber(n) or 1)) and 1 or 0
		elseif field == "Battle" then return battle
		elseif field == "Zone" then return zone
		elseif field == "Type" then
			local b = zone and require(script.Parent.Stages).battle(zone, battle)
			return b and Xml.attr(b, "Type")
		elseif field == "" then return arg end
	elseif kind == "Battle" then
		if field == "Locked" then return (userVars()["shown:" .. arg] and 0 or 1) end
		if field == "Available" then return 1 end
	elseif kind == "Item" then
		local it = Profile.get().items[arg]
		return it and it.count or 0
	elseif kind == "Player" then
		local d = Profile.get()
		if field == "Level" then return d.level elseif field == "Bonus" then return d.bonus elseif field == "Money" then return d.money end
	elseif kind == "SysInfo" then
		return 0
	end
	return nil
end
Quests.value = value

local function compare(tag: string, a: any, b: any): boolean
	local na, nb = tonumber(a), tonumber(b)
	if tag == "Equal" then
		if na and nb then return na == nb end
		return tostring(a) == tostring(b)
	end
	if not na or not nb then return false end
	if tag == "Greater" then return na > nb end
	if tag == "GreaterEqual" then return na >= nb end
	if tag == "Less" then return na < nb end
	if tag == "LessEqual" then return na <= nb end
	return false
end

local function check(el: any): boolean
	local nt = Xml.attr(el, "Not") == "1"
	local v: boolean
	if el.t == "Operator" then
		local all = string.lower(Xml.attr(el, "Type") or "and") == "and"
		v = all
		for _, k in el.c or {} do
			if check(k) ~= all then v = not all; break end
		end
	elseif el.t == "Equal" or el.t == "Greater" or el.t == "GreaterEqual" or el.t == "Less" or el.t == "LessEqual" then
		v = compare(el.t, value(Xml.attr(el, "Value1")), value(Xml.attr(el, "Value2")))
	else
		v = false
	end
	return v ~= nt
end

local function conditionsPass(q: any): boolean
	for _, c in (Xml.first(q, "Conditions") or {}).c or {} do
		if not check(c) then return false end
	end
	return true
end

---------------------------------------------------------------- dialogs

local dialogGui: ScreenGui? = nil
-- Show one StoryDialog and wait for a button
local function dialog(el: any)
	local gui = Instance.new("ScreenGui")
	gui.Name = "SF2Dialog"
	gui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling -- UI.build stacks by sibling index, as Unity does
	gui.IgnoreGuiInset = true
	gui.DisplayOrder = 50
	gui.ResetOnSpawn = false
	gui.Parent = UI.playerGui()
	dialogGui = gui
	local canvas = UI.canvas(gui)
	local shade = W.shade(canvas, 0.45)
	local built = UI.build("StoryDialog", canvas)
	local lines = Xml.all(el, "Line")
	local buttons = Xml.all(el, "Button")
	local done = Instance.new("BindableEvent")
	local index = 1
	local function show()
		if not built then return end
		local header = built:find("Header")
		local ht = header and header:FindFirstChild("Text")
		if ht then ht.Text = string.upper(Xml.text(Xml.attr(el, "Title"))) end
		local text = built:find("Content/Text")
		local tt = text and text:FindFirstChild("Text")
		local line = lines[index]
		if tt and line then tt.Text = Xml.text(value(Xml.attr(line, "Text")) or Xml.attr(line, "Text")) end
		local av = built:find("Content/ImgAvatar")
		if av then
			local img = Xml.attr(el, "Image")
			if img and string.sub(img, 1, 1) == "_" then img = nil end
			if img and Images.has(img) then
				UI.setSprite(av, img)
				av.ImageTransparency = 0
			else
				av.ImageTransparency = 1
			end
		end
		local ok = built:find("btnOk")
		if ok then
			ok.Visible = true
			local label = (index < #lines and Xml.attr(line, "ButtonText"))
				or (buttons[#buttons] and Xml.attr(buttons[#buttons], "Text")) or "OK"
			local t = ok:FindFirstChild("Content") and ok.Content:FindFirstChild("Text")
			local tl = t and t:FindFirstChild("Text")
			if tl then tl.Text = string.upper(Xml.text(label)) end
		end
	end
	show()
	local function advance()
		if index < #lines then
			index += 1
			show()
		else
			done:Fire()
		end
	end
	local okBtn = built and built:find("btnOk")
	if okBtn and okBtn:IsA("GuiButton") then
		okBtn.Activated:Connect(advance)
	else
		shade.Activated:Connect(advance)
	end
	shade.Activated:Connect(advance)
	done.Event:Wait()
	gui:Destroy()
	dialogGui = nil
end

---------------------------------------------------------------- actions

local function run(actions: { any })
	for _, a in actions do
		local t = a.t
		if t == "Dialog" then
			dialog(a)
		elseif t == "SetVariable" then
			local scope = Xml.attr(a, "Scope") or "Users"
			local name = Xml.attr(a, "Name") :: string
			local v = value(Xml.attr(a, "Value"))
			if scope == "Users" or scope == "Global" then userVars()[name] = v else system[name] = v end
		elseif t == "If" then
			local cond = Xml.first(a, "Conditions")
			local pass = true
			for _, c in (cond or {}).c or {} do if not check(c) then pass = false break end end
			local branch = Xml.first(a, pass and "Then" or "Else")
			if branch then run(branch.c or {}) end
		elseif t == "GiveItem" then
			local name = Xml.attr(a, "Name")
			if name and Items.get(name) then Profile.give(name, Xml.num(a, "Count", 1)) end
		elseif t == "TakeCurrency" then
			local d = Profile.get()
			local amount = Xml.num(a, "Value", 0) :: number
			if Xml.attr(a, "Name") == "Bonus" then d.bonus = math.max(0, d.bonus - amount) else d.money = math.max(0, d.money - amount) end
		elseif t == "ShowBattle" then
			userVars()["shown:" .. (Xml.attr(a, "Name") or "")] = true
		elseif t == "HideBattle" then
			userVars()["shown:" .. (Xml.attr(a, "Name") or "")] = nil
		elseif t == "Wait" then
			task.wait(math.min(Xml.num(a, "Time", 0.5) :: number, 3))
		end
	end
end

-- Fire an event; runs every matching quest (dialogs wait for the player), then returns
function Quests.fire(event: string, vars: { [string]: any }?)
	for k, v in vars or {} do system[k] = v end
	local ran = {}
	for _, q in load() do
		local ev = Xml.first(q, "Events")
		local hit = false
		for _, e in (ev or {}).c or {} do if e.t == event then hit = true end end
		if hit and conditionsPass(q) then
			local name = Xml.attr(q, "Name") or ""
			if not ran[name] then
				ran[name] = true
				local acts = Xml.first(q, "Actions")
				local ok, err = pcall(run, acts and acts.c or {})
				if not ok then warn("SF2 quest " .. name .. ": " .. tostring(err)) end
			end
		end
	end
	Profile.save()
end

return Quests
