--!strict
-- The game's textures (tools/build_images.py): 8-bit palette blobs decoded on demand into EditableImages.
-- Sprites are "<Atlas>.<sprite>" (APK UI atlases) or plain sprite names inside a texture (effects,
-- locations); rects come from Data.ImageIndex in source pixels and are scaled to the stored size.

local AssetService = game:GetService("AssetService")
local Pack = require(script.Parent.Pack)
local Data = script.Parent.Data

local Images = {}

export type Sprite = { content: Content, offset: Vector2, size: Vector2, source: Vector2, pivot: Vector2, texture: string }

local index: any = nil
local function idx(): any
	if not index then
		local mod = Data:FindFirstChild("ImageIndex")
		index = mod and Pack.json(mod :: ModuleScript) or {}
	end
	return index
end

function Images.has(texture: string): boolean
	return idx()[texture] ~= nil
end

local images: { [string]: any } = {}
local contents: { [string]: Content } = {}

-- The EditableImage of a texture (decoded once, kept until release)
function Images.texture(name: string): any
	local img = images[name]
	if img ~= nil then return img or nil end
	local mod = Data.Images:FindFirstChild(name)
	if not mod then
		images[name] = false
		return nil
	end
	local b = Pack.bytes(mod :: ModuleScript)
	local w, h, n = buffer.readu16(b, 0), buffer.readu16(b, 2), buffer.readu16(b, 4)
	local pal = table.create(256, 0)
	for i = 0, n - 1 do
		pal[i + 1] = buffer.readu32(b, 6 + i * 4)
	end
	local base = 6 + n * 4
	local count = w * h
	local out = buffer.create(count * 4)
	for i = 0, count - 1 do
		buffer.writeu32(out, i * 4, pal[buffer.readu8(b, base + i) + 1])
	end
	local ok, ed = pcall(function()
		return AssetService:CreateEditableImage({ Size = Vector2.new(w, h) })
	end)
	if not ok or not ed then
		-- the device EditableImage budget is full. Don't remember that as a missing texture: `false` is
		-- permanent, so the atlas would stay blank for the rest of the session even once a screen change
		-- frees the memory. Leaving the slot empty lets the next screen decode it.
		return nil
	end
	ed:WritePixelsBuffer(Vector2.zero, Vector2.new(w, h), out)
	images[name] = ed
	return ed
end

function Images.release(name: string)
	local img = images[name]
	if img then img:Destroy() end
	images[name] = nil
	contents[name] = nil
end

-- EditableImages count against a device memory budget: on a screen change, free every decoded texture
-- except the shared UI atlases
local KEEP = { TopPanel = true, MenuButtons = true, CommonButtons = true, CommonScrolls = true, MiscSprites = true,
	FightUI = true, FightButtons = true, FightPause = true }
function Images.releaseScreen()
	for name, img in images do
		if img and not KEEP[name] then Images.release(name) end
	end
end

local function content(texture: string): Content?
	local c = contents[texture]
	if c then return c end
	local ed = Images.texture(texture)
	if not ed then return nil end
	c = Content.fromObject(ed)
	contents[texture] = c
	return c
end

-- Find which texture holds a sprite: "Atlas.sprite" -> Atlas (sprite key is the full name in APK atlases)
local spriteHome: { [string]: string }? = nil
local function home(name: string): (string?, any)
	local ix = idx()
	local atlas = string.match(name, "^([^%.]+)%.")
	if atlas and ix[atlas] then
		local r = ix[atlas][5][name] or ix[atlas][5][string.sub(name, #atlas + 2)]
		if r then return atlas, r end
	end
	if ix[name] then return name, nil end
	if not spriteHome then
		local map = {}
		for tex, e in ix do
			for s in e[5] do
				if not map[s] then map[s] = tex end
			end
		end
		spriteHome = map
	end
	local tex = (spriteHome :: any)[name]
	if tex then return tex, ix[tex][5][name] end
	return nil, nil
end

-- A sprite by name, or a whole texture by its name. nil when unknown.
function Images.sprite(name: string?): Sprite?
	if not name or name == "" then return nil end
	local tex, rect = home(name)
	if not tex then return nil end
	local e = idx()[tex]
	local c = content(tex)
	if not c then return nil end
	local sx, sy = e[1] / e[3], e[2] / e[4]
	if not rect then
		return { content = c, offset = Vector2.zero, size = Vector2.new(e[1], e[2]), source = Vector2.new(e[3], e[4]),
			pivot = Vector2.new(0.5, 0.5), texture = tex }
	end
	return {
		content = c,
		offset = Vector2.new(rect[1] * sx, rect[2] * sy),
		size = Vector2.new(rect[3] * sx, rect[4] * sy),
		source = Vector2.new(rect[3], rect[4]),
		pivot = Vector2.new(rect[5], rect[6]),
		texture = tex,
	}
end

-- A sprite of a given texture (effect frames: plain names like "01" repeat across textures)
function Images.spriteIn(texture: string, name: string): Sprite?
	local e = idx()[texture]
	local rect = e and e[5][name]
	if not rect then return nil end
	local c = content(texture)
	if not c then return nil end
	local sx, sy = e[1] / e[3], e[2] / e[4]
	return {
		content = c,
		offset = Vector2.new(rect[1] * sx, rect[2] * sy),
		size = Vector2.new(rect[3] * sx, rect[4] * sy),
		source = Vector2.new(rect[3], rect[4]),
		pivot = Vector2.new(rect[5], rect[6]),
		texture = texture,
	}
end

-- Show a sprite on an ImageLabel/ImageButton. Returns false when the sprite is unknown.
function Images.apply(label: any, name: string?): boolean
	local s = Images.sprite(name)
	if not s then
		label.ImageTransparency = 1
		return false
	end
	label.ImageContent = s.content
	label.ImageRectOffset = s.offset
	label.ImageRectSize = s.size
	return true
end

-- The frames of an effect sequence: the sprites of the texture named like the sequence, in numeric order
local sequences: { [string]: { string } } = {}
function Images.sequence(name: string): { string }
	local list = sequences[name]
	if list then return list end
	list = {}
	local e = idx()[name]
	if e then
		for s in e[5] do table.insert(list, s) end
		table.sort(list, function(a, b)
			local na, nb = tonumber(string.match(a, "(%d+)$")) or 0, tonumber(string.match(b, "(%d+)$")) or 0
			if na ~= nb then return na < nb end
			return a < b
		end)
	end
	sequences[name] = list
	return list
end

return Images
