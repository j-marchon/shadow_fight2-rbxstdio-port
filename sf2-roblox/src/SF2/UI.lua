--!strict
-- The original Unity UI layouts (Data.UI, tools/build_ui.py) rebuilt as Roblox GUI objects.
--  * canvas: CanvasScaler ScaleWithScreenSize, reference 2048x1536, match height: one canvas unit is
--    screenHeight/1536 pixels; the canvas is as wide as the screen at that scale
--  * RectTransform -> UDim2: Unity's anchors, pivot and anchoredPosition are measured from the bottom-left,
--    Roblox from the top-left, so y flips (anchor 1-y, offset -y, AnchorPoint 1-pivot.y)
--  * Image -> ImageLabel (ImageButton for buttons) with the atlas sprite (SF2.Images); "sliced" = 9-slice
--    from the sprite border; "filled" is driven by UI.setFill; colour and alpha as in the prefab
--  * Text -> TextLabel; text from the locKey (localization) when there is one, drawn in the game's own font
--    (AGOpusBold, majallab, CarterOne) from its glyph atlas by SF2.Text; FONTS is the Roblox fallback
--  * later siblings draw on top (ZIndex = sibling order)

local Players = game:GetService("Players")
local Pack = require(script.Parent.Pack)
local Images = require(script.Parent.Images)
local Xml = require(script.Parent.Xml)
local Text = require(script.Parent.Text)

local UI = {}

local REF_H = 1536

local FONTS = {
	AGOpusBold = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Bold),
	majallab = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Regular),
	CarterOne = Font.new("rbxasset://fonts/families/FredokaOne.json", Enum.FontWeight.Regular),
}
local DEFAULT_FONT = FONTS.AGOpusBold

local ALIGN_X = { Left = Enum.TextXAlignment.Left, Center = Enum.TextXAlignment.Center, Right = Enum.TextXAlignment.Right }
local ALIGN_Y = { Upper = Enum.TextYAlignment.Top, Middle = Enum.TextYAlignment.Center, Lower = Enum.TextYAlignment.Bottom }

-- the layout node each built instance came from, and its sibling index (layout groups run in node order)
local nodeOf: { [Instance]: any } = setmetatable({}, { __mode = "k" }) :: any
local orderOf: { [Instance]: number } = setmetatable({}, { __mode = "k" }) :: any

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

-- A 180 degree turn in the dump is Unity's Y-axis flip (mirrored HUD halves), and a negative x scale is a
-- plain mirror (MenuWheelRight is MenuRoll_left at scale -1): mirror the contents instead
local function flipped(r: { number }?): boolean
	return r ~= nil and math.abs(math.abs(r[13] or 0) - 180) < 1
end
local function negScale(r: { number }?): boolean
	return r ~= nil and (r[11] or 1) < 0
end

local function applyRect(inst: GuiObject, r: { number }?, mirror: boolean)
	if not r then
		inst.Size = UDim2.fromScale(1, 1)
		return
	end
	local ax0, ay0, ax1, ay1 = r[1], r[2], r[3], r[4]
	local x, y, w, h = r[5], r[6], r[7], r[8]
	local px, py = r[9], r[10]
	if mirror then
		ax0, ax1 = 1 - ax1, 1 - ax0
		px = 1 - px
		x = -x
	end
	-- a node turned 180 degrees about its pivot spans the other side of it: PlayerLifeBar_right is pivoted
	-- on its left edge at x=670 and reaches back towards the centre. Its contents are mirrored (build).
	-- A negative x scale does the same (InfoBattle's RollRight sits at the scroll's right edge + 89.5 and
	-- reaches back over it)
	if flipped(r) ~= negScale(r) then
		px = 1 - px
	end
	inst.AnchorPoint = Vector2.new(px, 1 - py)
	inst.Size = UDim2.new(ax1 - ax0, w, ay1 - ay0, h)
	inst.Position = UDim2.new(ax0 + (ax1 - ax0) * px, x, 1 - (ay0 + (ay1 - ay0) * py), -y)
	inst.Rotation = flipped(r) and 0 or -(r[13] or 0)
	local sx = math.abs(r[11] or 1)
	if math.abs(sx - 1) > 1e-3 then
		local s = Instance.new("UIScale")
		s.Scale = sx
		s.Parent = inst
	end
