# Spec: AI tactic tables (`combat\tactics\*`)

**Status:** validated against all 138 archives: 479 table holders, all fully consistent (every pool count matches its declared size; every blob consumed to the last byte), plus 327 shift-table entries (container level only).
**Reference code:** `TacticsArchiver` (`AEJJGGKAHBN(string)` and `AEJJGGKAHBN(string, string)`), `TacticalTableHolder` (`BKCFPHNEONL` → `KBOKKKALJIN`, `LFEHAPCICEA`, `JDIHDLBGDPP`), `GroupTables`, `TacticalTable`, `Intervals`, `IntervalNew`, `ModelShiftTable`, `AiData`.
**Source:** APK TextAssets `<name>-icsharp_bzip2`, decompressed with plain bzip2. The files in `combat\tactics` are already decompressed.

## Archive files
| File name | Meaning | Entry layout |
|---|---|---|
| `default`, `EMPTY`, `<weapon>` (`batons`, `claws`, `fists`, `knives`, `knuckles`, `kusarigama`, `machete`, `ninjasword`, `nunchaku`, `sai`, `scythe`, `spear`, `tonfa`) | per-weapon base tables | **A** |
| `<myWeapon>_<enemyWeapon>` (e.g. `batons_claws`, `_fists`; empty = any) | per-matchup tables | **B** |

All integers are little-endian. `cstr` = bytes up to a terminating `0x00` (ASCII; read with `BinaryReader.ReadChar`).
```
Layout A (base):      repeat until EOF:  u32 type, cstr name,              u32 size, u8[size] data
Layout B (matchup):   repeat until EOF:  u32 type, cstr group, cstr name,  u32 size, u8[size] data
```
| `type` | Where | Payload | Count in set |
|---|---|---|---|
| 2 | base | **dodge tables** (`/tactics/dodge/*.tbs`): TacticalTableHolder blob | 15 |
| 7 | base | **shift tables** (`/tactics/shiftTables/*.sts`): `u32 count`, then `count × (cstr animName, ModelShiftTable data)` | 15 (327 tables) |
| 0 | matchup | TacticalTableHolder blob, probably **movement tables** (`/tactics/movements/`) | 232 |
| 1 | matchup | TacticalTableHolder blob, probably **attack-outcome tables** (`/tactics/outcometablesforattack/`) | 232 |

(Mapping of 0 vs 1 is inferred from load order; confirm in `AiData.IKLNIACILPM` during the AI phase.) In layout B, `group` is the enemy weapon class (`Sai`, `Spear`, `Fists`, … or empty).

## TacticalTableHolder blob
```
// 1. animation name list (KBOKKKALJIN)
u16  animCount
u8   nameLen[animCount]
char names[...]                      // concatenated, nameLen[i] chars each → resolved via AnimationData
// 2. label list (LFEHAPCICEA)
i16  labelCount
u8   labelLen[labelCount]
char labels[...]
// 3. body (JDIHDLBGDPP): pool sizes
u32  tableAnimCount, groupCount, tableCount, intervalsCount, intervalNewCount, distanceCount, interframeCount
u16  tableAnim[tableAnimCount]       // index into animation names: one AnimationTablesForAnimation each
i16  distanceScale                   // 0 means 1
i16  distance[distanceCount]         // value = raw × distanceScale
i32  interframe[interframeCount]
u16  intervalNewAnim[intervalNewCount]   // index into animation names, consumed sequentially below
// 4. tree: each count takes the next N entries from its pool
for each tableAnim:
    u16 nGroups                      → next nGroups GroupTables
    for each GroupTables:
        u16 labelIndex               → labels[labelIndex]
        u16 nTables                  → next nTables TacticalTable
        for each TacticalTable:
            cstr name                // e.g. "NHeel_1" (the node the table measures)
            u16  nIntervals          → next nIntervals Intervals
            if nIntervals > 0: i16 value          // e.g. -15, -75 (offset/threshold)
            for each Intervals:
                u16 k                → next k IntervalNew (each gets the next intervalNewAnim)
                repeat k: u16 nDist  → next nDist distances   (the IntervalNew's distance list)
                repeat k: u16 nFrame → next nFrame interframes
```
**Consistency rule** (the loader's own asserts): after the tree, the number of groups, tables, intervals, IntervalNew, distances and interframes consumed must equal the declared pool sizes, and the stream must be at EOF. This holds for all 479 blobs.

Example (`EMPTY`, dodge tables): 858 animations, 57 labels, 298 tables, 9,737 intervals, 31,027 IntervalNew, 90,410 distances, 59,383 interframes. The first tables are `AxeKick/NHeel_1` (66 intervals, value -15) and `AxeKick/NHeel_2` (126, -75).

## What the data means (working model; finish in the AI phase)
For each of the opponent's possible animations (`tableAnim`), grouped by label, the tables say: when the enemy's node (e.g. a heel) is at a given distance during a given frame window of that animation, which of my animations (`IntervalNew`) work as a response, and at which frames (`interframes`).
- `ModelAi` looks these up every tick to choose an attack, dodge or movement.
- `Tactic` / `TacticFactors` (from `config\tacticSettings.xml`, `ComputerSettings.xml`) weight the choices: block/dodge chances, response delay, damage/health/distance factors.

## Shift tables (type 7)
Per animation, a `ModelShiftTable` (`List<float[]>`) of node trajectories that the AI uses to predict positions ("heel not found in shift table"). The reader checks `count % 4 == 0` and `count % nodeCount == 0`. Payload layout is not yet parsed beyond the container; finish in the AI phase from `ModelShiftTable.ICNKLIDJEBG`.

## Open questions
- Confirm type 0 = movements vs type 1 = outcomes (`AiData.IKLNIACILPM`).
- What the `TacticalTable` `value` field and the distance units mean (distances are i16 × scale, likely game units).
- The `ModelShiftTable` payload layout.
