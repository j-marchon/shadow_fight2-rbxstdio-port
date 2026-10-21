# SF2 full-game port: overnight autonomous plan

## Context
The combat core is ported to Roblox and works: rig, animations, moves engine, strikes, ragdoll, and all 218 weapons. The user wants the **whole game** as close to the original as possible: UI, menus, game modes, bosses, magic, ranged weapons, effects, sound and everything else. Claude works alone overnight with no one to test or fix setup issues.

Two things this rests on:
- **Most of the game is data the project already has**, in decrypted XML:
  - `stages.xml`: zones, battles, fights, warriors, rules
  - quest XMLs: story, dialogs, tutorial
  - `moves.xml` actions: projectiles, magic, effects, sounds
  - `list.xml`, `perks.xml`, `CharacterProgress.xml`, `forge.xml`
  - 77 location `*_params` files
- **All art, sound and fonts are still packed** in Unity bundles: about 21k sprites, 324 FSB5/Vorbis clips, 63 music tracks, and UI prefabs inside the APK.

So the work is: interpreters for that data, the fight loop and AI, an asset pipeline, and a UI rebuilt from the original prefab layouts.

**User decisions (2026-10-20):**
- Sound: upload SFX and music through Open Cloud. SFX get packed into a few long "atlas" files.
- Images: embedded in ModuleScripts and drawn with EditableImage. No image uploads.
- Agents: subagents where useful, no large multi-agent workflows.

Realistically the whole game will not finish in one night. The order below makes each step leave the place more complete and playable, so stopping anywhere still leaves a working game. `PORT_STATUS.md` records exactly where work stopped.

## Ground rules for the run
- **Disk is the source of truth.**
  - Git-init `D:\SF2-Port\sf2-roblox` (local only, never pushed) and commit after each step.
  - Studio is only an install target. Everything can be rebuilt with one installer, so a Studio crash costs a reinstall, not work.
- **Reuse the existing pipeline**: `convert.py`, `compile_moves.py`, `build_arsenal.py` (with `write_module` for the 180 KB split), `Arsenal.lua`, `MoveEngine`, `Combat`, `Fighter`, `Renderer`.
  - New generators follow the same pattern: Python writes `out\...lua`, and the manifest lists it.
