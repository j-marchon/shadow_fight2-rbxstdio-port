# SF2 → Roblox port

Personal project. Uses the original game's data; keep the place private.

## Layout
| Path | What |
|---|---|
| `tools\convert.py` | SF2 data → Luau modules (`out\`): merged fighter rigs, animations (int16 ×8, base64), move table |
| `src\SF2\*.lua` | Runtime (goes to `ReplicatedStorage.SF2`): `Base64`, `AnimClip`, `Fighter`, `Renderer` |
| `src\SF2Viewer.client.lua` | Phase 2 viewer (goes to `StarterPlayerScripts.SF2Viewer`) |
| `tools\receiver.py`, `tools\preview_png.py` | Verification: Studio POSTs pose geometry → PNG preview |
| `out\` | Generated data (do not edit by hand) |
| `preview\` | Verification renders |

## Rebuild and install
```bash
python -I tools/convert.py D:/Tools/work/sf2-data/combat D:/Tools/work/sf2-roblox/out
python -I -m http.server 8765 --bind 127.0.0.1
```
Then in Studio (command bar, or via the MCP): pull `src/…` and `out/…` from `http://127.0.0.1:8765/` into ModuleScripts. The place has **HttpService.HttpEnabled = true** for this local import.

## Faithfulness notes (Phase 2)
- **Tick:** 60 Hz fixed step (Unity `Fixed Timestep` = 1/60; `FightScene.FixedUpdate` → `Fight` tick).
- **Animation rate:** each keyframe lasts `MidFrames + 1` ticks (`ModelAnimation.KCOKKAHCOLG`; MidFrames = 2 for most moves, so 20 keyframes/s).
- **In-betweens:** a uniform quadratic B-spline (`BMBCEECINLK`), with `A = mid(F[c],F[c+1])`, `B = F[c+1]`, `C = mid(F[c+1],F[c+2])`, at `t = k/S`.
- **Slow-motion factor:** n (`Model.HEOILELLFLL`, 1 normally) multiplies the steps and divides gravity by n².
- **Coordinates:** SF2 units with Y up, as stored in the files; 40 units = 1 stud (fighter ≈ 7 studs).
- **Rendering** (port of `CapsuleRender` + `MeshRender`):
  - capsules are strokes from `A+(B−A)·Margin1` to `A+(B−A)·(1−Margin2)`, width `2·Radius1`, with round caps
  - triangles are flat black
  - everything is drawn in the X/Y plane (z = 0), like the original's orthographic 2D
- **Per tick:** animation frame → macro-nodes (Σ LCC·child) → physics → macro-nodes again.
- **Physics** (port of `ModelPhysics` / `ModelNode` / `ModelEdge`, constants from `internalSettings.xml`):
  - Verlet integration with velocity × (1 − Attenuation)
  - Gravitation 0.4 per tick²
  - IterativeProcess 2 passes of mass-weighted edge constraints
  - floor at y = 0 with FrictionForce 0.2
  - only cloth nodes are free while animating (pants panels, headband tails)

## Phase 3: moves engine (`SF2Fight`)
- `tools\compile_moves.py` compiles `moves.xml` for a loadout. It evaluates `<Locks>` against the equipment, giving 121 moves for the default Shadow (fists), and writes `out\MoveSet_Shadow.lua`.
- `src\SF2\KeyBuffer.lua` ports ModelController and KeyData:
  - the taps list keeps the last 2 presses; the held list is every key currently down
  - **matching is containment, not equality** (`KeyData.CENALFGNMKJ` → `OFABBFOGEAK`): the move's taps and holds must each appear in the input, counting duplicates, in any order, and Priority picks the winner. So {Punch, Up} matches both HighPunch and JumpUp, and {Punch, Punch} matches DoublePunch as well as HighPunch.
  - taps clear after more than 14 ticks without a press; the 30-tick reset only clears the held/released lists, never the taps
  - nothing is consumed when a move starts (the only clearing calls are on AI paths)
- `src\SF2\MoveEngine.lua` ports EventTriggers and the move start:
  - events → condition trees → highest Priority wins
  - SetDirection, then **mirror**: if `MirrorNode` (NHeel_1) and its `_2` partner are in the opposite order in the fighter and in the animation's keyframe 2, all `_1`/`_2` node pairs are swapped for that move (`ModelAnimation.NGILHAOFGEA`). Moves like HeavyPunch end on the other foot, and this keeps the stance continuous.
  - Align: the new move's pivot node goes onto **where that same node is now** ("Me Pivot"); using the previous move's pivot node made the body jump by a heel's width
  - start frame: the first `<Transition>` whose conditions pass sets it (`FrameShift` = old move's current keyframe + shift + 1, so HeavyPunch → DoublePunch carries on mid-punch); otherwise FirstFrame. One-keyframe blend-in unless NoInterpolationFrames.
  - Forward/Back: the buffer holds screen directions (Right, Up-Left, ...). Each candidate reads them relative to the facing it *would* have after its SetDirection (`InfoAnimation.BAHFNIPBBHD`), which for most moves means "Forward = towards the opponent". Holding Right past the opponent therefore turns StepForward into StepBack and keeps moving right.
  - AnimationEnd fires after the last keyframe segment
- Controls: A/D move (relative to facing), W up, S down, J/Z punch, K/X kick.
  - Keyboard → stick adapter (in `SF2Fight`): a lone direction waits 3 ticks (50 ms) in case a second key turns it into a diagonal
  - letting go of one key of a diagonal slides to the remaining direction without a new tap
  - a button press flushes a waiting direction first, so Up + Punch reads as UpperCut
- `tools\jumptest.luau`: Studio harness that plays scripted inputs and reports the moves chosen and any body-centre jumps.

## Phase 4 (in progress): strikes, blocks, reactions (`src\SF2\Combat.lua`)
Ported from `Model.DJIFEKKEMGN` → `ModelCollision` → `Model.HKFEABKNICO`:
- **Hit test.** The attacker's current Attack interval tests each `AttackingParts` edge against every `Collisible` edge of the target. The skeleton has 13: head, neck, torso and legs, with radii 4–16. Each edge is a segment trimmed by Margin1/Margin2. The test is `PKHLGDMJPMF.MAINPDNFMCC` ported as-is: signed point-to-line distances against r1 + r2. One distance is not abs'd in the original (`JPEDFFKLLFC`, checked in the ARM64 code), so it catches every true touch plus some near-misses on one side of each edge. The first touching target edge in model order wins (EHead first).
- **Mirrored moves strike with the other limb.** When a move plays mirrored, the original swaps the trailing `_1`/`_2` of each AttackingParts name (`ModelAnimation.IBIGMDGJOAL`). Fixed 2026-10-20: the port tested the unmirrored limb (e.g. the guard hand), so attacks after a foot switch often whiffed.
- **One landing per tick.** Both fighters strike each tick, alternating who goes first (`Fight.PGOBKICCDAG`, tick counter `PKDBOMAHGHC`). If the first lands, the second's touching attack is used up with no effect. No strikes while in physics mode.
- **Knockback lever.** The contact point from the hit test sets the impulse split: distance from the edge's first node over the edge length, capped at 1 (`CPGONFFGAHM.HKFEABKNICO`).
- **Once per interval.** An Attack interval can land only once.
- **Invulnerable.** An Invulnerable interval on the target cancels the hit unless the attack has `IgnoresInvulnerable`.
- **Block.** Blocked means the target is inside a Block interval. Idle and steps are Block intervals, which is SF2's passive block.
- **Reactions.** The target gets a Hit event named after the interval's first `<Hit Name>`. Reaction moves (HighHit, MiddleBlock, SweepBlock, ...) subscribe to it, and Priority picks one: block reactions are 520 and need a Block interval, hits are 500. The attacker gets a Strike event.
- **Facing.** `SetDirection <Impulse Reverse="1"/>` turns the reacting fighter against the impulse, i.e. towards the attacker.
- **Critical hits** (ConditionHit "Critical" → HighHitFall/MiddleHitFall/...): only unblocked hits roll, at 0.0001 × CriticalChance (starting attribute 1000 = 10%).
- **Shock** (`Model.LMGIFKHIHJD`; ConditionHit "Shock" → the same HitFall moves as crits). It is a flag separate from Critical. With r = damage / DamageConverter (1 outside raids), Shock happens on any of:
  - an unblocked **head hit** (target edge BodyPart "Head": EHead, ENeck), with chance 0.0001 × ShockHeadHitChance (2500) × r. A 0.12 kick gives 3%. The HUD shows these hits as "HEAD HIT", like the game's banner.
  - a crit, with chance 0.0001 × ShockCriticalHitChance (starting value 0) × r.
  - accumulated damage past `<Shock><Treshold Value="999"/>`, which only perks reach. Not ported.
  - The Shock state's other effects (`FrameReduction`, `LooseningDelay`, `Impulse`) are not ported.
  - Head hits will also hurt more once the damage curve exists (HeadDefense starts at 0, BodyDefense at 5).
- **Damage** (`Model.NACPMGNAODH`) = interval Damage × 2^(0.0001 × CriticalDamage) on a crit (≈1.5×) × 2^(0.0001 × BlockDamageFactor) when blocked (≈0.2×). Attributes are `CharacterProgress.xml` `<StartingAttributes>`. The attack-vs-defense curve from items and levels (`GameUtils.NADKBDJLFIL`) is taken as 1, i.e. evenly matched fighters, until equipment/progression is ported.
- **Ragdoll.** `Physics="1"` moves have no animation file.
  - PhysicalFall triggers on a hit with health ≤ 0, or during an Unstable interval outside a Block interval.
  - PhysicalGroundHit, PhysicalLying, then Standup or StandupBack follow through EveryFrame events, gated by COM height and movement (`Frame="Previous"`) and by PhysicsFrameNumber.
  - The COM is recomputed once per tick after physics, and conditions run before physics (`Model.BDHAMOEKNNK`). So the conditions compare last tick's COM with the one from the tick before, i.e. the body's real motion. Lying needs |ΔY| ≤ 1 and Standup needs |ΔX| ≤ 3 per tick, so a sliding body stays down until it stops. Measured from first ground contact to Standup: 9–60 ticks, depending on how hard the body slides. The video shows ~0.2–0.3 s for light knockdowns.
  - In physics mode every non-fixed node is simulated and Collisible nodes hit the floor.
  - The hit impulse is split between the hit edge's two nodes by contact position, divided by mass, and added to the position (`CPGONFFGAHM.HKFEABKNICO`).
  - Animated nodes keep their previous pose as the Verlet old position, so a ragdoll inherits the motion it had.
- **Port deviations in ragdoll:** skeleton↔macro-node edges are skipped (they feed back and explode), and there is one extra floor clamp after the solver.
- **Sparring only:** a knocked-out fighter is refilled to full health once standing (rounds come in Phase 6).
- **Sparring dummy** in `SF2Fight`: keys 1 = stand, 2 = punch, 3 = kick, 4 = sweep, 5 = rush.
- `tools\convert.py` now exports `edgeInfo` per edge (Collisible, Radius, Margins, BodyPart).
- **No body-vs-body push**, as in the original: no code was found for it (tick, physics, moves, strings), and the phone confirms you walk through the opponent. Point-blank heavy attacks can pass through the target before their attack window opens.

## Weapons (the whole arsenal)
- **Every weapon item in `list.xml` that has a model: 218** (Fists included). Items without a model (`WEAPON_UNKNOWN`, blaster bullets, `SkeletonTonfa`, `SkeletonCircularSaw`) are internal and left out.
- **Build:** `python -I tools/build_arsenal.py <combat> out <decrypted\bundles\localizations\eng>` writes:
  - `out\Arsenal.lua`: the catalog. Groups come from `PackLabel`: no label = Act 1 shop (`ZONE_1` = starter Tonfa), `ZONE_2`..`ZONE_6`/`ZONE_6_1` = Acts 2-6, `ZONE_IM` = Interlude (Immortals), `ZONE_7`/`_7_2`/`_7_3` = Act 7, `ZONE_RAID` (+ the raid starter sabers) = Underworld, `FUNGUS_SET`/`VOLCANO_SET`/`KARCER_SET` = Raid Sets, `WEEKLY_OFFER_*`/`GIFT_*` = Offers, any other label (CLANS = seasonal and battle pass, `EVENT_*`, festivals) = Events, and unlabelled `ShopHide` items = Enemies (enemy-only weapons such as the Titan's sword and the Hunger's scythe). Names come from the English localization (`<Word Title>`); 24 enemy items have none and get their ID title-cased.
  - `out\WeaponRigs\<model>.lua`: only the weapon model's nodes/edges/figures, with indices already absolute in base + weapon. The build asserts the base part of every merged rig equals `Rigs.Shadow` exactly, so `SF2.Arsenal.rig` just appends the part to the base rig at runtime.
  - `out\MoveLib\<n>.lua`: every move that has an animation (1,081), each with its `<Locks>` as a tree. `SF2.Arsenal.moveSet` filters them for a loadout with the same rules as `compile_moves.locks_pass`; the Fists result equals `MoveSet_Shadow`.
  - every animation the library uses into `out\Anims`.
- **Studio's Source limit:** a Source must be under 200,000 characters. Modules over 180 KB are split: the move library by size, and a big rig into `<model>.<field>.<n>` siblings that `<model>` joins back.
- **Rigs:** most weapon geometry is MacroNodes over the skeleton's animated `Weapon-Node1..4_1/_2` (slots 20-27), so the animations carry it. Weapon models often give edge ends as `Node1`/`Node2` instead of `End1`/`End2`, and some write `collisible` in lower case; both are read. Masses are written with 6 significant digits; tassel nodes go down to 1e-6, which 5-decimal rounding turned into 0.
- **Weapon animation slots:** a weapon's own animations can have more than the skeleton's 67 slots: nunchaku 75, composite scythe 75, kusarigama 78, composite sword 112, power fists 209. Slot 67+k is the weapon model's k-th node in document order (the game merges the weapon right after the skeleton; the port appends it after body and head, so `rig.weaponStart` marks where it begins). While such a clip plays, `Fighter.setDriven` takes those nodes out of physics and macro updates. When a plain 67-slot move starts (kicks, the shared StanceIdle), they go back to cloth or macros, keeping their last motion as Verlet velocity. Blending and `_1`/`_2` mirroring cover the extra slots too. Without this, chains and the nunchaku's free stick were plain cloth all the time, and composite blades never unfolded.
- **Edge constraint (ModelEdge.DOCFNLBLJFO, exact):** both ends scale by rest/dist about their mass-weighted centre, and only active ends move. An inactive end (animated, driven or macro) still weighs its own mass, so a light macro holds a free node only weakly. The port used to treat inactive ends as infinitely heavy. That pinned the nunchaku stick to a stale macro of its own nodes, and it needed a special case for the Striking Falcon's zero-mass tip macro, which in the game simply has no effect.
- **Floor:** ModelPhysics.MPLGBEILHIP floors every active edge end, since IIHMOINCCLH has no Collisible test, in both normal and ragdoll mode. Chains, sticks and ribbons rest on the ground instead of sinking through it.
- **Moves:** a weapon's `<Locks>` swap the Punch moves for its own (slashes, plus often its own idle, steps and transition); kicks are shared. `MoveEngine.spawn` starts in a weapon's own `IdleStance` move when it has one; in the game the round intro leads there (Phase 6).
- **Menu** (in `SF2Fight`): the "Weapons [+]" button top right shows or hides it. Tabs pick the group; below are a YOU and a DUMMY column that scroll. A button rebuilds that fighter with the weapon, where it stands. Buttons are named `me_<item>` / `enemy_<item>` for automation.
- **Test (headless, all 218):** each weapon idles, then taps Punch with no direction and with Right, Left, Down, Up, Up-Right and Down-Right against a Fists dummy. Every weapon stays finite, starts its own moves and lands hits; free weapon nodes stay at the floor; animated weapon nodes (composite, power fists) keep their edge lengths. Rendered checks (`preview/chains2.png`, via receiver.py + preview_png.py): the nunchaku swings its free stick, the kusarigama throws and recalls the sickle on its chain, and the composite sword unfolds into its whip.
- **Known gaps:** the super slash of the guns and bows (Tonfa Guns, Rifle, Musket, both Glaivebows) fires a projectile, and projectiles aren't ported yet; their melee moves work. Light tassels and ribbons hung on even lighter macros (Moon Sabers, Dynasty Sword, Super Fans, Wanderer Staff…) can stretch for a moment in fast moves. That follows from the game's own constraint and masses, but it hasn't been compared against the phone. The Fire Batons' 4 loose nodes have no edges, so they fall forever; nothing draws them.
- WeaponDamage (list.xml) only feeds the attack-vs-defense curve, which is still taken as 1, so weapons currently hit with their moves' own Damage values.

**Not yet (Phase 4+):**
- the attack-vs-defense damage curve (needs items/levels), Shock's threshold and state effects, perks and mods
- throws, wall hits (CanWallHit), Loss/round end (RoundResult, RoundStage EndStance)
- Velocity/Rotation, Transitions with FrameShift
- RoundResult/Health conditions, sounds and effects

## Viewer controls (Play in Studio; `SF2Viewer` is disabled now, re-enable it to browse animations)
- Right / Left: next / previous move (36 fists moves)
- Space: pause; F: single step; R: restart
- Up / Down: playback speed

## Not yet faithful (later phases)
- Facing/mirroring, `Align`/root placement, and blending between moves (`FirstFrame`/`MidFrames`). The viewer just centers each move on NPivot.
- Collision against the opponent, ragdoll, the moves state machine, AI.
- Location backgrounds and effects.
