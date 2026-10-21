--!strict
-- Strikes between two fighters (port of Model.DJIFEKKEMGN -> ModelCollision -> Model.HKFEABKNICO):
--  * the attacker's current Attack interval (IntervalAttack) tests each of its AttackingParts edges
--    against every Collisible edge of the target (ModelCollision.BLDENPCGPNH)
--  * edges are segments trimmed by Margin1/Margin2 (ModelEdge.HKNNNPGADIJ) with their Radius; the test
--    is 2D (x/y) PKHLGDMJPMF.MAINPDNFMCC, ported as-is: signed line distances against r1 + r2, which
--    is a little more generous than a true segment distance on one side of each edge
--  * the first touching target edge in model order wins (EHead is first, so head beats chest)
--  * a mirrored move strikes with its _1/_2-swapped AttackingParts (ModelAnimation.IBIGMDGJOAL)
--  * an interval lands at most once (ModelCollision keeps the interval it hit with)
--  * both fighters strike each tick, alternating who goes first; only one can land per tick
--    (Combat.exchange, Fight.PGOBKICCDAG)
--  * target in an Invulnerable interval -> no hit, unless the attack has IgnoresInvulnerable
--  * blocked = target inside a Block interval (Model.LPGGKBBGIBK), unless IgnoresBlock
--  * the target gets a Hit event named by the interval's first <Hit Name> (Model.MMKPNCNBAJJ);
--    reaction moves (MiddleHit, MiddleBlock, ...) subscribe to it and Priority picks one
--  * the attacker gets a Strike event
--  * Critical (ConditionHit "Critical" -> HitFall moves): unblocked hits roll the attacker's crit chance,
--    0.0001 x CriticalChance (internalSettings <CriticalHit><Probability Base="0.0001" .../>)
--  * damage (Model.NACPMGNAODH): interval Damage x attack curve x 2^(0.0001 x DamageFactor) x crit factor
--    2^(0.0001 x CriticalDamage) x block factor 2^(0.0001 x BlockDamageFactor).
--    Attack curve (GameUtils.NADKBDJLFIL -> CGOAEEIACCA): for each <Damage Type Shift> of the interval,
--    x = attacker[Type] + Shift - target[defense]; the best x counts; factor 2^(x / DamageDoublingRange 10).
--    defense = the interval's <Defense Type>, else HeadDefense on a head hit, else BodyDefense (internalSettings
--    <BlockDefense Attribute="BodyDefense"/>). Port gap: the enchantment-aspect blend of CGOAEEIACCA is left out.
--  * Shock (Model.LMGIFKHIHJD, ConditionHit Type="Shock" -> HitFall moves), with r = damage / DamageConverter
--    (the attacker's, 1 outside raids):
--      - a head hit (target edge BodyPart "Head", EHead/ENeck) that is not blocked: 0.0001 x ShockHeadHitChance x r
--        (starting attribute 2500, so a 0.12 kick has a 3% chance)
--      - a critical hit: 0.0001 x ShockCriticalHitChance x r (starting attribute 0)
--      - damage accumulated past <Shock><Treshold Value="999"/>: perks only, not ported
--  * perks (SF2.Perks) see each hit at three stages: HitPreCrit (before the crit roll, so SetHit Block
--    still changes the block factor), HitPostCrit (damage known: SetHit Critical / Shock / Damage and
--    ChangeImpulse apply), PostHit (after the health is taken off)
--  * Critical and Shock are separate flags on the hit (ConditionHit checks each on its own)
--  * the hit edge and contact fraction are kept for the ragdoll impulse (Fighter.applyImpulse)

local Combat = {}

-- CharacterProgress.xml <StartingAttributes> (the player's level-1 values)
Combat.ATTRIBUTES = {
	CriticalChance = 1000, CriticalDamage = 5850, BlockDamageFactor = -23219,
	ShockCriticalHitChance = 0, ShockHeadHitChance = 2500,
}
local ATTRIBUTE_BASE = 0.0001
local DAMAGE_DOUBLING = 10 -- internalSettings <DamageDoublingRange Value="10"/>

-- Rule DamageFactor Animation=<label>: the attacker's moves with that label deal Factor x damage
function Combat.labelFactor(att: any): number
	local root = att.root and att:root() or att
	local rule = root.rule
	local f = 1
	if rule and rule.damageFactor and att.move then
		for label, k in rule.damageFactor do
			if att.move.name == label or att.move.labelSet[label] then f *= k end
		end
	end
	return f
end

-- The attack curve for interval iv from attacker attributes attr onto target attributes tattr
function Combat.attackFactor(iv: any, attr: any, tattr: any, head: boolean): number
	local types = iv.damageTypes
	if not types or #types == 0 then return 1 end
	local best = -math.huge
	for _, d in types do
		local v = (attr[d[1]] or 0) + d[2]
		if v > best then best = v end
	end
	local defense = (iv.defenseTypes and iv.defenseTypes[1]) or (head and "HeadDefense" or "BodyDefense")
	best -= (tattr[defense] or 0)
	return 2 ^ (best / DAMAGE_DOUBLING)
end
Combat.random = Random.new()

-- The fight's perk set (SF2.Perks), if this engine belongs to a fight. A child (projectile, summon)
-- reaches it through its root; a lone engine in a test has neither a fight nor perks.
local function perksOf(e: any): any
	local fight = e.fight or (e.root and e:root().fight)
	return fight and fight.perks
end

local function edgeTables(rig: any)
	if rig._combat then return rig._combat end
	local byName, collisible = {}, {}
	for i, info in rig.edgeInfo do
		byName[info.name] = i
		if info.col then table.insert(collisible, i) end
	end
	rig._combat = { byName = byName, collisible = collisible }
	return rig._combat
end

-- Margin-trimmed segment of edge i (x/y only)
local function segment(f: any, i: number): (number, number, number, number, number)
	local e, info = f.rig.edges[i], f.rig.edgeInfo[i]
	local ax, ay, bx, by = f.px[e[1]], f.py[e[1]], f.px[e[2]], f.py[e[2]]
	local dx, dy = bx - ax, by - ay
	local m1, m2 = info.m1, 1 - info.m2
	return ax + dx * m1, ay + dy * m1, ax + dx * m2, ay + dy * m2, info.r
end

-- Normalised line through F->K (PKHLGDMJPMF.PHJLLEGNFPK): a*x + b*y + c is a signed distance.
-- Points are in the file's Y-down frame so the sign of the distance matches the original.
local function line(fx: number, fy: number, kx: number, ky: number): (number, number, number)
	local len = math.sqrt((fx - kx) ^ 2 + (fy - ky) ^ 2)
	if len < 1e-9 then return 0, 0, math.huge end -- zero-length edge: never near anything
	local a, b = (fy - ky) / len, (kx - fx) / len
	return a, b, -(a * fx + fy * b)
end

-- ModelCollision.JPEDFFKLLFC: point E at signed distance d from line (a, b) of segment CD.
-- Its foot inside CD's bounding box, or E within R of an end, is contact. d is NOT abs'd in the
-- original (a point far on the negative side still passes this step); returns the foot.
local function pointNear(d, R, a, b, ex, ey, cx, cy, dx, dy): (boolean, number, number)
	if R <= d then return false, 0, 0 end
	local fx, fy = ex - a * d, ey - b * d
	local inX = (cx <= fx and fx <= dx) or (dx <= fx and fx <= cx)
	local inY = (cy <= fy and fy <= dy) or (dy <= fy and fy <= cy)
	if inX and inY then return true, fx, fy end
	local R2 = R * R
	if (ex - cx) ^ 2 + (ey - cy) ^ 2 <= R2 or (ex - dx) ^ 2 + (ey - dy) ^ 2 <= R2 then return true, fx, fy end
	return false, 0, 0
end

-- PKHLGDMJPMF.MAINPDNFMCC: capsule PQ (attacker) vs capsule AB (target), R = r1 + r2.
-- Returns whether they touch and the contact point on the target side (ModelCollision's 2nd point).
local function capsules(px, py, qx, qy, ax, ay, bx, by, R): (boolean, number, number)
	local la, lb, lc = line(ax, ay, bx, by)
	local dP, dQ = lc + la * px + lb * py, lc + la * qx + lb * qy
	if R < math.abs(dQ) and R < math.abs(dP) and dP * dQ >= 0 then return false, 0, 0 end
	local ma, mb, mc = line(px, py, qx, qy)
	local dA, dB = mc + ma * ax + mb * ay, mc + ma * bx + mb * by
	if R < math.abs(dB) and R < math.abs(dA) and dA * dB >= 0 then return false, 0, 0 end
	if dP * dQ >= 0 or dA * dB >= 0 then
		local ok, fx, fy = pointNear(dP, R, la, lb, px, py, ax, ay, bx, by)
		if ok then return true, fx, fy end
		ok, fx, fy = pointNear(dQ, R, la, lb, qx, qy, ax, ay, bx, by)
		if ok then return true, fx, fy end
		if pointNear(dA, R, ma, mb, ax, ay, px, py, qx, qy) then return true, ax, ay end
		if pointNear(dB, R, ma, mb, bx, by, px, py, qx, qy) then return true, bx, by end
		return false, 0, 0
	end
	-- the segments cross: contact at the crossing on AB
	local t = dA / (dA - dB)
	return true, ax + (bx - ax) * t, ay + (by - ay) * t
end

-- An AttackingParts name as it applies to this fighter: a mirrored move strikes with the other
-- limb (ModelAnimation.IBIGMDGJOAL swaps a trailing "_1"/"_2" when the move is mirrored)
local function mirrorName(name: string): string
	local stem, side = string.match(name, "^(.*_)([12])$")
	if not stem then return name end
	return stem .. (side == "1" and "2" or "1")
end

-- The attacker's Attack interval active on its current keyframe, if any
function Combat.currentAttack(e: any): any
	local m = e.move
	if not m then return nil end
	for _, iv in m.intervals do
		if iv.type == "Attack" and e.c >= iv.start and e.c <= iv.stop then
			return iv
		end
	end
	return nil
end

-- One strike check from att onto tgt (MoveEngines). Returns the hit record or nil.
-- suppressed (Model.DJIFEKKEMGN's JGBNEAKJCIO): the other fighter already landed this tick, so a
-- touching attack is used up without effect.
function Combat.strike(att: any, tgt: any, suppressed: boolean?): any
	local iv = Combat.currentAttack(att)
	if not iv or att.landed[iv] or not iv.parts then return nil end
	if att.fighter.ragdoll then return nil end -- Model.DMCLJEHHEFE: no strikes in physics mode
	if not iv.ignoresInvulnerable and tgt:inInterval("Invulnerable") then return nil end
	local af, tf = att.fighter, tgt.fighter
	local aT, tT = edgeTables(af.rig), edgeTables(tf.rig)
	for _, partName in iv.parts do
		local ai = aT.byName[att.remap and mirrorName(partName) or partName]
		if ai then
			-- the original works in Y-down: negate y so the signed distances keep their sign
			local ax, ay, bx, by, ar = segment(af, ai)
			ay, by = -ay, -by
			for _, ti in tT.collisible do
				local cx, cy, dx, dy, tr = segment(tf, ti)
				local touch, hx, hy = capsules(ax, ay, bx, by, cx, -cy, dx, -dy, ar + tr)
				if touch then
					att.landed[iv] = true
					if suppressed then return "suppressed" end
					local attr = att.attributes or Combat.ATTRIBUTES
					local tattr = tgt.attributes or Combat.ATTRIBUTES
					local head = tf.rig.edgeInfo[ti].part == "Head"
					local weapon = false
					for _, d in iv.damageTypes or {} do
						if d[1] == "WeaponDamage" then weapon = true end
					end
					-- impulse lever (CPGONFFGAHM.HKFEABKNICO): distance from the edge's first node to the
					-- contact point over the edge length, capped at 1
					hy = -hy
					local te = tf.rig.edges[ti]
					local n1x, n1y = tf.px[te[1]], tf.py[te[1]]
					local elen = math.sqrt((tf.px[te[2]] - n1x) ^ 2 + (tf.py[te[2]] - n1y) ^ 2)
					local cd = math.sqrt((hx - n1x) ^ 2 + (hy - n1y) ^ 2)
					local et = (elen > 1e-9 and cd <= elen) and cd / elen or 1
					-- The hit record is filled in as the perk stages (SF2.Perks) run over it: HitPreCrit
					-- before the crit roll, HitPostCrit once the damage is known, PostHit after it lands.
					-- A perk's SetHit leaves blocked / forceCritical / forceShock / setDamage on the record
					-- and ChangeImpulse leaves impulseMulX / impulseMulY; each is consumed here.
					local perks = perksOf(att)
					local hit: any = {
						name = iv.hits[1] or "Middle",
						type = "",
						critical = false, shock = false, head = head,
						blocked = (not iv.ignoresBlock) and tgt:inInterval("Block"),
						damage = 0, baseDamage = 0,
						-- file Y points down; this port uses Y up
						impulseX = iv.impulse[1] * att.facing,
						impulseY = -iv.impulse[2],
						edgeIndex = ti, edgeT = et,
						edge = tf.rig.edgeInfo[ti].name,
						part = tf.rig.edgeInfo[ti].part,
						attacker = att,
						interval = iv,
						weapon = weapon,
						x = hx, y = hy,
					}
					if perks then perks:onHit("HitPreCrit", att, tgt, hit) end
					local blocked = hit.blocked
					local damage = iv.damage * Combat.attackFactor(iv, attr, tattr, head)
						* 2 ^ (ATTRIBUTE_BASE * (attr.DamageFactor or 0)) * Combat.labelFactor(att)
					hit.baseDamage = damage
					local critical = not blocked and not iv.noCritical
						and Combat.random:NextNumber() < ATTRIBUTE_BASE * (attr.CriticalChance or 0)
					if hit.forceCritical ~= nil then critical, hit.forceCritical = hit.forceCritical, nil end
					if critical then damage *= 2 ^ (ATTRIBUTE_BASE * (attr.CriticalDamage or 0)) end
					if blocked then damage *= 2 ^ (ATTRIBUTE_BASE * (tattr.BlockDamageFactor or 0)) end
					if hit.setDamage then damage, hit.setDamage = hit.setDamage, nil end
					local r = damage / (att.damageConverter or 1)
					local shock = (critical
							and Combat.random:NextNumber() < ATTRIBUTE_BASE * (attr.ShockCriticalHitChance or 0) * r)
						or (head and not blocked
							and Combat.random:NextNumber() < ATTRIBUTE_BASE * (attr.ShockHeadHitChance or 0) * r)
					hit.critical, hit.shock, hit.damage = critical, shock, damage
					if perks then
						perks:onHit("HitPostCrit", att, tgt, hit)
						if hit.setDamage then hit.damage, hit.setDamage = hit.setDamage, nil end
						if hit.forceCritical ~= nil then hit.critical, hit.forceCritical = hit.forceCritical, nil end
						if hit.forceShock ~= nil then hit.shock, hit.forceShock = hit.forceShock, nil end
						critical, shock = hit.critical, hit.shock
					end
					hit.type = (critical and "Critical" or "") .. ((critical and shock) and " " or "") .. (shock and "Shock" or "")
					hit.impulseX *= hit.impulseMulX or 1
					hit.impulseY *= hit.impulseMulY or 1
					if not tgt.immortal then tgt.health = math.max(0, tgt.health - hit.damage) end
					tgt.lastHit = hit
					if perks then perks:onHit("PostHit", att, tgt, hit) end
					tgt:fire("Hit", hit.name)
					att:fire("Strike", "")
					return hit
				end
			end
		end
	end
	return nil
end

-- Fight.PGOBKICCDAG: both fighters strike once per tick, in an order that alternates every tick
-- (Fight.PKDBOMAHGHC counts ticks). If the first one lands, the second one's touching attack is
-- spent without effect, so two attacks never both land on the same tick.
function Combat.exchange(a: any, b: any, tick: number)
	if tick % 2 == 1 then a, b = b, a end
	local first = Combat.strike(a, b)
	Combat.strike(b, a, first ~= nil)
end

return Combat
