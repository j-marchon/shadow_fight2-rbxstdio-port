# SF2 → Roblox port: START HERE

> **For any model picking this up:** this is the only file you need to read before working. Read the other docs only when a task needs that detail (the "Deep reference" table says which one).
> **When you finish a session, update this file**: rewrite sections 3 and 4, add one line to section 6, and keep the same headings and format. Don't create new status files. Docs under `docs\` are history; leave them alone.

Last updated: **2026-10-22** (every menu screen rebuilt one-to-one from the original layouts; docs rewritten as a handoff)

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

**Where things stand (end of 2026-10-22):** the combat core, AI, perks and the full-game layer are in. Every menu screen was just rebuilt one-to-one from the original's own layouts (the user's top priority). It's committed (`3c2b3e80`, plus this docs commit) and installed in the Studio place. **The place has not been saved to Roblox** (Ctrl+S in Studio), and the user has not playtested the new menus yet.

**Done and committed:**
- **Combat core:** rig, B-spline animation playback, moves engine (key matching, buffer, mirror, align, transitions), strikes, block, crit, shock, ragdoll and standup, all 218 weapons (`Data.Arsenal`/`WeaponRigs`/`MoveLib`), the real attack-vs-defense damage curve.
- **Full-game layer:** hash-based installer; game data as Luau (configs, 594 models, 98 locations, 12 languages); audio (16 Ogg packs, `AudioMap.lua`, `SF2.Sound`); images as palette blobs drawn through EditableImage (`SF2.Images`); fight loop (rounds, stages, timer, KO/timeout); fight screen (HUD, controls, camera, effects, location parallax); profile/save; game flow, training mode, quest scripts and story dialogs; fight rules (`SF2.Rules`); Eclipse mode.
- **AI** (`SF2.AI` + `tools\build_tactics.py` → `out\Tactics`): ported from `ModelAi` (README "AI" section). `tools\tests\ai_test.luau`: 0 errors, ~0.34 ms/tick.
- **Perks** (`SF2.Perks`, a perks.xml interpreter) wired into the fight (README "Perks" section). The AI engagement floor is a deliberate **non-faithful** tweak (`{engage = false}` turns it off).
- **2026-10-22 playtest round** (user report): elbow/knee trigger range, hit-spark frame rate, the loser staying down, round pacing, the wall-jump teleport, tournaments running as 24 separate fights, learnable moves off `CharacterProgress <PerkTree>`, the fight HUD and touch controls, a dev max-out button. Then the `Object="Pivot"` regression (`2a497a86`): body pivot for a condition, the move's own pivot node for an `Align`.
- **The UI, now one-to-one with the original's layouts.** Read the port README's "UI" section before touching any screen.
  - `tools\build_ui.py` turns the dumped Unity layouts (`sf2-assets\ui`, 229 screens) into `out\UI`. `SF2.UI.build(name, parent)` instantiates one as Roblox GUI.
  - **`UI.build` runs Unity's layout system**: Horizontal/Vertical/Grid layout groups, LayoutElement and ContentSizeFitter (UnityEngine.UI's own math), plus masks. It runs once built and again on resize; call `built:relayout()` after showing, hiding or retexting something a group arranges. `UI.setOrder` gives a runtime-instantiated prefab its sibling index, and `find` matches a full path or a path suffix.
  - `SF2.Menus` builds each screen from the prefabs its original scene mounts:
    - **MainMenu chrome on every menu screen:** the top bar (level/XP, coins, gems) and the rolled-up MENU scroll that unrolls in 0.3 s to Dojo/Map/Shop/Profile/Settings.
    - **Dojo:** MainMenu over the 3D dojo. The punching-bag toggle opens the port's arsenal training.
    - **Map:** `StoryMapContainer` zone art; `BattleButton`s at 2·(X, Y) from stages.xml; `InfoBattle` with a content block per battle type; lamps and the act name; drag to change act; Eclipse toggle in `MapButtonsPanel`.
    - **Shop:** `scene_level4_Shop` + `ShopBottomPanel` + recycled `ShopTableViewCell` rows.
    - **Profile:** `scene_level7_Profile` + `ProfileBottomPanel`, with the perk tree as `PerkCell`s and the learnable strikes as `TrickCell`s.
    - **Settings:** `SettingsDialog` over the current screen. Its "Advanced" button holds reset and `MAX OUT (DEV)`.
    - **VS:** `VsScreen`.
    - **End of fight:** `EndFightScreen` + `EndFightContent`, after a win or a loss (Retry on a loss).
  - Deviations, each written up in that README section:
    - The map's difficulty rating is approximated, and the map shows one act at a time.
    - The profile has no 3D backdrop, because its atlases exhaust the EditableImage budget. Its Achievements/Seals/Battle Pass tabs are hidden, and perk descriptions show `?` for their numbers.
    - The end screen doesn't animate its count-up.
    - The shop and fight HUD still use hand placement (`{ layout = false }`).

