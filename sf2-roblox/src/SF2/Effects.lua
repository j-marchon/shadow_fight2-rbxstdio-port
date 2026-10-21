--!strict
-- Move effects (ActionEffect / CurrentEffect, played by CocosAnimation): a sprite sequence - the frames of
-- the texture named by Sequence, in numeric order - drawn in the fight plane.
--  * <Position Player Object Part ShiftX ShiftY Follow>: where (a DistancePoint of that model); Follow keeps
--    it there every frame, otherwise it stays where it started
--  * Scale (and ScaleX/ScaleY, negative = flipped), StartRotation, Looped, TimeScale, OnBackground (behind
--    the fighters); effects face the way their model faces
--  * sizes: one source pixel = one world unit (the game draws effect atlases 1:1 in its 2D space)
-- Port deviation: CocosAnimation's per-sequence frame delays aren't in the data we have; frames play at 30
-- per second x TimeScale.
-- Also hit pictures (HitEffect / the default hit, hit_blade, block, critical) and stop by name.

local Images = require(script.Parent.Images)

local Effects = {}
Effects.__index = Effects

local SCALE = 1 / 40
local FPS = 30

function Effects.new(parent: Instance)
	local folder = Instance.new("Folder")
	folder.Name = "SF2Effects"
	folder.Parent = parent
	return setmetatable({ list = {}, folder = folder }, Effects)
end

local function attr(el: any, k: string): string?
	return el and el.a and el.a[k]
end

local function makeBoard(w: number, h: number, folder: Instance): (Part, ImageLabel)
	local part = Instance.new("Part")
	part.Anchored, part.CanCollide, part.CanQuery, part.CanTouch, part.CastShadow = true, false, false, false, false
	part.Transparency = 1
	part.Size = Vector3.new(math.max(w, 1) * SCALE, math.max(h, 1) * SCALE, 0.02)
	local gui = Instance.new("SurfaceGui")
	gui.Face = Enum.NormalId.Back
	gui.SizingMode = Enum.SurfaceGuiSizingMode.FixedSize
	gui.CanvasSize = Vector2.new(256, 256)
	gui.LightInfluence = 0
	gui.Brightness = 1.5
	gui.Adornee = part
	gui.Parent = part
	local img = Instance.new("ImageLabel")
	img.BackgroundTransparency = 1
	img.Size = UDim2.fromScale(1, 1)
	img.Parent = gui
	part.Parent = folder
	return part, img
end

-- Start a sequence. opts: {sequence, x, y, scale, scaleX, scaleY, rotation, looped, timeScale, back,
-- follow = function() -> (x, y)?, owner, name, facing}
function Effects.play(self: any, opts: any): any
	local frames = Images.sequence(opts.sequence)
	if #frames == 0 then return nil end
	local first = Images.spriteIn(opts.sequence, frames[1])
	if not first then return nil end
	local sx = (opts.scaleX or opts.scale or 1) * (opts.facing or 1)
	local sy = opts.scaleY or opts.scale or 1
	local w, h = first.source.X * math.abs(sx), first.source.Y * math.abs(sy)
	local part, img = makeBoard(w, h, self.folder)
	local e = {
		part = part, img = img, frames = frames, sequence = opts.sequence, t = 0,
		looped = opts.looped, timeScale = opts.timeScale or 1, flipX = sx < 0, flipY = sy < 0,
		x = opts.x, y = opts.y, z = opts.back and -0.8 or 0.4, rotation = opts.rotation or 0,
		follow = opts.follow, owner = opts.owner, name = opts.name, frame = 0,
	}
	table.insert(self.list, e)
	self:_frame(e, 1)
	self:_place(e)
	return e
end

function Effects._frame(self: any, e: any, i: number)
	if e.frame == i then return end
	e.frame = i
	local s = Images.spriteIn(e.sequence, e.frames[i])
	if not s then return end
	local img = e.img
	img.ImageContent = s.content
	local off, size = s.offset, s.size
	if e.flipX then off += Vector2.new(size.X, 0); size = Vector2.new(-size.X, size.Y) end
	if e.flipY then off += Vector2.new(0, size.Y); size = Vector2.new(size.X, -size.Y) end
	img.ImageRectOffset = off
	img.ImageRectSize = size
end

function Effects._place(self: any, e: any)
	if e.follow then
		local x, y = e.follow()
		if x then e.x, e.y = x, y end
	end
	e.part.CFrame = CFrame.new(e.x * SCALE, e.y * SCALE, e.z) * CFrame.Angles(0, 0, -math.rad(e.rotation))
end

function Effects.update(self: any, dt: number)
	for i = #self.list, 1, -1 do
		local e = self.list[i]
		e.t += dt * FPS * e.timeScale
		local n = #e.frames
		local f = math.floor(e.t) + 1
		if f > n then
			if e.looped then
				f = ((f - 1) % n) + 1
			else
				e.part:Destroy()
				table.remove(self.list, i)
				continue
			end
		end
		self:_frame(e, f)
		self:_place(e)
	end
end

-- StopEffect / StopFollowEffect: by effect name, for one owner (or all with owner nil)
function Effects.stop(self: any, owner: any?, name: string?)
	for i = #self.list, 1, -1 do
		local e = self.list[i]
		if (owner == nil or e.owner == owner) and (name == nil or e.name == name) then
			e.part:Destroy()
			table.remove(self.list, i)
		end
	end
end

function Effects.clear(self: any)
	self:stop(nil, nil)
end

-- An <Effect> action from a move (Fight hook "effect")
function Effects.fromAction(self: any, engine: any, el: any)
	local pos
	for _, k in el.c or {} do
		if k.t == "Position" then pos = k end
	end
	local function where(): (number?, number?)
		if not pos then
			return engine:nodePos(engine.pivotSlot)
		end
		local a = pos.a or {}
		return engine:anchor({
			player = a.Player or "Me", object = a.Object or "Nodes", part = a.Part,
			shiftX = tonumber(a.ShiftX or "0"), shiftY = tonumber(a.ShiftY or "0"),
		})
	end
	local x, y = where()
	local follow = pos and attr(pos, "Follow") == "1"
	return self:play({
		sequence = attr(el, "Sequence"), name = attr(el, "Name"), owner = engine,
		x = x, y = y, follow = follow and where or nil,
		scale = tonumber(attr(el, "Scale") or "1"),
		scaleX = attr(el, "ScaleX") and tonumber(attr(el, "ScaleX")) or nil,
		scaleY = attr(el, "ScaleY") and tonumber(attr(el, "ScaleY")) or nil,
		rotation = tonumber(attr(el, "StartRotation") or "0"),
		looped = attr(el, "Looped") == "1",
		timeScale = tonumber(attr(el, "TimeScale") or "1"),
		back = attr(el, "OnBackground") == "1",
		facing = engine.facing,
	})
end

return Effects
