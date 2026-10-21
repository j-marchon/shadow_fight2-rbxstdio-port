# SF2 Combat Data – Index

Status (2026-10-20): combat data gathered from the phone (game v2.46.0), the APK, and 10 CDN packs, then decrypted and organized. Every move that's actually used has its animation, except the deferred RAID/CLANS content.

## Where it is (`D:\SF2-Port\sf2-data\`)

| Path | What |
|---|---|
| `combat\` | **Start here.** Clean combat set (135 MB): `moves.xml`, `models\`, `animations\`, `tactics\`, `config\`. |
| `combat\moves.xml` | 1,104 moves (plus `Templates` and `Triggers` sections). Decrypted XML. |
| `combat\models\` | 494 models: fighters, bosses, weapons, armor, helms, ranged, magic. Sources: 51 from ZONE_1, 16 base models from the APK (`mdl_skeleton`, `mdl_skeleton_heavy`, `mdl_body`, `mdl_head`…), 427 from the MODELS pack. Decrypted XML. |
| `combat\animations\` | 464 animation binaries. Sources: 234 from ANIMATIONS, 95 from ZONE_1, 38 from ZONE_7_3, 97 core moves from the APK (`back_flip`, `duck`, `front_kick`, `high_block`…). Not encrypted. |
| `combat\tactics\` | 138 AI tactic tables, one per weapon matchup (`batons_claws`, `default`, …). Decompressed binary. |
| `combat\config\` | `tacticSettings.xml`, `ComputerSettings.xml` (AI), `stages.xml`, `battles.xml`, `list.xml` (items), `perks.xml`, `CharacterProgress.xml`, `internalSettings.xml`. |
| `raw\gamedata\` | Untouched pull from the phone (`bundles\ANIMATIONS`, `VERSIONAL_CONFIGS`, `ZONE_1`, `packs.xml`, `config_cdn.xml`). |
| `cdn\` | 12 packs fetched from Nekki's CDN, each size-verified. 10 have been processed; **ZONE_RAID and CLANS are downloaded but deliberately not processed yet.** |
| `extracted\`, `extracted_apk\`, `extracted_cdn\` | TextAssets as extracted, still encrypted. |
| `decrypted\` | Every decrypted file. |
| `keys\content_aes.json` | The recovered content key. Local only; do not share. |

## Where the data comes from
- The game stores downloads under `/sdcard/Android/data/com.nekki.shadowfight/files/gamedata/bundles/`. They are UnityFS asset bundles listed in `packs.xml`. adb can read this folder without root.
- **Per-act downloads (`ZONE_2` … `ZONE_7`, `ZONE_7_2`, `ZONE_IM`) are art and audio only:** location backgrounds, item/portrait icons, sounds, music. Combat data for every act lives in the shared packs: ANIMATIONS, MODELS, ZONE_1, ZONE_7_3, and the APK.
- The APK itself embeds a base data set as Unity TextAssets: the core unarmed-move animations, the base skeleton models, and the AI tactics (bzip2, `<weapon>_<enemyweapon>-icsharp_bzip2`). The separate `TACTICS` CDN pack is marked `Active="0"` and isn't needed.

## Formats
| Data | Format | Reference code (see `DECOMPILE_INDEX.md`) |
|---|---|---|
| moves, models, most configs | base64 text → AES-256-CBC, PKCS7 → UTF-8 XML. The key and IV are built from two Beebyte-scrambled 64-byte static arrays (`data[i] ^= mask[i & 63]`, cut at U+E44F, then base64). | `IKMOIKFPPBF` (decrypt entry point), `IBMPAMLCCHF` (AES), `OMHODMCHILE.NPKGDBHJKCK` (unscramble) |
| animations | Binary: node count (int32), flag byte, then float32 x/y/z per node per frame. | `InfoAnimation.PLEKHOPFKNM(byte[])` |
| tactics | bzip2 → binary tables (header `02 00 00 00`). | `TacticsArchiver`, `TacticalTableHolder` |
| models | XML `<Scene><Nodes>…`: Node/MacroNode with X/Y/Z, Mass, Fixed; MacroNode = weighted ChildNode1..3 (LCC1..3); Edges; Figures (Capsule, Triangle). | `ModelLoader` |

## Coverage
- **1,085 of 1,104 moves** have their animation file. The 19 without one are `_UNUSED_` moves the game doesn't use.
- **Update 2026-10-20 (weapons):** `cdn\` now also holds every `EVENTS/*`, `OFFERS/*` and `SETS/*` pack plus AZTEC_24, EVENT_FALL_24, EVENT_HW_24, FOREST_DEMON_25, FUNGUS_SET, NEW_YEAR_25, VERSIONAL_ASSETS, VOLCANO_SET, ASCENSION and ASIAN, fetched with `fetch_packs.py` (which now creates subfolders for the `/` names). Those packs and the formerly deferred ZONE_RAID and CLANS were extracted to `extracted_more\<pack>\`. That added 100 models (decrypted to `decrypted\more_models\`, copied into `combat\models\`, now 594) and 102 animations (into `combat\animations\`, now 566). Every weapon item in `list.xml` now has its model.

## Reproduce
Scripts are in the session scratchpad:
- `bundle_inventory.py`, `extract_text.py` (UnityPy, venv at `D:\Tools\venvs\unitypy`)
- `recover_key.py`
- `decrypt_assets.ps1`
- `fetch_packs.py` (CDN download with size and UnityFS checks)
