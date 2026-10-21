-- Saves each player's SF2 profile (SF2.Profile) in a DataStore. The client asks through
-- ReplicatedStorage.SF2Remote ("load" / "save"). In Studio this needs Game Settings > Security >
-- "Enable Studio Access to API Services"; without it the profile lives for the session only.

local DataStoreService = game:GetService("DataStoreService")
local ReplicatedStorage = game:GetService("ReplicatedStorage")
local Players = game:GetService("Players")
local HttpService = game:GetService("HttpService")

local remote = Instance.new("RemoteFunction")
remote.Name = "SF2Remote"
remote.Parent = ReplicatedStorage

local ok, store = pcall(function() return DataStoreService:GetDataStore("SF2Profile_v1") end)
if not ok then store = nil end

local MAX = 3_000_000 -- DataStore value limit is 4 MB

remote.OnServerInvoke = function(player: Player, op: string, data: any)
	local key = "u" .. player.UserId
	if op == "load" then
		if not store then return nil end
		local okGet, value = pcall(function() return store:GetAsync(key) end)
		return okGet and value or nil
	elseif op == "save" and type(data) == "string" and #data < MAX then
		if not store then return false end
		local okJson = pcall(function() return HttpService:JSONDecode(data) end)
		if not okJson then return false end
		local okSet = pcall(function() store:SetAsync(key, data) end)
		return okSet
	end
	return nil
end

Players.PlayerRemoving:Connect(function() end)
