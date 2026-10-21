--!strict
-- A warrior standing in a menu scene (dojo, shop, profile): its model in the peaceful stance. The round stage
-- is PeacefulStart, so moves.xml picks the stance the game shows outside fights (ShopPeacefulStart labels).

local RunService = game:GetService("RunService")
local Fighter = require(script.Parent.Fighter)
local MoveEngine = require(script.Parent.MoveEngine)
local Renderer = require(script.Parent.Renderer)
local Warrior = require(script.Parent.Warrior)

local Showcase = {}

function Showcase.new(def: any, parent: Instance, x: number, facing: number): any
	local b = Warrior.build(def)
	local f = Fighter.new(b.rig)
	local e = MoveEngine.new(f, b.moves, b.loadout, 1)
	e.stage = "PeacefulStart"
	e.attributes = b.attributes
	e:spawn(x, facing)
	local r = Renderer.new(f, parent, 0)
	local self = { engine = e, renderer = r, build = b }
	local acc = 0
	self.conn = RunService.PreSimulation:Connect(function(dt)
		acc += math.min(dt, 0.25)
		while acc >= 1 / 60 do
			acc -= 1 / 60
			e:tick()
		end
		r:render()
	end)
	function self.destroy()
		self.conn:Disconnect()
		r:destroy()
	end
	return self
end

return Showcase