end

-- A LabelAlias key: a plain localization key, or a template whose ^key^ parts are localized in place
-- ("^startFight^", "^Settings_UserID^: 346190079")
function UI.locText(key: string): string
	if string.find(key, "^", 1, true) then
		return (string.gsub(key, "%^([^%^]+)%^", function(k) return Xml.text(k) end))
	end
	return Xml.text(key)
end

local rectSize: (o: Instance) -> Vector2 -- defined with the layout groups below

-- Show a sprite on a label, with 9-slice when the layout says "sliced"
function UI.setSprite(label: any, sprite: string?, img: any?)
	if not Images.apply(label, sprite) then return end
	label.ImageTransparency = label:GetAttribute("alpha") or 0
	local s = Images.sprite(sprite)
	if s and label:GetAttribute("mirror") then
		-- a negative rect width shows the sprite mirrored
		label.ImageRectOffset = s.offset + Vector2.new(s.size.X, 0)
		label.ImageRectSize = Vector2.new(-s.size.X, s.size.Y)
	end
	if img and img.t == "sliced" and img.d and s then
		local k = s.size.X / s.source.X
		local l, b, r, t = img.d[1] * k, img.d[2] * k, img.d[3] * k, img.d[4] * k
		-- Roblox draws a 9-slice whose top and bottom (or left and right) borders are both 0 cropped -- the
		-- CommonButtons hexagons lost their lower edge -- so a side with no border stretches a 2-pixel
		-- band through its middle instead, which looks the same
		if t + b < 1 then
			t = math.floor(s.size.Y / 2) - 1
			b = s.size.Y - t - 2
		end
		if l + r < 1 then
			l = math.floor(s.size.X / 2) - 1
			r = s.size.X - l - 2
		end
		label.ScaleType = Enum.ScaleType.Slice
		label.SliceCenter = Rect.new(l, t, math.max(l + 1, s.size.X - r), math.max(t + 1, s.size.Y - b))
		-- slice borders are in screen pixels: scale them by the texture's downscale and by the canvas's
		-- pixels per unit, which the label's UIScale ancestors apply to everything else
		local function fit()
			local rs = rectSize(label)
			local px = rs.X > 0 and label.AbsoluteSize.X / rs.X or 1
			label.SliceScale = math.max(0.01, px / k)
		end
		fit()
		if not label:GetAttribute("sliceFit") then
			label:SetAttribute("sliceFit", true)
			label:GetPropertyChangedSignal("AbsoluteSize"):Connect(fit)
		end
	end
end

