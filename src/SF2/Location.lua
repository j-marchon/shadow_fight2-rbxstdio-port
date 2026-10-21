--!strict
-- A fight location (<name>_params): parallax layers of atlas pictures behind (and one in front of) the
-- fighters. Layout units are the fight's world units; X, Y are picture centres relative to the location
-- centre with Y pointing down; the location is Height tall with the floor Floor units above its bottom,
-- so world y = (Height/2 - Floor) - Y. Layer Factor is the parallax: a layer moves Factor times the camera
-- (1 = the fighters' plane). Type 2 is the fighters' layer, so later layers draw in front of them.
-- SimpleEffects: Picture/Sequention pictures; OscillationY and ReappearX/Speed drift are animated.

local Xml = require(script.Parent.Xml)
local Images = require(script.Parent.Images)

local Location = {}
Location.__index = Location

local SCALE = 1 / 40

local function hexColor(s: string?): Color3?
	if not s then return nil end
	local n = tonumber(string.gsub(s, "^0x", ""), 16)
	if not n then return nil end
	return Color3.fromRGB(bit32.rshift(n, 16) % 256, bit32.rshift(n, 8) % 256, n % 256)
end

-- One picture on a layer part's SurfaceGui
local function picture(gui: SurfaceGui, atlas: string, el: any, layerW: number, layerH: number): ImageLabel?
	local name = Xml.attr(el, "ClassName")
	local s = name and (Images.spriteIn(atlas, name) or Images.sprite(name))
	if not s then return nil end
	local w = Xml.num(el, "Width", s.source.X) :: number
	local h = Xml.num(el, "Height", s.source.Y) :: number
	local x = Xml.num(el, "X", 0) :: number
	local y = Xml.num(el, "Y", 0) :: number
	local img = Instance.new("ImageLabel")
	img.BackgroundTransparency = 1
	img.ImageContent = s.content
	img.ImageRectOffset = s.offset
	img.ImageRectSize = s.size
	img.AnchorPoint = Vector2.new(0.5, 0.5)
	img.Size = UDim2.fromOffset(w, h)
	img.Position = UDim2.fromOffset(layerW / 2 + x, layerH / 2 + y)
	local c = hexColor(Xml.attr(el, "Color"))
	if c then img.ImageColor3 = c end
	img.Parent = gui
	return img
end

function Location.new(name: string?, parent: Instance)
	local loc = name and Xml.location(name)
	local self = setmetatable({ layers = {}, anims = {}, model = Instance.new("Model"), time = 0 }, Location)
	self.model.Name = "Location_" .. tostring(name)
	self.model.Parent = parent
	if not loc then return self end
	local height = Xml.num(loc, "Height", 512) :: number
	local floor = Xml.num(loc, "Floor", 80) :: number
	local width = Xml.num(loc, "Width", 1936) :: number
	self.centerY = height / 2 - floor
	-- backdrop in the location colour, far behind everything
	local back = Instance.new("Part")
	back.Anchored, back.CanCollide, back.CanQuery, back.CanTouch, back.CastShadow = true, false, false, false, false
	back.Material = Enum.Material.SmoothPlastic
	back.Color = hexColor(Xml.attr(loc, "Color")) or Color3.new(0, 0, 0)
	back.Size = Vector3.new(400, 200, 0.1)
	back.CFrame = CFrame.new(0, self.centerY * SCALE, -6)
	back.Parent = self.model
	local front = false
	local depth = 0
	for _, layer in Xml.all(loc, "Layer") do
		if Xml.attr(layer, "Type") == "2" then
			front = true
			continue
		end
		depth += 1
		local atlas = Xml.attr(layer, "Atlas") or ""
		local factor = Xml.num(layer, "Factor", 1) :: number
		local lw, lh = width * 3, height * 3 -- generous canvas: pictures may sit past the edges
		local part = Instance.new("Part")
		part.Anchored, part.CanCollide, part.CanQuery, part.CanTouch, part.CastShadow = true, false, false, false, false
		part.Transparency = 1
		part.Size = Vector3.new(lw * SCALE, lh * SCALE, 0.05)
		part.Name = "Layer" .. depth .. "_" .. atlas
		local z = front and (0.6 + depth * 0.02) or (-3 + depth * 0.05)
		local gui = Instance.new("SurfaceGui")
		gui.Face = Enum.NormalId.Back
		gui.SizingMode = Enum.SurfaceGuiSizingMode.FixedSize
		gui.CanvasSize = Vector2.new(lw, lh)
		gui.LightInfluence = 0
		gui.Brightness = 1
		gui.ClipsDescendants = false
		gui.Adornee = part
		gui.Parent = part
		for _, el in layer.c or {} do
			if el.t == "Image" or el.t == "SimpleEffect" then
				local img = picture(gui, atlas, el, lw, lh)
				if img and el.t == "SimpleEffect" then
					local osc = Xml.first(el, "OscillationY")
					local speed = Xml.first(el, "Speed")
					local re = Xml.first(el, "ReappearX")
					table.insert(self.anims, {
						img = img, base = img.Position,
						oscAmp = osc and (Xml.num(osc, "Amplitude", Xml.num(osc, "Value", 5)) :: number) or 0,
						oscFreq = osc and (Xml.num(osc, "Frequency", Xml.num(osc, "Speed", 1)) :: number) or 0,
						vx = speed and (Xml.num(speed, "X", 0) :: number) or 0,
						minX = re and Xml.num(re, "Min", -lw / 2) or nil, maxX = re and Xml.num(re, "Max", lw / 2) or nil,
						lw = lw, x = 0,
					})
				end
			end
		end
		part.Parent = self.model
		table.insert(self.layers, { part = part, factor = factor, z = z })
	end
	self:update(0, 0)
	return self
end

-- Parallax for the camera's x (world units) and animated pictures. camDist (studs): the perspective
-- camera's distance to the fighters' plane; a layer at depth z is scaled and placed by k = (D - z) / D so it
-- looks exactly like the game's flat 2D layer.
function Location.update(self: any, cameraX: number, dt: number, camDist: number?, camY: number?)
	self.time += dt
	local cy = (self.centerY or 176) * SCALE
	local D = camDist or 1e6
	local cY = camY or cy
	local camXs = cameraX * SCALE
	for _, l in self.layers do
		local k = (D - l.z) / D
		local want = cameraX * (1 - l.factor) * SCALE -- where the layer sits in the fighters' plane
		if l.size == nil then l.size = l.part.Size end
		l.part.Size = Vector3.new(l.size.X * k, l.size.Y * k, l.size.Z)
		l.part.CFrame = CFrame.new(camXs + (want - camXs) * k, cY + (cy - cY) * k, l.z)
	end
	for _, a in self.anims do
		local dy = a.oscAmp ~= 0 and math.sin(self.time * a.oscFreq * 2) * a.oscAmp or 0
		if a.vx ~= 0 then
			a.x += a.vx * dt * 60
			local px = a.base.X.Offset - a.lw / 2 + a.x
			if a.maxX and px > a.maxX then a.x -= (a.maxX - (a.minX or 0)) end
			if a.minX and px < a.minX then a.x += (a.maxX - a.minX) end
		end
		a.img.Position = UDim2.fromOffset(a.base.X.Offset + a.x, a.base.Y.Offset + dy)
	end
end

function Location.destroy(self: any)
	self.model:Destroy()
end

return Location
