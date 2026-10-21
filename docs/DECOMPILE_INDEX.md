# SF2 Decompile – Index

Status (2026-10-20): **complete**. Every method in `Root.dll` (the game assembly) has been decompiled to C pseudocode, and the combat classes have been mapped back to their original names.

## Where everything is (`D:\SF2-Port\sf2-il2cpp\`)

| Path | What |
|---|---|
| `decomp\Fights\` | **Start here.** 168 combat classes with real names, organized by original namespace (`Model\`, `Model\AI\`, `Model\Animation\Moves\…`, `Model\Components\…`, `Rules\`, `Renders\`, `Controls\`). |
| `decomp\Root_named\` | All 3,521 Root.dll classes, with every identified name substituted. Unidentified classes keep their Beebyte names. |
| `decomp\Root\` | The same files with no renaming (raw Il2CppDumper/Ghidra names). |
| `decomp\funcs\` | One file per method (24,674), named by RVA. |
| `index\class_map.tsv` | Obfuscated → real name mapping: 253 entries (154 in the Fights namespace), each with confidence and evidence. |
| `index\methods.tsv`, `classes.json` | RVA → class/method signature; class → fields with offsets. |
| `ghidra_proj\SF2.gpr` | The analyzed Ghidra project (names, types, signatures applied). Open it in the Ghidra GUI to browse cross-references. |
| `dump\` | Original Il2CppDumper output (`dump.cs`, `il2cpp.h`, `script.json`). |

Each class file contains: the C# declaration, every field with its byte offset, and then every method. Each method shows its C# signature, then its decompiled C. String literals are annotated inline, e.g. `StringLiteral_5566/*"ERROR: ActionsParser::create…"*/`.

## Pipeline used
1. Il2CppDumper v6.7.46 (your existing run) → names, types, signatures.
2. Ghidra 12.1.4 headless import, using `ghidra_scripts\ApplyIl2CppDump.java`, a Java port of Il2CppDumper's Jython script (Ghidra 12 has no Jython). 300k types and 170,589 method names/signatures applied (1 signature failed: a system crypto method). Full auto-analysis took 80 min.
3. `ghidra_scripts\ExportDecompiled.java`: parallel decompile of all 24,674 Root.dll methods. **0 failures.** The first run hit C: running out of temp space; the rerun used `D:\SF2-Port\tmp`.
4. De-obfuscation (scripts in the session scratchpad):
   - self-naming log strings (`"Fight::LoadWeaponTactics…"`)
   - parser dispatch tables (`op_Equality(tag) → new X`)
   - `ConditionsParser` switch joined with the `MovesMaps` enum table
   - structural reading of `ModelLoader` / `Model` fields

## Identified combat classes (154 in the Fights namespace)

Confidence key: no mark = high (self-naming string or parser dispatch); \* = medium (structure); † = low (best fit, verify before relying on it). Evidence for every entry is in `class_map.tsv`.

**Fight/Model core:**
- `Fight`, `Model`, `ModelObject`, `ModelAnimation`, `ModelLoader`, `ModelReloader`
- `ModelPhysics`\*, `ModelCollision`\*, `ModelController`\*, `ModelStatistics`\*, `ModelParameters`\*
- `Vector3f`\*, `Camera`\*, `Location`\*, `CountersFight`\*
- `EventTriggers`†, `MovesInFightVariables`†

**Geometry:**
- `ModelNode`, `ModelMacroNode`, `ModelEdge`\*, `Capsule`, `Triangle`

**Animation:**
- `InfoAnimation`, which contains the binary animation decoder: method `PLEKHOPFKNM(byte[])`
- `KeyFrames`\* (with nested `Frame`), `KeyData`, `IntervalAnimation`\*, `IntervalAttack`
- `TemplateAnimation`\*, `AnimationData`†

**Move positioning:**
- `DistancePoint`\*, `DistancePointFollow`, `ShiftValue`\*

**AI:**
- `ModelAi`\*, `AiData`\*, `Tactic`\*, `TacticFactors`\*, `ConditionalAnimation`\*
- `TacticalTableHolder`\*, `TacticalTable`\*, `GroupTables`\*, `Intervals`†, `IntervalNew`†, `ModelShiftTable`\*, `TacticsArchiver`
- `TacticConditionBase` plus all six subclasses: Animation, AnimationFrame, Distance, ModelItem, Operator, Random
- `TacticConditionData`\*

**Moves (all three families are complete):**
- Infrastructure: `MovesParser`, `MovesCompiler`\*, `MovesMaps`, `ActionsParser`, `ConditionsParser`, `ModelConditions`†
- Actions: base `ActionAnimation`\* plus 19 `Action*` classes (including `ActionCreateModel`)
- Conditions: base `ConditionAnimation`\* plus 24 `Condition*` classes (including `ConditionList`, `ConditionInterval`, `ConditionPhysics`, `ConditionItemInfo`, `ConditionScene`, `ConditionRound`\*)
- Events: base `EventAnimation`\* plus 14 `Event*` classes (including `EventBirth`, `EventHit`, `EventRoundStage`)

**Rules:**
- `Rule`\* (base), `InFightRule`\*, `ItemRule`\*, `RuleParser`, `RulesInspector`
- 30 concrete rules recovered from RuleParser's enum switch: RingOut, Darkness, HotGround, LoseFall, Regeneration, Attributes, DamageFactor, RemoveInterval, Crazy, LifeSteal, NoHealthBar, Combo, TimeoutWin, Points, RechargeMagicEachRound, NoBulletsReplenishment, Perk, NoPerks, WinStyle, WinCombo, WinShock, Tactic, InvertJoystick, RandomArea, Invulnerability, Resistance, Pvp, LightInTheDarkness, EquipItem, RandomAquiredItem, NoButton

**Not yet identified (combat-relevant):**
- `ModelStrike`, `Defense`, `WeaponModel`, `ComboCounter`
- `TransitionAnimation`, `SelectAnimation`, `Trigger`
- `AttachPoint`, `DistanceVector`
- `TacticsCompiler`, `TacticValue`, `EventModelDelayed`

These have no self-naming strings and no parser entry; their code is decompiled under Beebyte names in `Root_named\_global\`. Good leads:
- `CPGONFFGAHM` (owned by Model; applies two Vector3f to a ModelEdge) is likely `ModelStrike`.
- `BKHDDKOEEKP` (8 int counters, used by Fight, Model and RuleParser) is likely `ComboCounter`.
- `ABNLGBHKOCE` (named conditional block with sub-conditions, built by MovesCompiler) is likely `TransitionAnimation` or `SelectAnimation`.

The remaining ~30 unmapped Fights names are UI/input/config (ControlData, InputSelector, LocationSpriteCache, raid currency rules, FightArea*), not needed for the combat port.

## Data facts recovered from code
- **Fighter model format** (XML, parsed by `ModelLoader`):
  - `Nodes/Node`, `MacroNode`, `Edges/Edge`
  - `Muscle` edges
  - `Figures/Capsule` and `Figures/Triangle`
  - attributes: `Mass`, `Length`, `Margin1/2`, `End1/2`, `Radius1`, `Fixed`, `Collisible`, `Defense`, `BodyPart`, `Blood`, `Cloth`, `Attenuation`, `Iterations`, `CenterOfMass`
- **Input key enum** (`MovesMaps`):
  - Up=1, Up-Forward=2, Forward=3, Down-Forward=4, Down=5, Down-Back=6, Back=7, Up-Back=8
  - Punch=9, Kick=10, Ranged=11, Magic=12, RaidCharge=13, Super=14
- **Move condition enum:**
  - Distance=2, Keys=4, Weapon=5, Player=6, Health=7, Operator=8
  - CurrentInterval=9, CurrentAnimation=10 (also case 3), PhysicsFrameNumber=11, RoundResult=12
  - Item=13, Bullets=14, Perk=15, Birth=16, Name=17, Screen=18
  - ModelMirrored=19, ModExists=20, Direction=21, BattleType=22, BossAbilityState=23, Hit=24, ModelExists=25
- **Distance-point anchors:** Nodes=1, Pivot=2, Wall=3, Floor=4, MapCenter=5, COM=6.
- **Move events:** AnimationStart/End/Interrupted, Birth, EveryFrame, Hit, Strike, KeyPressed/Released, IntervalStart/End, ModExpires, RoundStageStart.
- **Move actions:** PlayAnimation, Effect, HitEffect, Sound, RandomSound, StopSound, StopEffect, StopFollowEffect, ShakeScreen, ZoomEffect, CameraWeight, SetCooldown, SetEndStage, TryOnEnd, AddBullets, Delete, CreatePlayer, EnableBossAbility.
- **AI tactic conditions:** Animation, AnimationFrame, Distance, ModelItem, Operator, Random.
- **AI data sections:** AttackTables, DodgeTable, EmergencyDodges, CautiousMovements, BotAnimation, ConditionalDecisions, AttackMoves, ThrowTactics, IgnoredEnemyAnimations (`ComputerSettings.xml`, `tacticSettings.xml`).
- **On-device data root:** `/data/data/com.nekki.shadowfight/files/`, with subfolders `/models`, `/animations/binary`, `/gamedata`, `/locations`, `/moves.xml`, `tactics/*`.

## Caveats
- This is decompiler output (C pseudocode of ARM64), not original C#. Control flow and arithmetic are reliable; local variable names are not.
- IL2CPP runtime noise appears throughout: `FUN_01bab630(&X_TypeInfo)` is lazy class init, `thunk_FUN_01bda818` is `new`, and the `if (x == 0) … /* does not return */` branches are null-reference throws.
- `ObscuredInt/ObscuredFloat/ObscuredBool` are ACTk anti-cheat wrappers around plain values.
- Method and field names inside identified classes are still Beebyte-obfuscated. Only class names were recovered.
