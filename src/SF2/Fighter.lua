--!strict
-- A fighter's node simulation: animation playback + SF2 cloth/ragdoll physics.
-- Port of ModelObject / ModelPhysics / ModelNode / ModelEdge (see DECOMPILE_INDEX.md).
-- Works in SF2 units with Y up (the original negates Y on load and uses Y-down; signs are flipped here to match).

local Fighter = {}
Fighter.__index = Fighter

-- internalSettings.xml <Physics>
local GRAVITATION = 0.4 -- units / tick^2
local ITERATIONS = 2 -- IterativeProcess
local FRICTION = 0.2 -- FrictionForce

export type Fighter = typeof(setmetatable({} :: {
	rig: any,
	count: number,
	animated: number,
	px: { number }, py: { number }, pz: { number },
	ox: { number }, oy: { number }, oz: { number },
	active: { boolean },
	mass: { number },
	damping: { number },
	floor: { boolean },
	macros: { number },
	edges: { any },
	wallMin: number, wallMax: number,
	ragdoll: boolean,
	allMacros: { number },
	normal: any,
	ragdollSkip: { [number]: boolean },
	weaponStart: number?,
	driven: { [number]: boolean },
	drivenCount: number,
}, Fighter))

function Fighter.new(rig: any): Fighter
	local n = #rig.nodes
	local self = setmetatable({
		rig = rig,
		count = n,
		animated = rig.animatedCount,
		px = table.create(n, 0), py = table.create(n, 0), pz = table.create(n, 0),
		ox = table.create(n, 0), oy = table.create(n, 0), oz = table.create(n, 0),
		active = table.create(n, false),
		mass = table.create(n, 0),
		damping = table.create(n, 0),
		floor = table.create(n, false),
		macros = {},
		edges = rig.edges,
		wallMin = -100000, wallMax = 100000,
		ragdoll = false,
	}, Fighter)
	for i, node in rig.nodes do
		self.px[i], self.py[i], self.pz[i] = node.x, node.y, node.z
		self.ox[i], self.oy[i], self.oz[i] = node.x, node.y, node.z
		-- Physics-driven nodes outside the animated skeleton: cloth (headband tails, pants panels)
		local free = i > self.animated and node.kind == 1 and not node.fixed
		self.active[i] = free
		self.mass[i] = node.mass -- every node, active or not: ModelEdge weighs both ends by mass
		self.damping[i] = 1 - node.att -- ModelNode.IPLOAGNCEHJ: velocity *= (1 - Attenuation)
		-- ModelPhysics.MPLGBEILHIP floors every active edge end (IIHMOINCCLH has no Collisible test), so
		-- cloth (chains, nunchaku sticks, ribbons) rests on the ground instead of sinking through it
		self.floor[i] = free
		if node.kind ~= 1 and i > self.animated and node.kids then
			table.insert(self.macros, i)
		end
	end
	-- ragdoll: macro/COM nodes inside the animated range are computed from their children instead
	self.allMacros = {}
	for i, node in rig.nodes do
		if node.kind ~= 1 and node.kids then table.insert(self.allMacros, i) end
	end
	self.normal = { active = table.clone(self.active), floor = table.clone(self.floor) }
	-- weapon slots: animations with more than `animated` nodes (kusarigama 78, nunchaku 75, composite
	-- weapons, power fists 209) also drive the weapon model's first nodes, in model order
	self.weaponStart = rig.weaponStart
	self.driven = {} :: { [number]: boolean }
	self.drivenCount = 0
	-- in ragdoll, a skeleton node must not be pulled towards a macro node computed from the skeleton
	-- (that feeds back and explodes); cloth hanging off macro nodes stays attached
	self.ragdollSkip = {}
	for ei, e in rig.edges do
		local na, nb = rig.nodes[e[1]], rig.nodes[e[2]]
		if (na.kind ~= 1 and e[2] <= self.animated) or (nb.kind ~= 1 and e[1] <= self.animated) then
			self.ragdollSkip[ei] = true
		end
	end
	return self
end

