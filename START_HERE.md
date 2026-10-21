# SF2 → Roblox port: START HERE

> **For any model picking this up:** this is the only file you need to read before working. Read the other docs only when a task needs that detail (the "Deep reference" table says which one).
> **When you finish a session, update this file**: rewrite sections 3 and 4, add one line to section 6, and keep the same headings and format. Don't create new status files. Docs under `docs\` are history; leave them alone.

Last updated: **2026-10-21** (reorganized everything into `D:\SF2-Port`; no code changed)

---

## 1. What this is
- A personal, unpublished port of **Shadow Fight 2** (Android v2.46.0, Unity IL2CPP, Beebyte-obfuscated) into **Roblox Studio**. It uses the original game's data and assets and stays as faithful as possible.
- The scope started as combat only and is now the **whole game**: combat, AI, UI, menus, modes, story, sound and effects.
- Online raids, clans and PvP are out, since they need Nekki's servers.
- Method: rules come from the decompiled C (Ghidra) plus the decrypted data. Python generators write Luau modules into `out\`. An installer copies them into the Studio place. Any deviation from the original is written down in `sf2-roblox\README.md`.
- **The user** tests in Studio and compares against the real game on their phone. Ask them to check feel and timing against the phone. They care about usage limits: keep reads targeted, avoid subagents and big workflows unless asked, and commit after each step.

## 2. Layout (`D:\SF2-Port\`)

| Folder | Contents |
|---|---|
| `START_HERE.md` | this file |
| `sf2-roblox\` | **the port** (local git repo, never pushed). `src\SF2\*.lua` = runtime, `tools\*.py` = generators, `tools\tests\*.luau` = Studio tests, `out\` = generated Luau (~85 MB), `README.md` = per-system faithfulness notes |
| `sf2-data\` | decrypted game data. `combat\` (moves.xml, models, animations, tactics, config), `decrypted\`, `extracted_more\`, `apk_assets\`, `index\`. **`keys\`** holds the AES key and the Roblox Open Cloud key (local only; never print or commit them) |
| `sf2-il2cpp\` | `decomp\` (Ghidra C: `Fights\`, `Root_named\`, `funcs\`, `funcs_extra\`), `dump\` (Il2CppDumper: `script.json`, `dump.cs`, `DummyDll\`), `ghidra_proj\`, `ghidra_scripts\ExportDecompiled.java`, `index\class_map.tsv` |
| `sf2-assets\` | extracted textures (`tex\`), `atlas.json`, audio clips and packs, `audio_uploads.json`, fonts, UI layout JSON for 229 screens (`ui\`) |
| `docs\` | history and reference: `HANDOFF.md` (combat-phase notes), `RECONSTRUCTION_PLAN.md`, `FULL_GAME_PLAN.md` (the 12-step full-game plan), `DECOMPILE_INDEX.md`, `DATA_INDEX.md`, `specs\` (binary/XML format specs and validators) |
| `apk\` | original `base.apk` and `split_config.arm64_v8a.apk` |
| `tmp\` | Ghidra temp dir (`-Djava.io.tmpdir`) |
| `_archive\SF2-RE\` | an old duplicate of `libil2cpp.so` and `global-metadata.dat`. Not needed; the user can delete it |

Outside this folder, kept in place on purpose, since moving them breaks absolute venv/install paths: `D:\Tools\` (Ghidra 12.1.4, Il2CppDumper, apktool, jadx, adb `platform-tools`, `venvs\unitypy`).

## 3. Current status

**Done and committed** (`git log` in `sf2-roblox`; the last commit is `43d2e3c`):
- **Combat core:**
  - rig, B-spline animation playback, moves engine (key matching, buffer, mirror, align, transitions)
  - strikes, block, crit, shock, ragdoll and standup
  - all 218 weapons (`Data.Arsenal`/`WeaponRigs`/`MoveLib`)
  - the real attack-vs-defense damage curve
- **Full-game layer:**
  - hash-based installer
  - game data as Luau (configs, 594 models, 98 locations, 12 languages)
  - audio uploaded (16 Ogg packs, `AudioMap.lua`, `SF2.Sound`)
  - images as palette blobs drawn through EditableImage (`SF2.Images`)
  - UI built from the original layouts (`SF2.UI`/`Widgets`)
  - fight loop (rounds, stages, timer, KO/timeout)
  - fight screen (HUD, controls, camera, effects, location parallax)
  - profile/save
  - menus: dojo, map, battle info, VS, rewards, shop, profile, settings
  - game flow, training mode, quest scripts and story dialogs
  - fight rules (`SF2.Rules`), Eclipse mode
- **AI** (`SF2.AI` + `tools\build_tactics.py` → `out\Tactics`):
  - ported from `ModelAi`; details in the README's "AI" section
  - `tools\tests\ai_test.luau`: 0 errors, ~0.34 ms/tick

**In progress, uncommitted, and not verified in Studio:**
- `src\SF2\AI.lua`: an "engagement floor" (`AI.ENGAGE`, `engageFloor`, `lastAttack` tracking) so two table AIs don't stall in ExpectedWait.
  - This is a deliberate **non-faithful** tweak; it can be turned off with `{engage = false}`. It's documented in a code comment but not yet in the README.
- `src\SF2\Perks.lua` (new, untracked): a perks.xml interpreter (PerkEvent/Condition/Action, mods, value expressions).
  - `Stages.lua` references it.
  - The "Not ported" list is at the top of the file.

**Not verified by the user yet:**
- The 2026-10-20 standup-delay and head-hit fixes, plus jab height (HighPunch hits chest, never head; check against the phone).
- In-game audio (assets may still have been in moderation).

**Known gaps:**
- Throws and ThrowFall; wall hits (CanWallHit, WallHitFall); the shock 999 threshold and its effects.
- Missile/projectile completeness for gun and bow supers. Check `Fight` children before assuming either way.
- Perk visuals (see the Perks.lua header).
- AI: BeginnerCheat, emergency/safe dodges, ThrowTactics, BossAbility, the SetWait modes.
- The old `SF2Fight.client.lua` may still be the Arsenal-only client. Check what `Game`/`FightScreen` wire up before rewriting it.
- `sf2-roblox\PORT_STATUS.md` is **stale**: it predates most of the commits above. Ignore it.

## 4. Next steps (in order)
1. Finish and verify the uncommitted work. The path fixes from the reorganization (8 tools, README, PORT_STATUS) are uncommitted too; commit them separately first:
   - install into Studio and run `tools\tests\ai_test.luau` and `all_fights.luau`
   - wire up and test Perks
   - add the engage floor to the README's "Approximated" list
   - commit
2. Ask the user to playtest a full fight flow (menu → map → fight → rewards) and the open combat checks above. Fix what they report.
3. Then work through the known gaps: throws, wall hits, projectiles, boss abilities. For anything left from `docs\FULL_GAME_PLAN.md` steps 9–12 (economy and forge, all modes, story coverage, polish), compare it against the commits first.
4. Ask the user to save the place to Roblox (Ctrl+S in Studio).

Note: no local servers are running now (the old ones were stopped for the move). Start the 8765 server (section 5) before any install.

## 5. How to work

**Build** (from `sf2-roblox`, `python -I`):
- `tools\convert.py` (rig/anims), `compile_moves.py`, `build_arsenal.py`, `build_game.py`, `build_models.py`, `build_images.py`, `build_ui.py`, `build_tactics.py`, `build_audio.py`
- `tools\make_manifest.py` writes `out\install.txt`
- UnityPy tools (`extract_assets.py`, `dump_ui.py`) run with `D:\Tools\venvs\unitypy\Scripts\python.exe -I`

**Install into Studio:**
1. Serve the port: `python -I -m http.server 8765 --bind 127.0.0.1 --directory D:/SF2-Port/sf2-roblox` (run it in the background).
2. In **Edit** mode, run `ServerStorage.SF2Installer` (`tools\install.luau`) with `task.spawn`, because a big install times out the MCP call.
3. Place: the published "SF2" place, placeId **86520858545174**. It needs HttpEnabled and "Allow Mesh / Image APIs".
4. Studio ids change per session, so list the studios first.

**Test:**
- Headless: clone `ReplicatedStorage.SF2` into `ServerStorage.SF2Test` and run the `tools\tests\*.luau` code inline. `loadstring` is unavailable.
- `screen_capture` shows UI but not 3D. Check 3D with script queries or `tools\preview_png.py`.

**Decompile lookup:**
- `docs\DECOMPILE_INDEX.md` and `sf2-il2cpp\index\class_map.tsv` map obfuscated names to roles.
- A generic method missing from `decomp\`: get its address from `dump\script.json`, then run `analyzeHeadless ... -process libil2cpp.so -noanalysis -readOnly -postScript ExportDecompiled.java <rvaFile> <outDir>` with `-Djava.io.tmpdir=D:\SF2-Port\tmp`.

**Quirks:**
- File Y points down, port Y points up (impulse Y is negated). 40 units = 1 stud.
- Git Bash needs `MSYS_NO_PATHCONV=1` for adb paths.
- Edit tab-indented Lua with the Edit tool, not with Python string replacement.
- Generated modules are split at ≤180 KB, byte-safe.

**Deep reference** (read only when needed):

| Need | Read |
|---|---|
| Why a system works the way it does / deviations | `sf2-roblox\README.md` (per-system sections) |
| Combat rules recovered from the binary | `docs\HANDOFF.md` "Phase status" |
| File formats | `docs\specs\*.md` |
| Which data file holds what | `docs\DATA_INDEX.md` |
| Remaining full-game scope | `docs\FULL_GAME_PLAN.md` steps 8–12 |

## 6. Session log (one line per session, newest last)
- 2026-10-19/20: RE, data, specs, rig/anims, moves engine, strikes, ragdoll, all weapons.
- 2026-10-21 (overnight): full-game port. Data pipeline, audio, images, UI, fight loop and screen, menus, profile, quests, rules, Eclipse, AI. Stopped at the usage limit with AI tweak + Perks uncommitted.
- 2026-10-21: reorganized everything into `D:\SF2-Port`, fixed hardcoded paths, wrote this file, moved the port folder after stopping the old servers. No code changed.
