# Spec: Model XML (`combat\models\*.xml`)

**Status:** validated against all 494 models (all parse; reference integrity checked after skeleton merge).
**Reference code:** `ModelLoader` (`MDFGJKBMECA`), `ModelLoader.CacheAttrNames`, `ModelObject`, `ModelNode`, `ModelMacroNode`, `ModelEdge`, `Capsule`, `Triangle`.
**Encoding on disk:** base64 → AES-256-CBC (see `DATA_INDEX.md`). Files in `combat\models` are already decrypted.

## Composition: models attach to a base skeleton
A fighter is a **base skeleton plus equipment models merged into one name space**. Equipment files (body, head, armor, helm, weapons) define their own nodes and triangles, and reference the skeleton's nodes and edges by name.
- After merging with `mdl_skeleton`, 97% of all references resolve.
- The rest point to other base skeletons:
  - `Ranged-Node#_#`: the ranged-weapon base
  - `Magic-Node…`: `mdl_skeleton_magic`
  - `PunchbagSkelet-Node#`: `mdl_punch_bag_anniversity_skelet`
  - `WEAPON_KNUCKLES-…`: the knuckles weapon base
- Base skeletons:
  - `mdl_skeleton` / `mdl_skeleton_heavy`: 67 nodes, the standard fighter
  - `mdl_skeleton_magic`, `mdl_skeleton_missile`: 4 nodes each, projectiles
  - `mdl_skeleton_punching_bag`
  - several boss skeletons, which match the 75/78/112-node animations

## Document structure
```xml
<Scene>
  <Nodes>   <!-- one element per node; element NAME is the node id -->
  <Edges>   <!-- element name is the edge id -->
  <Figures> <!-- render/collision shapes -->
  <GroupsOfSelection>  <!-- editor-only, 6 files; ignore -->
</Scene>
```
Every element's **tag is its unique name** (e.g. `<NHeel_1 Type="Node" …/>`). The `Type` attribute gives its kind. **Order inside `<Nodes>` matters**: animation slot *i* = *i*-th child of `<Nodes>` (see `animation-binary.md`).

## Nodes
| Type | Count in set | Attributes read by the game | Present but not read |
|---|---|---|---|
| `Node` | 3,523 | `X Y Z` (float), `Mass`, `Fixed` (0/1), `Visible`, `Collisible` (also lowercase `collisible` in 12), `Cloth` (0/1), `Attenuation` (float, 1,927), `Shock` (1), `Weak` (1) | `PinFixed`, `Passive`, `Rank`, `Selectable` |
| `MacroNode` | 87,111 | `X Y Z`, `Mass`, `Fixed`, `Visible`, `NodesCount` (0–4), `ChildNode{i}` + `LCC{i}` for i = 1..NodesCount, `Collisible` (14) | `MC{i}`, `Rank`, `Selectable` |
| `CenterOfMass` | 4 | `X Y Z`, `NodesCount` (42 on fighter skeletons), `ChildNode{i}` | `Mass`=0, `Fixed`, `Visible` |

- **MacroNode position = Σ LCCᵢ · position(ChildNodeᵢ)**, an affine combination (weights sum to 1 and may be negative).
  - Exact within the skeleton file: e.g. `MacroNode1_2` with LCC = 0.685, 1.096, -0.780.
  - In equipment files the children are external, and the stored `X Y Z` reflects a different authoring pose. **Compute macro-node positions at runtime; treat the XML X/Y/Z as rest-pose metadata.**
- **CenterOfMass** aggregates `ChildNode1..N`. The fighter COM uses the 42 named body nodes. It's used for `COM` distance anchors in moves and the camera.
- **Fighter skeleton node names** (stable ids used throughout `moves.xml`):
  - head: `NTop`, `NHead`, `NHeadF`, `NHeadS_1/2`, `NNeck`
  - torso: `NChest`, `NChestF`, `NChestS_1/2`, `NStomach`, `NStomachF`, `NStomachS_1/2`, `NPelvisF`, `NPivot`
  - arms: `NShoulder_1/2`, `NElbow_1/2`, `NWrist_1/2`, `NKnuckles…`, `NFingertips…`
  - legs: `NHip_1/2`, `NKnee_1/2`, `NAnkle_1/2`, `NHeel_1/2`, `NToe…`, `NToeTip_1/2`
  - Suffix `_1`/`_2` = the two sides of the body.

## Edges
| Type | Count | Read by game | Not read |
|---|---|---|---|
| `Edge` | 10,011 | `End1`, `End2` (node names), `Length`, `Fixed`, `Visible`, `Collisible`, `Radius` (268), `Margin1/2`, `Iterations` (10), `BodyPart` (Head/Body/Legs), `Defense` (HeadDefense/BodyDefense), `Shock`, `SubNodesCount` + `SubNode1..3` (33) | `Node1/Node2` (duplicates of End1/End2), `Force`, `Width`, `WithSign`, `Selectable` |
| `Muscle` | 526 | `End1`, `End2`, `Length`, `Collisible`, `Shock` | `Tension`, `MinLength`, `MaxLength`, `Force` (editor/physics-authoring values; confirm in physics phase) |

- **Edges are distance constraints** between two nodes (`Length` = rest length). Muscles are softer constraints (cloth/chains).
- **Hit zones:** skeleton edges carry `BodyPart` and `Defense`. The fighter skeleton has 4 Head, 8 Body and 21 Legs edges. Damage uses `ModelParameters` HeadDefense/BodyDefense.
- `Collisible="1"` edges (943) are the ones that take part in fighter-vs-fighter collision.

## Figures
| Type | Count | Used by game | Meaning |
|---|---|---|---|
| `Capsule` | 13,627 | yes | `Edge`, `Radius1`, `Margin1`, `Margin2` (`Radius2` present but not read). The silhouette and hit volume around an edge. |
| `Triangle` | 132,347 | yes | `Node1..3`: filled silhouette polygons (weapons, armor, cloth). `DoubleSided` (-1/0/1) and `Visible` aren't read. |
| `NodePoint`, `NodeFixer`, `EdgeLine`, `MuscleLine` | 494 total | no | editor helpers; ignore |

## Validation summary
- 494/494 parse; the root is always `<Scene>`.
- Reference integrity: 797,816 name references; 24,800 unresolved after merging with `mdl_skeleton`, all explained by the other base skeletons listed above.
- Macro-node affine rule: exact for same-file children (skeleton).

## Open questions
- Which base skeleton each equipment model targets. Infer from the name prefixes of its unresolved references; confirm from the item list (`config\list.xml`).
- How `Attenuation`, `Cloth`, `Iterations` and `Muscle` feed the physics solver. Settle this in the physics phase, from `ModelPhysics`.
