# SF2 UI layouts (Unity scenes + UI prefabs) as JSON

Source: Shadow Fight 2 Android v2.46.0 (Unity 2022.3.62f2, IL2CPP), `D:\SF2-Port\sf2-data\apk_assets\assets\bin\Data\` (1066 serialized files, loaded as one UnityPy environment).
Generator script: `D:\SF2-Port\sf2-roblox\tools\dump_ui.py`.

## How it was produced

```
D:\Tools\venvs\unitypy\Scripts\python.exe -I -m pip install TypeTreeGeneratorAPI      # 0.0.10 (no extra deps)
D:\Tools\venvs\unitypy\Scripts\python.exe -I D:\SF2-Port\sf2-roblox\tools\dump_ui.py
```
Runtime is about 10 s. The script deletes the old `*.json` in this folder and rewrites them all. The native generator prints a few `Error generating tree nodes` lines for Editor-only/ads ScriptableObjects. They are harmless.

Steps:
1. `UnityPy.load(Data dir)`. `env.typetree_generator` = `TypeTreeGeneratorAPI` (AssetsTools backend), loaded from Il2CppDumper's `D:\SF2-Port\sf2-il2cpp\dump\DummyDll\*.dll`.
   - The generator's il2cpp mode (`load_il2cpp(libil2cpp.so, global-metadata.dat)`) fails on this build (`Sequence contains no matching element`), so the script uses DummyDll.
   - **Bug workaround:** TypeTreeGeneratorAPI 0.0.10 emits the MonoBehaviour header field `m_Enabled` without the align flag (0x4000). Every field after it is then read 3 bytes off (for example `m_Script` = FileID 16777216). UnityPy's byte-count check still passes, because later aligned fields re-sync. `FixedGenerator` in the script patches the flag.
2. Every root Transform (no `m_Father`) whose subtree contains a RectTransform counts as a UI root.
   - Roots in `levelN` files go into one scene JSON per level.
   - Every other root becomes its own prefab JSON.
3. Each node is walked recursively: GameObject → components → `m_Children`.

## Files
- `scene__level{0,2,3,4,5,6,7}_<Scene>.json`: `{source, scene, roots:[node]}`. level1 (GameSessionContext) has no UI.
- `prefab__<RootName>__<first 12 chars of source file>.json`: `{source, pathID, root: node}`.
- `index.json`: `[{name, source, pathID, nodes, monoBehaviours:[ns.Class], json, scene?}]`. It has 229 roots (7 scene files plus 220 prefabs) and 3571 nodes.
- `stats.json`: MonoBehaviour readability, plus the classes that failed with their error text.

### Node schema
```
{name, active, layer,
 rect: {anchorMin, anchorMax, anchoredPosition, sizeDelta, pivot, localScale[xyz], rotationZ(deg), localZ?}
   (or transform:{localPosition, localScale, rotationZ} for plain Transforms inside a UI tree)
 components: [...], children: [...]}
