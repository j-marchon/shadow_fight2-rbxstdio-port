# SF2 → Roblox port: START HERE

> **For any agent picking this up (Claude Code, Antigravity, Codex, ...):** this is the only file you need to read before working. Read the other docs only when a task needs that detail (the "Deep reference" table says which one).
> **Update this file with every change, in the same commit, not only at session end** (the rules are in [`AGENTS.md`](AGENTS.md); `CLAUDE.md` and `GEMINI.md` point there). Rewrite sections 3 and 4 and the "Last updated" line, keep one line per session in section 6, update `sf2-roblox\README.md` for any system that changed, and keep the same headings and format. Don't create new status files. Docs under `docs\` are history; leave them alone.

Last updated: **2026-10-22** (act screen matched to the user's screenshots; the shop shows only reached acts' items and locks Ranged/Magic; docs made agent-neutral)

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
| `AGENTS.md` | the working rules for every agent (`CLAUDE.md`, `GEMINI.md` point to it) |
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

**Where things stand (end of 2026-10-22):** the combat core, AI, perks and the full-game layer are in. Every menu screen is built from the original's own layouts. Two rounds of the user's feedback are applied:
- the first playtest: enemy health bar, VS portraits, cropped buttons, MENU roll, map crop, fonts, K/M numbers;
- a pass against ~20 screenshots of the real game: text sizing, top-bar energy, map details and Eclipse sun, a snapping shop with the original's panels, profile grid and real perk numbers, the settings and advanced-settings layouts, and the end screen's bonus lines.

Then (same day, later session) the user asked to finish the whole port, section by section. **Section 1 is done: the campaign runs on the original's quest scripts** (port README "Quests and story"):
- the eight act stories were in the APK all along (eight TextAssets named `story`, two `core`; the old extraction kept one per name). Now extracted, decrypted and built into `out\Xml\qx_*`;
- `SF2.Quests` is a port of the QuestsManager (priority queue, event snapshots, FightEnter/ChangeTab interception, the value language, dialogs with their buttons and colours, ShowBattle/HideBattle, Activate, Run, AttachQuestFile, ...);
- the map shows what the scripts put on it; acts open, bosses unlock and the tutorial runs as in the original. The save is version 2 (battle records, per-fight win/loss counts, tutorial step); old saves are migrated.

**Section 3 (economy) is in progress:** energy, deliveries and shop item visibility are in (README "Economy"); the forge/enchantments, item sets and the reward currencies are next. The user stopped the session here on purpose, to continue with another agent.

**The user's answers (2026-10-22), now in the code:** the game opens on the dojo (unchanged); the shop shows the acts reached so far and none later, and Ranged/Magic stay empty with "Defeat Lynx/Hermit to unlock ..." until then; items stay usable while being upgraded; the act screen is a dark brown grainy screen with the title in pale gold (matched to their two screenshots).

**Section 2 is done: the dojo** is the original's live punching-bag fight under the menu, with the disciple toggle and the tutorial's dojo steps (README "The dojo").