-- ModelPhysics physics mode (BNHJIKJAHHF, ModelPhysics.MKCLHFFLJCO): every non-fixed node is simulated
-- and collides with the floor. Off: back to animation + cloth.
function Fighter.setRagdoll(self: Fighter, on: boolean)
	if on == self.ragdoll then return end
	self.ragdoll = on
	if on then
		self.driven, self.drivenCount = {}, 0
		for i, node in self.rig.nodes do
			local free = node.kind == 1 and not node.fixed
			self.active[i] = free
			self.floor[i] = free
		end
	else
		self.active = table.clone(self.normal.active)
		self.floor = table.clone(self.normal.floor)
	end
end

-- CPGONFFGAHM.HKFEABKNICO: a hit impulse on edge e at fraction t along it, split between its two nodes
-- by lever (t) and divided by each node's mass, added to the position (= velocity in Verlet).
function Fighter.applyImpulse(self: Fighter, e: number, t: number, ix: number, iy: number)
	local edge = self.rig.edges[e]
	local nodes = self.rig.nodes
	for k, share in { [1] = 1 - t, [2] = t } do
		local i = edge[k]
		local node = nodes[i]
		if not node.fixed and node.mass > 0 then
			self.px[i] += ix * share / node.mass
			self.py[i] += iy * share / node.mass
		end
	end
end

-- Centre of mass (the COM node, or the mass-weighted mean of the real nodes)
function Fighter.com(self: Fighter): (number, number)
	local sx, sy, sm = 0, 0, 0
	for i, node in self.rig.nodes do
		if node.kind == 1 and node.mass > 0 then
			sx += self.px[i] * node.mass; sy += self.py[i] * node.mass; sm += node.mass
		end
	end
	return sx / sm, sy / sm
end

-- Rig node for animation slot s: the skeleton's slots, then the weapon part's nodes (nil past either)
function Fighter.slotNode(self: Fighter, s: number): number?
	if s <= self.animated then
		return s
	end
	local i = self.weaponStart and (self.weaponStart + s - self.animated - 1)
	return (i and i <= self.count) and i or nil
end

-- A clip with n slots drives the weapon nodes it covers: they leave physics (and macros stop
-- recomputing them); the rest go back to cloth/macros, keeping their last motion as Verlet velocity.
-- Driven nodes still weigh their mass in edges, like the animated skeleton.
function Fighter.setDriven(self: Fighter, n: number)
	local extra = self.weaponStart and math.clamp(n - self.animated, 0, self.count - self.weaponStart + 1) or 0
	if extra == self.drivenCount or self.ragdoll then return end
	self.drivenCount = extra
	self.driven = {}
	if not self.weaponStart then return end
	for i = self.weaponStart, self.count do
		local on = i < self.weaponStart + extra
		self.driven[i] = on or nil
		self.active[i] = (not on) and self.normal.active[i]
	end
end

-- Write the animated slots for keyframe segment c, sub-step k of `steps`, offset by (dx, dy).
function Fighter.applyFrame(self: Fighter, clip: any, c: number, k: number, steps: number, dx: number, dy: number)
	local px, py, pz = self.px, self.py, self.pz
	self:setDriven(clip.nodes)
	for slot = 1, clip.nodes do
		local i = self:slotNode(slot)
		if not i then break end
		local x, y, z = clip:sample(c, k, steps, slot)
		px[i], py[i], pz[i] = x + dx, y + dy, z
	end
end

-- MacroNode position = sum of LCC_i * child_i (affine; weights may be negative)
function Fighter.updateMacros(self: Fighter)
	local nodes = self.rig.nodes
	local px, py, pz = self.px, self.py, self.pz
	local driven = self.driven
	for _, i in (self.ragdoll and self.allMacros or self.macros) do
		if driven[i] then continue end
		local node = nodes[i]
		local x, y, z = 0, 0, 0
		local w = node.w
		for k, c in node.kids do
			local wk = w[k]
			x += wk * px[c]; y += wk * py[c]; z += wk * pz[c]
		end
		px[i], py[i], pz[i] = x, y, z
	end
end

