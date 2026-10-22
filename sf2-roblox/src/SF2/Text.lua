--!strict
-- The game's own fonts on Roblox text labels. Roblox cannot load a TTF, so tools/build_fonts.py renders
-- AGOpusBold, majallab and CarterOne into glyph atlases (Data.Fonts) and Text.attach draws a TextLabel's
-- text from them: the label keeps its Text, size, colour and alignment and stays the source of truth, its
-- own glyphs are hidden, and a "Glyphs" frame of ImageLabels redraws whenever any of those change.
--  * layout follows Unity's Text: font size = em size, line height = ascent + descent, the baseline one
--    ascent below the line's top; wrapping at spaces; best fit (TextScaled) shrinks the size until it fits
--  * a string with a character the font lacks (CJK, some Cyrillic) keeps the Roblox font
--  * rich-text tags are dropped (a <quad> sprite cannot be drawn inline here)

local Pack = require(script.Parent.Pack)
local Images = require(script.Parent.Images)

local Text = {}

type Glyph = { number } -- page, x, y, w, h, xoff, yoff, advance
type Metrics = { px: number, ascent: number, descent: number, glyphs: { [string]: Glyph } }

local metrics: { [string]: Metrics | false } = {}
local function fontMetrics(name: string): Metrics?
	local m = metrics[name]
	if m == nil then
		local folder = script.Parent.Data:FindFirstChild("Fonts")
		local mod = folder and folder:FindFirstChild("Metrics_" .. name)
		m = mod and Pack.json(mod :: ModuleScript) or false
		metrics[name] = m
	end
	return m or nil
end

function Text.has(font: string): boolean
	return fontMetrics(font) ~= nil
end

local function codepoints(s: string): { number }
	local out = {}
	local ok = pcall(function()
		for _, c in utf8.codes(s) do table.insert(out, c) end
	end)
	if not ok then
		for i = 1, #s do table.insert(out, string.byte(s, i)) end
	end
	return out
end