**Verified in Studio** (install: 3042 entries, 0 failed):
- 2026-10-21: `ai_test.luau` 0 errors; `all_fights.luau` 761 fights / 0 errors / nan=0; perks fire, gate on conditions and expire; wall repulsion and `WallHit`.
- 2026-10-22, after the regression fix: 0 drift in the start stance, no body movement at transitions.
- 2026-10-22, UI: dojo, map (zone 1, Eclipse on), profile (both tabs), shop, settings, and the win and time-up end screens each rendered from the layouts with no console errors. They were opened through the Studio-only hook `PlayerGui.SF2Debug` (see the notes in section 4), because Studio's mouse injection does not reach the game. **No button has been clicked by hand.**

**Not verified yet (needs the user, on the phone or with a real mouse):**
- The new menus: the MENU scroll unrolling, map battle picking + FIGHT!, dragging between acts, the lamps, Eclipse, the profile tabs, settings toggles and language, the shop tabs/buy/attribute flag, a lost fight's Retry. Also placement against the phone.
- The 2026-10-20 standup-delay and head-hit fixes; jab height (HighPunch should hit chest, never head).
- In-game audio (assets may still have been in moderation).
- The elbow's trigger range end to end (it should start at ~130 units pivot-to-pivot up close, not ~208). The harness can't teleport a fighter.
- Written but unexercised:
  - Throws (audited, nothing thrown in Studio).
  - `WallHitFall`.
  - Perk upgrade levels, which default to 1.
  - The perk value expressions `?CurrentFight`, `?CoordX/Y`, `?PlayerAttribute`, `?Aspect`, `?MovesVariable` and `?Abs`, which read 0.

**Known gaps:**
- **Dojo gameplay:** the original's dojo is a free-roam room with a punching bag. The port's is the menu backdrop, with training behind the punching-bag toggle.
- UI deviations listed above (README UI section).
- The shock state's effects (`FrameReduction`, `LooseningDelay`, `Impulse Y`, the `Weapon Fists` + `WeaponDamage 0` pair in `internalSettings <Shock>`).
- Missile/projectile completeness for gun and bow supers. Check `Fight` children before assuming either way.
- Perk visuals (`Perks.lua` header).
- AI: BeginnerCheat, emergency/safe dodges, ThrowTactics, BossAbility, the SetWait modes.
- Elbow/knee hitboxes were to be widened backward; deferred until the trigger range is re-tested on the phone.
- Arena start distance: the data says 200; the user wants it bigger, which would be a deviation (their call).
- Untouched from the user's list: events, dialogue, lore, cutscenes, "special stuff".
- **The EditableImage budget is tight.** A screen that decodes many textures has to recycle them (the shop does) or drop something (the profile dropped its 3D backdrop). Otherwise later atlases and the 3D scene render blank.

## 4. Next steps (in order)

The user's standing priority, in their words: the UI was "the biggest problem", a "full rework completely based on the original, especially in the shop" (now done, pending their playtest). Then the dojo. Then "all the small details (events, dialogue, lore, cutscenes, special stuff)".

