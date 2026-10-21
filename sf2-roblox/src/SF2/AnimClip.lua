--!strict
-- One SF2 animation (specs/animation-binary.md). Positions are absolute per frame, per node slot,
-- in the files' native space (Y up, ~280 units = fighter height). Frame f is 0-based.

local Base64 = require(script.Parent.Base64)

export type Clip = {
	name: string,
	frames: number,
	nodes: number,
	quant: number,
	data: buffer,
	getPosition: (self: Clip, frame: number, slot: number) -> (number, number, number),
}

local AnimClip = {}
AnimClip.__index = AnimClip

local cache: { [string]: Clip } = {}

function AnimClip.load(name: string): Clip
	local cached = cache[name]
	if cached then
		return cached
	end
	local folder = script.Parent.Data.Anims
	local module = folder:FindFirstChild(name)
	assert(module, "SF2 animation not found: " .. name)
	local raw = require(module) :: any
	local self = setmetatable({
		name = name,
		frames = raw.frames,
		nodes = raw.nodes,
		quant = raw.quant,
		data = Base64.decode(raw.data),
	}, AnimClip) :: any
	cache[name] = self
	return self
end

function AnimClip.getPosition(self: Clip, frame: number, slot: number): (number, number, number)
	-- int16 little-endian triplets, frame-major, slot is 1-based; frame is clamped to the clip
	frame = math.clamp(frame, 0, self.frames - 1)
	local o = ((frame * self.nodes) + (slot - 1)) * 6
	local q = self.quant
	return buffer.readi16(self.data, o) / q, buffer.readi16(self.data, o + 2) / q, buffer.readi16(self.data, o + 4) / q
end

-- SF2 in-move playback (ModelAnimation.KCOKKAHCOLG + BMBCEECINLK): each keyframe segment c lasts
-- S = MidFrames + 1 ticks and follows a uniform quadratic B-spline:
--   A = mid(F[c], F[c+1]), B = F[c+1], C = mid(F[c+1], F[c+2]);  t = k/S, k = 1..S
--   pos = (1-t)^2 A + 2t(1-t) B + t^2 C
function AnimClip.sample(self: Clip, c: number, k: number, steps: number, slot: number): (number, number, number)
	local x0, y0, z0 = self:getPosition(c, slot)
	local x1, y1, z1 = self:getPosition(c + 1, slot)
	local x2, y2, z2 = self:getPosition(c + 2, slot)
	local t = k / steps
	local u = 1 - t
	local wa, wb, wc = u * u, 2 * t * u, t * t
	return wa * (x0 + x1) * 0.5 + wb * x1 + wc * (x1 + x2) * 0.5,
		wa * (y0 + y1) * 0.5 + wb * y1 + wc * (y1 + y2) * 0.5,
		wa * (z0 + z1) * 0.5 + wb * z1 + wc * (z1 + z2) * 0.5
end

return AnimClip
