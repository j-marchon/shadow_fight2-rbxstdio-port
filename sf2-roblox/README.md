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
python -I tools/convert.py D:/SF2-Port/sf2-data/combat D:/SF2-Port/sf2-roblox/out
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
  - **Conditions ask about the right model.** `ModExists`, `Player` and `Name` carry a `Player` attribute in the data, which the compiler dropped and the engine ignored, so all three were evaluated against *me*. Fixed: `cond()` emits `player=` for them and `MoveEngine.check` resolves it through `who()`, like the other conditions already did. In the data that is 36 `ModExists Player="Enemy"` (CurseBomb, MOD_TITAN, ShieldNoDamage, ThrowFallBlock, WhirlEffectPhysicalFall), one on `Parent`, 8 `Name` and 4 `Player` — the last twelve all inside the throws, where a wrong answer happened to be absorbed by a `Not="1"` wrapper. It now matters more, since perk mods go in the same table. Rerun `tools\build_arsenal.py` after changing `cond()`: it owns `out\MoveLib`, and `MoveSet_Shadow.lua` is no longer used.
  - `ModExists` also reads the **root** fighter's mods now, not the asking engine's own. Mods live on a fighter (rules, stuns, perks all set them there), so a child's own table was always empty and every `ModExists` inside a missile or summon answered false.
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
  - The Shock state's other effects from `internalSettings` `<Shock>` are **not ported**: `FrameReduction 0.001`, `LooseningDelay Frames="12"`, `Impulse Y="-0.5"`, and the pair `<Weapon Name="Fists"/>` + `<SetAttribute Name="WeaponDamage" Value="0"/>`, which reads as a shocked fighter losing their weapon (fists, no weapon damage) while the state lasts. Which field holds the state was not traced out of `Model.LMGIFKHIHJD`'s caller, so this is a reading of the data, not of the code.
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
- **Throws.** Also data-driven, and no engine work was needed beyond the condition-target fix above. The thrower's move (`ThrowForward` / `ThrowThroughTheBack` / `ThrowSuplex`, each with a `V`/`Profile` variant, priority 220) needs Punch tapped with Forward or Back held, the enemy within 100 on X, the enemy inside a `Throwable` interval (every hit reaction opens one once its recoil is over), and no `NoThrows` / `ThrowBlock` / `ThrowFallBlock` mod. It then throws by acting on the victim: `<PlayAnimation Player="Enemy" Animation="ThrowForwardV" Frame="2"/>`. The victim's move (`ThrowForwardV`, priority 550, label `ThrowFall`) has empty `<Events/>` and `<Conditions/>` on purpose — nothing selects it, the thrower starts it — and it aligns its animation origin onto the thrower's, taking its facing from the enemy's back wall towards the enemy's front wall. `StandupAfterThrowFall` follows, `LossThrowForward` / `LossThrowBack` are the end-stance variants, and the Attack interval at frame 26 carries the 0.35 UnarmedDamage. The AI never throws (`ThrowTactics` is not ported), so only the player does. **Unverified:** believed complete from a static read of the chain against the engine; no throw has been performed in Studio.
- **Wall hits.** `WallHit` (priority 505) and `WallHitFall` (515) are ordinary data-driven moves, not engine code: each is an `EveryFrame` move whose conditions are a `CanWallHit` / `CanWallHitFall` interval on the reaction the victim is playing (17 moves of a knife fighter's set carry one, from 6 frames on ElectrocutionHit and the HitFalls to 29 on HighHitLong), the right `CurrentAnimation` label (`Recoil` / `Fall`), and a `Distance` from `Object="Wall" Part="Back"` to NNeck (≤ 20) or NPivot (≤ 35). They align their animation origin to the back wall + 480, carry `NoWallRepulsion="1"`, and play `snd_wall3`. The wall anchors, the intervals and the align were already generic, so what was missing was only that nothing stopped a fighter at the wall:
  - **Wall repulsion** (`MoveEngine.repulseWall`, new): each tick an animated model whose move lacks `NoWallRepulsion` is translated back inside the arena by however far its pivot passed a wall. Children are exempt, so `DeleteOnWall` missiles still leave. **Approximated:** the original carries `WallRepulsion` / `NoWallRepulsion` / `AlignOnParentWallCollision` per move and pushes with the collision code; here only the pivot is bounded, so a weapon or a limb can still cross the wall line. Ragdoll nodes were already clamped in `Fighter._floor`.
  - **Verified in Studio.** Pinning two knife fighters against the left wall and having both attack: 10 unblocked hits, 8 ticks inside a wall-hit window, and `WallHit` played for 20 ticks. The pivot range stayed inside the arena (−680 at the wall, never past it) over 600 ticks, so repulsion holds. Worth knowing when testing by hand: an **idle fighter blocks**, idle being a Block interval, and block reactions carry no `CanWallHit` — a victim standing still at a wall will never wall-hit, which is also true of the real game. `WallHitFall` has not been seen yet; its window is only 6–8 frames.

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

**Was "not yet" when this section was written, and has since been done** (kept so the list isn't read as current): the attack-vs-defense damage curve, perks and mods, throws, wall hits, Loss and round end (RoundResult, EndStance), Velocity, Transitions with FrameShift, the RoundResult/Health conditions, sounds and effects.

**Still open in combat:**
- Shock's threshold and state effects (see the Shock bullets above); the attack curve leaves out the enchantment-aspect blend of `CGOAEEIACCA`
- **Missiles and projectiles: structurally complete, runtime unproven.** Audited 2026-10-21 and nothing is missing from the pipeline, contrary to the earlier note here. A projectile is a child model, not special engine code: `<CreatePlayer Name="RifleShot" Frame="17"><Item Type="Skeleton" Name="SkeletonMissile"/>…` spawns a model whose own loadout (`Moves.forLoadout`, cached per loadout key in `childBuild`) selects its moves out of `MoveLib` by their `<Locks>`. 51 moves are locked to `SkeletonMissile`, and the flight is a chain among them: `…Start` on `Birth`, `…Middle` on `AnimationEnd`, `…Wall` and `…PlayerHit` on `EveryFrame` conditions. All 51 are present in `out\MoveLib` with their animations; `Fight.tick` strikes with every child against the opposing root and deletes children that leave the arena or hit a `DeleteOnWall` wall. What has **not** been shown is a projectile actually spawning, flying and landing in a fight — that needs a headless child-spawn test (the rifle and glaivebow supers are the way in).
- 19 moves in `moves.xml` name an animation that is not in the extracted data, so the port drops them: 16 are the GiantSword set (raid/event content whose animations ship in a pack that was never extracted), `EarthStrikeStart` / `EarthStrikeMiddle` are a magic projectile chain in the same position, and `RootPotionStart` is marked `PackName="_UNUSED_"` by the game itself. Re-extracting those packs would be the way to fill them.
- perk visuals (the "Not ported" list in `Perks.lua`) and the AI's BeginnerCheat, dodge lists, ThrowTactics and BossAbility

## Viewer controls (Play in Studio; `SF2Viewer` is disabled now, re-enable it to browse animations)
- Right / Left: next / previous move (36 fists moves)
- Space: pause; F: single step; R: restart
- Up / Down: playback speed

## Not yet faithful (later phases)
- Facing/mirroring, `Align`/root placement, and blending between moves (`FirstFrame`/`MidFrames`). The viewer just centers each move on NPivot.
- Collision against the opponent, ragdoll, the moves state machine, AI.
- Location backgrounds and effects.

## AI
Port of the computer opponent: `ModelAi` + `Tactic` / `TacticFactors` / `AiData` and the tactic tables.

**Build:** `python -I tools/build_tactics.py D:/SF2-Port/sf2-data/combat out` parses all 138 archives in `combat\tactics` (every pool count and EOF assert of the loader is checked) and writes `out\Tactics\<archive>.lua` (packed JSON, ~8.6 MB in total, big archives split into `.1`/`.2` parts) plus `out\Tactics\Settings.lua` (tacticSettings.xml with templates resolved, the ComputerSettings.xml lists, and an index of every archive's entries). Install as `ReplicatedStorage.SF2.Data.Tactics.<name>`, and `src\SF2\AI.lua` as `ReplicatedStorage.SF2.AI`.

**API:**
```lua
local AI = require(SF2.AI)
local ctl, ai = AI.new(fight, 2, "Standard", { seed = 1, debug = false })  -- tactic: stages.xml Warrior Tactic=
fight.controllers[2] = ctl     -- called by Fight.tick before the engines; presses keys via fight:press/release
-- ai.stats: decisions, started, attacks, blocks, dodges, byKind (table/cautious/quick/dodge/...), flow (per-tick exits)
```
With no tactic name it takes `build.def.tactic`, then "Standard"; an unknown name warns and uses Standard. Setup happens on the first tick: a JSON decode of 4-6 archives, merged per weapon pair and cached for the server's lifetime. After that, a tick costs a few comparisons unless the AI is free to decide.

**Spec questions resolved** (details in the `build_tactics.py` docstring):
- Entry `type` is the `AiData.HFDKHELIKGE` enum: 0 = attack (outcome) tables, 1 = movement tables, 2 = dodge tables, 7 = shift tables. The spec had 0/1 the other way round.
- Matchup entry `(group, name)` = (enemy weapon part, my weapon part). Me vs enemy = the union of entries with group in {"", enemy} and name in {"", mine}, read from `_`, `_<mine>`, `_<enemy>` and `<a>_<b>`. Dodge tables are keyed by the attacker's weapon: `EMPTY` (a superset of `default`) plus the enemy weapon's base archive.
- Table name = one of my nodes (NHeel_1/NHeel_2, the Align pivot of its responses). Table value = the enemy frame of the first row; frames are ticks since the animation's FirstFrame. Each IntervalNew has bucket edges plus one value per bucket. Distance = (my node x - the x where the enemy animation was aligned) x enemy facing.
- Values:
  - attack tables: the enemy frame at which my attack lands; an attack is kept when this is at most enemy frame + EnemyResponseDelay;
  - dodge tables: the ticks left before the enemy's hit.
- Shift table payload: u32 size, node names, then frames x nodes floats. It is parsed and validated but not emitted, because the port reads node positions directly.

**Faithful:**
- **Decision order** (`BDHAMOEKNNK`/`HMHLACOIDJI`):
  1. Missile and magic dodges.
  2. When the enemy is in its Uninterrupt interval: one UseDefense roll per enemy animation (`MNIODEEIJFC`: counter < counter+dodge < +block). CounterAttack → movement tables, Dodge → dodge tables, Block → hold Back.
  3. Otherwise: QuickAttacks, Evades, ExpectedWait (act with probability 1/w), UseSafeAttack → movement tables, TableAttack → attack tables, CautiousMovements → Step moves.
  4. ConditionalDecisions are added to the candidates: tacticSettings TacticConditions (Animation, AnimationFrame, Distance, ModelItem, Operator, Random), highest Priority wins.
- **Pick:** weighted by AnimationWeights (the first entry matching the move's name or a label, else the unnamed default).
- **TacticFactors formula** (`PPOKEOHAHFG`):
  - s = Σ factor × context + Shift + AnimationFactors (memory) + ConditionalDesigionFactor;
  - exponential: Limit + 2^-s(Base-Limit) for s ≥ 0, AntiLimit + 2^s(Base-AntiLimit) otherwise;
  - missing attributes are 0, and names are case-sensitive, so the data's `Antilimit` typo is ignored as in the game.
- **Rolls:** quick-attack and evade rolls are new on every call. The other rolls and the Distance/Frame errors are new per enemy animation, or on every call while the enemy plays a RandomizingEnemyAnimation (Stance) (`GEAOFEACDMA`).
- **No decisions** inside my own Uninterrupt/SemiUninterrupt (Random tactics: Uninterrupt/SelfUninterrupt), during Physical moves or while ragdolled.
- **Tactics:** templates (`Template=`), `Type=Random` (Beginner), Memory Strikes, ResponseDelay, EnemyResponseDelay, DistanceError, FrameError.
- **Keys:** the original AI also acts by feeding the chosen animation's ConditionKeys to the controller (`Model` → `ModelAi.BDHAMOEKNNK` → `CBGCMJCJJKP`). The port does the same: it presses the first Keys condition of the move, with Forward/Back resolved by the move's own SetDirection. Before pressing it checks availability by evaluating the move's `<Conditions>` against a scratch KeyBuffer holding exactly those keys, plus its AI-only `<Tactics>` conditions.
- **Evades** only happen when the enemy has an AI that could start the move. A human enemy has no ModelAi in the original either.
- **Responses:** table names map to my moves by name or `TacticEquivalent` (KatanaStepBack answers for StepBack). The enemy animation is looked up by its name, then by its TacticEquivalent.

**Approximated / guessed:**
- **Frames:** rows are read at the enemy frame rounded up to the 5-tick step. The original extrapolates my node over that gap with the shift tables.
- **Counter / safe-attack paths:** they use table values > 0 without the original's wait bookkeeping (`KNGDHCILNLD`, the SetWait* modes).
- **After a decision:** the AI waits until the move has started (at most 4 ticks). `StanceIdle` answers stand still for value ticks (3-30).
- **Block:** holds Back (away from the enemy) while the attack lasts, at most 45 ticks. StepBack and idle are Block intervals.
- **Memory** (ModelStatistics): per enemy animation, the last Strikes records of hit (it landed unblocked on me), damage, and counter (I hit him during it). RoundFactor is not applied.
- **AnimationFramesFactor context:** ticks the enemy has been in the same move, still counting while a stance loops. The game's counter (`FANDONIBLKC`) is reset by engine internals that were not fully traced. ChildFramesFactor uses the missile's frame.
- **Table weapon:** the weapon SubType if it has tables; else the first `TacticWeapon` on its weapon moves that has tables (Keris → Knives, Katana → NinjaSword); else shared moves only.
- **Fallback:** Random tactics, and Tabular tactics facing an enemy animation with no tables at all, pick any move that could start now, by weight. For Tabular this is graceful degradation; the original would just wait.
- **Random Delays** (`<Random><Delays>`) are used as reaction delays after seeing those enemy animations.
- **Engagement floor** (`AI.ENGAGE`, `engageFloor`, `lastAttack`): **a deliberate deviation, not in the original.** Two Tabular AIs are cautious enough against each other to stall in ExpectedWait for a whole round (88% of free ticks), which the original avoids through the wait bookkeeping this port approximates. The floor lets a table attack or safe-attack candidate through with a probability rising from 0 to `max` between `delay` and `delay + ramp` ticks after this fighter's own last attack (`AI.ENGAGE = {delay = 20, ramp = 60, max = 1}`), so fights progress. `AI.new(..., {engage = false})` turns it off and gives the untouched table behaviour; a table in place of `false` overrides the three numbers.
- **Not ported:** BeginnerCheat, the EmergencyDodges/SafeDodges/EvadeUnsafeDodges lists, TacticWallShift, ThrowTactics and BossAbility logic, the "SetWait" timing modes.

**Test:** `tools\tests\ai_test.luau` (Studio command bar, with `ServerStorage.SF2Test` = a clone of `ReplicatedStorage.SF2` with Data.Tactics and AI installed). It runs 6000 ticks of knives vs knives, Standard on both sides, and reports rounds, winner, attacks started, AI decision kinds, per-tick flow counters and errors.
- **Measured** (seeds 1001/1002): 0 errors, ~0.34 ms/tick including both engines. In 100 s both sides walk in, block and land table attacks (7-10 attacks each); the round ends on time at 0.71 / 0.90 health.
- **Tabular tactics are cautious against each other:** 88% of the free ticks end in ExpectedWait, and the table/cautious chances start near 0 and grow with the enemy's frames and memory.
- **Beginner** (Random) with a katana won 2-0 by KO against Aggressive knives, in 2228 ticks.

## Perks (`src\SF2\Perks.lua`)

Each fighter's perks (from the stage's `<Perks>`, and the player's own) are trigger lists from `perks.xml`
that run on fight events. A perk inherits its template's triggers (`Template=`, e.g. `EndStanceClear`) and
takes its variables from `<Set>`, overridden by the player's upgrade level
(`CharacterProgress <Perks><UpgradeLevel><Set>`).

**Build:** nothing to build. `perks.xml` is already in `out\Xml\perks*.lua` from `build_game.py`; install
`src\SF2\Perks.lua` as `ReplicatedStorage.SF2.Perks`.

**Wiring:** `Fight.new` creates `fight.perks = Perks.new(fight)`, and the events reach it from where they
happen:

| Event | Fired from |
|---|---|
| `RoundStageStart` | `Fight.setStage` |
| `HitPreCrit` / `HitPostCrit` / `PostHit` | `Combat.strike`, around the crit roll; all three before the health change |
| `EveryFrame`, `ModExpires` | `Perks.tick`, once per `Fight.tick` |
| `AnimationStart` / `AnimationEnd` | `MoveEngine.start` / `startPhysics` / the end of the last keyframe |
| `MagicCharged` | `Fight.onHit`, when the bar first fills |

**Mods** are named timed states on a fighter (`e.mods[name] = {frames, attrs, vars, icon}`). The moves
engine's `ModExists` conditions read the same table, so a perk's `ModFlag` gates moves exactly as the rules'
and stuns' mods do. A mod with `ModAttributes` adds its attributes to the fighter's while it lasts
(`e.baseAttributes` keeps the unmodified set, and `Fight.new` clones the build's attributes so a fight never
writes back into it).

**Hit edits:** `SetHit` and `ChangeImpulse` leave `blocked` / `forceCritical` / `forceShock` / `setDamage` /
`impulseMulX` / `impulseMulY` on the hit record, and `Combat.strike` consumes each one at the stage it
belongs to: a `Block` set at `HitPreCrit` still changes the block damage factor, while `Critical`, `Shock`
and `Damage` apply to the finished hit.

**All three stages run before the health comes off**, and before the target is told to react. The data
settles the order: of the 28 `SetHit` actions in `perks.xml`, 23 fire at `PostHit` — 19 of them setting
`Damage` — and `PERK_ENLIGHTENMENT` (survive a lethal hit) tests `?Hit[].Damage >= ?PlayerParameter[Me].Health`
there and then sets the damage to `Health - _Health`, which only works while the health is still untouched.
`PERK_ANTI_SHOCK`, the most common perk in `stages.xml` (149 uses), clears `Shock` at `PostHit`, so the
stage has to come before the victim picks a reaction move too. The first wiring applied health before
`PostHit` and consumed no edits from it, which silently disabled both perks; fixed, with `takeEdits` run
after each stage.

**Values** (`evalExpr`): numbers, `_Var`, `?Variable[...]`, `?Hit[].Damage` / `.BaseDamage`,
`?PlayerParameter[Me|Enemy].Health` / `.MagicCharge` / `.DamageConverter` / `.MagicBullet`, `?Root[...]`
and `+ - * /`. Everything else reads 0 rather than erroring, and the list is in the `Perks.lua` header:
`?CurrentFight` (80 uses), `?CoordX` / `?CoordY` (63), `?PlayerAttribute` (51), `?Aspect` (37),
`?MovesVariable` (26), `?Abs` (21, whose argument is almost always a `?CoordX` expression this bracket
match cannot nest), and `PlayerParameter`'s `isPlayer` / `DefaultPerksAspect` / `Magic` / `Pain` /
`Skeleton` / `RaidSphere`. So a perk that positions something in the arena does nothing, while the damage
and mod perks work.

**Not ported** (visual or special-arena actions, listed at the top of the file): `ApplyModEffect`,
`PerkArea`, `SlowModel`, `SetDarkness`, `ChangeModelColor`, `MoveModel`, `ShowDebugLine`,
`SetMovesVariable`, `SetTactic`, `StealMagicMod`, `TurnOffCollision`, `ModInvisibility`. Perk upgrade levels
default to 1: `Fight.new` fills `e.perks[name] = true` from the stage definition, so the player's own levels
are not read from the profile yet.

**Verified in Studio.** 77 of the 761 stage fights give their enemy perks, and all 761 run without error.
`PERK_BEGINNER` on Shin (BOSS_LYNX fight 1) was driven end to end: the `HitPreCrit Player="Me" Block="1"`
event matched, its `?PlayerParameter[Enemy].Health <= _Health` condition passed only with the player at
0.30 health and not at 1.00, and `SetHit Block="0"` flipped the hit's `blocked` to false exactly in that
case — so event filters, the template chain, `<Set>` variables, value expressions and the hit edit all
work. A `ModAttributes` mod moved its owner's DamageFactor from −2000 to 3850 and back when it expired two
ticks later, and a `RoundStageStart EndStance` cleared a mod through the `EndStanceClear` template.

## UI (menu screens, `src\SF2\UI.lua` + `src\SF2\Menus.lua`)

`tools/build_ui.py` turns the dumped Unity layouts (`sf2-assets/ui`, 229 screens) into packed node trees in
`out/UI`, and `UI.build(name, parent)` instantiates one as Roblox GUI objects. A screen is therefore the
game's own layout -- its rects, sprites, fonts, colours and nesting -- with only the behaviour written here.
Scenes are stored as `scene_<level>_<Scene>` wrapping their roots; prefabs by root name.

Three things in the Unity data do not survive a literal reading, and `UI.build` compensates:
- **A root `Canvas` has a zero rect and a ~1e-7 `localScale`.** The CanvasScaler gives it the screen's size
  at runtime and the tiny scale is its world-units-per-pixel. Read literally the pair collapses the whole
  screen into a corner, so such a canvas fills its parent at 1:1. Only that degenerate rect is treated this
  way: a *nested* `Canvas` (a sorting override -- the HUD's `StylePanel` and `BarPanel`) keeps its own rect;
  filling the screen with `StylePanel` drew its bar as a dashed line across the whole top. `Canvas` is not a
  MonoBehaviour, so `build_ui.py` has to record it specially.
- **A 180-degree turn or a negative x scale mirrors a node about its pivot.** Its contents are mirrored, and
  so is its own box: `PlayerLifeBar_right` is pivoted on its left edge at x=670 and reaches back towards
  the centre (built literally, the enemy's health bar ran off to the right), and MenuWheel's right end is
  `MenuRoll_left` at scale -1 (built literally, it sat detached from the wheel).
- **Stacking is by sibling index**, as in Unity. Every `ScreenGui` the port creates must therefore set
  `ZIndexBehavior = Sibling`; left on the default `Global`, a layout's later top-level pieces paint over
  everything nested deeper.
- **Layout groups are run by `UI.build`.** `VerticalLayoutGroup`, `HorizontalLayoutGroup`, `GridLayoutGroup`,
  `LayoutElement` and `ContentSizeFitter` drive the size and position of many children, which the dump leaves
  at zero. `build_ui.py` records their settings (`lg`, `le`, `cf`), and `UI.lua` runs UnityEngine.UI's own
  `CalcAlongAxis` / `SetChildrenAlongAxis` on the built instances once built and again on resize. A screen
  that hides, shows or retexts something a group arranges calls `built:relayout()`; a prefab instantiated
  into a group at runtime gets its sibling index from `UI.setOrder`. Preferred sizes come from the
  LayoutElement, else the image's sprite size (sliced: its border) or the text's width. The shop and the
  fight HUD were placed by hand before this existed and pass `{ layout = false }` to stay as verified.
- **Text overflows a zero-width rect**, as Unity's default does (TextAndMoneyLine's label sits on one).
- **The game's own fonts.** Roblox cannot load a TTF, so `tools/build_fonts.py` renders AGOpusBold, majallab
  and CarterOne (`sf2-assets/fonts`) at 64 px/em into 8-bit alpha atlases (`out/Fonts`, two pages each: ASCII
  and Latin-1, then Latin Extended-A and Cyrillic). `SF2.Text.attach` draws a TextLabel from them as
  ImageLabel glyphs, laid out like Unity's Text (em-size font size, ascent+descent lines, wrap at spaces only,
  best fit by shrinking). The label keeps its Text, colour, size and alignment as the source of truth and its
  own glyphs are hidden; a string with a character the atlas lacks (CJK) falls back to the Roblox font.
  Every text `UI.build` makes is attached, and `Widgets.label`. Rich-text tags are dropped and there is no
  outline. Property signals are deferred, so `Text` ignores its own TextTransparency write coming back.
- **9-slice.** Slice borders are screen pixels, so `SliceScale` includes the canvas's pixels per unit (it
  used to ignore it). And Roblox draws a slice whose top and bottom borders are both 0 cropped -- the
  CommonButtons hexagons (FIGHT!, OK, BACK) lost their lower edge -- so a side with no border slices a
  2-pixel band through its middle instead, which looks the same.
- `RectMask2D` / `Mask` become `ClipsDescendants`. `find` also matches a path suffix, so a node deep in a
  scene (`SidePanels/InfoPanel` under `scene_level7_Profile/[Profile]/ProfileUIGroup`) is found directly.

Not every tappable thing in the original carries a `Button` component (the side panels' flag tabs are plain
Images the panel script listens on), so `Menus` puts a transparent button over anything that is not already
one rather than assuming `.Activated` exists.

### Shop (`Menus.shop`)
Built from `scene_level4_Shop`, `ShopBottomPanel`, `ShopTableViewCell`, `InfoPanelContent`,
`ItemParameterScrollItem` and `IconLabelButton`. The current behaviour is described under "Matched against
the original's screenshots" below.
- `LevelLabel` is `<quad name=MiscSprites.star ...> N` in the original. A quad is a sprite the text can't
  carry here, so the star sits beside the number as its own image.
- The place's default `Baseplate` and `SpawnLocation` are hidden at runtime by `setScene`.

### The other screens (2026-10-22)
Every menu screen is now built from the prefabs its original scene mounts (the scene's `_MountOnStart`):

- **MainMenu** (dojo, map, shop, profile): the top bar -- level and experience bar, coins, gems and the
  `AddMoney` button, spaced by the bar's own layout groups and the F2P spacers MainMenu lerps by aspect
  (0 to 300 for aspect 1.23 to 2.0, InOutCirc) -- and the section scroll in the corner. The scroll is rolled
  up to its MENU wheel; tapping it unrolls the 1240-unit scroll in 0.3 s over a backdrop that rolls it back
  (`MenuScroll`). The current section shows its `_active` sprite and is not clickable. The dojo's corner
  toggle is the punching bag (`MENU_BUTTON_DISCIPLE_ON`) and opens the port's training.
- **Map** (`StoryMapContainer`, `InfoBattle`, `MapButtonsPanel`): the act's map is a `StoryZoneScrollItem`
  (2730x1298) and each `BattleButton` sits at `localPosition = 2 x (X, Y)` from stages.xml
  (`ZoneScrollItem`). A tap picks a battle (pressed sprite) and fills InfoBattle with the matching
  Contents child: tournament/challenge (stage x/y, one brick per fight, difficulty, prize), bosses, duel,
  survival (min/max prize), closed or completed. Dragging the map past 300 units moves to the next or
  previous open act; the lamps under it (`LampsPanel`: 68 wide, 22 apart, at y -55) show and jump between
  acts. The Eclipse toggle sits in MapButtonsPanel's actions row.
- **Profile** (`scene_level7_Profile`, `ProfileBottomPanel`): the perk tree as `PerkCell` rows (two perks
  side by side with the joining line where a level offers two), the learnable strikes as `TrickCell` rows,
  the picked one described in `InfoPanel`, your perks listed in `UserPerksPanel`.
- **Settings** (`SettingsDialog`, over the current screen): music, sound and language with their
  SettingsButtons icons, the user id; "Advanced" opens `SettingsAdvancedDialog`.
- **End of a fight** (`EndFightScreen` + `EndFightContent`, `TextAndMoneyLine`, `ExpAndMoneyLine`): Win,
  Lose or Time-is-up header, the prize and exp/coins lines, OK on a win and Retry, OK and Store on a loss.
  It now shows after a loss too (it used to go straight back to the map).
- **VS** (`VsScreen`): `VsScreen.Init`'s sequence with the prefab's values -- the avatars slide from
  off-screen to (-650, -200) and (650, 200) in 0.6 s, pause 0.2; the VS sign drops from scale 100 to 0.78 while
  fading in, 0.2 s, pause 0.2; the stripe halves fill 0.1 s each, pause 0.2; the names show; hold 2 s. The
  avatars used to stay off-screen at x = +-2112, where the prefab parks them before the slide.

**Deviations**, each because the behaviour behind it is not ported:
- MenuWheel's `MenuButton` and `MenuWheelText` live in a nested prefab the dump lacks; the wheel itself is
  the tap target (its sprite carries the word MENU).
- Raid rating, forge materials, the tutorial skip and the ruby sale badge are hidden.
- InfoBattle's difficulty rating is approximated from the fight's `AttributesAlign` Factor (<0.95 easy,
  <1.05 normal, <1.15 hard, <1.3 insane, else impossible); the original rates it at runtime.
- The map shows one act at a time (a drag moves to the next) rather
  than a continuous strip, to keep one zone texture decoded. The 2730x1298 zone exactly fills a 16:9 screen;
  on a wider one it is scaled up to cover the map panel instead of leaving black bands.
- Counts past 99 999 are abbreviated with K, M, B and T (`Menus.fmt`, "123.4K", "11.4T"). The original
  always prints the full grouped number (`"#,###0"`), but its int counters never get past ~2 billion and
  the dev max-out profile's do, which overflowed and wrapped the labels.
- Where a perk tree level offers two perks, the original makes you pick one. The port's fights grant both,
  so both show as learned.
- The end screen's count-up animation is not played; the video-reward button is hidden.
- The arsenal training panel (`Menus.arsenal`) is the port's own and stays hand-placed.

**Verified in Studio**: dojo, map (zone 1, Eclipse on), profile (both tabs), shop, settings and the win and
time-up end screens render from the layouts with no errors. After the 2026-10-22 playtest: the enemy health
bar mirrors the player's, the VS avatars slide in, OK/FIGHT!/BACK draw whole, the MENU roll is joined, the map
covers a 2:1 screen, all text is in AGOpusBold, and 11 455 401 774 600 shows as 11.4T. Studio's mouse injection still does not reach the
game, so they were driven through a Studio-only hook (`PlayerGui.SF2Debug:Invoke("map", ...)`, created by
`SF2Game.client.lua` only when `RunService:IsStudio()`), and no button has been clicked by hand.

### Matched against the original's screenshots (2026-10-22)
The user supplied ~20 screenshots of the real game: map, shop, profile, settings, advanced settings, end
screen and fight HUD. Each screen below was compared with them and with the data, and the fixes follow both.

**Text.** Three generator rules decide a label's font and size, and the screenshots confirmed each one:
- **Size.** With best fit, the size is the fit's `maxSize`. `labelFontSize` (LabelAlias) applies only without
  best fit, and only when `_useLabelFontSize` is set. The battle title had been drawn at its override of 150
  instead of best fit's 86; that was the "everything is too big".
- **Best fit and spacing.** Best fit stops at `minSize`, and Unity's `lineSpacing` applies to the line height.
- **Font.** `useLocalizationFont` makes a label take the language's font, AGOpusBold, over its own. That is
  why the original's counts and battle names are AGOpusBold, not majallab.

Two font details:
- **AGOpusBold is a Cyrillic-hacked font.** U+00C0..U+00FF (the × included) hold cp1251 Cyrillic letters, so
  `build_fonts.py` draws those characters from majallab, and draws the real Cyrillic letters from their cp1251
  positions.
- **Merged LayoutElements.** A node with two LayoutElements keeps each value from whichever one sets it.

**Top bar.** The energy panel (lightning and segmented bar) shows in every menu, as in the original. The port
has no energy system, so the bar stays full.

**Map.**
- **Strip below the map:** the [Map] scene's own Image paints it dark brown (0.063, 0.027, 0.012).
- **Battle names:** each battle button carries its name in capitals, dark with a pale halo (`glyphOutline`).
  Titles in the info scroll are in mixed case.
- **Eclipse toggle:** a sun (off) or the eclipse (on), top right just under the +. With Eclipse on, the map
  is darkened.
- **Fight indicators:** a battle's fights show as `IndicatorFight` icons (96 units, scaled 0.71 from 6 fights
  up, overlapping 5), lit (`indicatorOn`) once won, in centred rows of 8. The screenshots show rows of 8;
  `ProgressBricksPanel` reads as 6 per row under 13 fights, which they contradict.

**Shop (`Menus.shop`, rebuilt).**

The list snaps:
- Once a scroll or drag settles, the nearest row slides to the centre and becomes the selection.
- The panels refill in place and the warrior preview is rebuilt; nothing else is torn down.
- Tapping a row centres it.

Each row is the type's art box from `ShopScene` plus the 120-unit `IconPanel` strip under it. The boxes are
weapon and ranged 778x302, armour 778x704, helmet 778x706, magic 778x682. Rows other than the selected one
draw at `_InactiveCellOpacity` 0.5.

**ItemInfoPanel**, right of the scroll, holds `InfoPanelContent`:
- the item's name;
- one `ItemParameterScrollItem` per attribute: the value, the next upgrade's gain in green, and a bar
  measured against the strongest item of the tab you can buy at your level;
- the price buttons, as `IconLabelButton`s:
  - a green price button to buy;
  - for an item you own, "UPGRADE n" with a yellow coin button and an orange gem button;
  - a dark star-and-level button when your level is too low.

Around the scroll:
- **ButtonsContainer**, left: TRY ON (puts the item on the warrior), EQUIP or UNEQUIP. ENCHANT (the forge) is
  hidden.
- **The scroll's left edge** carries the two side-panel flags. The lower one opens the full attribute list to
  the left of the scroll.
- **The tab bar** shows all eight tabs in the original's order: gems, coin bag, FREE, then weapon, armour,
  helmet, ranged, magic. The three store tabs do nothing here.
- **The warrior** stands left of the scroll (`SHOP_WARRIOR_X`).

**`ScrollingFrame.CanvasPosition` is in screen pixels, not canvas units.** The old shop mixed the two, and
the new list jumped near its end until they were converted.

**Row recycling is still required.** A tab's art spans up to 28 textures and the EditableImage budget is
finite. Only the rows near the view are alive, and their art is released when they scroll out.

**Profile.**
- **Descriptions** carry their real numbers, from CharacterProgress
  `<Perks><Perk><UpgradeLevel Value="n" Description="KEY{a}{b}{c}">` at the perk's level.
- **Left panel:** a two-column grid of perk tiles with level badges.
- **Perk tree:** unlearned perks are faded, and titles are in mixed case.
- **Tabs:** all five show; Achievements, Seals and Battle Pass do nothing.
- **Backdrop:** the dojo with the warrior stands behind the panels.

**Settings.** Music, Sound, Credits and Support down the left; the language and Soundtrack down the right; the
user id below. All option labels are the same size. Credits, Support and Soundtrack are shown but have nothing
behind them.

**Advanced settings.** Laid out as the original: Graphics Quality, Location Resolution and Controller Scale
(each tap steps its value), then the music and sound sliders, and BACK.
- **Sliders:** they set `musicVol` / `soundVol`, applied by `Menus.applyVolumes`.
- **Controller Scale:** sizes the touch controls, Large 0.75 and Small 0.6.
- **Graphics and Location Resolution:** remembered, but they change nothing.
- **Port extras:** the reset and the temporary dev max-out sit small at the scroll's foot.

**End of a fight.** The original's rows, each with its coins:
- PRIZE;
- PERFECT ×n, FIRST STRIKE ×n, MAX COMBO ×n, SHOCK ×n;
- the style reached (PASSIVE / HARD / ... / FANTASTIC STYLE);
- the star-and-coins total.

`Fight.stats` now counts:
- perfect rounds;
- first strikes (a round's first unblocked hit);
- the longest combo: unblocked hits within 90 ticks of each other, counting from 3 (`<Combo MinHits="3"
  Time="90">`);
- shocks;
- the best style level reached.

`Game` pays the bonuses at internalSettings' rates: Perfect 5, FirstStrike 2, ComboCount 1 per hit, Shock 3.

Approximated:
- **The style meter:** +0.5 per own unblocked hit, -2 per hit taken, -0.08/s decay, from
  `<StyleLevels StylePerHit="0.5" DecreaseSpeed="0.08" Penalty="2">`. How the original applies those values
  wasn't read from its code.
- **The style bonus:** 3 coins per level, taken from the screenshots' HARD STYLE = 3.
- **The money multiplier:** the screenshots show bonuses doubled in some fights; the port pays them at 1x.

**Not yet matched:** the fight HUD's style bar and its labels (the green bar with "FANTASTIC!" / "HARD!" under
the health bars) are not drawn.