All of it is committed and installed in the Studio place. **The place has not been saved to Roblox** (Ctrl+S in Studio), and the user has not re-checked the latest rounds.

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
    - **Dojo:** MainMenu over the live dojo fight (the punching bag, the original's `DojoScene`). The corner toggle swaps bag and disciple once the disciple has joined; the arsenal training is a dev button in advanced settings.
    - **Map:** `StoryMapContainer` zone art, with `BattleButton`s at 2·(X, Y) from stages.xml and named underneath. `InfoBattle` shows a content block per battle type, with fight indicators. The lamps and the act name sit in the bottom strip; dragging changes act. The Eclipse sun/eclipse toggle is top right.
    - **Shop:** `scene_level4_Shop` + `ShopBottomPanel` + recycled `ShopTableViewCell` rows in a list that snaps a row to the centre and selects it. The info panel (right) holds `InfoPanelContent`. TRY ON / EQUIP / UNEQUIP sit on the left, and all eight tabs show.
    - **Profile:** `scene_level7_Profile` + `ProfileBottomPanel`, with the perk tree as `PerkCell`s and the learnable strikes as `TrickCell`s.
    - **Settings:** `SettingsDialog` over the current screen, laid out as the original. "Advanced" opens graphics, location resolution, controller scale and the volume sliders; reset and `MAX OUT (DEV)` sit at the foot.
    - **VS:** `VsScreen`.
    - **End of fight:** `EndFightScreen` + `EndFightContent`, after a win or a loss (Retry on a loss). A win lists the original's lines: PRIZE, PERFECT, FIRST STRIKE, MAX COMBO, SHOCK, style. `Fight.stats` counts them, and `Game` pays their coins.
  - Deviations, each written up in that README section:
    - The map's difficulty rating is approximated, and the map shows one act at a time.
    - The profile's Achievements/Seals/Battle Pass tabs and the shop's gem/bag/FREE tabs are shown but do nothing.
    - The end screen doesn't animate its count-up. The style meter and style bonus are approximated, and the fight's money multiplier isn't applied.
    - The fight HUD's style bar ("FANTASTIC!" / "HARD!" under the health bars) is not drawn.
    - The fight HUD and the shop rows still use hand placement (`{ layout = false }`).

**Verified in Studio** (install: 3059 entries, 0 failed):
- 2026-10-22, quests: `tools\tests\story_test.luau` plays the story headless (dialogs answered, fights won at once) from a new game to the end of Act 7 chapter 3: every act and act screen in order, all bosses, 0 quest errors. In Play, the dev save opens on the dojo with Act 7's Shroud dialog drawn over it. **Dialog buttons have not been clicked by hand.**
- 2026-10-21: `ai_test.luau` 0 errors; `all_fights.luau` 761 fights / 0 errors / nan=0; perks fire, gate on conditions and expire; wall repulsion and `WallHit`.
- 2026-10-22, after the regression fix: 0 drift in the start stance, no body movement at transitions.
- 2026-10-22, UI: dojo, map (zone 1, Eclipse on), profile (both tabs), shop, settings, and the win and time-up end screens each rendered from the layouts with no console errors. They were opened through the Studio-only hook `PlayerGui.SF2Debug` (see the notes in section 4), because Studio's mouse injection does not reach the game. **No button has been clicked by hand.**
- 2026-10-22, after the user's playtest (Studio screenshots; the training fight was started through the hook's `onTraining`):
  - the enemy health bar mirrors the player's;
  - the VS avatars slide in;
  - OK/FIGHT!/BACK draw whole;
  - the MENU roll is joined;
  - the map covers a 2:1 screen;
  - text is AGOpusBold from the atlases;
  - 11 455 401 774 600 shows as 11.4T.
- 2026-10-22, against the user's screenshots of the real game, all with no console errors:
  - map: names, sun toggle, brown strip, energy bar;
  - shop: armour filling its row like "Old Leather Jacket"; a 330 px scroll snapped to row 2 and selected it;
  - profile: grid, tree and "35% / 51% / 5 seconds" at level 9;
  - settings and advanced settings;
  - end screen: all six lines, × drawn correctly.

**Not verified yet (needs the user, on the phone or with a real mouse):**
- The new menus: shop scrolling by hand (snap and auto-select), TRY ON / EQUIP / buy / upgrade, the advanced settings sliders, the MENU scroll unrolling, map battle picking + FIGHT!, dragging between acts, the lamps, Eclipse, the profile tabs, settings toggles and language, the shop tabs/buy/attribute flag, a lost fight's Retry. Also placement against the phone.
- The 2026-10-20 standup-delay and head-hit fixes; jab height (HighPunch should hit chest, never head).
- In-game audio (assets may still have been in moderation).
- The elbow's trigger range end to end (it should start at ~130 units pivot-to-pivot up close, not ~208). The harness can't teleport a fighter.
- Written but unexercised:
  - Throws (audited, nothing thrown in Studio).
  - `WallHitFall`.
  - Perk upgrade levels, which default to 1.
  - The perk value expressions `?CurrentFight`, `?CoordX/Y`, `?PlayerAttribute`, `?Aspect`, `?MovesVariable` and `?Abs`, which read 0.

