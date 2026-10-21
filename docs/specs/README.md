# Format specs (Phase 1)

Each spec was derived from the game's own reader in the decompile and checked against **every** real file in `D:\SF2-Port\sf2-data\combat\`.

| Spec | Files | Validation result |
|---|---|---|
| [animation-binary.md](animation-binary.md) | 464 animations | 464/464 parse to the exact byte; node slot *i* = *i*-th model node (bone lengths within about 0.2%) |
| [model-xml.md](model-xml.md) | 494 models | 494/494 parse; 97% of references resolve after merging with the base skeleton, and the rest point to other base skeletons; macro-node affine rule exact |
| [moves-xml.md](moves-xml.md) | `moves.xml` (1,104 moves) | above 99% of cross-references resolve (labels, animations, intervals, nodes, edges); vocabulary matches the parsers in the code |
| [tactics-binary.md](tactics-binary.md) | 138 tactic archives | 479/479 table blobs fully consistent with the loader's own asserts; 0 parse errors |

## Validators (`validators\`)
Run them with Python 3 (no third-party packages). Each takes the data folder paths as arguments:
```bash
python -I validators/validate_anims.py D:/SF2-Port/sf2-data/combat/animations D:/SF2-Port/sf2-data/combat/models
python -I validators/survey_models.py D:/SF2-Port/sf2-data/combat/models
python -I validators/validate_moves.py D:/SF2-Port/sf2-data/combat/moves.xml D:/SF2-Port/sf2-data/combat/models
python -I validators/validate_tactics.py D:/SF2-Port/sf2-data/combat/tactics
```
`survey_moves.py` regenerates the full moves schema (`D:\SF2-Port\sf2-data\index\moves_schema.txt`).

## Left for later phases
Each spec ends with its own open questions. They're behavioral details best settled when that system is built:
- animation frame rate and the per-frame flag byte
- physics meaning of `Attenuation`, `Cloth` and `Muscle`
- the damage formula and move priority/blending
- the meaning of the tactic table values and the `ModelShiftTable` payload
