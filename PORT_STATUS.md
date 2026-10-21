# Full-game port: status (stopped 2026-10-21, ~01:00, usage limit)

Plan: `C:\Users\João Marchon\.claude\plans\breezy-discovering-glade.md`

## Done
- **Infrastructure:**
  - Local git repo.
  - Hash-based installer: `tools/install.luau`, also in the place as `ServerStorage.SF2Installer`. Run it async with `task.spawn`, because big installs time out the MCP.
  - `tools/make_manifest.py` writes `out/install.txt`.
- **Assets extracted** to `D:\SF2-Port\sf2-assets`:
  - every texture (`tex/`), the sprite index (`atlas.json`) and every sound clip (`audio/`)
  - fonts
  - UI layouts for 229 screens (`ui/`, via `tools/dump_ui.py`)
- **Audio uploaded to your Roblox account:**
  - 16 Ogg packs (3 SFX, 13 music), listed in `sf2-assets/audio_uploads.json`.
  - `out/AudioMap.lua` maps all 324 clips; `src/SF2/Sound.lua` plays them. Not tested in-game yet; assets may still be in moderation.
- **Game data as Luau:**
  - every config XML (`out/Xml`), 98 locations (`out/Locations`) and 12 languages (`out/Lang`); see `tools/build_game.py`
  - all 594 models, compressed (`out/Models`; `tools/build_models.py`, `tools/pack.py`)
  - runtime readers: `SF2.Xml` and `SF2.Pack`
- **Runtime:**
  - `SF2.Rigs`: merges models by name, the port of rig_data.
  - `SF2.Items` and `SF2.Warrior`: a fighter built from list.xml equipment, with attributes.
  - `SF2.Moves`: moves filtered by loadout, plus triggers.
  - `SF2.Fight`: rounds, the StartStance → Fight → EndStance stages, timer, KO/timeout, wins, children (projectiles/magic), all move actions, magic charge, ranged.
  - `MoveEngine` now handles actions, Parent/Child anchors, velocity and RoundResult/Perk/BattleType conditions.
  - `Combat`: the real attack-vs-defense damage curve.
- **Test:** a headless fight between two warriors ran to the end (2 rounds, timeouts, winner reported).

## Not done / next
1. **Images:** `tools/build_images.py` is written; the dry run selects 1,184 textures. Run it without `--dry` and check the output size (target well under ~60 MB). Then write `SF2.Images`, which decodes the palette blobs into EditableImage.
2. **AI:** the subagent port was stopped mid-way. Check for a partial `src/SF2/AI.lua` / `tools/build_tactics.py`, then restart it.
3. **UI builder:** turn the `sf2-assets/ui` JSON into Roblox UI (RectTransform → UDim2, 2048x1536 reference, match height). Then build the HUD, controls, pause, VS and end-fight screens.
4. **Effects:** sprite sequences for Effect/HitEffect, camera shake, location parallax layers.
5. **The rest of the game:** rules and perks, progression/save (DataStore), shop, map and modes from `stages.xml`, quests/story/dialogs, menus.
6. **Client wiring:** a new `SF2Fight.client.lua` that uses `Fight` + `Warrior` + `Sound` (the old client still uses Arsenal and has no rounds).
7. **Save the place to Roblox** (Ctrl+S in Studio).
