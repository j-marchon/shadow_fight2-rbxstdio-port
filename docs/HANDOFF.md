# SF2 → Roblox port: session handoff (2026-10-20)

Personal, unpublished project. It reverse-engineers Shadow Fight 2 (Android v2.46.0, Unity IL2CPP) and rebuilds its **combat system** (moves, AI, physics, hits) in **Roblox Studio** with the original game's assets, staying as faithful to the original as possible. UI is out of scope for now.

## Where things are

| What | Path |
|---|---|
| Plan, phases and status | `RECONSTRUCTION_PLAN.md` (this folder) |
| Decompile index | `DECOMPILE_INDEX.md`, plus `D:\SF2-Port\sf2-il2cpp\index\class_map.tsv` (253 named classes) |
| Data index | `DATA_INDEX.md` |
| Format specs | `specs\*.md` (animation-binary, model-xml, moves-xml, tactics-binary) and `specs\validators\` |
| Decompiled C (Ghidra 12.1.4) | `D:\SF2-Port\sf2-il2cpp\decomp\Fights\...`, `Root_named\`, `funcs\`, `funcs_extra\` |
| Ghidra project and scripts | `D:\SF2-Port\sf2-il2cpp\ghidra_proj` (program `libil2cpp.so`), `ghidra_scripts\ExportDecompiled.java` |
| Il2CppDumper output | `D:\SF2-Port\sf2-il2cpp\dump\` (`script.json` gives method addresses, `dump.cs`) |
| Game data (decrypted) | `D:\SF2-Port\sf2-data\combat\`: `moves.xml`, `models\`, `animations\`, `tactics\`, `config\` (`internalSettings.xml`, `CharacterProgress.xml`, ...) |
| AES key (local only) | `D:\SF2-Port\sf2-data\keys\content_aes.json` |
| **Port source** | `D:\SF2-Port\sf2-roblox\` (`README.md` has detailed faithfulness notes for every phase) |

The RAID and CLANS packs are downloaded but deliberately not processed yet (the user's choice). The user still needs to delete `D:\SF2-RE` by hand.

## Port layout (`D:\SF2-Port\sf2-roblox`)

**Tools** (run with `python -I`):
- `tools\convert.py <combat> <out>` builds `out\Rigs\Shadow.lua` and the viewer animations.
  - The rig has nodes (`col` flag), edges, `edgeInfo` (Collisible, Radius, Margins, BodyPart), capsules and triangles.
- `tools\compile_moves.py <combat> <out> Shadow` builds `out\MoveSet_Shadow.lua` (128 moves for the fists loadout) and `out\Anims\*.lua`.
  - It emits conditions, attack intervals (parts, hits, damage, impulse, ignores), transitions, mirror, SetDirection (From/To or impulse), `physics`, and Health/PhysicsFrameNumber/Hit conditions.
- `tools\jumptest.luau` is a Studio harness for scripted inputs.

**Runtime** (`src\SF2\*.lua`, installed to `ReplicatedStorage.SF2`):

| Module | Role |
|---|---|
| `AnimClip` | Keyframe loading; B-spline sampling, MidFrames+1 ticks per keyframe |
| `Fighter` | Verlet physics, cloth, ragdoll mode, `applyImpulse`, `com` |
| `Renderer` | Capsules (cylinder + 2 balls) and an EditableMesh for triangles; 40 units = 1 stud |
| `KeyBuffer` | Port of ModelController / KeyData |
| `MoveEngine` | Events → conditions → priority, plus start / mirror / align / transitions / physics moves |
| `Combat` | Strikes, block, crit, damage, hit events |

Scripts: `src\SF2Fight.client.lua` is the playable client (→ `StarterPlayerScripts.SF2Fight`). `SF2Viewer.client.lua` is the Phase 2 viewer and is disabled in Studio.

**Install into Studio:**
1. A local static server must be running: `python -I -m http.server 8765 --bind 127.0.0.1` in `D:\SF2-Port\sf2-roblox`. The place has HttpEnabled.
2. With Studio in **Edit** mode (stop Play first), set each ModuleScript's `.Source` from `http://127.0.0.1:8765/src/SF2/<name>.lua` and `/out/...`.
3. Add any missing `Data.Anims` modules.