**Known gaps:**
- Dojo: the tutorial's flashing highlights aren't drawn; the new-game tutorial has not been played through by hand in Studio (only headless).
- Quest deviations (README "Quests and story"): `Place` doesn't switch scenes, offers/payments/raids/hand-holding do nothing, the act screen's backdrop texture is approximated (the look matches the user's screenshots).
- UI deviations listed above (README UI section).
- The shock state's effects (`FrameReduction`, `LooseningDelay`, `Impulse Y`, the `Weapon Fists` + `WeaponDamage 0` pair in `internalSettings <Shock>`).
- Missile/projectile completeness for gun and bow supers. Check `Fight` children before assuming either way.
- Perk visuals (`Perks.lua` header).
- AI: BeginnerCheat, emergency/safe dodges, ThrowTactics, BossAbility, the SetWait modes.
- Elbow/knee hitboxes were to be widened backward; deferred until the trigger range is re-tested on the phone.
- Arena start distance: the data says 200; the user wants it bigger, which would be a deviation (their call).
- Untouched from the user's list: events, cutscenes (the 2 videos: `ShowVideo` plays nothing), "special stuff". Story dialogue now comes from the scripts.
- **The EditableImage budget is tight.** A screen that decodes many textures has to recycle them (the shop does), or later atlases render blank. The font atlases stay loaded across screens (six small pages, 1024 wide, 73–442 tall).

## 4. Next steps (in order)

The user's standing priority, in their words: the UI was "the biggest problem", a "full rework completely based on the original, especially in the shop" (now done, pending their playtest). Then the dojo. Then "all the small details (events, dialogue, lore, cutscenes, special stuff)".

1. **Ask the user to re-check the menus against their phone** in Studio Play:
   - the latest round (shop snapping and panels, map names and Eclipse sun, profile, settings, end screen lines);
   - then the list under "Not verified yet".

   Fix what they report, then ask them to save the place (Ctrl+S).
2. **Rest of section 3, economy** (energy and deliveries are done):
   - The forge: `forge.xml` has 3 recipes (Simple/Medium/Complex, unlocked by `forge_quests.xml` GIVE_RECIPE_*), each with per-type `Variations` (random perk sets, `?RandomAspect[min,max]` deviation around the `AspectScale` value for the item's level) and `Prices` blocks (ForgeMaterial1/2/3 by item level, DeliveryTime 1200 s, BonusDeliveryPrice). Its UI is the shop's `ForgePanel` (decompile `Nekki.SF2.GUI.Shop.Forge`).
   - Reward currencies: challenge/Eclipse rewards carry `<Currency Drop Name="ForgeMaterialN" ExpectedValue DeviationCoefficient DecayCoefficient>`; find the drop formula in the decompile before paying them.
   - Item sets (`list.xml <ItemSets>`), real-money items priced in gems. (Shop item visibility is done.)
   Then modes (hard mode, raids as solo bosses), then the UI deviations below.
   Ask the user to play a new game's tutorial (Settings → advanced → RESET PROGRESS) and the act transitions on the phone side by side.
3. **Close the UI deviations worth closing**:
   - The real difficulty rating (decompile `Nekki.SF2.GUI.Map\DifficultyPanel__1117.c` / `InfoBattle__2796.c`).
   - The fight HUD's style bar (`StylePanel` / `StyleBar`, `internalSettings <StyleLevels>`) and the real style meter rules from the decompile.
   - The fight money multiplier for the end-screen bonuses.
   - The end screen's count-up (`EndFightContent`).
   - Moving the shop and fight HUD onto the real layout groups.
   - The Achievements tab (`AchievementCell`, `Achievements.xml` is in `out\Xml`).
4. The small details: events, dialogue, lore, cutscenes.
5. Then the older gaps: projectiles, boss abilities, the shock state. For anything left from `docs\FULL_GAME_PLAN.md` steps 9–12 (economy and forge, all modes, story coverage, polish), compare it against the commits first.

**How to work on a UI screen** (the method this port's screens follow):
1. Find what the original scene mounts. Each `sf2-assets\ui\scene__levelN_X.json` root's scene component has a `_MountOnStart` list of prefab names.
2. Print a prefab's tree: `python -I sf2-roblox\tools\ui_tree.py sf2-assets\ui\prefab__<Name>__*.json [depth] [Root/sub/path]`. On Windows use `python -I -X utf8` (`-I` ignores `PYTHONIOENCODING`).
3. Read the controlling script in `sf2-il2cpp\decomp\Root_named\Nekki.SF2.GUI.*\<Class>__N.c`. GUI class names are real, not obfuscated. A prefab's component `fields` in the JSON name which node each script field binds to.
4. Build it with `UI.build`, then fill text and sprites and wire buttons in `Menus.lua` with its helpers: `onClick`, `setText`, `hideAll`, `fmt`, `loc`. Hide what has no system behind it, and write each deviation into the README UI section.

**Notes for driving Studio:**
- An agent drives Studio through the **Roblox Studio MCP server** (tools `list_roblox_studios`, `execute_luau`, `start_stop_play`, `get_studio_state`, `screen_capture`, `user_keyboard_input`, `get_console_output`). Any MCP-capable agent can use it; without it, paste the same Luau into Studio's command bar (Edit mode) or a temporary Script, and ask the user for screenshots.
- Studio ids change per session: run `list_roblox_studios` first. Place: "SF2", placeId 86520858545174.
- Install (Edit mode only; a Play-mode install is discarded):
  1. Regenerate `out\install.txt` with `python -I tools\make_manifest.py`.
  2. Check that the 8765 server answers: `curl -s -o /dev/null -w "%{http_code}" http://127.0.0.1:8765/out/install.txt`. It dies with the session, so start it if needed (section 5).
  3. In Edit, run: `task.spawn(function() _G.SF2InstallDone = tostring(require(game.ServerStorage.SF2Installer:Clone())()) end)`. `SF2Installer` is a ModuleScript that returns a function.
  4. Poll `_G.SF2InstallDone` in a second call.
- **Driving the live menus:** in Play (Client datamodel), call `game.Players.LocalPlayer.PlayerGui.SF2Debug:Invoke("map", "ZONE_1")`. It works for any `Menus.*` function (`profile`, `shop`, `settings`, `endFight`, …). `SF2Game.client.lua` creates the hook only when `RunService:IsStudio()`. Functions can't cross the BindableFunction, so callbacks (e.g. `endFight`'s OK/Retry) arrive as nil.
- Don't `require(SF2.Menus)` inside `execute_luau`. It has its own require cache, so it builds a *second* menu that fights the real one for the EditableImage budget and renders blank.
- `user_mouse_input` still does not reach the game: clicks by coordinates and by instance path both did nothing on 2026-10-22.
- `user_keyboard_input` does reach it (2026-10-22): A/D walk, J punch, K kick in the dojo or a fight.
- `screen_capture` **sometimes stops rendering 3D entirely**, while the UI still captures. On 2026-10-22 even a neon part in front of the camera came out blank.
  - Before concluding a 3D scene is broken, drop a bright test part in front of the camera.
  - Check 3D with script queries or `tools\preview_png.py`, or ask the user.
  - A location also fades in over 1–3 s.
- `all_fights.luau` blocks Studio's main thread for minutes and the MCP plugin disconnects while it runs. It writes to `ServerStorage.TestResult`, so poll that in a separate call.

## 5. How to work

**Build** (from `sf2-roblox`, `python -I`):
- `tools\convert.py` (rig/anims), `compile_moves.py`, `build_arsenal.py`, `build_game.py`, `build_models.py`, `build_images.py`, `build_ui.py`, `build_tactics.py`, `build_audio.py`
- `tools\make_manifest.py` writes `out\install.txt`
- Data extraction: `tools\extract_quests.py` (UnityPy: every quest/story TextAsset of the APK, apart by path id) and `tools\decrypt_text.ps1` (decrypts them with the key in `sf2-data\keys`, never printing it).
- Pillow/UnityPy tools run with `D:\Tools\venvs\unitypy\Scripts\python.exe -I`: `extract_assets.py`, `dump_ui.py`, `build_images.py`, and `build_fonts.py` (the game fonts as glyph atlases for `SF2.Text`).

**Install into Studio:**
1. Serve the port: `python -I -m http.server 8765 --bind 127.0.0.1 --directory D:/SF2-Port/sf2-roblox` (run it in the background).
2. In **Edit** mode, run `ServerStorage.SF2Installer` (`tools\install.luau`) with `task.spawn` (from the MCP's `execute_luau` or the command bar), because a big install times out a single call.
3. Place: the published "SF2" place, placeId **86520858545174**. It needs HttpEnabled and "Allow Mesh / Image APIs".
4. Studio ids change per session, so list the studios first.

**Test:**
- Headless: clone `ReplicatedStorage.SF2` into `ServerStorage.SF2Test` and run the `tools\tests\*.luau` code inline. `loadstring` is unavailable.
- `screen_capture` shows the UI. It does not always render the 3D scene (see the notes in section 4); for 3D checks use script queries or `tools\preview_png.py`.

**Decompile lookup:**
- `docs\DECOMPILE_INDEX.md` and `sf2-il2cpp\index\class_map.tsv` map obfuscated names to roles.
- A generic method missing from `decomp\`: get its address from `dump\script.json`, then run `analyzeHeadless ... -process libil2cpp.so -noanalysis -readOnly -postScript ExportDecompiled.java <rvaFile> <outDir>` with `-Djava.io.tmpdir=D:\SF2-Port\tmp`.

**Quirks:**
- File Y points down, port Y points up (impulse Y is negated). 40 units = 1 stud.
- Git Bash needs `MSYS_NO_PATHCONV=1` for adb paths.
- Edit tab-indented Lua with exact-text edits (your agent's file-edit tool), not with regex/Python rewrites.
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
- 2026-10-22 (UI playtest fixes): fixed the user's reported UI issues.
  - Enemy health bar: a 180-degree or negative-scale node now spans the other side of its pivot, and nested Canvases keep their rect.
  - VS screen: ported the original's slide-in sequence.
  - Cropped 9-slice buttons: Roblox crops a slice with zero top/bottom borders, and SliceScale now includes the canvas scale.
  - Also fixed: the detached MENU roll end, black bands on the map on wide screens, the game fonts (`tools/build_fonts.py` atlases + the `SF2.Text` renderer), and K/M/B/T number abbreviations.
  - Found that Studio's capture can stop rendering 3D. That had been misread as an EditableImage-budget problem on the profile.
- 2026-10-22 (screenshot pass): matched every menu against ~20 screenshots of the real game the user supplied.
  - Text sizing: best fit's max size, `_useLabelFontSize`, the language font for localized labels, line spacing and best-fit minimums. AGOpusBold turned out to be Cyrillic-hacked, so U+00C0..FF come from majallab.
  - Top-bar energy panel.
  - Map: battle names, the sun/eclipse toggle top right, the brown strip, fight indicators.
  - The shop rebuilt: snapping list with auto-select, the type art boxes from ShopScene, InfoPanelContent with stat bars and price buttons, TRY ON/EQUIP/UNEQUIP, all eight tabs. `CanvasPosition` is in pixels.
  - Profile: real perk numbers from CharacterProgress `UpgradeLevel` descriptions, the left tile grid, faded unlearned perks, all tabs.
  - Settings and advanced settings as the original, with volume sliders and controller scale.
  - End screen: the bonus lines, backed by new `Fight.stats` counters and coins paid in `Game`.
- 2026-10-22 (full port, section by section): section 1, the quest scripts. Found the 6 missing act stories in the APK (same-named TextAssets the old extraction overwrote; a CDN `CONFIGS` pack was fetched with the user's OK but didn't have them), ported the QuestsManager from the decompile, moved the map, act unlocks and the tutorial onto it, save v2 with migration, `story_test.luau` plays the whole campaign. Section 2, the dojo: the live punching-bag fight under the menu (`DojoScene`), the disciple toggle, the tutorial's dojo steps from their decompiled classes; keyboard injection now reaches the game. Section 3 started: energy (5 points, 600 s each, per-fight Power, energy.xml dialogs) and deliveries (DeliveryTime, finish-now gems, Delivery notifications). Then the user's answers: act screen matched to their screenshots, shop shows only reached acts' items with locked Ranged/Magic tabs, AGENTS.md made the docs agent-neutral; stopped there on the user's request.
