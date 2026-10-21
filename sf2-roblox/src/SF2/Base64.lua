--!strict
-- Standard base64 -> buffer decoder (animation data is shipped as base64 text in ModuleScripts).

local Base64 = {}

local LOOKUP = table.create(256, -1)
do
	local alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
	for i = 1, #alphabet do
		LOOKUP[string.byte(alphabet, i) + 1] = i - 1
	end
end

function Base64.decode(text: string): buffer
	local len = #text
	local padding = 0
	if string.sub(text, -2) == "==" then
		padding = 2
	elseif string.sub(text, -1) == "=" then
		padding = 1
	end
	local outLen = (len // 4) * 3 - padding
	local out = buffer.create(outLen)
	local o = 0
	for i = 1, len, 4 do
		local a = LOOKUP[string.byte(text, i) + 1]
		local b = LOOKUP[string.byte(text, i + 1) + 1]
		local c = LOOKUP[(string.byte(text, i + 2) or 61) + 1]
		local d = LOOKUP[(string.byte(text, i + 3) or 61) + 1]
		local n = bit32.lshift(a, 18) + bit32.lshift(b, 12) + bit32.lshift(math.max(c, 0), 6) + math.max(d, 0)
		if o < outLen then buffer.writeu8(out, o, bit32.rshift(n, 16)); o += 1 end
		if o < outLen then buffer.writeu8(out, o, bit32.band(bit32.rshift(n, 8), 255)); o += 1 end
		if o < outLen then buffer.writeu8(out, o, bit32.band(n, 255)); o += 1 end
	end
	return out
end

return Base64
