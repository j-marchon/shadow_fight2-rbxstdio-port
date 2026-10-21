# Spec: Animation binary (`combat\animations\*`)

**Status:** validated against all 464 files (0 failures, exact byte length match).
**Reference code:** `InfoAnimation.PLEKHOPFKNM(byte[])`, which reads through the binary reader `IOACNDPCIFK` (`BitConverter`, little-endian).

## Layout
```
int32   frameCount
repeat frameCount times:
    uint8   frameFlag          // read and discarded by the loader
    int32   nodeCount
    repeat nodeCount times:
        float32 x
        float32 y
        float32 z
```
- All values are little-endian. The file ends exactly after the last frame.
- `nodeCount` is the same for every frame of a given file (verified on all files).
- File size = `4 + frameCount × (5 + 12 × nodeCount)`.

## Semantics
- **Slot → node mapping:** slot *i* is the *i*-th child element of `<Nodes>` in the model XML, in document order. That includes `Node`, `MacroNode` and `CenterOfMass` entries.
  - Verified by bone lengths: for every `<Edge>`, the distance between its `End1`/`End2` slots matches the XML rest pose within about 0.2% (median) across whole animations. A random mapping gives about 200% error.
- **Coordinates:** the same space as model XML node `X/Y/Z` (game units; a fighter is about 280 units tall). The engine stores `Vector3(x, -y, z)` when loading, and ModelLoader applies the same Y negation to model nodes, so the two stay consistent. A port can keep the file's Y-up values as they are, or negate both.
- **Positions are absolute world positions per frame**, not deltas or bone rotations. Root motion is baked in (`x` ranges from -1246 to 2491 across the set). There is no rotation or skinning data; the renderer derives limb orientation from edges.
- **Last frame:** if `InfoAnimation`'s end-frame field is 0, the loader sets it to `frameCount - 1`.
- **Frame rate:** not stored in the file. It's set by the engine/moves; to be confirmed when reading `KeyFrames`/`ModelAnimation`.

## Observed values (whole set)
| Property | Values |
|---|---|
| frameCount | 2 – 144 (median 35) |
| nodeCount | 67 (365 files), 4 (35), 75 (27), 112 (14), 78 (9), 6 (6), 71 (3), 76 (2), 69 (2), 8 (1) |
| frameFlag | 1 (8,492 frames), 5 (7,849), 3 (1,247), 0 (502), 6 (32) — meaning unknown; the loader ignores it |
| x / y / z range | -1246…2491 / -70…1316 / -333…557 |

**Node count → model:**
- 67: `mdl_skeleton` / `mdl_skeleton_heavy` (54 Node + 12 MacroNode + 1 CenterOfMass); the standard fighter
- 4: `mdl_skeleton_magic` / `mdl_skeleton_missile` (projectiles)
- 75, 112, 78, 71, 76, 69, 6, 8: special skeletons (bosses, creatures, props). Match them by node count against `combat\models`.

## Open questions
- What `frameFlag` means (possibly a physics/interpolation hint; the values look like a bitfield: 0, 1, 3, 5, 6).
- Playback rate and interpolation. To be read from `KeyFrames` / `ModelAnimation` in the playback phase.
