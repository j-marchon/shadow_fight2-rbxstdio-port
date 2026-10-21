--!strict
-- Port of ModelController (IPCACEBFONO) input buffering and KeyData (NKOIBKNPICN) matching.
-- The input KeyData has three lists:
--  * taps     (OOIGOEAHPMA): every press is appended, at most 2 kept (oldest dropped)
--  * held     (KJNPENJKBKD): every key that is down right now, rebuilt on each press and each tick
--  * released (JCJPICMGIHE): keys let go that are not in the tap list (no move uses Release yet)
-- Timers (BDHAMOEKNNK, once per tick):
--  * more than 14 ticks without a press clears the taps (EHMBDMLBKEA > 0xe)
--  * every 30 ticks the held/released lists are cleared (BJIKPLGMOMI == 0x1e); the held list
--    is rebuilt straight away, so this never drops taps
-- A press fires KeyPressed (JLOLDCGDOKH). Nothing is consumed when a move starts.
-- Matching (KeyData.CENALFGNMKJ -> OFABBFOGEAK): each of the move's lists must be contained
-- in the input's list, counting duplicates, in any order. Priority then picks between the
-- moves that match (e.g. taps {Punch,Punch} match both HighPunch and DoublePunch).

local KeyBuffer = {}
KeyBuffer.__index = KeyBuffer

local MAX_TAPS = 2
local TAP_TIMEOUT = 14
local LIST_RESET = 30

export type KeyBuffer = typeof(setmetatable({} :: {
	taps: { string },
	down: { [string]: boolean },
	held: { string },
	released: { string },
	sincePress: number,
	sinceReset: number,
	pressedThisTick: boolean,
}, KeyBuffer))

function KeyBuffer.new(): KeyBuffer
	return setmetatable({
		taps = {}, down = {}, held = {}, released = {},
		sincePress = 0, sinceReset = 0, pressedThisTick = false,
	}, KeyBuffer)
end

function KeyBuffer._rebuildHeld(self: KeyBuffer)
	table.clear(self.held)
	for k in self.down do
		table.insert(self.held, k)
	end
end

-- OGJLHHJEIOG
function KeyBuffer.press(self: KeyBuffer, key: string)
	if self.down[key] then return end
	self.down[key] = true
	self.sincePress = 0
	table.insert(self.taps, key)
	while #self.taps > MAX_TAPS do
		table.remove(self.taps, 1)
	end
	table.clear(self.released)
	self:_rebuildHeld()
	self.pressedThisTick = true
end

-- BBKKFLFMBAB
function KeyBuffer.release(self: KeyBuffer, key: string)
	if not self.down[key] then return end
	self.down[key] = nil
	self:_rebuildHeld()
	if not table.find(self.taps, key) then
		table.insert(self.released, key)
	end
end

-- Mark a key as down without a tap (no KeyPressed): used when one key of a diagonal is let go.
function KeyBuffer.hold(self: KeyBuffer, key: string)
	self.down[key] = true
	self:_rebuildHeld()
end

-- BDHAMOEKNNK; called once per tick after events were processed.
function KeyBuffer.tick(self: KeyBuffer)
	self.pressedThisTick = false
	if self.sinceReset == LIST_RESET then
		table.clear(self.released)
		self.sinceReset = 0
	end
	if self.sincePress > TAP_TIMEOUT then
		table.clear(self.taps)
		self.sincePress = 0
	end
	self:_rebuildHeld()
	self.sincePress += 1
	self.sinceReset += 1
end

local function contains(have: { string }, need: { string }): boolean
	if #need > #have then return false end
	local used = {}
	for _, k in need do
		local found = false
		for i, h in have do
			if not used[i] and h == k then
				used[i] = true
				found = true
				break
			end
		end
		if not found then return false end
	end
	return true
end

-- The buffer holds screen directions (Right, Up-Left, ...). A move's Forward/Back are translated
-- with the facing that move would have (KeyData.FOMNLFHELHO / INFLJKCCKKI swap them when the
-- candidate faces left, with the direction from InfoAnimation.BAHFNIPBBHD).
local function toScreen(keys: { string }, facing: number): { string }
	local fwd, back = "Right", "Left"
	if facing < 0 then fwd, back = "Left", "Right" end
	local out = table.create(#keys)
	for i, k in keys do
		local s = string.gsub(k, "Forward", "#")
		s = string.gsub(s, "Back", back)
		out[i] = (string.gsub(s, "#", fwd))
	end
	return out
end

function KeyBuffer.matches(self: KeyBuffer, taps: { string }, holds: { string }, facing: number): boolean
	return contains(self.taps, toScreen(taps, facing)) and contains(self.held, toScreen(holds, facing))
end

return KeyBuffer