local function build(node: any, parent: Instance, order: number, paths: { [string]: Instance }, prefix: string, mirror: boolean)
	local inner = mirror ~= (flipped(node.r) ~= negScale(node.r))
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
		label:SetAttribute("mirror", inner)
		UI.setSprite(label, img.s, img)
		if img.t == "filled" and img.f then
			label:SetAttribute("fillMethod", img.f[1])
			label:SetAttribute("fillOrigin", (inner and img.f[1] == "Horizontal") and (1 - (img.f[3] or 0)) or img.f[3])
		end
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
	applyRect(inst, node.r, mirror)
	-- A Unity Canvas keeps a zero rect and a ~1e-7 localScale in the scene: the CanvasScaler gives it the
	-- screen's size at runtime, and the tiny scale is the world-units-per-pixel it draws at. Taken
	-- literally the pair collapses the whole screen into a corner, so a canvas node fills its parent at 1:1.
	-- Only a root canvas has that degenerate rect; a nested Canvas (sorting override: the HUD's StylePanel and
	-- BarPanel) keeps its own rect.
	if node.k and table.find(node.k, "Canvas") and (not node.r or math.abs(node.r[11] or 1) < 1e-3) then
		inst.AnchorPoint = Vector2.zero
		inst.Position = UDim2.new()
		inst.Size = UDim2.fromScale(1, 1)
		local s = inst:FindFirstChildOfClass("UIScale")
		if s then s:Destroy() end
	end
	inst.ZIndex = order
	inst.Visible = node.a ~= 0
	nodeOf[inst] = node
	orderOf[inst] = order
	-- RectMask2D / Mask clip their children to the rect
	if node.m then inst.ClipsDescendants = true end
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
		local text = txt.k and UI.locText(txt.k) or txt.t
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
		-- best fit's lower bound and Unity's line spacing, read by SF2.Text
		if txt.m then t:SetAttribute("minTextSize", txt.m) end
		if txt.s then t:SetAttribute("lineSpacing", txt.s) end
		-- Unity text overflows its rect by default; a label on a zero-width rect (TextAndMoneyLine's) still
		-- shows, spreading from the pivot the way its alignment says
		local r = node.r
		if r and r[1] == r[3] and math.abs(r[7]) < 1e-3 and not node.le then
			local ax = ({ [Enum.TextXAlignment.Left] = 0, [Enum.TextXAlignment.Right] = 1 })[t.TextXAlignment] or 0.5
			t.AnchorPoint = Vector2.new(ax, 0)
			t.Position = UDim2.fromScale(ax, 0)
			t.Size = UDim2.new(0, 4000, 1, 0)
			t.TextWrapped = false
		end
		t.Parent = inst
		-- the game's own font, drawn from its glyph atlas (SF2.Text); an unknown font keeps the Roblox one
		Text.attach(t, (txt.f ~= nil and txt.f ~= "") and txt.f or "AGOpusBold")
	end
	local path = prefix == "" and node.n or (prefix .. "/" .. node.n)
	if not paths[path] then paths[path] = inst end
	if not paths[node.n] then paths[node.n] = inst end
	for i, c in node.c or {} do
		build(c, inst, i, paths, path, inner)
	end
	inst.Parent = parent
	return inst
end

---------------------------------------------------------------- layout groups
-- Unity's HorizontalLayoutGroup / VerticalLayoutGroup / GridLayoutGroup, LayoutElement and ContentSizeFitter,
-- run on the built instances (UnityEngine.UI's HorizontalOrVerticalLayoutGroup.CalcAlongAxis and
-- SetChildrenAlongAxis, line for line). Without them every child those components drive sits at the zero
-- rect the dump stores. Sizes are in canvas units; axis 1 = x, 2 = y (measured from the top, as Unity's
-- layout does).

-- The rect size of a GuiObject in canvas units, from its Size and its parents' (AbsoluteSize lags a frame)
rectSize = function(o: Instance): Vector2
	if not o:IsA("GuiObject") then
		local g = o:IsA("LayerCollector") and o or o:FindFirstAncestorWhichIsA("LayerCollector")
		return g and (g :: any).AbsoluteSize or Vector2.zero
	end
	local s = (o :: GuiObject).Size
	if s.X.Scale == 0 and s.Y.Scale == 0 then return Vector2.new(s.X.Offset, s.Y.Offset) end
	local ps = o.Parent and rectSize(o.Parent) or Vector2.zero
	return Vector2.new(ps.X * s.X.Scale + s.X.Offset, ps.Y * s.Y.Scale + s.Y.Offset)
end
UI.rectSize = rectSize

local function axisOf(v: Vector2, axis: number): number
	return axis == 1 and v.X or v.Y
end

-- the children a layout group arranges: active, from the layout, not IgnoreLayout, in sibling order
local function layoutChildren(o: Instance): { GuiObject }
	local out = {}
	for _, c in o:GetChildren() do
		local n = nodeOf[c]
		if n and c:IsA("GuiObject") and c.Visible and not (n.le and n.le[1] == 1) then
			table.insert(out, c)
		end
	end
	table.sort(out, function(a, b) return (orderOf[a] or 0) < (orderOf[b] or 0) end)
	return out
end

local groupTotals: (o: Instance, axis: number) -> (number, number, number)

-- the sibling index a layout group sees for a prefab instantiated at runtime (Instantiate appends)
function UI.setOrder(o: Instance, n: number)
	orderOf[o] = n
end

-- a script setting a LayoutElement's preferred size at runtime (MainMenu's F2P spacers do)
local prefOverride: { [Instance]: { number? } } = setmetatable({}, { __mode = "k" }) :: any
function UI.setPreferred(o: Instance, w: number?, h: number?)
	prefOverride[o] = { w, h }