- **Faithful first.** Every rule is read from the decompile (paths in `DECOMPILE_INDEX.md`; map from this session's survey) and the data. Any deviation is written down in README "Not yet faithful".
- **Test every step headless in Studio** (clone SF2 into SF2Test, run ticks, assert), plus a short Play smoke test through MCP.
  - Save the test scripts in `tools\tests\`; the full-arsenal test was never saved, and this fixes that.
- Copyrighted assets stay in the private place. Uploads go only to the user's own account, as private assets.

## Steps (in order)

### 0. Infrastructure
- `git init`; add a `.gitignore` for `out\` sizes if needed (generated output is reproducible).
- `tools\install.luau`, saved into the place as `ServerStorage.SF2Installer`:
  - Reads `out\manifest.txt` (extended to cover src, Data and Assets).
  - Writes or updates every ModuleScript and Script, and deletes stale ones.
  - Used for every install from here on.
- Check the Studio APIs needed before relying on them: `EncodingService` (Base64 + Zstd decompress), EditableImage memory budget, and `Sound.PlaybackRegion`. Docs come from `http_get`. If an API is missing, use a Luau fallback, e.g. inflate for decompression.

### 1. Asset pipeline (`tools\extract_assets.py`, UnityPy venv; output `D:\SF2-Port\sf2-assets\`)
- **Sprites and textures:** slice sprites by their rects, using the full-res versions (not `_low`). Pack per screen or use into 1024² atlases. Images are 8-bit RGBA, compressed with Zstd, base64'd, and split into modules of 180 KB or less.
  - The runtime `SF2.Images` decodes them into EditableImage on demand per screen and frees them on leaving.
  - Budget-check the total place size and drop unused `_low` copies and legacy locations.
- **Audio:** UnityPy `AudioClip.samples` (FMOD ships with UnityPy) → WAV.
  - SFX are packed into a few atlas WAVs with an offset table; music stays per track, downsampled if the upload size limit requires it.
  - `tools\upload_audio.py` uses the Open Cloud Assets API with the user's key (`D:\SF2-Port\sf2-data\keys\roblox_api_key.txt`) and polls operations. It writes `out\AudioMap.lua` (asset id plus offset and length per clip).
  - Uploads go in priority order: SFX, then music per act. If Roblox's monthly audio cap is hit, the rest goes into `PORT_STATUS.md`.
- **UI prefabs:** generate type trees from `sf2-il2cpp\dump\DummyDll` so MonoBehaviours are readable. Dump the RectTransform, Image (sprite) and Text trees of the scenes (`level0..7`) and prefabs to JSON in `sf2-assets\ui\`.
- **Fonts:** rasterize CarterOne, majallab and AGOpusBold into glyph atlases (bitmap text renderer `SF2.Text`). CJK falls back to Roblox's built-in Noto.

### 2. Fight completion (Phases 4 and 6)
- **Fight loop:** stages StartStance → Fight → EndStance; rounds, timer, KO/timeout/ringout results; `RoundStage`/`RoundResult` conditions (currently false); Loss moves; HealthRecovery.
  - Sources: Fight `FCJBEKHDLAF`, stage enum dump:134811.
- **Remaining Phase 4:**
  - Throws (Throw moves, ThrowFall, DistancePoint/AttachPoint)
  - Wall hits (CanWallHit, WallHitFall)
  - Velocity/Rotation actions
  - Shock threshold and effects
  - Damage curve `GameUtils.NADKBDJLFIL`, using item stats
- **Armor, helms and bodies on fighters:** extend `build_arsenal.py` to every `list.xml` Armor, Helm and Skeleton, so fighters wear their real equipment; `Arsenal.rig` merges them.

### 3. AI (Phase 5)
- Port `ModelAi` and the tactic tables (`FT\Model\AI\`, `specs\tactics-binary.md`, `tacticSettings.xml`, `ComputerSettings.xml`). It feeds keys into the enemy KeyBuffer.
- Tactics are chosen per weapon matchup and per warrior `Tactic=`. Test AI vs AI for stability.

### 4. Ranged, magic, projectiles
- `CreatePlayer` child models (SkeletonMissile/SkeletonMagic, copying the parent item), `Delete`, `Bullets`/`AddBullets`, `SetCooldown`, `RangedQuantity`.
- Magic charge from `internalSettings <Magic>` plus the Magic* attributes, with the buffer carried between rounds.
- This also fixes the gun and bow super-slash projectiles.
- Covers all 87 ranged and 80 magic items, plus boss abilities (`EnableBossAbility`/`BossAbilityState`).

### 5. Effects, camera, locations
- **Effect, HitEffect, StopEffect:** sprite sequences (CocosAnimation timing), drawn as image quads in the fight plane, with Follow/Attach, Scale and OnBackground.
- **Camera:** ShakeScreen, ZoomEffect, CameraWeight, and the `<HitEffects>` defaults.
- **Locations:** the 77 `*_params` files become parallax layers (`Factor`), SimpleEffects (picture/sequence motion) and the arena Width/Wall/Floor. The APK ParticleSystems are approximated with Roblox ParticleEmitters (a noted deviation).

### 6. Sound
- `Sound`, `RandomSound` and `StopSound` with Voice sets (Male, MaleLow, Female), Volume, Looped and Event.
- Battle music from `stages.xml`. Menu and UI sounds.

### 7. Fight UI and controls
- Built from the dumped prefabs: health bars, rounds panel, timer, combo/style bar, VS screen, pause, end-of-fight screen.
- Controls: the on-screen Stick plus ActionButtons (punch, kick, ranged, magic), and the keyboard mapping that already exists.

### 8. Rules and perks
- **Rules:** RulesInspector plus the ~43 rule types (Attributes, EquipItem, ComplexRule, Ringout, HotGround, Darkness, Invulnerability, NoAnimation, RemoveInterval, ChangeFight, …), driven by `stages.xml <Rules>`.
- **Perks:** the `perks.xml` interpreter (PerkAction/Event/Condition), enchantments and set bonuses.

### 9. Progression and economy
- Save mirrors the `usersDefault.xml` Warrior. A server Script uses DataStore.
- XP and levels (`CharacterProgress`), money and gems, item levels and upgrades, forge/enchant, sets.
- Shop with the real prices and unlock levels. Real-money items become gem-priced (no IAP).

### 10. Map and game modes
- Map screen per zone, with BattleButtons from the Battle X/Y/Icon.
- Mode types:
  - tournaments, survival, duels (periodic), challenges
  - bosses with bodyguards
  - hidden/stranger, intermission, Eclipse, hard mode
  - final battles, Titan
- Energy.
- Underworld raid bosses become offline solo boss fights from `raid_stages_default` plus `*_raid_params` (online raids, clans and PvP need Nekki's server, so they're out).

### 11. Story, quests, dialogs, menus
- Quest interpreter: QuestEvent, QuestCondition expressions, actions (Dialog, Fight, ActScreen, ShowBattle…) over `story.xml`, `quests.xml`, `battles.xml`, `tutorial_quests.xml` and `eclipse.xml`.
- StoryDialog with portraits. The 2 cutscene videos become stills or skips.
- Dojo/main menu, profile, settings, and localization (12 languages).

### 12. Polish pass
- Fill gaps logged in `PORT_STATUS.md`, re-run all tests, and update README, `HANDOFF.md`, `DATA_INDEX.md` and memory.

## Verification
- **Per step:** headless Studio tests via MCP `execute_luau` (saved in `tools\tests\`).
  - Fight-loop round results; AI vs AI over N fights with no NaN.
  - Every ranged and magic item spawns, flies and hits.
  - Every location builds; every effect and sound name resolves to an asset.
  - Quest scripts run Act 1 from tutorial to the Lynx boss.
- **Play smoke tests** (`start_stop_play`, scripted keys). UI is checked with `screen_capture`; 3D is checked through script queries and offline PNG renders (`tools\preview_png.py`), since capture shows no 3D.
- `PORT_STATUS.md` in the morning: what works, what was tested how, what's left, and anything the user must do (e.g. leftover audio uploads).

## What the user sets up before bed
1. **Studio:** open Roblox Studio with the published SF2 place (86520858545174), not the AutoRecovery copy.
   - If the AutoRecovery copy is still the latest work, first File → Save to Roblox As → SF2, then reopen SF2.
   - Make sure the Studio MCP plugin is connected; it isn't right now.
   - Leave it in Edit mode.
2. **Game Settings → Security:** Allow HTTP Requests, Allow Mesh / Image APIs, and Enable Studio Access to API Services (for DataStore saves) all on. Then save.
3. **Open Cloud API key** at create.roblox.com → Open Cloud → API Keys:
   - Assets API: Read + Write.
   - Accepted IPs: `0.0.0.0/0`.
   - Expiry: 7 days.
   - Paste the key alone into `D:\SF2-Port\sf2-data\keys\roblox_api_key.txt`.
4. **Approve this plan in auto mode** (or bypass permissions, if it's enabled in Settings → Claude Code), so nothing waits on an approval prompt.
5. **Allow computer-use access to Roblox Studio** on the card shown right after approval. That lets Claude press Ctrl+S to save the place to Roblox periodically and reopen Studio if it crashes.
6. **The PC:** plugged in, lid open. The screen can turn off, but don't lock it, sign out or let Windows Update restart it (pause updates for a day). Leave the Claude app and this session open; the two local servers run inside it.
7. **Pre-approved downloads for this run:** pip packages into `D:\Tools\venvs\unitypy` (TypeTreeGeneratorAPI, numpy and soundfile, as needed). No other downloads.
