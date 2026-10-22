# SF2 → Roblox port: START HERE

> **For any model picking this up:** this is the only file you need to read before working. Read the other docs only when a task needs that detail (the "Deep reference" table says which one).
> **When you finish a session, update this file**: rewrite sections 3 and 4, add one line to section 6, and keep the same headings and format. Don't create new status files. Docs under `docs\` are history; leave them alone.

Last updated: **2026-10-22** (every menu screen rebuilt from the original's layouts, with Unity's layout groups run)

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
| `.git`, `.gitignore` | **one git repo for the whole folder**, remote `origin` = private GitHub `j-marchon/shadow_fight2-rbxstdio-port` (branch `main`). Everything is tracked (APKs via Git LFS) except what `.gitignore` lists: `sf2-data\keys\` (secrets; never push), `sf2-il2cpp\ghidra_proj\` (2.3 GB database, over GitHub's limits; rebuild from `libil2cpp.so` if lost), the Ghidra installer zip in `_archive`, `tmp\`, and `sf2-standalone\` (the user's separate Antigravity copy). It holds copyrighted game content: **the repo must stay private**. Push big additions in batches under 2 GB |
| `sf2-roblox\` | **the port** (its old standalone history is merged into the root repo). `src\SF2\*.lua` = runtime, `tools\*.py` = generators, `tools\tests\*.luau` = Studio tests, `out\` = generated Luau (~85 MB), `README.md` = per-system faithfulness notes |
| `sf2-data\` | decrypted game data. `combat\` (moves.xml, models, animations, tactics, config), `decrypted\`, `extracted_more\`, `apk_assets\`, `index\`. **`keys\`** holds the AES key and the Roblox Open Cloud key (local only; never print or commit them) |
| `sf2-il2cpp\` | `decomp\` (Ghidra C: `Fights\`, `Root_named\`, `funcs\`, `funcs_extra\`), `dump\` (Il2CppDumper: `script.json`, `dump.cs`, `DummyDll\`), `ghidra_proj\`, `ghidra_scripts\ExportDecompiled.java`, `index\class_map.tsv` |
| `sf2-assets\` | extracted textures (`tex\`), `atlas.json`, audio clips and packs, `audio_uploads.json`, fonts, UI layout JSON for 229 screens (`ui\`) |
| `docs\` | history and reference: `HANDOFF.md` (combat-phase notes), `RECONSTRUCTION_PLAN.md`, `FULL_GAME_PLAN.md` (the 12-step full-game plan), `DECOMPILE_INDEX.md`, `DATA_INDEX.md`, `specs\` (binary/XML format specs and validators) |
| `apk\` | original `base.apk` and `split_config.arm64_v8a.apk` |
| `tmp\` | Ghidra temp dir (`-Djava.io.tmpdir`) |
| `_archive\SF2-RE\` | an old duplicate of `libil2cpp.so` and `global-metadata.dat`. Not needed; the user can delete it |

Outside this folder, kept in place on purpose, since moving them breaks absolute venv/install paths: `D:\Tools\` (Ghidra 12.1.4, Il2CppDumper, apktool, jadx, adb `platform-tools`, `venvs\unitypy`).

## 3. Current status

**Done and committed** (`git log`; the last commit is `15005b3b`):
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
  - the UI builder: the original layouts instantiated as Roblox GUI (`SF2.UI`), now running Unity's Horizontal/Vertical/Grid layout groups, LayoutElement and ContentSizeFitter. Every menu screen is built from the prefabs its original scene mounts (see the port README's UI section)
  - fight loop (rounds, stages, timer, KO/timeout)
  - fight screen (HUD, controls, camera, effects, location parallax)
  - profile/save
  - menus, all from the original layouts: MainMenu chrome (top bar + roll-down section scroll), dojo, map (StoryMapContainer + InfoBattle + lamps), shop, profile (perk tree, strikes), settings dialog, VS, end-of-fight screen (win and loss)
  - game flow, training mode, quest scripts and story dialogs
  - fight rules (`SF2.Rules`), Eclipse mode
- **AI** (`SF2.AI` + `tools\build_tactics.py` → `out\Tactics`):
  - ported from `ModelAi`; details in the README's "AI" section
  - `tools\tests\ai_test.luau`: 0 errors, ~0.34 ms/tick

- **Perks** (`SF2.Perks`, a perks.xml interpreter: PerkEvent/Condition/Action, mods, value expressions):
  - the AI engagement floor and the interpreter itself are committed (`342acc8`), and the interpreter is now wired into the fight — see the README's "Perks" section for the event table and the hit stages
  - the engagement floor is a deliberate **non-faithful** tweak (`{engage = false}` turns it off), written up in the README's "Approximated / guessed" list

**Installed and verified in Studio on 2026-10-21** (install: 3042 entries, 0 failed):
- `tools\tests\ai_test.luau`: **0 errors**, 0.445 ms/tick, 2-0 by knockout over 6000 ticks.
- `tools\tests\all_fights.luau`: **761 fights, 0 errors, nan=0**, 575 decided, and 127 of them had perks attached. It used to fail 104 fights: an Eclipse battle's fights have no warriors of their own and the harness did not fall back to `Stages.baseFight` the way `Game.fightAt` does. Fixed in the harness, so those fights are now actually covered.
- **perks fire**: `PERK_BEGINNER` driven end to end (event filter → `?PlayerParameter[Enemy].Health` condition → `SetHit Block="0"`, which applied only with the player at 0.30 health, not at 1.00), a `ModAttributes` mod applied and expired on its frame count, and `EndStance` cleared a mod through the `EndStanceClear` template. Details in the README's Perks section.
- **wall repulsion and wall hits**: pivots stayed inside the arena, and `WallHit` played once two fighters traded unblocked hits at a wall. Note an idle fighter blocks (idle is a Block interval) and block reactions have no `CanWallHit`, so a victim standing still never wall-hits.
- One fix came out of this: the first wiring applied the health change **before** `PostHit` and consumed no `SetHit` edits from it, which silently disabled `PERK_ENLIGHTENMENT` (survive a lethal hit) and `PERK_ANTI_SHOCK` (149 uses, the most common perk). All three hit stages now run before the health comes off.

**Written but still not verified:**
- perk upgrade levels default to 1 (the player's own levels are not read from the profile).
- **throws** were audited against the engine and look complete without new code (the thrower's `PlayAnimation Player="Enemy"` starts the victim's `ThrowForwardV`); nothing has been thrown in Studio.
- `WallHitFall` has not been seen; its window is only 6–8 frames.
- The perk value expressions `?CurrentFight`, `?CoordX/Y`, `?PlayerAttribute`, `?Aspect`, `?MovesVariable` and `?Abs` read 0, so a perk that positions something in the arena does nothing. The list is in the `Perks.lua` header.
- **condition targets fixed** (not separately verified beyond the sweep): `ModExists`, `Player` and `Name` carry `Player="Enemy"` in the data and were all being asked about *me*. `compile_moves.cond()` now emits `player=` and `MoveEngine.check` resolves it, so `out\MoveLib` was rebuilt with `tools\build_arsenal.py`.

**From the 2026-10-22 playtest round** (user report; all committed):
- Fixed: elbow/knee trigger range, hit/block effect frame rate, the loser standing up at round end, round start/end pacing, the wall-jump teleport, tournaments running as 24 separate fights, the learnable moves (Double Sweep and friends, unlocked off `CharacterProgress <PerkTree>`), the fight HUD (vertical health bars, misplaced elements, control size, controls hidden on PC, the duplicating joystick), and a `MAX OUT (DEV)` button in settings.
- One regression came out of that round and is fixed (`2a497a86`): `Object="Pivot"` means two different points. For a **condition** it is the body pivot (397 of the 405 `<Distance>` elements starting at Pivot end at `Nodes/NPivot`), but for **placing** a move it is the move's own pivot node — 793 of the 1080 `<Align>` blocks position on `Object="Pivot"` and 737 of those align a heel. Resolving both to NPivot snapped the body by the heel offset on every transition: fighters slid at round start and jumped mid-attack. `MoveEngine.anchor` now resolves it by context (NPivot only when a candidate move is passed). Verified: 0 drift in the start stance, no body movement at any transition, ai_test 0 errors / 0.337 ms/tick.
- **The shop is rebuilt from the original's own layouts** (`15005b3b`): `scene_level4_Shop` + `ShopBottomPanel` + `ShopTableViewCell` through `UI.build`, replacing five tabs down the left edge and a grid of coloured boxes. Four bugs had to be fixed first, two of which affect **every** menu screen — see the port README's new "UI" section. Still only partly driven: the tab buttons, the purchase and the attribute flag are wired but unclicked.

**The full menu UI port** (2026-10-22, after `15005b3b`): `UI.build` runs Unity's layout groups, and dojo, map, profile, settings and the end-of-fight screen are rebuilt from their prefabs; the shop now uses the MainMenu chrome. Installed (0 failed) and each screen rendered in Studio with no errors, driven through a Studio-only hook (`PlayerGui.SF2Debug`) because mouse injection still doesn't reach the game. Nothing was clicked by hand.

**Not verified by the user yet:**
- The new menus against the phone: the MENU scroll unrolling, map drag between acts, battle picking and FIGHT!, the profile tabs, settings toggles, and the loss screen's Retry.
- The 2026-10-20 standup-delay and head-hit fixes, plus jab height (HighPunch hits chest, never head; check against the phone).
- In-game audio (assets may still have been in moderation).
- The elbow's new trigger range end to end: the harness cannot teleport a fighter (assigning `engine.x` does not move one — the engine re-derives position from the pose), so only the resolution semantics were checked, not the threshold. Up close the elbow should start at ~130 units pivot-to-pivot, not ~208.

**Known gaps:**
- The shock state's effects (`FrameReduction`, `LooseningDelay`, `Impulse Y`, and the `Weapon Fists` + `WeaponDamage 0` pair in `internalSettings <Shock>`). The 999 damage threshold is reachable only by perks, so it stays unported.
- Missile/projectile completeness for gun and bow supers. Check `Fight` children before assuming either way.
- Perk visuals (see the Perks.lua header).
- AI: BeginnerCheat, emergency/safe dodges, ThrowTactics, BossAbility, the SetWait modes.
- The old `SF2Fight.client.lua` may still be the Arsenal-only client. Check what `Game`/`FightScreen` wire up before rewriting it.
- UI deviations still open (listed in the port README's UI section): InfoBattle's difficulty is approximated, the map shows one act at a time, the profile has no 3D backdrop and hides Achievements/Seals/Battle Pass, perk descriptions show `?` for their values, the end screen has no count-up. The shop and fight HUD still use their hand placement (`{ layout = false }`); they could move to the real layout groups.
- **The dojo is an AI-fight panel**, not the original's free-roam room with a punching bag. The user asked for this explicitly.
- Elbow/knee hitboxes were to be widened backward; deliberately deferred until the trigger-range fix is re-tested on the phone.
- Arena start distance: the data says 200 for the arena. The user wants it bigger, which would be a deviation — their call.
- Still untouched from the user's list: events, dialogue, lore, cutscenes, "special stuff".
- The EditableImage budget is tight on this place. Any new screen that decodes many textures at once has to recycle them (see the port README's UI section) or it will blank out atlases loaded after it.

## 4. Next steps (in order)

The user's standing priority, in their words: the UI was "the biggest problem", a "full rework completely based on the original, especially in the shop"; then the dojo; then "all the small details (events, dialogue, lore, cutscenes, special stuff)". The shop is the first screen done that way and is the template for the rest.

1. Ask the user to playtest the menus (installed, place **not saved** — Ctrl+S in Studio to keep it): the MENU scroll, map (pick a battle, FIGHT!, drag to the next act, lamps, Eclipse), profile tabs, settings, shop tabs/buy/flag, and lose a fight to see Retry. Compare placement against the phone.
2. **Dojo**: free roam with a punching bag, not the AI-fight panel. The dojo UI is now just the MainMenu over the 3D room, as in the original.
3. Close the UI deviations worth closing (README UI section): the real difficulty rating (find it in `DifficultyPanel`/`InfoBattle` decompile), perk description values, the end screen's count-up, and moving the shop/fight HUD onto the layout groups.
4. Then the small details the user listed: events, dialogue, lore, cutscenes.
5. Then the older known gaps: projectiles, boss abilities, the shock state. For anything left from `docs\FULL_GAME_PLAN.md` steps 9–12 (economy and forge, all modes, story coverage, polish), compare it against the commits first.
6. Ask the user to save the place to Roblox (Ctrl+S in Studio).

Note on the 8765 server: it is not a service — it dies with the session. Check it (`curl -s -o /dev/null -w "%{http_code}" http://127.0.0.1:8765/out/install.txt`) and start it before any install.
Note on the headless tests: `all_fights.luau` blocks Studio's main thread for minutes and the MCP plugin disconnects while it runs. It writes to `ServerStorage.TestResult`, so poll that in a separate call once Studio answers again, rather than waiting inside the call.
Note on driving the UI: in Play, `game.Players.LocalPlayer.PlayerGui.SF2Debug:Invoke("map", "ZONE_1")` (any `Menus.*` function, Studio only) drives the live menus; functions can't cross the BindableFunction, so callbacks such as `endFight`'s OK arrive as nil. Install needs **Edit** mode (a Play-mode install is discarded), so stop Play first. `execute_luau` has its **own require cache**, so `require(SF2.Menus)` there builds a *second* `SF2Menu` ScreenGui beside the running game's instead of driving it — and the duplicate renders blank, because the two module copies fight over the EditableImage budget. To exercise a real screen, click it with `user_mouse_input`; to check structure only, build in a fresh instance and read the tree rather than the pixels. `user_mouse_input` stopped responding partway through the 2026-10-22 session and did not recover; restarting Play did not help.

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
- 2026-10-21: wired the perks interpreter into the fight (hit stages in `Combat.strike`, animation events in `MoveEngine`, stage/tick/MagicCharged in `Fight`), regenerated `out\install.txt`, documented Perks and the AI engagement floor in the port README. Nothing installed or run: no Studio instance was connected. Then wall repulsion (so `WallHit`/`WallHitFall` can fire), the `Player="Enemy"` fix for the ModExists/Player/Name conditions with `out\MoveLib` rebuilt, and a static audit of throws. Still nothing run in Studio.
- 2026-10-21 (Studio session): installed into the SF2 place and verified for the first time. ai_test 0 errors; all_fights 761 fights / 0 errors (the 104 Eclipse failures were a harness gap, now fixed and covered); perks shown to fire, gate on conditions and expire; wall repulsion and WallHit confirmed. Fixed the hit-stage order so all three perk stages run before the health comes off, which the first wiring had broken for PERK_ENLIGHTENMENT and PERK_ANTI_SHOCK.
- 2026-10-22 (playtest round 1): worked through the user's 13-item report — elbow/knee range, hit-spark frame rate, the loser staying down, round pacing, wall-jump teleport, 24 separate tournament fights, learnable moves off the `<PerkTree>`, the fight HUD and touch controls, and a dev max-out button. Then fixed the regression that came out of it: `Object="Pivot"` is the body pivot for a condition but the move's own pivot node for an `Align`, and collapsing the two made fighters slide and jump on every transition.
- 2026-10-22 (shop): rebuilt `Menus.shop` from `scene_level4_Shop`, `ShopBottomPanel` and `ShopTableViewCell`. Four bugs blocked it: the Canvas zero-rect/1e-7-scale pair, `ZIndexBehavior` left on Global while `UI.build` stacks by sibling index (this one also affected every other menu screen), a failed EditableImage caching as a permanently missing texture, and all 81 rows decoding at once exhausting that budget so the tab atlas came back blank. Wrote the port README's UI section as the template for the remaining screens. The tab buttons, the purchase and the attribute flag are wired but were never clicked — `user_mouse_input` stopped responding.
- 2026-10-22 (full UI): `UI.build` now runs Unity's layout groups (HorizontalOrVerticalLayoutGroup math, Grid, LayoutElement, ContentSizeFitter; masks; suffix `find`). Rebuilt the MainMenu chrome (top bar, roll-down MENU scroll), dojo, map (StoryMapContainer zones with BattleButtons at 2·(X,Y), InfoBattle contents per battle type, lamps, drag between acts), profile (PerkCell/TrickCell, InfoPanel, UserPerksPanel), settings dialog and the end-of-fight screen (also after a loss, with Retry). All rendered in Studio with no errors through a Studio-only `SF2Debug` hook; the profile dropped its 3D backdrop because its atlases exhaust the EditableImage budget.
