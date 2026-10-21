# Shadow Fight 2 – Combat System Reconstruction Plan

Scope: fight simulation only — models, animations, moves, attacks/hits, physics, AI.
No UI, menus, shop, raids, PvP, ads, or online services.

Legend: **[O]** observed in the shipped APK · **[I]** inference · **[?]** unknown / not yet verified

---

## 1. What the APK actually is

| Fact | Evidence |
|---|---|
| **[O]** Unity build, **IL2CPP** backend (C# compiled to ARM64 native code) | `split_config.arm64_v8a.apk` → `lib/arm64-v8a/libil2cpp.so` (71.6 MB), `libunity.so` |
| **[O]** Metadata **not encrypted**, format version 31 | `global-metadata.dat` header `AF1BB1FA 1F000000` |
| **[O]** Main game assembly is `Root.dll`; engine namespace `Nekki.SF2.Core.Fights.*` | `ScriptingAssemblies.json`, metadata strings |
| **[O]** **Beebyte Obfuscator** is applied — ~30,200 identifiers are scrambled (`KLFOGICEHJC`-style) | `BeebyteObfuscator.Firstpass.dll`, identifier table |
| **[O]** Code Stage **Anti-Cheat Toolkit** (ACTk) present | `ACTk.Runtime.dll` |
| **[O]** **No combat data inside the APK.** Moves, animations, models and AI tactics are downloaded from a CDN at runtime into `/data/data/com.nekki.shadowfight/files/` | string literals: `/moves.xml`, `/animations/binary`, `/tactics/movements/`, `/tactics/dodge/`, `/tactics/outcometablesforattack/`, `/tactics/shiftTables/`, `tacticSettings.xml`, `CdnMirror`, `DownloadBundle` |
| **[I]** The C# is a **port of the original C++ SF2 engine** | leftover C++ assertion strings: `pAnimIntervals != _animationsWithIntervals.end()`, `MovesMaps::getIndex` |

**Consequence:** "recompiling" in the literal sense isn't possible. IL2CPP output cannot be turned back into the original C#; decompiling gives ARM64 pseudo-C. The realistic path is a **reimplementation**: rebuild the system from (a) the recovered class/method structure, (b) decompiled logic for the key algorithms, and (c) the real data files, which define most of the behaviour.

---

## 2. Recovered combat architecture **[O]**

The metadata still contains the original source-file paths (`Assets/src/Core/Fights/...`), even for classes whose names Beebyte scrambled. That gives a full map of the subsystem (~190 files):

### 2.1 Model (the fighter)
```
Model/Model.cs, ModelObject.cs, ModelLoader.cs, ModelReloader.cs
Model/Components/Nodes/ModelNode.cs, ModelMacroNode.cs     ← skeleton points
Model/Components/Edges/ModelEdge.cs                        ← links between nodes
Model/Components/Figures/Capsule.cs, Triangle.cs           ← body shapes (render + collision)
Model/ModelPhysics.cs, ModelCollision.cs, ModelStrike.cs
Model/WeaponModel.cs, Model/Support/Defense.cs, ModelParameters.cs, EquippedItemsStruct.cs
Model/Controller/ModelController.cs
Render/Model/CapsuleRender.cs, EdgeRender.cs, MeshRender.cs, MeshNode.cs, NodeRenderer.cs
```
**[I]** A fighter is not a Unity skinned mesh. It is a **node graph**: points connected by edges, with capsules and triangles drawn as the black silhouette and also used as hit volumes. Weapons and armour attach to nodes. Error strings `Capsules was not parsed` / `Edges was not parsed` confirm these are loaded from data.

### 2.2 Animation
```
Model/KeyFrames.cs, Model/Animation/Keys/KeyData.cs, Animation/Data/AnimationData.cs
Model/ModelAnimation.cs, SelectAnimation.cs, DelayedAnimation.cs
Model/Animation/MovesPosition/AttachPoint, DistancePoint, DistancePointFollow, DistanceVector, ShiftValue
```
**[I]** Animations are **per-frame node positions** (keyframes) stored in `animations/binary/`, with root shifts and distance points used to align two fighters (throws, grabs).

### 2.3 Moves — data-driven state machine (`moves.xml`)
```
Moves/MovesParser, MovesCompiler, MovesMaps, TemplateAnimation, TransitionAnimation, InfoAnimation
Moves/Events/      Birth, AnimationStart/End/Interrupted, EveryFrame, Hit, Strike,
                   KeyPressed/Released, IntervalStart/End, ModExpires, RoundStage
Moves/Conditions/  Animation, CurrentAnimation, Direction, Distance, Health, Hit, Interval,
                   Keys, Physics, Weapon, Perk, Round, RoundResult, Bullets, ModelMirrored, ...
Moves/Actions/     PlayAnimation, Animation, CreateModel, Delete, Effect, HitEffect, Sound,
                   ShakeScreen, ZoomEffect, CameraWeight, SetCooldown, AddBullets, TryOnEnd, ...
Moves/Intervals/   IntervalAnimation, IntervalAttack     ← active/hit frames
Moves/Triggers/Trigger
```
**[I]** Each move is a set of **Event → Conditions → Actions** rules. Input (`KeyPressed`) plus state (`CurrentAnimation`, `Distance`, `Direction`) selects the next animation. `IntervalAttack` marks the frames where a strike is live. This system defines most of the combat feel.

### 2.4 Hits and damage
```
Model/ModelStrike.cs, ModelCollision.cs, Support/Defense.cs, ComboCounter.cs, EventTriggers.cs
Rules/DamageRule, DamageFactorRule, ResistanceRule, LifeStealRule, InvulnerabilityRule, ...
```
**[O]** Combat terms in identifiers and localization: `HitInfo`, `HitEvent`, `CallEventBlockHit`, `DefenceUseBlock`, `DefenceUseCounterAttack`, `IncreaseComboHit`, `CreateComboStrike`. Move names include `HighPunch`, `UpperCut`, `ElbowStrike`, `KnivesSlash`, `TwoFootJumpKick`, `BackFlipKick`.

### 2.5 AI
```
Model/AI/ModelAi.cs
Model/AI/Data/AiData, Tactic, TacticValue, TacticalTable, TacticalTableHolder, GroupTables,
              Intervals, ModelShiftTable, ConditionalAnimation, TacticsArchiver, TacticsCompiler
Model/AI/Data/ConditionalTactic/TacticCondition{Animation,AnimationFrame,Distance,
              ModelItem,Operator,Random}, TacticConditions
```
**[O]** Serialized table names: `attackTable`, `dodgeTable`, `movementsTable`, `shiftTable`, `outcometablesforattack`, `summaryResultTable`, `safeTable`, `quickAttact`, `throwTactics`, `evadeList`, `block`, `conditional`, `randomAnimation`.
**[O]** Tactics are loaded per weapon/subtype (`Fight::LoadWeaponTactics`, `TacticWeapon`, `TacticSubtype`) and stored compressed (`tactics_compressed_icsharp_bzip2`, `_ionic_zlib`, `_nekki_zip`).
**[I]** The AI is **table-driven, not a behaviour tree**. Given the opponent's current animation/frame and the distance between fighters, it looks up outcome tables to choose attack, dodge, block, move or throw, with weighted randomness. Difficulty most likely comes from the tables and parameters, not from separate code.

### 2.6 Fight loop and rules
```
Fight.cs, ModelContainer.cs, CountersFight.cs, MovesInFightVariables.cs, StageType.cs, Camera.cs
Location/Location.cs (+ params.xml layers)
Rules/*  (~45 modifiers: RingOut, LoseFall, HotGround, Darkness, Regeneration, TimeoutWin, ...)
```

---

## 3. Gaps and how to close them

| # | Gap | How to close it | Needs your OK? |
|---|---|---|---|
| G1 | **Combat data files** (`moves.xml`, `animations/binary/*`, model and capsule files, `tactics/*`) | Copy `/data/data/com.nekki.shadowfight/files/` from a **rooted** Android device or emulator after the game has downloaded its content. This is app-private storage, so a normal `adb pull` won't work without root. | Yes — you choose the device or emulator |
| G2 | **Method bodies** (physics integration, hit resolution, AI table lookups, binary animation decoding) | Run Il2CppDumper or Cpp2IL against `libil2cpp.so` + `global-metadata.dat` to get method addresses and type layouts, then decompile the key functions in Ghidra. | Yes — these tools need downloading |
| G3 | **Obfuscated names** (~30k) | Use the source-file paths above plus each type's fields and call graph to map scrambled names to real ones. Only the fight namespace needs this. | No |
| G4 | **Binary formats** (animation `.bin`, compiled tactics, `.stb`) | Read the decoder methods (`KeyFrames`, `AnimationData`, `TacticsArchiver`) from G2 and check them against real files from G1. | Depends on G1 + G2 |
| G5 | **Physics constants** (gravity, damping, ground, ring bounds) | Read from `ModelPhysics` and `ModelParameters` decompilation, or from data files if they're data-defined. | Depends on G2 |

---

> **Update 2026-10-20:** G2 is done and G3 mostly done. See `DECOMPILE_INDEX.md`: all 24,674 Root.dll methods are decompiled, and 154 combat classes are mapped to real names. G1 (the data files) is still open.

## 4. Reconstruction phases (no code until you approve)

**Phase 0 – Tooling and evidence** (G1, G2) — ✅ done (see `DECOMPILE_INDEX.md`, `DATA_INDEX.md`)
Get the data files and a method/type dump. Output: a mapping file from obfuscated names to real ones for the `Fights` namespace.

**Phase 1 – Data format specs** — ✅ done (see `specs\README.md`)
Write format specs for: model (nodes, edges, capsules, triangles, attach points), animation binary (frame layout, node count, shifts), `moves.xml` (event/condition/action grammar), tactics (table layout, compression). Each spec is checked by parsing every real file with zero errors.

**Phase 2 – Model and animation playback** — ✅ done in Roblox (see `D:\SF2-Port\sf2-roblox\README.md`): real rig, 36 fists moves, SF2 renderer and cloth physics at 60 Hz, MidFrames+1 ticks per keyframe with B-spline in-betweens. Timing verified side by side against the phone.
Load a fighter, play any animation, and render capsules and edges as a silhouette. Done when idle, walk, and every attack play frame-accurate, matching the game side by side.

**Phase 3 – Moves state machine**
Interpret `moves.xml`: events, conditions, actions, transitions and intervals. Done when scripted input sequences produce the same animation chain as the original game.
*Done (2026-10-20). Playtested by hand and accepted.* Ported:
- the ModelController key buffer, with KeyData containment matching and screen-relative directions read per candidate's facing
- EventTriggers priority selection
- SetDirection, `_1`/`_2` leg mirroring (MirrorNode), Align on the new pivot node, and Transitions (FrameShift)

Details are in `D:\SF2-Port\sf2-roblox\README.md`. Deferred to Phase 4: Hit/RoundResult/Health conditions, Velocity, collision, and actions (sounds, effects).

**Phase 4 – Physics, collision, strikes**
Ragdoll and falls (node physics), capsule-vs-capsule hits during `IntervalAttack` frames, blocking, damage, knockback, and throws using distance and attach points.

**Phase 5 – AI**
`ModelAi` with tactic tables: per-frame lookup → decision → simulated key presses fed into the same moves system the player uses. Done when AI vs AI fights play out plausibly, and the per-tick decision log can be compared with the original.

**Phase 6 – Fight loop**
Rounds, timer, win conditions, and a few `Rules`. Debug view only, still no real UI.

**Verification throughout:** record reference clips from the real game, then compare frame by frame and keep a regression set of input scripts.

---

## 5. Open decisions

1. **Target engine/language** for the rebuild: Unity C# (closest to the original), Godot, Roblox (Luau), or web/TypeScript.
2. **Data source:** a rooted device or emulator you control, for G1.
3. **Tool installs** for G2: Il2CppDumper or Cpp2IL, plus Ghidra.

## 6. Legal note
The data files, animations and models are Nekki's copyrighted assets. Using them locally to study and rebuild the system is a personal-project grey area. Don't redistribute them or ship a public build that contains them. If this becomes public, plan to replace them with original data that follows the same formats.