```
Components:
- `Canvas`: `renderMode`, `sortingOrder`, `overrideSorting`, `pixelPerfect`, `planeDistance`, `camera`.
- `CanvasGroup`: `alpha`, `interactable`, `blocksRaycasts`.
- `SpriteRenderer`, `Animator`, `Animation`, `Camera`: the key fields only. Other native components appear as `{type}` only. CanvasRenderer is omitted.
- `MonoBehaviour`: `{class, namespace, assembly, enabled, ui?, fields}`.
  - `fields` is the full serialized object from the type tree. PPtrs are resolved: GameObject or component references become `{type, path}`. Assets become `{type, name, file}`. Sprites become `{name, texture, textureSize, textureRect, rect, border(L,B,R,T), pivot, ppu, png}`. Arrays are cut to 50 items. Byte blobs are summarised.
  - `ui` is a normalised summary picked by *field shape*, so it covers subclasses. Many Nekki classes subclass Image or Text (ResolutionImage, ResolutionImageSkew, LabelAlias, ...). Each subclass gets a `kind`:

| kind | `ui` fields |
|---|---|
| Image | `sprite`, `texture`, `spriteInfo`, `spriteSource`, `type` (simple/sliced/tiled/filled), `fillMethod`, `fillAmount`, `fillOrigin`, `fillClockwise`, `preserveAspect`, `raycastTarget`, `color` RGBA 0-1, `material` |
| RawImage | `texture`, `uvRect` |
| Text | `text`, `font`, `fontSize`, `fontStyle`, `alignment`, `bestFit`, `minSize`/`maxSize`, `overflow`, `lineSpacing`, `color`. LabelAlias also gives `locKey` (`_Alias`), `toUpperCase`, `labelFontSize`, `useLocalizationFont`. |
| TextMeshProUGUI | `text`, `font`, `fontSize`, `color`, `bestFit`, `alignment` |
| Button / Toggle / Slider | `interactable`, `transition`, `targetGraphic`, `spriteState` or `colors`, `onClick` persistent calls, `isOn`/`group`, `min`/`max`/`value`/`fillRect` |
| CanvasScaler | `uiScaleMode`, `referenceResolution`, `screenMatchMode`, `matchWidthOrHeight` |
| Mask | `showMaskGraphic` |
| Horizontal/Vertical/GridLayoutGroup | `padding`, `spacing`, `childAlignment`, `childControl*`, `childForceExpand*`, `cellSize`, `constraint` |
| ContentSizeFitter | `horizontalFit`, `verticalFit` |
| ScrollRect | `content`, `viewport`, `horizontal`, `vertical`, `movementType`, `inertia` |

  Any MonoBehaviour can also have these summary keys:
  - `LayoutElement`, `AspectRatioFitter`, `Outline`/`Shadow` values.
  - `runtimeSprites`: every string field that names a sprite. This covers `*SpriteName` and things like `RoundsPanel._roundUndone = "FightUI.Round_Undone"`.

### Sprites: important
SF2's own components rarely reference sprites directly. `ResolutionImage` has `m_Sprite = null`, plus `_TexturePath: "UI/Atlases/"` and `_SpriteName: "FightButtons.btn_magic_normal"`. It loads the sprite from Resources at runtime.

The script resolves `_SpriteName` (and other sprite-name strings) against every Sprite in the APK by `m_Name`. It prefers the full-res copy over a `_low` one. The Unity sprite names are `<Atlas>.<sprite>`, and the texture is the atlas (e.g. `FightButtons`, PNG at `../tex/APK/FightButtons.png`).

`spriteSource` tells you where the sprite came from: `m_Sprite` or `runtime:_SpriteName`. If a name is not in the APK, the script falls back to `../sprites.json` (bundle sprites from `extract_assets.py`), which gives `pack`, `png` and `textureRectTopLeft`.

`textureRect` (APK sprites) uses Unity coordinates, with the origin at the bottom-left of the texture. `textureRectTopLeft` (bundle fallback) has its y measured from the top.

## Results
- MonoBehaviours readable: **4401 / 4405** (all needed generated trees; `serialized_type.node` was empty for every one). All 4401 resolve `m_Script` → class, which shows the header aligns correctly. The 4 failures are non-UI settings assets: `LevelPlayMediationNetworkSettings`, `GoogleMobileAdsSettings` (Editor dll missing), `FacebookSettings`, and `UnityEngine.GUISkin`.
- 368 distinct MonoBehaviour classes appear in UI trees.
- Sprite references: 92 runtime sprite names stay unresolved. They are mostly Nintendo-Switch-only `SwitchControls.*` hint icons, plus a few debug and event sprites.

Key roots:

| What | File and contents |
|---|---|
| Fight HUD | `prefab__ViewerFight__*`: both PlayerLifeBars (HealthBar/HitBar/Background, `FightUI.HealthBar_*`), StylePanels, RoundsPanel_left/right (`FightUI.Round_Done/Undone`), avatars, names, RoundTimer ("99"), PauseButton (`FightButtons.FightPause`), ComboModel, ActivePerkModel |
| Fight controls | `prefab__GameController__*`: BtnPunch/BtnKick/BtnRanged(=throw)/BtnMagic with progress/complete images (`FightButtons.btn_*_normal`, `magic_progress`, `magic_full`, `ranged_full`), joystick `Stick` (`FightButtons.Joystick*`, `JoystickContainer_*`, `Highlight_Stick`), BtnRaidCharge |
| Other fight parts | `ScreenFight` (round banner `FightUI.round`), `PreFight`, `PlayerLifeBar`, `RoundsPanel`, `IndicatorFight`, `ComboItem`. The scene root `[Fight]` (level6) mounts GameController + PreFight. |
| Screens | `PauseScreen` (`FightPause.*`), `EndFightScreen` + `EndFightContent` + `ShowLootDialog`, `VsScreen` (sharedassets0; `VS_Fon.img`, `Stripe.*`, `VSScreen.VS`), `EnemiesScreen` |
| Main menu / dojo | `MainMenu` (`MenuButtons.*`, `CommonScrolls.*`, `TopPanel.*`), `[DojoScene]` (level3), `ProgressBarDojoPanel`, `ProgressBarDojoBattlePass` |
| Map | `[Map]` (level5), `MapButton`, `MapButtonsPanel`, `StoryMapContainer`, `StoryMapScrollContent`, `StoryZoneScrollItem`, `Lamps`, `InfoBattle` |
| Shop | `[Shop]` (level4), `ShopBottomPanel`, `ShopTableViewCell`, `ShopBackground`, `ChooseBuyItemDialog`, `EnchantDialog`, `ItemSetDialog`, `LotteryDialog` |
| Profile | `[Profile]` (level7), `ProfileBottomPanel`, `PropertiesPanelContent`, `PerkCell`, `AchievementCell` |
| Dialogs | `DialogCanvas`, `StoryDialog`, `SimpleDialog`, `ScrollDialog`, `MultiLineScrollDialog`, `ExitDialog`, `InputDialog`, `SettingsDialog`, `SettingsAdvancedDialog`, `NewsDialog`, `EventDialog`, `CriticalErrorDialog`, `StrangerDialog`, plus Raid*/Clan* dialogs |
| Loading | `[GameLoader]` (level0), `[LoaderScene]` (level2), `[LoaderScreen]` and `[LockScreen]` (sharedassets0), `DownloadingScreen` |

Scene canvases use CanvasScaler ScaleWithScreenSize, reference 2048x1536, MatchWidthOrHeight with match = 1 (height). Each scene also has a `WideScreenController` with side borders at ±1377.

## What's missing / caveats
- **Runtime-built UI.** Positions of instanced items (shop cells, map zones, lamps, perk items) and which screens a scene mounts come from code. Scene root components list their prefab references in `fields` (e.g. `FightScene._MountOnStart`).
- **Text.** It is the design-time string, often placeholder or Russian (e.g. "МЕНЮ", "%%ERROR%%"). Real strings come from `locKey` through the game's localisation tables, which are not resolved here. LabelAlias can override the font size at runtime (`labelFontSize`).
- **Sprite swaps.** States (pressed/disabled/highlight) on Nekki buttons live in `runtimeSprites` (`normalSpriteName`, ...) or in sibling `NormalImage`/`PressImage` nodes, not in Unity `spriteState`.
- **Animations.** `CocosAnimation` and DOTween animations are recorded only as class + fields. No Animator or Animation clips are converted.
- **Prefab nesting.** Nested-prefab references (e.g. ViewerFight → ComboModel prefab) are fields that point at other roots. The JSON doesn't inline them.
- **Sprite rects for runtime sprites.** In `spriteInfo`, `rect` and `textureRect` give the atlas sub-rect; use `border` for 9-slice. 92 sprite names are unresolved (see above).