-- Break the text into lines of codepoints no wider than width (nil: only explicit newlines)
local function lines(m: Metrics, cps: { number }, scale: number, width: number?): { { number } }
	local out, line = {}, {}
	local lineW, wordStart, wordW = 0, 1, 0
	local function adv(c: number): number
		local g = m.glyphs[tostring(c)]
		return g and g[8] * scale or 0
	end
	for _, c in cps do
		if c == 10 then
			table.insert(out, line)
			line, lineW, wordStart, wordW = {}, 0, 1, 0
		else
			local a = adv(c)
			if c == 32 then
				table.insert(line, c)
				lineW += a
				wordStart, wordW = #line + 1, 0
			else
				-- Unity wraps at spaces only: a word longer than the line overflows rather than breaking
				if width and lineW + a > width and #line > 0 and wordStart > 1 then
					do
						-- carry the unfinished word to the next line
						local carry = table.move(line, wordStart, #line, 1, {})
						local kept = table.move(line, 1, wordStart - 1, 1, {})
						while #kept > 0 and kept[#kept] == 32 do table.remove(kept) end
						table.insert(out, kept)
						line, lineW = carry, wordW
					end
					wordStart = 1
				end
				table.insert(line, c)
				lineW += a
				wordW += a
			end
		end
	end
	table.insert(out, line)
	return out
end

local function lineWidth(m: Metrics, line: { number }, scale: number): number
	local w = 0
	for _, c in line do
		local g = m.glyphs[tostring(c)]
		if g then w += g[8] * scale end
	end
	return w
end

local function fits(m: Metrics, cps: { number }, size: number, box: Vector2, wrap: boolean): boolean
	local scale = size / m.px
	local ls = lines(m, cps, scale, wrap and box.X or nil)
	if #ls * (m.ascent + m.descent) * scale > box.Y + 0.5 then return false end
	for _, l in ls do
		if lineWidth(m, l, scale) > box.X + 0.5 then return false end
	end
	return true
end

-- The unwrapped size of label's text at its TextSize in its attached font (nil without one), for the
-- layout groups' preferred sizes
function Text.measure(label: TextLabel): Vector2?
	local font = label:GetAttribute("glyphFont")
	local m = font and fontMetrics(font)
	if not m then return nil end
	local cps = codepoints((string.gsub(label.Text, "<[^>]+>", "")))
	local scale = label.TextSize / m.px
	local ls = lines(m, cps, scale, nil)
	local w = 0
	for _, l in ls do w = math.max(w, lineWidth(m, l, scale)) end
	return Vector2.new(w, #ls * (m.ascent + m.descent) * scale)
end

local X_ALIGN = { [Enum.TextXAlignment.Left] = 0, [Enum.TextXAlignment.Center] = 0.5, [Enum.TextXAlignment.Right] = 1 }
local Y_ALIGN = { [Enum.TextYAlignment.Top] = 0, [Enum.TextYAlignment.Center] = 0.5, [Enum.TextYAlignment.Bottom] = 1 }

-- the label's size in its own (pre-UIScale) units
local function boxOf(label: TextLabel): Vector2
	local s = label.Size
	if s.X.Scale == 0 and s.Y.Scale == 0 then return Vector2.new(s.X.Offset, s.Y.Offset) end
	local UI = require(script.Parent.UI) :: any
	return UI.rectSize(label)
end

-- Draw label's text in font from now on. Returns false (and leaves the label alone) without that font.
function Text.attach(label: TextLabel, font: string): boolean
	local m = fontMetrics(font)
	if not m then return false end
	if label:GetAttribute("glyphFont") then
		label:SetAttribute("glyphFont", font)
		return true
	end
	label:SetAttribute("glyphFont", font)
	local holder = Instance.new("Frame")
	holder.Name = "Glyphs"
	holder.BackgroundTransparency = 1
	holder.Size = UDim2.fromScale(1, 1)
	holder.ZIndex = label.ZIndex
	holder.Parent = label
	local alpha = label.TextTransparency
	-- property signals are deferred, so the handler below sees our own writes after the fact: remember
	-- the value we last wrote and ignore it coming back
	local written: number? = nil
	local function hideOwn(hidden: boolean)
		local v = hidden and 1 or alpha
		if label.TextTransparency ~= v then
			written = v
			label.TextTransparency = v
		end
	end
	local pending = false
	local function render()
		pending = false
		if not label.Parent then return end
		local fm = fontMetrics(label:GetAttribute("glyphFont") or font) :: Metrics
		holder:ClearAllChildren()
		local raw = string.gsub(label.Text, "<[^>]+>", "")
		local cps = codepoints(raw)
		for _, c in cps do
			if c ~= 10 and not fm.glyphs[tostring(c)] then
				hideOwn(false) -- a character the atlas lacks: the Roblox font draws the whole string
				return
			end
		end
		hideOwn(true)
		if #cps == 0 or alpha >= 1 then return end
		local box = boxOf(label)
		local size = label.TextSize
		if label.TextScaled then
			local lim = label:FindFirstChildOfClass("UITextSizeConstraint")
			local hi = math.floor(lim and lim.MaxTextSize or size)
			local lo = 1
			if box.X > 0 and box.Y > 0 then
				while lo < hi do
					local mid = (lo + hi + 1) // 2
					if fits(fm, cps, mid, box, label.TextWrapped) then lo = mid else hi = mid - 1 end
				end
			end
			size = lo
		end
		local scale = size / fm.px
		local lineH = (fm.ascent + fm.descent) * scale
		local ls = lines(fm, cps, scale, label.TextWrapped and box.X or nil)
		local ax = X_ALIGN[label.TextXAlignment] or 0.5
		local ay = Y_ALIGN[label.TextYAlignment] or 0.5
		local top = (box.Y - #ls * lineH) * ay
		local colour = label.TextColor3
		local z = label.ZIndex
		for i, l in ls do
			local x = (box.X - lineWidth(fm, l, scale)) * ax
			local baseline = top + (i - 1) * lineH + fm.ascent * scale
			for _, c in l do
				local g = fm.glyphs[tostring(c)]
				if g[4] > 0 and g[5] > 0 then
					local tex = "Font_" .. (label:GetAttribute("glyphFont") or font) .. "_" .. g[1]
					local content = Images.content(tex)
					if content then
						local img = Instance.new("ImageLabel")
						img.BackgroundTransparency = 1
						img.ImageContent = content
						img.ImageRectOffset = Vector2.new(g[2], g[3])
						img.ImageRectSize = Vector2.new(g[4], g[5])
						img.ImageColor3 = colour
						img.ImageTransparency = alpha
						img.Position = UDim2.fromOffset(x + g[6] * scale, baseline + g[7] * scale)
						img.Size = UDim2.fromOffset(g[4] * scale, g[5] * scale)
						img.ZIndex = z
						img.Parent = holder
					end
				end
				x += g[8] * scale
			end
		end
	end
	local function schedule()
		if pending then return end
		pending = true
		task.defer(render)
	end
	for _, p in { "Text", "TextSize", "TextColor3", "TextXAlignment", "TextYAlignment", "TextScaled", "TextWrapped", "AbsoluteSize", "ZIndex" } do
		label:GetPropertyChangedSignal(p):Connect(function()
			holder.ZIndex = label.ZIndex
			schedule()
		end)
	end
	label:GetPropertyChangedSignal("TextTransparency"):Connect(function()
		if label.TextTransparency == written then return end
		written = nil
		alpha = label.TextTransparency
		schedule()
	end)
	-- the atlas glyphs carry no outline; a Roblox stroke would outline invisible text
	label.TextStrokeTransparency = 1
	hideOwn(true)
	render()
	return true
end

return Text
