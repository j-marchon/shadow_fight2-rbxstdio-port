--!strict
-- Reads packed data modules written by tools/pack.py: base64(zstd(JSON or bytes)), in one module or split
-- into sibling parts listed by the main module.

local EncodingService = game:GetService("EncodingService")
local HttpService = game:GetService("HttpService")

local Pack = {}

-- The decompressed bytes of a packed module, as a buffer
function Pack.bytes(mod: ModuleScript): buffer
	local v = require(mod) :: any
	local b64: string
	if type(v) == "table" then
		local parts = table.create(#v)
		for i, name in v do
			parts[i] = require((mod.Parent :: Instance):FindFirstChild(name) :: ModuleScript) :: any
		end
		b64 = table.concat(parts)
	else
		b64 = v
	end
	local raw = EncodingService:Base64Decode(buffer.fromstring(b64))
	return EncodingService:DecompressBuffer(raw, Enum.CompressionAlgorithm.Zstd)
end

-- A packed JSON value
function Pack.json(mod: ModuleScript): any
	return HttpService:JSONDecode(buffer.tostring(Pack.bytes(mod)))
end

return Pack