end

-- Unity's ILayoutElement answers for one object: min, preferred, flexible. The LayoutElement component
-- (priority 1) wins for every value it sets (>= 0); the rest come from the layout group, the image or the
-- text on the object (priority 0).
local TextService = game:GetService("TextService")
local function elementSizes(o: GuiObject, axis: number): (number, number, number)
	local n = nodeOf[o]
	local mn, pf, fx = 0, 0, 0
	if n and n.lg then
		mn, pf, fx = groupTotals(o, axis)
	elseif n and n.i then
		local s = Images.sprite(n.i.s)
		if s then
			if (n.i.t == "sliced" or n.i.t == "tiled") and n.i.d then
				-- Image: a sliced sprite prefers its border size, a simple one its own size
				pf = axis == 1 and n.i.d[1] + n.i.d[3] or n.i.d[2] + n.i.d[4]
			else
				pf = axisOf(s.source, axis)
			end
		end
	elseif n and n.x then
		local t = o:FindFirstChild("Text") :: TextLabel?
		if t then
			local b = Text.measure(t) or TextService:GetTextSize(t.Text, t.TextSize, Enum.Font.Oswald, Vector2.new(1e5, 1e5))
			pf = axisOf(b, axis)
		end
	end
	local le = n and n.le
	if le then
		local lmin, lpref, lflex = le[1 + axis], le[3 + axis], le[5 + axis]
		if lmin >= 0 then mn = lmin end
		if lpref >= 0 then pf = lpref end
		if lflex >= 0 then fx = lflex end
	end
	local over = prefOverride[o]
	if over and over[axis] then
		mn, pf = math.min(mn, over[axis]), over[axis]
	end
	return mn, math.max(mn, pf), fx
end

-- HorizontalOrVerticalLayoutGroup.GetChildSizes
local function childSizes(c: GuiObject, axis: number, control: boolean, expand: boolean): (number, number, number)
	local mn, pf, fx
	if not control then
		mn = axisOf(rectSize(c), axis)
		pf, fx = mn, 0
	else
		mn, pf, fx = elementSizes(c, axis)
	end
	if expand then fx = math.max(fx, 1) end
	return mn, pf, fx
end

local function padding(lg: any, axis: number): (number, number)
	if axis == 1 then return lg.p[1], lg.p[1] + lg.p[2] end
	return lg.p[3], lg.p[3] + lg.p[4]
end

local function gridShape(lg: any, count: number, width: number): (number, number)
	local cons, k = lg.k[1], math.max(1, lg.k[2])
	local cols
	if cons == 1 then cols = k
	elseif cons == 2 then cols = math.ceil(count / k)
	else
		local _, pad = padding(lg, 1)
		cols = math.max(1, math.floor((width - pad + lg.sp[1] + 1e-3) / (lg.cs[1] + lg.sp[1])))
	end
	cols = math.max(1, math.min(cols, count))
	return cols, math.ceil(count / cols)
end

