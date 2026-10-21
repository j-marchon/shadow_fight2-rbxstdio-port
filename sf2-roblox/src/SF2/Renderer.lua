--!strict
-- Draws a Fighter the way SF2 does (Renders/Model):
--  * CapsuleRender: a LineRenderer stroke from A+(B-A)*Margin1 to A+(B-A)*(1-Margin2),
--    width = 2*Radius1, 9 round-cap vertices, z = 0  -> here: cylinder + two spheres in the X/Y plane.
--  * MeshRender: flat-colored triangles over nodes/macro-nodes -> here: one EditableMesh.

local AssetService = game:GetService("AssetService")

local Renderer = {}
Renderer.__index = Renderer

local SCALE = 1 / 40 -- SF2 units -> studs (fighter ~280 units = 7 studs)
local BOUNDS = 80 -- studs; fixed mesh bounds so the MeshPart never rescales as the fighter moves
local COLOR = Color3.new(0, 0, 0)

local function makePart(shape: Enum.PartType, parent: Instance): Part
	local p = Instance.new("Part")
	p.Shape = shape
	p.Anchored = true
	p.CanCollide = false
	p.CanQuery = false
	p.CanTouch = false
	p.CastShadow = false
	p.Material = Enum.Material.Neon -- flat, unlit: the game draws fighters as pure black silhouettes
	p.Color = COLOR
	p.TopSurface = Enum.SurfaceType.Smooth
	p.BottomSurface = Enum.SurfaceType.Smooth
	p.Parent = parent
	return p
end

export type Renderer = typeof(setmetatable({} :: {
	fighter: any,
	model: Model,
	caps: { any },
	parts: { BasePart },
	cframes: { CFrame },
	mesh: EditableMesh?,
	meshPart: MeshPart?,
	vertexOf: { [number]: number },
	depth: number,
}, Renderer))

function Renderer.new(fighter: any, parent: Instance, depth: number?): Renderer
	local model = Instance.new("Model")
	model.Name = "SF2_" .. fighter.rig.name
	local self = setmetatable({
		fighter = fighter,
		model = model,
		caps = {},
		parts = {},
		cframes = {},
		mesh = nil,
		meshPart = nil,
		vertexOf = {},
		depth = depth or 0,
	}, Renderer)

	for _, c in fighter.rig.capsules do
		local width = 2 * c[2] * SCALE
		if width > 0 then
			local cyl = makePart(Enum.PartType.Cylinder, model)
			local a = makePart(Enum.PartType.Ball, model)
			local b = makePart(Enum.PartType.Ball, model)
			a.Size = Vector3.new(width, width, width)
			b.Size = a.Size
			table.insert(self.caps, { edge = fighter.rig.edges[c[1]], width = width, m1 = c[3], m2 = c[4], cyl = cyl, a = a, b = b, len = -1 })
			table.insert(self.parts, cyl); table.insert(self.parts, a); table.insert(self.parts, b)
		end
	end

	-- Triangles: one EditableMesh; every triangle added with both windings (SF2 draws them unlit, both sides).
	local tris = fighter.rig.triangles
	if #tris > 0 then
		local em = AssetService:CreateEditableMesh({ FixedSize = false })
		local vertexOf = self.vertexOf
		local function vert(nodeIndex: number): number
			local v = vertexOf[nodeIndex]
			if not v then
				v = em:AddVertex(Vector3.zero)
				vertexOf[nodeIndex] = v
			end
			return v
		end
		for _, t in tris do
			local a, b, c = vert(t[1]), vert(t[2]), vert(t[3])
			em:AddTriangle(a, b, c)
			em:AddTriangle(a, c, b)
		end
		-- Fixed bounds anchors (degenerate triangle) keep the mesh's bounding box constant.
		local lo = em:AddVertex(Vector3.new(-BOUNDS, -BOUNDS, -1))
		local hi = em:AddVertex(Vector3.new(BOUNDS, BOUNDS, 1))
		em:AddTriangle(lo, lo, hi)
		self.mesh = em
		self:_updateMesh()
		local mp = AssetService:CreateMeshPartAsync(Content.fromObject(em))
		mp.Anchored = true
		mp.CanCollide = false
		mp.CanQuery = false
		mp.CanTouch = false
		mp.CastShadow = false
		mp.Material = Enum.Material.Neon
		mp.Color = COLOR
		mp.CFrame = CFrame.new(0, 0, self.depth)
		mp.Parent = model
		self.meshPart = mp
	end

	model.Parent = parent
	self:render()
	return self
end

function Renderer._updateMesh(self: Renderer)
	local em = self.mesh
	if not em then
		return
	end
	local f = self.fighter
	local px, py = f.px, f.py
	for nodeIndex, v in self.vertexOf do
		-- z = 0: SF2 renders orthographically in 2D
		em:SetPosition(v, Vector3.new(px[nodeIndex] * SCALE, py[nodeIndex] * SCALE, 0))
	end
end

function Renderer.render(self: Renderer)
	local f = self.fighter
	local px, py = f.px, f.py
	local z = self.depth
	local cframes = self.cframes
	local n = 0
	for _, c in self.caps do
		local ia, ib = c.edge[1], c.edge[2]
		local ax, ay, bx, by = px[ia], py[ia], px[ib], py[ib]
		local dx, dy = bx - ax, by - ay
		local sx, sy = (ax + dx * c.m1) * SCALE, (ay + dy * c.m1) * SCALE
		local ex, ey = (ax + dx * (1 - c.m2)) * SCALE, (ay + dy * (1 - c.m2)) * SCALE
		local lx, ly = ex - sx, ey - sy
		local len = math.sqrt(lx * lx + ly * ly)
		if math.abs(len - c.len) > 1e-3 then
			c.len = len
			c.cyl.Size = Vector3.new(math.max(len, 0.001), c.width, c.width)
		end
		local angle = math.atan2(ly, lx)
		cframes[n + 1] = CFrame.new((sx + ex) / 2, (sy + ey) / 2, z) * CFrame.Angles(0, 0, angle)
		cframes[n + 2] = CFrame.new(sx, sy, z)
		cframes[n + 3] = CFrame.new(ex, ey, z)
		n += 3
	end
	workspace:BulkMoveTo(self.parts, cframes, Enum.BulkMoveMode.FireCFrameChanged)
	self:_updateMesh()
end

function Renderer.destroy(self: Renderer)
	self.model:Destroy()
	if self.mesh then
		self.mesh:Destroy()
	end
end

Renderer.SCALE = SCALE
return Renderer
