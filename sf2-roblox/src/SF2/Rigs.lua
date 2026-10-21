--!strict
-- A fighter's model: several model files merged by name (ModelLoader), e.g. skeleton + weapon + armor +
-- helm + ranged + magic. Port of tools/convert.py rig_data:
--  * nodes in document order, model by model; a node name already merged is skipped (first wins)
--  * macro/COM children resolve by name across every merged model; a COM node without LCC weights
--    averages its children
--  * an edge needs both ends merged; edge names are unique (first wins)
--  * a capsule needs its edge, a triangle its three nodes; figures are never deduplicated
-- Animation slot s is merged node s (ModelAnimation writes the i-th node), so the skeleton comes first and
-- the model that animations drive past the skeleton (weapon, or the projectile for a missile skeleton)
-- second. Rigs are cached per model list.

local Pack = require(script.Parent.Pack)
local Models = script.Parent.Data.Models

local Rigs = {}

local raw = {}
local function model(name: string): any
	local m = raw[name]
	if m == nil then
		local mod = Models:FindFirstChild(name)
		m = mod and Pack.json(mod :: ModuleScript) or false
		raw[name] = m
	end
	return m or nil
end

function Rigs.exists(name: string): boolean
	return Models:FindFirstChild(name) ~= nil
end

local cache = {}
function Rigs.build(models: { string }): any
	local key = table.concat(models, "+")
	local hit = cache[key]
	if hit then return hit end
	local nodes, index = {}, {}
	local edges, edgeInfo, capsules, triangles = {}, {}, {}, {}
	local parts = {}
	for _, name in models do
		local m = model(name)
		if m then table.insert(parts, m) end
	end
	local starts = {}
	for pi, m in parts do
		starts[pi] = #nodes + 1
		for _, n in m.n do
			if not index[n[1]] then
				table.insert(nodes, {
					name = n[1], kind = n[2], x = n[3], y = n[4], z = n[5], mass = n[6], fixed = n[7], cloth = n[8],
					att = n[9], col = n[10], _kids = n[11], _w = n[12],
				})
				index[n[1]] = #nodes
			end
		end
	end
	for _, n in nodes do
		local kids, w = {}, {}
		local k = #n._kids
		for i, c in n._kids do
			local ci = index[c]
			if ci then
				table.insert(kids, ci)
				local lcc = n._w[i]
				if lcc == nil then lcc = (n.kind == 3) and (1 / k) or 0 end
				table.insert(w, lcc)
			end
		end
		if n.kind == 3 and #kids > 0 then
			local any = false
			for _, x in w do if x ~= 0 then any = true end end
			if not any then
				for i in w do w[i] = 1 / #kids end
			end
		end
		n.kids = #kids > 0 and kids or nil
		n.w = #kids > 0 and w or nil
		n._kids, n._w = nil, nil
	end
	local edgeIndex = {}
	for _, m in parts do
		for _, e in m.e do
			local a, b = index[e[2]], index[e[3]]
			if a and b and not edgeIndex[e[1]] then
				table.insert(edges, { a, b, e[4], e[5] })
				table.insert(edgeInfo, { name = e[1], col = e[6], r = e[7], m1 = e[8], m2 = e[9], part = e[10] })
				edgeIndex[e[1]] = #edges
			end
		end
		for _, c in m.c do
			local ei = edgeIndex[c[1]]
			if ei then table.insert(capsules, { ei, c[2], c[3], c[4] }) end
		end
		for _, t in m.t do
			local a, b, c = index[t[1]], index[t[2]], index[t[3]]
			if a and b and c then table.insert(triangles, { a, b, c }) end
		end
	end
	local animated = #parts > 0 and (starts[2] or #nodes + 1) - 1 or 0
	local rig = {
		name = key,
		models = models,
		nodes = nodes, edges = edges, edgeInfo = edgeInfo, capsules = capsules, triangles = triangles,
		animatedCount = animated,
		weaponStart = (#parts > 1) and starts[2] or nil,
		index = index,
	}
	cache[key] = rig
	return rig
end

return Rigs