The Studio place is the published "SF2" place (placeId 86520858545174); Studio ids change per session, so list them first. Headless tests clone `ReplicatedStorage.SF2` into `SF2Test`, overwrite sources over HTTP, and run ticks. `loadstring` is unavailable, so test code is pasted inline. The server datamodel during Play can also run tests (clone into ServerStorage).

**Controls:**
- A/D move. Forward means towards the opponent, judged per move.
- W up, S down, J/Z punch, K/X kick.
- Dummy modes: 1 stand, 2 punch, 3 kick, 4 sweep, 5 rush.

## Phase status

**Phase 0–2: done.** Decompile, data, specs, and rig/animation playback. Timing was verified against the phone.

**Phase 3, moves engine: done** (playtested and accepted). Rules recovered from the binary:
- **Key matching** (`KeyData.CENALFGNMKJ` → `OFABBFOGEAK`): each move's tap and hold lists must be **contained** in the input as a multiset; Priority then picks.
- **Input buffer:**
  - Taps keep the last 2 and clear after more than 14 idle ticks.
  - The 30-tick reset clears only the held/released lists.
  - Nothing is consumed when a move starts.
- **Directions:**
  - The buffer stores screen directions (Left/Right).
  - Each candidate maps Forward/Back using the facing it would have after its own SetDirection (`InfoAnimation.BAHFNIPBBHD`).
  - Keyboard adapter: a 3-tick diagonal grace window; letting go of one key of a diagonal slides to the other direction without a tap.
- **Mirror** (`ModelAnimation.NGILHAOFGEA`): when MirrorNode NHeel_1 and its partner are in the opposite order in the fighter vs the animation's keyframe 2, swap all `_1`/`_2` node pairs for that move.
- **Align:** the new move's pivot node goes onto that **same node's current position**.
- **Transitions:** `FrameShift` starts at the old move's keyframe + shift + 1 (HeavyPunch → DoublePunch).

**Phase 4, physics / strikes: mostly done.** Last turn's falls and ragdoll were **not yet hand-tested by the user**; that is the open question.
- **Body collision:** there is none. The original has no body push (confirmed on the phone: you can walk through the opponent).
- **Strikes** (`Model.DJIFEKKEMGN` → `ModelCollision` → `Model.HKFEABKNICO`):
  - AttackingParts edges are tested against the target's 13 Collisible edges with Margin-trimmed endpoints, using the original's exact capsule test (`PKHLGDMJPMF.MAINPDNFMCC`, slightly more generous than true segment distance).
  - Mirrored moves swap `_1`/`_2` in AttackingParts names (fixed 2026-10-20; before, attacks after a foot switch tested the wrong limb).
  - Strike order alternates each tick and only one fighter can land per tick (`Combat.exchange`).
  - An interval lands at most once; Invulnerable intervals are checked.
  - Blocked = target inside a Block interval. Idle and steps are Block intervals, i.e. passive block.
  - The target gets a Hit event named from the interval's `<Hit Name>`; reaction moves (HighHit, MiddleBlock 520 > Hit 500, ...) are pure data.
- **Crit:** unblocked hits only, chance 0.0001 × CriticalChance (starting attribute 1000 = 10%). Crits drive the `*HitFall` moves.
- **Damage:** interval Damage × crit 2^(0.0001 × 5850) × block 2^(0.0001 × −23219). The attack-vs-defense curve (`GameUtils.NADKBDJLFIL` / `CGOAEEIACCA`, which needs items and levels) is set to 1.
- **Shock** (`Model.LMGIFKHIHJD`, settings `<Shock>` parsed by `PFOFJCIOLOG`): a flag separate from Critical, and it also drives `*HitFall` moves.
  - Unblocked head hits roll 0.0001 × ShockHeadHitChance (2500) × damage/DamageConverter (1), i.e. ~3% for a 0.12 hit. Ported (2026-10-20).
  - The 999 damage threshold and the Shock state effects are not ported.