-- ModelPhysics.BDHAMOEKNNK: integrate active nodes, then ITERATIONS passes over all edges.
function Fighter.stepPhysics(self: Fighter)
	local px, py, pz, ox, oy, oz = self.px, self.py, self.pz, self.ox, self.oy, self.oz
	local active, damping = self.active, self.damping
	for i = 1, self.count do
		if active[i] then
			local d = damping[i]
			local nx = px[i] + (px[i] - ox[i]) * d
			local ny = py[i] + (py[i] - oy[i]) * d - GRAVITATION
			local nz = pz[i] + (pz[i] - oz[i]) * d
			ox[i], oy[i], oz[i] = px[i], py[i], pz[i]
			px[i], py[i], pz[i] = nx, ny, nz
		end
	end
	local mass, floor = self.mass, self.floor
	for _ = 1, ITERATIONS do
		local skip = self.ragdoll and self.ragdollSkip or nil
		for ei, e in self.edges do
			local a, b, rest = e[1], e[2], e[3]
			local aActive, bActive = active[a], active[b]
			if (aActive or bActive) and not (skip and skip[ei]) then
				if aActive and floor[a] then self:_floor(a) end
				if bActive and floor[b] then self:_floor(b) end
				-- ModelEdge.DOCFNLBLJFO: both ends scale by rest/dist about their mass-weighted centre;
				-- only active ends move, but an inactive end (animated, driven or macro) still weighs its
				-- own mass, so a light macro holds a free node only weakly
				local ma, mb = mass[a], mass[b]
				local msum = ma + mb
				if msum > 0 then
					local dx, dy, dz = px[b] - px[a], py[b] - py[a], pz[b] - pz[a]
					local dist = math.sqrt(dx * dx + dy * dy + dz * dz)
					if dist > 1e-6 then
						local k = (1 - rest / dist) / msum
						if aActive then px[a] += dx * k * mb; py[a] += dy * k * mb; pz[a] += dz * k * mb end
						if bActive then px[b] -= dx * k * ma; py[b] -= dy * k * ma; pz[b] -= dz * k * ma end
					end
				end
			end
		end
	end
	-- ragdoll: the last constraint pass can push nodes back under the floor; clamp once more
	-- (port deviation: keeps a lying body on the ground with only 2 solver iterations)
	if self.ragdoll then
		for i = 1, self.count do
			if active[i] and floor[i] and py[i] < 0 then self:_floor(i) end
		end
	end
end

-- ModelPhysics.IIHMOINCCLH + KAGPEIPPDHB: floor at y = 0 with friction, arena walls on X.
function Fighter._floor(self: Fighter, i: number)
	local px, py, pz, ox, oz = self.px, self.py, self.pz, self.ox, self.oz
	if py[i] <= 0 then
		local dx, dz = px[i] - ox[i], pz[i] - oz[i]
		local pen = -py[i] * FRICTION
		px[i], py[i], pz[i] = ox[i], 0, oz[i]
		local len2 = dx * dx + dz * dz
		if pen * pen < len2 then
			local k = 1 - pen / math.sqrt(len2)
			px[i] += dx * k; pz[i] += dz * k
		end
	end
	px[i] = math.clamp(px[i], self.wallMin, self.wallMax)
end

-- Move the whole fighter (keeps cloth velocity intact).
function Fighter.translate(self: Fighter, dx: number, dy: number)
	for i = 1, self.count do
		self.px[i] += dx; self.py[i] += dy
		self.ox[i] += dx; self.oy[i] += dy
	end
end

-- After the animated slots were written by someone else (MoveEngine): macros -> physics -> macros.
function Fighter.simulate(self: Fighter)
	self:updateMacros()
	self:stepPhysics()
	self:updateMacros()
end

-- One 1/60 s tick: animation pose -> macros -> physics -> macros.
function Fighter.tick(self: Fighter, clip: any, c: number, k: number, steps: number, dx: number, dy: number)
	self:applyFrame(clip, c, k, steps, dx, dy)
	self:updateMacros()
	self:stepPhysics()
	self:updateMacros()
end

return Fighter
