-- SF2 installer: run in Studio Edit mode (MCP execute_luau or the command bar).
-- Reads out/install.txt from the local server (python -I -m http.server 8765 in the repo root),
-- fetches only scripts whose hash changed, and removes scripts under ReplicatedStorage.SF2 that
-- are no longer listed. Returns a one-line summary.
-- Installed as ServerStorage.SF2Installer: require(game.ServerStorage.SF2Installer)() from MCP / command bar.
return function()
	local Http = game:GetService("HttpService")
	local BASE = "http://127.0.0.1:8765/"
	local PARALLEL = 24

	local function bust() return "?" .. math.floor(os.clock() * 1e6) end

	local manifest = Http:GetAsync(BASE .. "out/install.txt" .. bust())
	local wanted = {}
	local entries = {}
	for line in manifest:gmatch("[^\n]+") do
		local cls, path, url, sha = line:match("^(%S+)\t(%S+)\t(%S+)\t(%S+)")
		if cls then
			table.insert(entries, { cls = cls, path = path, url = url, sha = sha })
			wanted[path] = true
		end
	end

	local function container(parts, n)
		local node = game:GetService(parts[1])
		for i = 2, n do
			local child = node:FindFirstChild(parts[i])
			if child and not child:IsA("Folder") and i < n and child:IsA("LuaSourceContainer") then
				-- a script may hold children (split rigs live as siblings, so this is rare)
				node = child
			elseif child then
				node = child
			else
				local f = Instance.new("Folder")
				f.Name = parts[i]
				f.Parent = node
				node = f
			end
		end
		return node
	end

	local todo = {}
	for _, e in entries do
		local parts = string.split(e.path, "/")
		local parent = container(parts, #parts - 1)
		local name = parts[#parts]
		local inst = parent:FindFirstChild(name)
		if inst and inst.ClassName ~= e.cls then inst:Destroy(); inst = nil end
		if not inst then
			inst = Instance.new(e.cls)
			inst.Name = name
			if name == "SF2Viewer" then inst.Disabled = true end
			inst.Parent = parent
		end
		if inst:GetAttribute("sha") ~= e.sha then
			table.insert(todo, { inst = inst, e = e })
		end
	end

	local failed, done = {}, 0
	local idx = 0
	local running = 0
	local function worker()
		while true do
			idx += 1
			local job = todo[idx]
			if not job then break end
			local ok, src = pcall(Http.GetAsync, Http, BASE .. job.e.url .. bust())
			if ok then
				ok, src = pcall(function()
					job.inst.Source = src
				end)
			end
			if ok then
				job.inst:SetAttribute("sha", job.e.sha)
				done += 1
			else
				table.insert(failed, job.e.path .. ": " .. tostring(src))
			end
		end
		running -= 1
	end
	for _ = 1, PARALLEL do
		running += 1
		task.spawn(worker)
	end
	while running > 0 do task.wait() end

	-- remove stale scripts under the managed roots
	local removed = 0
	-- (path from the ancestry: names may contain dots, e.g. split rig parts)
	for _, d in game.ReplicatedStorage.SF2:GetDescendants() do
		if d:IsA("LuaSourceContainer") then
			local names, n = {}, d
			while n and n ~= game do table.insert(names, 1, n.Name); n = n.Parent end
			if not wanted[table.concat(names, "/")] then d:Destroy(); removed += 1 end
		end
	end
	for _, d in game.ReplicatedStorage.SF2:GetDescendants() do
		if d:IsA("Folder") and d.Parent and #d:GetChildren() == 0 then d:Destroy() end
	end
	return string.format("entries=%d updated=%d removed=%d failed=%d %s", #entries, done, removed, #failed,
		table.concat(failed, "; "):sub(1, 500))

end