- **Ragdoll** (`Physics="1"` moves PhysicalFall / GroundHit / Lying, then Standup or StandupBack):
  - PhysicalFall triggers on a hit with health ≤ 0, or during an Unstable interval outside a Block interval.
  - The impulse is split by contact position along the hit edge and divided by mass (`CPGONFFGAHM.HKFEABKNICO`).
  - The rest of the chain runs on EveryFrame events with COM / Floor / `Frame="Previous"` distances and PhysicsFrameNumber.
  - Fixed 2026-10-20: Previous used to equal current at condition time, so Lying → Standup fired 1 tick after landing.
    - The original recomputes COM once per tick after physics, and its conditions run before physics. So Previous is the tick before last.
    - Ground → Standup now takes 9–60 ticks, depending on the slide. The gameplay video shows ~0.2–0.3 s for light knockdowns.
  - Port deviations: skeleton↔macro edges are skipped in ragdoll (they explode otherwise), plus one extra floor clamp.
- Sparring hack: health refills when a fighter stands up.

**Phase 4 remaining:**
- the user's re-test of standup delay and head hits after the 2026-10-20 fixes
  - Open question: the jab (HighPunch) lands at shoulder height, so it hits EChest/EStomach, never EHead. This is geometrically consistent with the anims, but needs checking against the phone.
- throws (Throw moves and ThrowFall)
- wall hits (CanWallHit, WallHitFall)
- sounds and effects (Actions)
- velocity/rotation actions
- the full damage formula once items/levels exist

**All weapons: done (2026-10-20).** All 218 weapon items (every act, Interlude, Underworld, raid sets, events, weekly offers, enemy-only weapons) are in the place: `Data.Arsenal` (catalog by group), `Data.WeaponRigs` (weapon parts appended to `Rigs.Shadow`), `Data.MoveLib` (all moves with their Locks), read through `SF2.Arsenal`. A collapsible, tabbed menu in `SF2Fight` picks them for you or the dummy. Build steps, the test and the one physics deviation are in the port README ("Weapons (the whole arsenal)"). Chain and segmented weapons (kusarigama, nunchaku, knobsticks, composite sword, scythe and spear, power fists) use the weapon's extra animation slots. The edge constraint and the floor now follow the decompile exactly (README: "Weapon animation slots", "Edge constraint", "Floor"). Still missing: projectiles, so the super slash of Tonfa Guns, Rifle, Musket and the Glaivebows does nothing yet. To install generated files, `out\manifest.txt` lists them for a batched HttpService loader. The Studio place is now the published "SF2" place (placeId 86520858545174); it needs Game Settings > Security > "Allow Mesh / Image APIs" (EditableMesh). The weapon damage stat isn't applied yet (needs the damage curve).

**Phase 5, AI: not started.** `ModelAi` plus the tactic tables (`tactics\*.bin`, bzip2, format in `specs\tactics-binary.md`). It feeds simulated keys into the same KeyBuffer; the AI injects KeyData via `Model.CBGCMJCJJKP`.

**Phase 6, fight loop: not started.** Rounds, RoundStage/RoundResult conditions (currently evaluated as false), Loss moves, timer.

## Working notes

- Recover names from Beebyte-obfuscated code using log strings, XML attribute strings in parsers, and field use. Generic method instances live outside Root: get the address from `dump\script.json` and decompile it alone with `analyzeHeadless ... -process libil2cpp.so -noanalysis -readOnly -postScript ExportDecompiled.java <rvaFile> <outDir>`. Set `-Djava.io.tmpdir` to `D:\SF2-Port\tmp`.
- File Y points down; the port uses Y up (impulse Y is negated).
- Windows quirks: Git Bash needs `MSYS_NO_PATHCONV=1` for adb paths; Python heredoc string replacement fails on tab-indented Lua (use the Edit tool).
- The user tests in Studio and compares against the game on their phone, so ask them to verify feel and timing against the phone.