-- CalcAlongAxis: the group's own min, preferred and flexible size
groupTotals = function(o: Instance, axis: number): (number, number, number)
	local lg = nodeOf[o].lg
	local kids = layoutChildren(o)
	local _, pad = padding(lg, axis)
	if lg.t == "G" then
		local cols, rows = gridShape(lg, #kids, axisOf(rectSize(o), 1))
		local n = axis == 1 and cols or rows
		local v = pad + n * lg.cs[axis] + math.max(0, n - 1) * lg.sp[axis]
		return v, v, 0
	end
	local along = (axis == 2) == (lg.t == "V")
	local control, expand = lg.c[axis] == 1, lg.e[axis] == 1
	local tmin, tpref, tflex = pad, pad, 0
	for _, c in kids do
		local mn, pf, fx = childSizes(c, axis, control, expand)
		if along then
			tmin += mn + lg.s
			tpref += pf + lg.s
			tflex += fx
		else
			tmin = math.max(mn + pad, tmin)
			tpref = math.max(pf + pad, tpref)
			tflex = math.max(fx, tflex)
		end
	end
	if along and #kids > 0 then
		tmin -= lg.s
		tpref -= lg.s
	end
	return tmin, math.max(tmin, tpref), tflex
end

-- LayoutGroup.SetChildAlongAxis: anchored to the top-left corner on that axis, at pos, optionally resized
local function place(c: GuiObject, axis: number, pos: number, size: number?)
	local ap, p, s = c.AnchorPoint, c.Position, c.Size
	if axis == 1 then
		local w = size or rectSize(c).X
		c.Size = UDim2.new(0, w, s.Y.Scale, s.Y.Offset)
		c.Position = UDim2.new(0, pos + w * ap.X, p.Y.Scale, p.Y.Offset)
	else
		local h = size or rectSize(c).Y
		c.Size = UDim2.new(s.X.Scale, s.X.Offset, 0, h)
		c.Position = UDim2.new(p.X.Scale, p.X.Offset, 0, pos + h * ap.Y)
	end
end

local function clampU(v: number, lo: number, hi: number): number
	-- Mathf.Clamp: the min test comes first
	if v < lo then return lo end
	if v > hi then return hi end
	return v
end

-- SetChildrenAlongAxis
local function arrange(o: GuiObject, axis: number)
	local lg = nodeOf[o].lg
	local kids = layoutChildren(o)
	local size = axisOf(rectSize(o), axis)
	local padStart, pad = padding(lg, axis)
	local align = axis == 1 and (lg.a % 3) * 0.5 or (lg.a // 3) * 0.5
	local function startOffset(required: number): number
		return padStart + (size - (required + pad)) * align
	end
	if lg.t == "G" then
		-- GridLayoutGroup, upper-left start corner, horizontal start axis (the one grid in the game)
		local cols, rows = gridShape(lg, #kids, axisOf(rectSize(o), 1))
		local n = axis == 1 and cols or rows
		local st = startOffset(n * lg.cs[axis] + math.max(0, n - 1) * lg.sp[axis])
		for i, c in kids do
			local idx = axis == 1 and (i - 1) % cols or (i - 1) // cols
			place(c, axis, st + idx * (lg.cs[axis] + lg.sp[axis]), lg.cs[axis])
		end
		return
	end
	local along = (axis == 2) == (lg.t == "V")
	local control, expand = lg.c[axis] == 1, lg.e[axis] == 1
	if not along then
		local inner = size - pad
		for _, c in kids do
			local mn, pf, fx = childSizes(c, axis, control, expand)
			local req = clampU(inner, mn, fx > 0 and size or pf)
			local st = startOffset(req)
			if control then
				place(c, axis, st, req)
			else
				place(c, axis, st + (req - axisOf(rectSize(c), axis)) * align)
			end
		end
		return
	end
	local tmin, tpref, tflex = groupTotals(o, axis)
	local pos = padStart
	local mult = 0
	local surplus = size - tpref
	if surplus > 0 then
		if tflex == 0 then
			pos = startOffset(tpref - pad)
		elseif tflex > 0 then
			mult = surplus / tflex
		end
	end
	local t = 0
	if tmin ~= tpref then t = math.clamp((size - tmin) / (tpref - tmin), 0, 1) end
	local first, last, step = 1, #kids, 1
	if lg.r == 1 then first, last, step = #kids, 1, -1 end
	for i = first, last, step do
		local c = kids[i]
		local mn, pf, fx = childSizes(c, axis, control, expand)
		local cs = mn + (pf - mn) * t + fx * mult
		if control then
			place(c, axis, pos, cs)
		else
			place(c, axis, pos + (cs - axisOf(rectSize(c), axis)) * align)
		end
		pos += cs + lg.s
	end
end

-- Lay out a built subtree top-down: a ContentSizeFitter sizes its object first, then a group places its
-- children, then each child is visited with its final rect
local function relayout(o: Instance)
	local n = nodeOf[o]
	if n and o:IsA("GuiObject") and o.Visible then
		if n.cf then
			for axis = 1, 2 do
				local fit = n.cf[axis]
				if fit == 1 or fit == 2 then
					local mn, pf = elementSizes(o, axis)
					local v = fit == 1 and mn or pf
					local s = o.Size
					if axis == 1 then
						o.Size = UDim2.new(0, v, s.Y.Scale, s.Y.Offset)
					else
						o.Size = UDim2.new(s.X.Scale, s.X.Offset, 0, v)
					end
				end
			end
		end
		if n.lg then
			arrange(o, 1)
			arrange(o, 2)
		end
	end
	for _, c in o:GetChildren() do
		if nodeOf[c] then relayout(c) end
	end
end
UI.relayout = relayout

export type Built = {
	root: GuiObject, paths: { [string]: Instance },
	find: (self: any, path: string) -> any, relayout: (self: any) -> (),
}

-- Build a layout under parent (a canvas). find("Models/PlayerLifeBar_left") or find("BtnPunch").
-- The layout groups run once built and again whenever the root's size changes; a caller that shows, hides
-- or retexts something a group arranges calls built:relayout(). opts.layout = false leaves them unrun.
function UI.build(name: string, parent: Instance, opts: { layout: boolean? }?): Built?
	local layout = UI.layout(name)
	if not layout then return nil end
	local paths = {}
	local root = build(layout, parent, 1, paths, "", false)
	local built = {
		root = root,
		paths = paths,
		-- a full path, a path below the root, or the shortest path ending in it ("SidePanels/InfoPanel"
		-- inside scene_level7_Profile/[Profile]/ProfileUIGroup)
		find = function(self, path: string)
			local hit = self.paths[path] or self.paths[(layout.n or "") .. "/" .. path]
			if hit then return hit end
			local tail, best, bestLen = "/" .. path, nil, math.huge
			for k, v in self.paths do
				if #k < bestLen and string.sub(k, -#tail) == tail then
					best, bestLen = v, #k
				end
			end
			return best
		end,
		relayout = function(self)
			relayout(self.root)
		end,
	} :: any
	if not opts or opts.layout ~= false then
		relayout(root)
		local pending = false
		root:GetPropertyChangedSignal("AbsoluteSize"):Connect(function()
			if pending then return end
			pending = true
			task.defer(function()
				pending = false
				if root.Parent then relayout(root) end
			end)
		end)
	end
	return built
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
		-- dump_ui writes Unity's m_FillMethod as a lower-case name (horizontal, vertical, radial90,
		-- radial180, radial360), so compare in lower case: matching "Horizontal" never hit, and every
		-- filled image fell through to the radial default and drained bottom-to-top. That is what made
		-- the fight's health bars fill vertically.
		local method = string.lower(tostring(label:GetAttribute("fillMethod") or "horizontal"))
		local origin = label:GetAttribute("fillOrigin") or 0
		if method == "vertical" then
			-- Unity vertical origin: 0 = Bottom, 1 = Top
			g.Rotation = origin == 1 and 90 or -90
		else
			-- horizontal (0 = Left, 1 = Right); a gradient cannot do the radial methods, so they take
			-- the horizontal approximation rather than a wrong axis
			g.Rotation = origin == 1 and 180 or 0
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
