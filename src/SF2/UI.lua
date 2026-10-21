--!strict
-- The original Unity UI layouts (Data.UI, tools/build_ui.py) rebuilt as Roblox GUI objects.
--  * canvas: CanvasScaler ScaleWithScreenSize, reference 2048x1536, match height: one canvas unit is
--    screenHeight/1536 pixels; the canvas is as wide as the screen at that scale
--  * RectTransform -> UDim2: Unity's anchors, pivot and anchoredPosition are measured from the bottom-left,
--    Roblox from the top-left, so y flips (anchor 1-y, offset -y, AnchorPoint 1-pivot.y)
--  * Image -> ImageLabel (ImageButton for buttons) with the atlas sprite (SF2.Images); "sliced" = 9-slice
--    from the sprite border; "filled" is driven by UI.setFill; colour and alpha as in the prefab
--  * Text -> TextLabel; text from the locKey (localization) when there is one. Port deviation: the game's
--    fonts (majallab, AGOpusBold, CarterOne) are mapped to Roblox fonts, custom fonts can't be loaded
--  * later siblings draw on top (ZIndex = sibling order)

local Players = game:GetService("Players")
local Pack = require(script.Parent.Pack)
local Images = require(script.Parent.Images)
local Xml = require(script.Parent.Xml)

local UI = {}

local REF_H = 1536

local FONTS = {
	AGOpusBold = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Bold),
	majallab = Font.new("rbxasset://fonts/families/Merriweather.json", Enum.FontWeight.Bold),
	CarterOne = Font.new("rbxasset://fonts/families/FredokaOne.json", Enum.FontWeight.Regular),
}
local DEFAULT_FONT = FONTS.AGOpusBold

local ALIGN_X = { Left = Enum.TextXAlignment.Left, Center = Enum.TextXAlignment.Center, Right = Enum.TextXAlignment.Right }
local ALIGN_Y = { Upper = Enum.TextYAlignment.Top, Middle = Enum.TextYAlignment.Center, Lower = Enum.TextYAlignment.Bottom }

local cache: { [string]: any } = {}
function UI.layout(name: string): any
	local v = cache[name]
	if v == nil then
		local mod = script.Parent.Data.UI:FindFirstChild(name)
		v = mod and Pack.json(mod :: ModuleScript) or false
		cache[name] = v
	end
	return v or nil
end

-- A full-screen canvas in reference units (match height). Returns the frame; it rescales with the window.
function UI.canvas(gui: ScreenGui, name: string?): Frame
	local frame = Instance.new("Frame")
	frame.Name = name or "Canvas"
	frame.BackgroundTransparency = 1
	frame.AnchorPoint = Vector2.new(0.5, 0.5)
	frame.Position = UDim2.fromScale(0.5, 0.5)
	local scale = Instance.new("UIScale")
	scale.Parent = frame
	local function fit()
		local size = (gui.AbsoluteSize.Y > 0 and gui.AbsoluteSize) or workspace.CurrentCamera.ViewportSize
		local s = size.Y / REF_H
		scale.Scale = s
		frame.Size = UDim2.fromOffset(size.X / s, REF_H)
	end
	fit()
	gui:GetPropertyChangedSignal("AbsoluteSize"):Connect(fit)
	frame.Parent = gui
	return frame
end

local function color(c: { number }?): (Color3, number)
	if not c then return Color3.new(1, 1, 1), 0 end
	return Color3.new(c[1], c[2], c[3]), 1 - (c[4] or 1)
end

local function applyRect(inst: GuiObject, r: { number }?)
	if not r then
		inst.Size = UDim2.fromScale(1, 1)
		return
	end
	local ax0, ay0, ax1, ay1 = r[1], r[2], r[3], r[4]
	local x, y, w, h = r[5], r[6], r[7], r[8]
	local px, py = r[9], r[10]
	inst.AnchorPoint = Vector2.new(px, 1 - py)
	inst.Size = UDim2.new(ax1 - ax0, w, ay1 - ay0, h)
	inst.Position = UDim2.new(ax0 + (ax1 - ax0) * px, x, 1 - (ay0 + (ay1 - ay0) * py), -y)
	inst.Rotation = -(r[13] or 0)
	local sx = r[11] or 1
	if math.abs(sx - 1) > 1e-3 then
		local s = Instance.new("UIScale")
		s.Scale = sx
		s.Parent = inst
	end
end

-- Show a sprite on a label, with 9-slice when the layout says "sliced"
function UI.setSprite(label: any, sprite: string?, img: any?)
	if not Images.apply(label, sprite) then return end
	label.ImageTransparency = label:GetAttribute("alpha") or 0
	local s = Images.sprite(sprite)
	if img and img.t == "sliced" and img.d and s then
		local k = s.size.X / s.source.X
		local l, b, r, t = img.d[1] * k, img.d[2] * k, img.d[3] * k, img.d[4] * k
		label.ScaleType = Enum.ScaleType.Slice
		label.SliceCenter = Rect.new(l, t, math.max(l + 1, s.size.X - r), math.max(t + 1, s.size.Y - b))
		label.SliceScale = 1 / k
	end
end

