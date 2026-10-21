--!strict
-- Small building blocks for the menu screens, drawn with the game's own sprites (canvas units, 2048x1536
-- reference): sprite images, sprite buttons with normal/pushed states, labels in the game's colours, and
-- the parchment panels (CommonScrolls) and coloured buttons (CommonButtons).

local Images = require(script.Parent.Images)
local Sound = require(script.Parent.Sound)

local W = {}

-- draw order: every widget above the ones made before it (ZIndex under ZIndexBehavior.Sibling)
local z = 0
local function nextZ(): number
	z += 1
	if z > 100000 then z = 1 end
	return z
end
W.nextZ = nextZ

W.GOLD = Color3.fromRGB(255, 217, 160)
W.DARK = Color3.fromRGB(58, 36, 18)
W.FONT = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Bold)
W.FONT_LIGHT = Font.new("rbxasset://fonts/families/Oswald.json", Enum.FontWeight.Regular)

-- An ImageLabel showing a sprite at its source size (or size), anchored by anchor
function W.image(parent: Instance, sprite: string?, pos: UDim2, size: Vector2?, anchor: Vector2?): ImageLabel
	local img = Instance.new("ImageLabel")
	img.ZIndex = nextZ()
	img.BackgroundTransparency = 1
	img.AnchorPoint = anchor or Vector2.new(0.5, 0.5)
	img.Position = pos
	local s = Images.sprite(sprite)
	if s then
		img.ImageContent = s.content
		img.ImageRectOffset = s.offset
		img.ImageRectSize = s.size
	end
	local sz = size or (s and s.source) or Vector2.new(100, 100)
	img.Size = UDim2.fromOffset(sz.X, sz.Y)
	img.Parent = parent
	return img
end

function W.setImage(img: any, sprite: string?)
	local s = Images.sprite(sprite)
	if s then
		img.ImageContent = s.content
		img.ImageRectOffset = s.offset
		img.ImageRectSize = s.size
		img.ImageTransparency = 0
	else
		img.ImageTransparency = 1
	end
end

function W.label(parent: Instance, text: string, pos: UDim2, size: Vector2, textSize: number?, color: Color3?, align: Enum.TextXAlignment?): TextLabel
	local t = Instance.new("TextLabel")
	t.ZIndex = nextZ()
	t.BackgroundTransparency = 1
	t.Position = pos
	t.Size = UDim2.fromOffset(size.X, size.Y)
	t.AnchorPoint = Vector2.new(0.5, 0.5)
	t.FontFace = W.FONT
	t.Text = text
	t.TextSize = textSize or 48
	t.TextColor3 = color or W.GOLD
	t.TextStrokeColor3 = Color3.new(0, 0, 0)
	t.TextStrokeTransparency = 0.5
	t.TextWrapped = true
	t.TextXAlignment = align or Enum.TextXAlignment.Center
	t.Parent = parent
	return t
end

-- A sprite button: normal sprite, optional pushed sprite while held; onClick on release
function W.button(parent: Instance, normal: string, pushed: string?, pos: UDim2, size: Vector2?, onClick: () -> ()): ImageButton
	local b = Instance.new("ImageButton")
	b.ZIndex = nextZ()
	b.BackgroundTransparency = 1
	b.AutoButtonColor = false
	b.AnchorPoint = Vector2.new(0.5, 0.5)
	b.Position = pos
	W.setImage(b, normal)
	local s = Images.sprite(normal)
	local sz = size or (s and s.source) or Vector2.new(200, 100)
	b.Size = UDim2.fromOffset(sz.X, sz.Y)
	b.MouseButton1Down:Connect(function()
		if pushed then W.setImage(b, pushed) end
	end)
	b.MouseButton1Up:Connect(function() W.setImage(b, normal) end)
	b.MouseLeave:Connect(function() W.setImage(b, normal) end)
	b.Activated:Connect(function()
		Sound.play("snd_click_1")
		onClick()
	end)
	b.Parent = parent
	return b
end

-- A coloured text button (CommonButtons.BtnGreen / BtnGold / BtnDark / ...)
function W.textButton(parent: Instance, style: string, text: string, pos: UDim2, size: Vector2, onClick: () -> ()): ImageButton
	local b = W.button(parent, "CommonButtons." .. style, nil, pos, size, onClick)
	b.ScaleType = Enum.ScaleType.Stretch
	local t = W.label(b, text, UDim2.fromScale(0.5, 0.5), size - Vector2.new(30, 10), math.min(64, size.Y * 0.5), Color3.new(1, 1, 1))
	t.Name = "Text"
	return b
end

-- A parchment panel (CommonScrolls paper halves) filling a rect
function W.panel(parent: Instance, pos: UDim2, size: Vector2): Frame
	local f = Instance.new("Frame")
	f.ZIndex = nextZ()
	f.BackgroundTransparency = 1
	f.AnchorPoint = Vector2.new(0.5, 0.5)
	f.Position = pos
	f.Size = UDim2.fromOffset(size.X, size.Y)
	local l = W.image(f, "CommonScrolls.Paper_left", UDim2.fromScale(0, 0), Vector2.new(size.X / 2 + 2, size.Y), Vector2.zero)
	l.ScaleType = Enum.ScaleType.Stretch
	local r = W.image(f, "CommonScrolls.Paper_right", UDim2.fromScale(0.5, 0), Vector2.new(size.X / 2, size.Y), Vector2.zero)
	r.ScaleType = Enum.ScaleType.Stretch
	f.Parent = parent
	return f
end

-- A dimmer behind popups
function W.shade(parent: Instance, alpha: number?): TextButton
	local s = Instance.new("TextButton")
	s.ZIndex = nextZ()
	s.Text = ""
	s.AutoButtonColor = false
	s.BackgroundColor3 = Color3.new(0, 0, 0)
	s.BackgroundTransparency = 1 - (alpha or 0.55)
	s.Size = UDim2.fromScale(1, 1)
	s.Parent = parent
	return s
end

return W