1. **Ask the user to playtest the menus** in Studio Play and compare against their phone. Use the list under "Not verified yet". Fix what they report, then ask them to save the place (Ctrl+S).
2. **Dojo**: free roam with a punching bag (gameplay, not UI). The dojo UI is already the original's: MainMenu over the room.
3. **Close the UI deviations worth closing**:
   - The real difficulty rating (decompile `Nekki.SF2.GUI.Map\DifficultyPanel__1117.c` / `InfoBattle__2796.c`).
   - The perk description numbers (from each perk's `<Set>` values).
   - The end screen's count-up (`EndFightContent`).
   - Moving the shop and fight HUD onto the real layout groups.
   - The Achievements tab (`AchievementCell`, `Achievements.xml` is in `out\Xml`).
4. The small details: events, dialogue, lore, cutscenes.
5. Then the older gaps: projectiles, boss abilities, the shock state. For anything left from `docs\FULL_GAME_PLAN.md` steps 9–12 (economy and forge, all modes, story coverage, polish), compare it against the commits first.

**How to work on a UI screen** (the method this port's screens follow):
1. Find what the original scene mounts. Each `sf2-assets\ui\scene__levelN_X.json` root's scene component has a `_MountOnStart` list of prefab names.
2. Print a prefab's tree: `python -I sf2-roblox\tools\ui_tree.py sf2-assets\ui\prefab__<Name>__*.json [depth] [Root/sub/path]`. Set `PYTHONIOENCODING=utf-8` on Windows.
3. Read the controlling script in `sf2-il2cpp\decomp\Root_named\Nekki.SF2.GUI.*\<Class>__N.c`. GUI class names are real, not obfuscated. A prefab's component `fields` in the JSON name which node each script field binds to.
4. Build it with `UI.build`, then fill text and sprites and wire buttons in `Menus.lua` with its helpers: `onClick`, `setText`, `hideAll`, `fmt`, `loc`. Hide what has no system behind it, and write each deviation into the README UI section.

**Notes for driving Studio:**
- Studio ids change per session: run `list_roblox_studios` first. Place: "SF2", placeId 86520858545174.
- Install (Edit mode only; a Play-mode install is discarded):
  1. Regenerate `out\install.txt` with `python -I tools\make_manifest.py`.
  2. Check that the 8765 server answers: `curl -s -o /dev/null -w "%{http_code}" http://127.0.0.1:8765/out/install.txt`. It dies with the session, so start it if needed (section 5).
  3. In Edit, run: `task.spawn(function() _G.SF2InstallDone = tostring(require(game.ServerStorage.SF2Installer:Clone())()) end)`. `SF2Installer` is a ModuleScript that returns a function.
  4. Poll `_G.SF2InstallDone` in a second call.
- **Driving the live menus:** in Play (Client datamodel), call `game.Players.LocalPlayer.PlayerGui.SF2Debug:Invoke("map", "ZONE_1")`. It works for any `Menus.*` function (`profile`, `shop`, `settings`, `endFight`, …). `SF2Game.client.lua` creates the hook only when `RunService:IsStudio()`. Functions can't cross the BindableFunction, so callbacks (e.g. `endFight`'s OK/Retry) arrive as nil.
- Don't `require(SF2.Menus)` inside `execute_luau`. It has its own require cache, so it builds a *second* menu that fights the real one for the EditableImage budget and renders blank.
- `user_mouse_input` still does not reach the game: clicks by coordinates and by instance path both did nothing on 2026-10-22.
- `screen_capture` does show the 3D scene. A location fades in, so wait 2–3 s after switching screens before capturing.
- `all_fights.luau` blocks Studio's main thread for minutes and the MCP plugin disconnects while it runs. It writes to `ServerStorage.TestResult`, so poll that in a separate call.

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
- `screen_capture` shows the UI and the 3D scene (a location fades in over 1–3 s). For exact 3D checks use script queries or `tools\preview_png.py`.

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
