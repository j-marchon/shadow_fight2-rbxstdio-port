--!strict
-- Sound effects and music: each clip is a region of an uploaded pack (Data.AudioMap, written by
-- tools/upload_audio.py: name -> {assetId, start, length}); a Sound plays that region with PlaybackRegion.
-- Voice sets (snd_m_ / snd_low_ / snd_f_) are chosen by the Sound action's Voice attribute (Fight.action).

local SoundService = game:GetService("SoundService")

local Sound = {}

local map: { [string]: { number } }? = nil
local function clips(): { [string]: { number } }
	if not map then
		local mod = script.Parent.Data:FindFirstChild("AudioMap")
		map = mod and require(mod :: ModuleScript) :: any or {}
	end
	return map :: any
end

local group = Instance.new("SoundGroup")
group.Name = "SF2Sfx"
group.Parent = SoundService
local musicGroup = Instance.new("SoundGroup")
musicGroup.Name = "SF2Music"
musicGroup.Parent = SoundService

Sound.sfxVolume = 1
Sound.musicVolume = 0.6

function Sound.has(name: string): boolean
	return clips()[name] ~= nil
end

local playing: { [string]: { Sound } } = {}

-- Play a clip once (or looped). Returns the Sound, or nil when the clip is unknown.
function Sound.play(name: string?, opts: any?): Sound?
	if not name then return nil end
	local c = clips()[name]
	if not c then return nil end
	opts = opts or {}
	local s = Instance.new("Sound")
	s.Name = name
	s.SoundId = "rbxassetid://" .. string.format("%d", c[1])
	s.PlaybackRegionsEnabled = true
	s.PlaybackRegion = NumberRange.new(c[2], c[2] + c[3])
	s.Volume = (opts.volume or 1) * Sound.sfxVolume
	s.Looped = opts.looped == true
	if s.Looped then s.LoopRegion = NumberRange.new(c[2], c[2] + c[3]) end
	s.SoundGroup = group
	s.Parent = SoundService
	s.TimePosition = c[2]
	s:Play()
	local list = playing[name]
	if not list then list = {}; playing[name] = list end
	table.insert(list, s)
	if not s.Looped then
		task.delay(c[3] + 0.5, function()
			local i = table.find(list, s)
			if i then table.remove(list, i) end
			s:Destroy()
		end)
	end
	return s
end

function Sound.stop(name: string?)
	if not name then return end
	for _, s in playing[name] or {} do s:Destroy() end
	playing[name] = nil
end

function Sound.stopAll()
	for _, list in playing do
		for _, s in list do s:Destroy() end
	end
	table.clear(playing)
end

local music: Sound? = nil
local musicName: string? = nil
-- Loop a music track (nil stops the music)
function Sound.music(name: string?)
	if name == musicName and music then return end
	if music then music:Destroy(); music = nil end
	musicName = name
	if not name then return end
	local c = clips()[name]
	if not c then return end
	local s = Instance.new("Sound")
	s.Name = "Music_" .. name
	s.SoundId = "rbxassetid://" .. string.format("%d", c[1])
	s.PlaybackRegionsEnabled = true
	s.PlaybackRegion = NumberRange.new(c[2], c[2] + c[3])
	s.LoopRegion = NumberRange.new(c[2], c[2] + c[3])
	s.Looped = true
	s.Volume = Sound.musicVolume
	s.SoundGroup = musicGroup
	s.Parent = SoundService
	s.TimePosition = c[2]
	s:Play()
	music = s
end

function Sound.setVolumes(sfx: number, mus: number)
	Sound.sfxVolume, Sound.musicVolume = sfx, mus
	if music then music.Volume = mus end
end

return Sound