local function build(node: any, parent: Instance, order: number, paths: { [string]: Instance }, prefix: string)
	local inst: GuiObject
	local img, txt = node.i, node.x
	if img then
		local label = Instance.new(node.b and "ImageButton" or "ImageLabel") :: any
		label.BackgroundTransparency = 1
		local c, a = color(img.c)
		label.ImageColor3 = c
		label:SetAttribute("alpha", a)
		label.ImageTransparency = a
		if img.p then label.ScaleType = Enum.ScaleType.Fit end
		UI.setSprite(label, img.s, img)
		if img.t == "filled" and img.f then label:SetAttribute("fillMethod", img.f[1]); label:SetAttribute("fillOrigin", img.f[3]) end
		if node.b then label.AutoButtonColor = false end
		inst = label
	elseif node.b then
		local b = Instance.new("TextButton")
		b.BackgroundTransparency = 1
		b.Text = ""
		inst = b
	else
		local f = Instance.new("Frame")
		f.BackgroundTransparency = 1
		inst = f
	end
	inst.Name = node.n
	applyRect(inst, node.r)
	inst.ZIndex = order
	inst.Visible = node.a ~= 0
	if node.g then inst:SetAttribute("groupAlpha", node.g) end
	if node.k then inst:SetAttribute("classes", table.concat(node.k, ",")) end
	if node.s then
		for k, v in node.s do inst:SetAttribute("sprite_" .. k, v) end
	end
	if txt then
		local t = Instance.new("TextLabel")
		t.Name = "Text"
		t.BackgroundTransparency = 1
		t.Size = UDim2.fromScale(1, 1)
		t.ZIndex = order
		local text = txt.k and Xml.text(txt.k) or txt.t
		if txt.u then text = string.upper(text) end
		t.Text = text
		t.TextSize = txt.z
		t.TextScaled = txt.w == 1
		if t.TextScaled then
			local lim = Instance.new("UITextSizeConstraint")
			lim.MaxTextSize = txt.z
			lim.Parent = t
		end
		t.FontFace = FONTS[txt.f] or DEFAULT_FONT
		local c, a = color(txt.c)
		t.TextColor3 = c
		t.TextTransparency = a
		t.TextWrapped = true
		local v, h = string.match(txt.l, "^(%u%l+)(%u%l+)$")
		t.TextXAlignment = ALIGN_X[h or "Center"] or Enum.TextXAlignment.Center
		t.TextYAlignment = ALIGN_Y[v or "Middle"] or Enum.TextYAlignment.Center
		if txt.k then t:SetAttribute("locKey", txt.k) end
		t.Parent = inst
	end
	local path = prefix == "" and node.n or (prefix .. "/" .. node.n)
	if not paths[path] then paths[path] = inst end
	if not paths[node.n] then paths[node.n] = inst end
	for i, c in node.c or {} do
		build(c, inst, i, paths, path)
	end
	inst.Parent = parent
	return inst
end

export type Built = { root: GuiObject, paths: { [string]: Instance }, find: (self: any, path: string) -> any }

-- Build a layout under parent (a canvas). find("Models/PlayerLifeBar_left") or find("BtnPunch").
function UI.build(name: string, parent: Instance): Built?
	local layout = UI.layout(name)
	if not layout then return nil end
	local paths = {}
	local root = build(layout, parent, 1, paths, "")
	return {
		root = root,
		paths = paths,
		find = function(self, path: string)
			return self.paths[path] or self.paths[(layout.n or "") .. "/" .. path]
		end,
	} :: any
end

-- Image fill (Unity Image.fillAmount): a hard-edged UIGradient hides the unfilled part, keeping the rect.
-- Horizontal fills from the left (origin 0) or right (1), vertical from the bottom (0) or top (1);
-- radial fills (button cooldowns) are shown filling from the bottom.
function UI.setFill(label: any, amount: number)
	amount = math.clamp(amount, 0, 1)
	local g = label:FindFirstChild("Fill") :: UIGradient?
	if not g then
		g = Instance.new("UIGradient")
		g.Name = "Fill"
		local method = label:GetAttribute("fillMethod") or "Horizontal"
		local origin = label:GetAttribute("fillOrigin") or 0
		if method == "Horizontal" then
			g.Rotation = origin == 1 and 180 or 0
		elseif method == "Vertical" then
			g.Rotation = origin == 1 and 90 or -90
		else
			g.Rotation = -90
		end
		g.Parent = label
	end
	local e = 0.001
	if amount <= e then
		g.Transparency = NumberSequence.new(1)
	elseif amount >= 1 - e then
		g.Transparency = NumberSequence.new(0)
	else
		g.Transparency = NumberSequence.new({
			NumberSequenceKeypoint.new(0, 0), NumberSequenceKeypoint.new(amount, 0),
			NumberSequenceKeypoint.new(amount + e, 1), NumberSequenceKeypoint.new(1, 1),
		})
	end
end

-- The pixel scale of a canvas (canvas units -> screen pixels)
function UI.scaleOf(canvas: Frame): number
	local s = canvas:FindFirstChildOfClass("UIScale")
	return s and s.Scale or 1
end

function UI.playerGui(): PlayerGui
	return Players.LocalPlayer:WaitForChild("PlayerGui") :: PlayerGui
end

return UI
