# Spec: Moves (`combat\moves.xml`)

**Status:** surveyed and validated against the full file (1,104 moves, 147 templates, 113 triggers). Cross-reference integrity is above 99%; the unresolved names are in raid/event moves or are data typos.
**Reference code:** `MovesCompiler` (reads the XML), `MovesParser` (events), `ConditionsParser` + `MovesMaps` (condition enum), `ActionsParser`, `IntervalAnimation` / `IntervalAttack`, `InfoAnimation`.
**Full generated schema** (every path, attribute and enum with counts): `D:\SF2-Port\sf2-data\index\moves_schema.txt`.
**Encoding on disk:** base64 → AES-256-CBC; the copy in `combat\` is already decrypted.

## Top level
```xml
<Movesxml>
  <Moves>     1,104 × <Move>
  <Templates> 147 × <Template Name="…"/>   <!-- empty: just declares a label -->
  <Triggers>  113 × <Trigger Name="…"><Actions>…</Actions></Trigger>  <!-- named, reusable action lists -->
</Movesxml>
```

## How a move works (the execution model)
A **Move** is one animation plus the rules for when it may start and what happens while it plays.
1. **Start triggers (`<Events>`):** the move becomes a candidate when one of its events fires. The `<Conditions>` decide whether it actually starts; among the candidates, the highest `Priority` wins.
2. **While playing:** `<Intervals>` mark frame ranges with states (attack active, blocking, invulnerable, can't be interrupted…). `<Actions>` fire on given frames or events (sounds, effects, spawning projectiles, camera shake…).
3. **Positioning:** `<Align>` places the animation in the world when it starts. `<SetDirection>` sets facing. `<Velocity>` and `<Rotation>` add motion.
4. **Chaining:** an event like `<AnimationEnd/>` or `<IntervalEnd Name="Uninterrupt"/>`, plus conditions on `CurrentAnimation` / `CurrentInterval`, lets one move follow another. That is how combos, recoveries and hit reactions are wired.

## `<Move>` attributes
| Attribute | Meaning |
|---|---|
| `Name` | unique move id (e.g. `FrontKick`) |
| `FileName` | animation file (`front_kick.bytes` → `combat\animations\front_kick`) |
| `Priority` | 0–50000; resolves which candidate move starts |
| `Template` | `|`-separated **labels** (e.g. `2key|Forward|Unarmed|Kick|Controlled|NotTitan|SoundStrike`). Every label is declared in `<Templates>` (4,672/4,672). Conditions match moves by label. |
| `Type` | `ATTACK` (370) / `MOVE` (45) / absent; used by the AI and tactics |
| `FirstFrame`, `MidFrames`, `EndFrame` | playback window and blend frames (typical FirstFrame 1–4, MidFrames 2) |
| `MirrorNode` | node used when mirroring the animation to face the other way (`NHeel_1`) |
| `PackName` | which content pack holds the animation |
| `TacticWeapon`, `TacticEquivalent`, `TacticWallShift` | AI hints: which weapon's tactics apply, which basic move this counts as |
| `NoInterpolationFrames`, `NoWallRepulsion`, `NoMagicRecharge`, `EndsStage`, `StyleFactor`, `CameraCOMAlignStage`, `Labels` | flags and tuning |

## Child sections of a `<Move>`
- **`<Events>`** (1,059): start triggers, all leaf elements.
  - `KeyPressed`, `AnimationEnd [Name]`, `AnimationStart`, `IntervalEnd Name`, `IntervalStart`, `Hit Name`, `Birth`, `RoundStageStart Name`, `ModExpires`, `EveryFrame [Step]`, `Strike`
  - With no `Name`, `AnimationEnd` means "when the current animation ends".
  - `Hit Name="High"` makes this a **reaction move** to that hit type.
- **`<Conditions>`** (970): all must hold.
  - Elements, using the `ConditionsParser`/`MovesMaps` vocabulary: `Keys/Key Type PressType`, `CurrentAnimation Name`, `CurrentInterval Name`, `Distance Axis Min Max` (+ `From`/`To` anchors), `RoundStage Name` (Fight/EndStance), `Item`, `ModExists`, `Name Value`, `Player Number`, `Health Max`, `Bullets`, `BattleType`, `Perk`, `Birth`, `BossAbilityState`, `Direction`, `Hit`, `RoundResult`, `PhysicsFrameNumber`, `Screen`
  - Logic: `Operator Type="And|Or"` (also `AND`), nests arbitrarily. Any condition or operator can take `Not="1"`.
  - `CurrentAnimation Name` may be a move name, a template label, or `$Move` (this move). An optional `Player="Enemy|Parent"` checks the other model.
- **`<Intervals>`** (983): `<Interval Name|Type Start End [ID]>`.
  - Types: `Attack` (640), `Block` (697), `Invulnerable`, `Throwable`, `Invisible`
  - Named states: `Uninterrupt`, `SemiUninterrupt`, `SelfUninterrupt`, `Unstable`, `Throwable`, `Evade`, `CanWallHit`, `Recovery`…
  - A missing `Start` means from frame 0; a missing `End` means to the end.
  - **Attack intervals** contain:
    - `AttackingParts/Edge Name`: skeleton or weapon edges that deal damage (2,456/2,489 resolve to model edges)
    - `Damage Value [NoCritical] [BodyPart]`, holding one or more `Damage Type=Unarmed|Weapon|Magic|Ranged|RaidChargeDamage [Shift]` and optionally `Defense Type=BodyDefense|HeadDefense`. Value range 0–0.6, typically 0.11; it's a multiplier on the fighter's damage stat.
    - `Impulse X Y Z`: knockback vector
    - `Hit Name`: hit type that selects the defender's reaction (`High`, `HighHeavy`, `Middle`, `Low`, `Overhead`, `Spinning`, `Sweep`, `Physycal`[sic]…)
    - optional `IgnoresBlock`, `IgnoresInvulnerable`
- **`<Actions>`** (951): fire at `Frame=N` or on `Event=Strike|AnimationEnd|AnimationStart|Hit`.
  - Sound family: `Sound Name [Voice=Male|MaleLow|Female] [Volume]`, `RandomSound` (child `Sound`s), `StopSound`
  - Effect family: `Effect Name Sequence [Scale TimeScale Looped OnBackground StartRotation]`, `StopEffect`, `StopFollowEffect`, `HitEffect`
  - Spawning: `CreatePlayer Name [StartAnimation] > Item Type Name|CopyParentType` spawns projectiles, clones and assistants. `Delete Player [Event]` removes them.
  - Others: `PlayAnimation Player=Enemy|Child Animation` (throws force the enemy's animation), `ShakeScreen`, `ZoomEffect`, `CameraWeight`, `SetCooldown Button Duration`, `AddBullets`, `TryOnEnd Event`, `SetEndStage`, `EnableBossAbility`
- **`<Align Axis="X|Z">`**: where the animation starts.
  - `Pivot` (a node of the animation, usually `NHeel_1/2`) is placed at `Position`.
  - `Position` is `Player=Me|Enemy|Parent`, `Object=Pivot|Nodes|Animation|Wall`, `[Part] [ShiftX ShiftY]`.
- **`<SetDirection>`**: facing, from `From` toward `To`. Usually Me.NPivot → Enemy.NPivot; Wall Back/Front for wall moves. `Impulse Reverse` flips it.
- **`<Locks>`**: equipment gating, i.e. which skeleton/weapon/magic/ranged item a fighter needs for this move to exist. Uses `Item Type SubType [Name] [Not]` and `Operator`.
- **`<Tactics><Conditions>`** (370): AI-only extra conditions (mostly `Distance Min Max`) telling the bot when this attack is useful.
- **`<Transitions><Transition FrameShift><Conditions>`**: lets the move take over mid-animation from a matching current animation/interval, with a frame offset.
- **`<Velocity X Y [Ax]>`**, **`<Rotation Angle><Position…>`**: extra motion.
- **`<Profile Show Rank Icon [KeysDescription]>`**: UI and move-list data (ignore for the combat port).

## Distance anchors (`From` / `To` / `Position`)
- `Player`: Me, Enemy, Parent, Child, EnemyChild…
- `Object`: `Nodes` (+ `Part` = node name), `Pivot`, `Wall`, `Floor`, `MapCenter`, `COM`, `Animation`
- `MovesMaps` enum: Nodes=1, Pivot=2, Wall=3, Floor=4, MapCenter=5, COM=6
- `Axis`: X (81) or Y (3) for distance checks
- All node `Part` references resolve (940 + 724 + 741 + 1,156).

## Input keys (`MovesMaps`)
- Directions: Up=1, Up-Forward=2, Forward=3, Down-Forward=4, Down=5, Down-Back=6, Back=7, Up-Back=8
- Buttons: Punch=9, Kick=10, Ranged=11, Magic=12, RaidCharge=13, Super=14 (also `Ability` in 1 move)
- `PressType`: `Tap` (476) or `Hold` (209)
- Forward/Back are relative to facing.

## Validation summary
| Check | Result |
|---|---|
| Template labels declared | 4,672 / 4,672 |
| CurrentAnimation → move or label | 2,678 / 2,691 (raid/event names, 1 empty) |
| CurrentInterval → known interval | 1,887 / 1,899 (12 have no Name) |
| IntervalEnd event → interval | 461 / 461 |
| Node Part references | 3,561 / 3,561 |
| AttackingParts → model edge | 2,456 / 2,489 (raid weapons + 1 typo) |
| AnimationEnd/Start Name → move | 18 / 22 (`HermitStormStart`, a raid boss) |

## Open questions (resolve during the moves-engine phase)
- Exact priority tie-breaking, and how `FirstFrame` / `MidFrames` blending works. Read in `ModelAnimation` / `SelectAnimation`.
- The damage formula: how `Damage Value`, the `Shift` attribute and `ModelParameters` stats combine. Read in `IntervalAttack` / `Model`.
- `Triggers`: how and when named triggers run (referenced from `TryOnEnd` and `ActionTryOnEnd`).
