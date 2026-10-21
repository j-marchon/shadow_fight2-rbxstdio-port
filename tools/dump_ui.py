"""Dump SF2's Unity UI (scenes + UI prefabs) to JSON for the Roblox UI builder.

Output (OUT = D:/SF2-Port/sf2-assets/ui):
  scene__<levelN>_<Name>.json     every UI root (RectTransform hierarchy) of a scene
  prefab__<RootName>__<file>.json one per UI root GameObject in the non-scene serialized files
  index.json                      every exported root: source file, node count, MonoBehaviour classes
  stats.json                      MonoBehaviour readability counts, failures per class

MonoBehaviours mostly ship without type trees; they are generated with TypeTreeGeneratorAPI
from Il2CppDumper's DummyDll (the il2cpp backend of the generator fails on this binary).

Run:  D:/Tools/venvs/unitypy/Scripts/python.exe -I D:/SF2-Port/sf2-roblox/tools/dump_ui.py
"""
import collections
import json
import math
import os
import re
import sys
import time

import UnityPy
from UnityPy.classes import PPtr
from UnityPy.helpers.TypeTreeGenerator import TypeTreeGenerator

DATA = 'D:/SF2-Port/sf2-data/apk_assets/assets/bin/Data'
DLLS = 'D:/SF2-Port/sf2-il2cpp/dump/DummyDll'
OUT = 'D:/SF2-Port/sf2-assets/ui'
TEX_DIR = 'D:/SF2-Port/sf2-assets/tex/APK'
SPRITES_JSON = 'D:/SF2-Port/sf2-assets/sprites.json'  # from extract_assets.py (APK + bundles)
UNITY = '2022.3.62f2'
SCENES = ['GameLoader', 'GameSessionContext', 'Loader', 'Dojo', 'Shop', 'Map', 'Fight', 'Profile']
MAX_ARR = 50

UnityPy.config.FALLBACK_UNITY_VERSION = UNITY

# fields every MonoBehaviour has; dropped from the generic dump
BASE_FIELDS = {'m_GameObject', 'm_Enabled', 'm_Script', 'm_Name', 'm_EditorHideFlags',
               'm_EditorClassIdentifier', 'm_ObjectHideFlags', 'm_CorrespondingSourceObject',
               'm_PrefabInstance', 'm_PrefabAsset', 'm_OnCullStateChanged'}

IMAGE_TYPE = ['simple', 'sliced', 'tiled', 'filled']
FILL_METHOD = ['horizontal', 'vertical', 'radial90', 'radial180', 'radial360']
TEXT_ANCHOR = ['UpperLeft', 'UpperCenter', 'UpperRight', 'MiddleLeft', 'MiddleCenter', 'MiddleRight',
               'LowerLeft', 'LowerCenter', 'LowerRight']
SCALE_MODE = ['ConstantPixelSize', 'ScaleWithScreenSize', 'ConstantPhysicalSize']
MATCH_MODE = ['MatchWidthOrHeight', 'Expand', 'Shrink']
RENDER_MODE = ['ScreenSpaceOverlay', 'ScreenSpaceCamera', 'WorldSpace']
FIT_MODE = ['Unconstrained', 'MinSize', 'PreferredSize']
FONT_STYLE = ['Normal', 'Bold', 'Italic', 'BoldAndItalic']


def r4(v):
    if isinstance(v, float):
        if math.isnan(v) or math.isinf(v):
            return str(v)
        return round(v, 4)
    return v


def vec(d, keys='xy'):
    return [r4(d[k]) for k in keys] if isinstance(d, dict) else d


def col(d):
    return [r4(d[k]) for k in 'rgba'] if isinstance(d, dict) else d


def euler_z(q):
    x, y, z, w = q['x'], q['y'], q['z'], q['w']
    return r4(math.degrees(math.atan2(2 * (w * z + x * y), 1 - 2 * (y * y + z * z))))


class FixedGenerator(TypeTreeGenerator):
    """TypeTreeGeneratorAPI 0.0.10 emits the MonoBehaviour header's m_Enabled (UInt8) without the
    kAlignBytes flag (0x4000). Without it every m_Script/field after it is read 3 bytes off while the
    total byte count still matches (later aligned fields re-sync), so it fails silently. Patch it."""

    def get_nodes(self, assembly, fullname):
        nodes = super().get_nodes(assembly, fullname)
        for n in nodes:
            if n.m_Level == 1 and n.m_Name == 'm_Enabled':
                n.m_MetaFlag |= 0x4000
        return nodes


class Dumper:
    def __init__(self):
        t = time.time()
        self.env = UnityPy.load(DATA)
        gen = FixedGenerator(UNITY)
        gen.load_local_dll_folder(DLLS)
        self.env.typetree_generator = gen
        print(f'loaded env ({len(self.env.files)} files) + generator in {time.time() - t:.1f}s', flush=True)
        self.parsed = {}  # (file, pid) -> dict | Exception
        self.scripts = {}  # (file, pid) of MonoScript -> (class, ns, asm)
        self.mb_stats = collections.Counter()
        self.mb_fail = collections.Counter()
        self.mb_fail_msg = {}
        self.sprite_cache = {}
        self.ext_sprites = {}
        if os.path.exists(SPRITES_JSON):
            with open(SPRITES_JSON, encoding='utf-8') as fp:
                self.ext_sprites = json.load(fp)
        self.sprites_by_name = collections.defaultdict(list)
        for o in self.env.objects:
            if o.type.name == 'Sprite':
                sd = self.parse(o)
                if isinstance(sd, dict):
                    self.sprites_by_name[sd.get('m_Name')].append(o)
        self.tex_png = set(os.path.splitext(f)[0] for f in os.listdir(TEX_DIR)) if os.path.isdir(TEX_DIR) else set()

    # ---------------------------------------------------------------- reading
    def parse(self, obj):
        key = (obj.assets_file.name, obj.path_id)
        if key in self.parsed:
            return self.parsed[key]
        try:
            d = obj.read_typetree()
        except Exception as e:  # noqa
            d = e
        self.parsed[key] = d
        return d

    def deref(self, af, p):
        if not isinstance(p, dict) or not p.get('m_PathID'):
            return None
        try:
            return PPtr(m_FileID=p['m_FileID'], m_PathID=p['m_PathID'], assetsfile=af).deref()
        except Exception:
            return None

    def script_of(self, obj, d):
        """class info for a MonoBehaviour (works even when its body can't be parsed)."""
        if isinstance(d, dict):
            sp = d.get('m_Script')
        else:
            try:
                head = obj.parse_monobehaviour_head()
                sp = {'m_FileID': head.m_Script.m_FileID, 'm_PathID': head.m_Script.m_PathID}
            except Exception:
                return ('?', '', '')
        so = self.deref(obj.assets_file, sp)
        if so is None:
            return ('?', '', '')
        k = (so.assets_file.name, so.path_id)
        if k not in self.scripts:
            s = self.parse(so)
            self.scripts[k] = (s.get('m_ClassName', '?'), s.get('m_Namespace', ''), s.get('m_AssemblyName', '')) \
                if isinstance(s, dict) else ('?', '', '')
        return self.scripts[k]

    # ------------------------------------------------------------ references
    def go_path(self, go_obj):
        names = []
        cur = go_obj
        for _ in range(64):
            g = self.parse(cur)
            if not isinstance(g, dict):
                break
            names.append(g.get('m_Name', '?'))
            comps = g.get('m_Component') or []
            tr = self.deref(cur.assets_file, comps[0]['component']) if comps else None
            if tr is None:
                break
            t = self.parse(tr)
            father = self.deref(tr.assets_file, t.get('m_Father')) if isinstance(t, dict) else None
            if father is None:
                break
            ft = self.parse(father)
            cur = self.deref(father.assets_file, ft.get('m_GameObject')) if isinstance(ft, dict) else None
            if cur is None:
                break
        return '/'.join(reversed(names))

    def sprite_info(self, so):
        d = self.parse(so)
        if not isinstance(d, dict):
            return {'type': 'Sprite', 'error': str(d)[:200]}
        out = {'type': 'Sprite', 'name': d.get('m_Name'), 'file': so.assets_file.name}
        rd = d.get('m_RD') or {}
        to = self.deref(so.assets_file, rd.get('texture'))
        if to is not None:
            td = self.parse(to)
            if isinstance(td, dict):
                out['texture'] = td.get('m_Name')
                out['textureSize'] = [td.get('m_Width'), td.get('m_Height')]
                if td.get('m_Name') in self.tex_png:
                    out['png'] = f"tex/APK/{td.get('m_Name')}.png"
        tr = rd.get('textureRect')
        if tr:
            out['textureRect'] = [r4(tr['x']), r4(tr['y']), r4(tr['width']), r4(tr['height'])]
        r = d.get('m_Rect')
        if r:
            out['rect'] = [r4(r['x']), r4(r['y']), r4(r['width']), r4(r['height'])]
        b = d.get('m_Border')
        if b and any(b.values()):
            out['border'] = [r4(b['x']), r4(b['y']), r4(b['z']), r4(b['w'])]  # L,B,R,T
        out['pivot'] = vec(d.get('m_Pivot') or {'x': .5, 'y': .5})
        out['ppu'] = r4(d.get('m_PixelsToUnits'))
        if d.get('m_PackingTag'):
            out['packingTag'] = d['m_PackingTag']
        return out

    def ref(self, af, p, depth=0):
        """resolve a PPtr dict into something readable."""
        if not isinstance(p, dict) or not p.get('m_PathID'):
            return None
        o = self.deref(af, p)
        if o is None:
            return {'unresolved': [p['m_FileID'], p['m_PathID']]}
        t = o.type.name
        if t == 'Sprite':
            return self.sprite_info(o)
        d = self.parse(o)
        if t == 'GameObject':
            return {'type': 'GameObject', 'path': self.go_path(o)}
        if t == 'MonoBehaviour':
            cls = self.script_of(o, d)[0]
            r = {'type': cls}
            if isinstance(d, dict):
                gp = self.deref(o.assets_file, d.get('m_GameObject'))
                if gp is not None:
                    r['path'] = self.go_path(gp)
                elif d.get('m_Name'):
                    r['name'] = d['m_Name']  # ScriptableObject asset (fonts, configs ...)
                    r['file'] = o.assets_file.name
            return r
        if isinstance(d, dict):
            if 'm_GameObject' in d and t not in ('Texture2D', 'Material'):
                gp = self.deref(o.assets_file, d.get('m_GameObject'))
                return {'type': t, 'path': self.go_path(gp) if gp else None}
            r = {'type': t, 'name': d.get('m_Name')}
            if t == 'Texture2D':
                r['size'] = [d.get('m_Width'), d.get('m_Height')]
                if d.get('m_Name') in self.tex_png:
                    r['png'] = f"tex/APK/{d.get('m_Name')}.png"
            if t != 'MonoScript' and o.assets_file.name not in ('', None):
                r['file'] = o.assets_file.name
            return r
        return {'type': t, 'error': str(d)[:200]}

    def clean(self, af, v, depth=0):
        """generic serialized-field dump: PPtrs resolved, arrays truncated, bytes summarised."""
        if depth > 12:
            return '...'
        if isinstance(v, dict):
            if set(v.keys()) == {'m_FileID', 'm_PathID'}:
                return self.ref(af, v)
            return {k: self.clean(af, x, depth + 1) for k, x in v.items() if k not in BASE_FIELDS}
        if isinstance(v, (bytes, bytearray)):
            return f'<{len(v)} bytes>'
        if isinstance(v, (list, tuple)):
            if len(v) > MAX_ARR and all(isinstance(x, (int, float)) for x in v[:MAX_ARR]):
                return {'len': len(v), 'head': [r4(x) for x in v[:MAX_ARR]]}
            out = [self.clean(af, x, depth + 1) for x in v[:MAX_ARR]]
            if len(v) > MAX_ARR:
                out.append(f'... {len(v) - MAX_ARR} more (len {len(v)})')
            return out
        return r4(v)

    # ------------------------------------------------------- UI summaries
    def calls(self, af, ev):
        try:
            cs = ev['m_PersistentCalls']['m_Calls']
        except Exception:
            return None
        out = []
        for c in cs:
            tgt = self.ref(af, c.get('m_Target'))
            out.append({'target': tgt, 'method': c.get('m_MethodName'),
                        'arg': (c.get('m_Arguments') or {}).get('m_StringArgument') or None})
        return out

    def sprite_by_name(self, name):
        """runtime-loaded sprites (Resources 'UI/Atlases/' + 'Atlas.sprite'): pick the full-res copy."""
        if not name:
            return None
        if name not in self.sprite_cache:
            best = None
            for so in self.sprites_by_name.get(name, []):
                info = self.sprite_info(so)
                size = (info.get('textureSize') or [0, 0])
                key = (not str(info.get('texture', '')).endswith('_low'), size[0] * size[1])
                if best is None or key > best[0]:
                    best = (key, info)
            if best is None and name in self.ext_sprites:
                # not in the APK: sprite lives in a downloaded bundle (extract_assets.py's sprites.json)
                pack, tex, x, y, w, h, px, py = self.ext_sprites[name][:8]
                best = (None, {'type': 'Sprite', 'name': name, 'texture': tex, 'pack': pack,
                               'png': f'tex/{pack}/{tex}.png', 'textureRectTopLeft': [x, y, w, h],
                               'pivot': [px, py], 'source': 'sprites.json (bundle)'})
            self.sprite_cache[name] = best[1] if best else {'type': 'Sprite', 'name': name, 'unresolved': True}
        return self.sprite_cache[name]

    @staticmethod
    def kind_of(cls, d):
        if 'm_FontData' in d:
            return 'Text'
        if 'm_fontAsset' in d:
            return 'TextMeshProUGUI'
        if 'm_Sprite' in d and 'm_FillMethod' in d:
            return 'Image'
        if 'm_Texture' in d and 'm_UVRect' in d:
            return 'RawImage'
        if 'm_Interactable' in d and 'm_Transition' in d:
            return {'Toggle': 'Toggle', 'Slider': 'Slider', 'Scrollbar': 'Scrollbar'}.get(cls, 'Toggle' if 'm_IsOn' in d else
                                                                                         'Slider' if 'm_FillRect' in d else 'Button')
        return cls

    def ui_summary(self, cls, af, d):
        g = d.get
        kind = self.kind_of(cls, d)
        s = {'kind': kind} if kind != cls else {}
        if kind in ('Image', 'RawImage', 'Text', 'TextMeshProUGUI', 'TextMeshPro'):
            s.update(color=col(g('m_Color')), raycastTarget=bool(g('m_RaycastTarget', 0)))
            mat = self.ref(af, g('m_Material'))
            if mat:
                s['material'] = mat.get('name')
        # Nekki.SF2.GUI.* components name their sprite instead of referencing it (loaded from Resources at runtime)
        # (also any string field whose value is a known sprite name, e.g. RoundsPanel._roundUndone = 'FightUI.Round_Undone')
        rs = {k: v for k, v in d.items() if isinstance(v, str) and v and k not in ('m_Text', 'm_text', '_Alias') and
              (k.endswith('SpriteName') or v in self.sprites_by_name or v in self.ext_sprites)}
        if rs:
            s['runtimeSprites'] = {}
            for k, v in rs.items():
                info = self.sprite_by_name(v)
                path = d.get(k.replace('SpriteName', 'TexturePath')) if 'SpriteName' in k else None
                s['runtimeSprites'][k.strip('_')] = {'name': v, 'texture': info.get('texture'), 'resourcesPath': path,
                                                     'resolved': not info.get('unresolved')}
        if kind == 'Image':
            sp = self.ref(af, g('m_Sprite'))
            src = 'm_Sprite'
            if not sp and g('_SpriteName'):
                sp, src = self.sprite_by_name(g('_SpriteName')), 'runtime:_SpriteName'
            s.update(sprite=sp.get('name') if sp else None, texture=sp.get('texture') if sp else None,
                     spriteSource=src if sp else None,
                     spriteInfo=sp, type=IMAGE_TYPE[g('m_Type', 0)] if g('m_Type', 0) < 4 else g('m_Type'),
                     preserveAspect=bool(g('m_PreserveAspect', 0)), fillCenter=bool(g('m_FillCenter', 1)),
                     pixelsPerUnitMultiplier=r4(g('m_PixelsPerUnitMultiplier', 1.0)))
            if g('m_Type') == 3:
                s.update(fillMethod=FILL_METHOD[g('m_FillMethod', 0)], fillAmount=r4(g('m_FillAmount')),
                         fillOrigin=g('m_FillOrigin'), fillClockwise=bool(g('m_FillClockwise', 1)))
        elif kind == 'RawImage':
            tx = self.ref(af, g('m_Texture'))
            s.update(texture=tx.get('name') if tx else None, textureInfo=tx,
                     uvRect=[r4(g('m_UVRect')[k]) for k in ('x', 'y', 'width', 'height')] if g('m_UVRect') else None)
        elif kind == 'Text':
            fd = g('m_FontData') or {}
            font = self.ref(af, fd.get('m_Font'))
            al = fd.get('m_Alignment', 0)
            s.update(text=g('m_Text'), font=font.get('name') if font else None, fontSize=fd.get('m_FontSize'),
                     fontStyle=FONT_STYLE[fd.get('m_FontStyle', 0)] if fd.get('m_FontStyle', 0) < 4 else fd.get('m_FontStyle'),
                     alignment=TEXT_ANCHOR[al] if al < 9 else al, bestFit=bool(fd.get('m_BestFit', 0)),
                     minSize=fd.get('m_MinSize'), maxSize=fd.get('m_MaxSize'), richText=bool(fd.get('m_RichText', 1)),
                     horizontalOverflow=['Wrap', 'Overflow'][fd.get('m_HorizontalOverflow', 0) & 1],
                     verticalOverflow=['Truncate', 'Overflow'][fd.get('m_VerticalOverflow', 0) & 1],
                     lineSpacing=r4(fd.get('m_LineSpacing')))
            if '_Alias' in d:  # Nekki LabelAlias: localisation key + runtime font overrides
                s.update(locKey=g('_Alias') or None, toUpperCase=bool(g('_ToUpperCase', 0)),
                         useLocalizationFont=bool(g('_useLocalizationFont', 0)), fontType=g('_fontType'))
                if g('_useLabelFontSize'):
                    s['labelFontSize'] = g('_labelFontSize')
                if g('_useLabelLineSpacing'):
                    s['labelLineSpacing'] = r4(g('_labelLineSpacing'))
        elif kind in ('TextMeshProUGUI', 'TextMeshPro'):
            font = self.ref(af, g('m_fontAsset'))
            s.update(text=g('m_text'), font=(font or {}).get('name'), fontSize=r4(g('m_fontSize')),
                     color=col(g('m_fontColor')) or s.get('color'), bestFit=bool(g('m_enableAutoSizing', 0)),
                     fontSizeMin=r4(g('m_fontSizeMin')), fontSizeMax=r4(g('m_fontSizeMax')),
                     alignment=g('m_textAlignment'), horizontalAlignment=g('m_HorizontalAlignment'),
                     verticalAlignment=g('m_VerticalAlignment'), fontStyle=g('m_fontStyle'),
                     wordWrap=g('m_enableWordWrapping'), overflow=g('m_overflowMode'))
        elif cls == 'CanvasScaler':
            sm = g('m_UiScaleMode', 0)
            mm = g('m_ScreenMatchMode', 0)
            s.update(uiScaleMode=SCALE_MODE[sm] if sm < 3 else sm, referenceResolution=vec(g('m_ReferenceResolution')),
                     screenMatchMode=MATCH_MODE[mm] if mm < 3 else mm, matchWidthOrHeight=r4(g('m_MatchWidthOrHeight')),
                     scaleFactor=r4(g('m_ScaleFactor')), referencePixelsPerUnit=r4(g('m_ReferencePixelsPerUnit')))
        elif kind in ('Button', 'Toggle', 'Slider', 'Scrollbar', 'Dropdown', 'InputField', 'Selectable'):
            s.update(interactable=bool(g('m_Interactable', 1)), transition=['None', 'ColorTint', 'SpriteSwap', 'Animation'][g('m_Transition', 0) & 3],
                     targetGraphic=self.ref(af, g('m_TargetGraphic')))
            ss = g('m_SpriteState')
            if ss and g('m_Transition') == 2:
                s['spriteState'] = {k: (self.ref(af, v) or {}).get('name') for k, v in ss.items()}
            if g('m_Colors') and g('m_Transition') == 1:
                s['colors'] = {k: col(v) if isinstance(v, dict) else r4(v) for k, v in g('m_Colors').items()}
            if kind == 'Button':
                s['onClick'] = self.calls(af, g('m_OnClick'))
            if kind == 'Toggle':
                s['isOn'] = bool(g('m_IsOn', 0))
                s['group'] = self.ref(af, g('m_Group'))
            if kind == 'Slider':
                s.update(min=r4(g('m_MinValue')), max=r4(g('m_MaxValue')), value=r4(g('m_Value')),
                         direction=g('m_Direction'), fillRect=self.ref(af, g('m_FillRect')), handleRect=self.ref(af, g('m_HandleRect')))
        elif cls == 'Mask':
            s['showMaskGraphic'] = bool(g('m_ShowMaskGraphic', 1))
        elif cls in ('HorizontalLayoutGroup', 'VerticalLayoutGroup', 'GridLayoutGroup'):
            p = g('m_Padding') or {}
            ca = g('m_ChildAlignment', 0)
            s.update(layout=cls, padding={k[2:].lower() if k.startswith('m_') else k: v for k, v in p.items()},
                     childAlignment=TEXT_ANCHOR[ca] if ca < 9 else ca,
                     spacing=vec(g('m_Spacing')) if isinstance(g('m_Spacing'), dict) else r4(g('m_Spacing')))
            if cls == 'GridLayoutGroup':
                s.update(cellSize=vec(g('m_CellSize')), startCorner=g('m_StartCorner'), startAxis=g('m_StartAxis'),
                         constraint=g('m_Constraint'), constraintCount=g('m_ConstraintCount'))
            else:
                s.update(childControlWidth=g('m_ChildControlWidth'), childControlHeight=g('m_ChildControlHeight'),
                         childForceExpandWidth=g('m_ChildForceExpandWidth'), childForceExpandHeight=g('m_ChildForceExpandHeight'),
                         childScaleWidth=g('m_ChildScaleWidth'), childScaleHeight=g('m_ChildScaleHeight'),
                         reverseArrangement=g('m_ReverseArrangement'))
        elif cls == 'ContentSizeFitter':
            s.update(horizontalFit=FIT_MODE[g('m_HorizontalFit', 0) % 3], verticalFit=FIT_MODE[g('m_VerticalFit', 0) % 3])
        elif cls == 'ScrollRect':
            s.update(content=self.ref(af, g('m_Content')), viewport=self.ref(af, g('m_Viewport')),
                     horizontal=bool(g('m_Horizontal')), vertical=bool(g('m_Vertical')),
                     movementType=['Unrestricted', 'Elastic', 'Clamped'][g('m_MovementType', 1) % 3],
                     inertia=bool(g('m_Inertia')), decelerationRate=r4(g('m_DecelerationRate')))
        elif cls == 'LayoutElement':
            s.update({k[2:]: r4(g(k)) for k in ('m_IgnoreLayout', 'm_MinWidth', 'm_MinHeight', 'm_PreferredWidth',
                                                'm_PreferredHeight', 'm_FlexibleWidth', 'm_FlexibleHeight') if k in d})
        elif cls == 'AspectRatioFitter':
            s.update(aspectMode=g('m_AspectMode'), aspectRatio=r4(g('m_AspectRatio')))
        elif cls in ('Outline', 'Shadow'):
            s.update(effectColor=col(g('m_EffectColor')), effectDistance=vec(g('m_EffectDistance')))
        return s

    # -------------------------------------------------------- components
    def component(self, co):
        t = co.type.name
        d = self.parse(co)
        af = co.assets_file
        if t == 'MonoBehaviour':
            cls, ns, asm = self.script_of(co, d)
            self.mb_stats['total'] += 1
            c = {'type': 'MonoBehaviour', 'class': cls, 'namespace': ns, 'assembly': asm}
            if not isinstance(d, dict):
                self.mb_stats['failed'] += 1
                self.mb_fail[f'{ns}.{cls}'] += 1
                self.mb_fail_msg.setdefault(f'{ns}.{cls}', str(d)[:300])
                c['error'] = str(d)[:300]
                return c
            self.mb_stats['ok'] += 1
            c['enabled'] = bool(d.get('m_Enabled', 1))
            s = self.ui_summary(cls, af, d)
            if s:
                c['ui'] = s
            c['fields'] = self.clean(af, d)
            return c
        if not isinstance(d, dict):
            return {'type': t, 'error': str(d)[:300]}
        if t == 'Canvas':
            rm = d.get('m_RenderMode', 0)
            return {'type': 'Canvas', 'renderMode': RENDER_MODE[rm] if rm < 3 else rm, 'enabled': bool(d.get('m_Enabled', 1)),
                    'sortingOrder': d.get('m_SortingOrder'), 'overrideSorting': bool(d.get('m_OverrideSorting', 0)),
                    'pixelPerfect': bool(d.get('m_PixelPerfect', 0)), 'planeDistance': r4(d.get('m_PlaneDistance')),
                    'sortingLayerID': d.get('m_SortingLayerID'), 'camera': self.ref(af, d.get('m_Camera'))}
        if t == 'CanvasGroup':
            return {'type': t, 'alpha': r4(d.get('m_Alpha')), 'interactable': bool(d.get('m_Interactable')),
                    'blocksRaycasts': bool(d.get('m_BlocksRaycasts')), 'ignoreParentGroups': bool(d.get('m_IgnoreParentGroups'))}
        if t == 'CanvasRenderer':
            return None
        if t in ('SpriteRenderer',):
            return {'type': t, 'sprite': self.ref(af, d.get('m_Sprite')), 'color': col(d.get('m_Color')),
                    'sortingOrder': d.get('m_SortingOrder')}
        if t in ('Animator', 'Animation'):
            return {'type': t, 'controller': self.ref(af, d.get('m_Controller')),
                    'clip': self.ref(af, d.get('m_Animation')),
                    'clips': [(self.ref(af, x) or {}).get('name') for x in (d.get('m_Animations') or [])][:MAX_ARR]}
        if t == 'Camera':
            return {'type': t, 'orthographic': bool(d.get('orthographic')), 'orthographicSize': r4(d.get('orthographic size')),
                    'depth': r4(d.get('m_Depth')), 'clearFlags': d.get('m_ClearFlags'), 'cullingMask': (d.get('m_CullingMask') or {}).get('m_Bits')}
        return {'type': t}

    # ------------------------------------------------------------- nodes
    def node(self, tr_obj, counter, classes, depth=0):
        t = self.parse(tr_obj)
        af = tr_obj.assets_file
        go = self.deref(af, t.get('m_GameObject'))
        g = self.parse(go) if go is not None else {}
        counter[0] += 1
        n = {'name': g.get('m_Name'), 'active': bool(g.get('m_IsActive', 1)), 'layer': g.get('m_Layer')}
        if tr_obj.type.name == 'RectTransform':
            n['rect'] = {'anchorMin': vec(t['m_AnchorMin']), 'anchorMax': vec(t['m_AnchorMax']),
                         'anchoredPosition': vec(t['m_AnchoredPosition']), 'sizeDelta': vec(t['m_SizeDelta']),
                         'pivot': vec(t['m_Pivot']), 'localScale': vec(t['m_LocalScale'], 'xyz'),
                         'rotationZ': euler_z(t['m_LocalRotation'])}
            lp = t['m_LocalPosition']
            if abs(lp['z']) > 1e-4:
                n['rect']['localZ'] = r4(lp['z'])
        else:
            n['transform'] = {'localPosition': vec(t['m_LocalPosition'], 'xyz'), 'localScale': vec(t['m_LocalScale'], 'xyz'),
                              'rotationZ': euler_z(t['m_LocalRotation'])}
        comps = []
        for c in (g.get('m_Component') or []):
            co = self.deref(go.assets_file, c['component'])
            if co is None or co.type.name in ('RectTransform', 'Transform'):
                continue
            cd = self.component(co)
            if cd is None:
                continue
            if cd.get('class'):
                classes.add(cd['class'] if not cd.get('namespace') else f"{cd['namespace']}.{cd['class']}")
            comps.append(cd)
        if comps:
            n['components'] = comps
        kids = []
        for ch in t.get('m_Children') or []:
            co = self.deref(af, ch)
            if co is not None and isinstance(self.parse(co), dict):
                kids.append(self.node(co, counter, classes, depth + 1))
        if kids:
            n['children'] = kids
        return n

    # -------------------------------------------------------------- roots
    def roots(self):
        """(file, transform obj) for every root transform whose hierarchy contains a RectTransform."""
        per_file = collections.defaultdict(list)
        has_rect = set()
        for f in self.env.files.values():
            objs = getattr(f, 'objects', None)
            if not objs:
                continue
            for o in objs.values():
                if o.type.name in ('RectTransform', 'Transform'):
                    d = self.parse(o)
                    if not isinstance(d, dict):
                        continue
                    if not d.get('m_Father', {}).get('m_PathID'):
                        per_file[f.name].append(o)
                    if o.type.name == 'RectTransform':
                        has_rect.add((f.name, o.path_id))
        out = []
        for fname, rs in per_file.items():
            for o in rs:
                if self.subtree_has_rect(o, has_rect):
                    out.append((fname, o))
        return out

    def subtree_has_rect(self, o, has_rect):
        if (o.assets_file.name, o.path_id) in has_rect:
            return True
        d = self.parse(o)
        for ch in d.get('m_Children') or []:
            co = self.deref(o.assets_file, ch)
            if co is not None and self.subtree_has_rect(co, has_rect):
                return True
        return False


def safe(s):
    return re.sub(r'[^A-Za-z0-9_.\-\[\]]+', '_', s or 'unnamed').strip('_')[:80]


def main():
    os.makedirs(OUT, exist_ok=True)
    for f in os.listdir(OUT):
        if f.endswith('.json'):
            os.remove(os.path.join(OUT, f))
    D = Dumper()
    t0 = time.time()

    # readability over ALL MonoBehaviours (not only UI ones)
    all_mb = collections.Counter()
    all_fail = collections.Counter()
    for o in D.env.objects:
        if o.type.name == 'MonoBehaviour':
            d = D.parse(o)
            had_tt = bool(o.serialized_type and o.serialized_type.node)
            all_mb['total'] += 1
            all_mb['with_typetree' if had_tt else 'generated'] += 1
            if isinstance(d, dict):
                # byte-count check alone is weak (see FixedGenerator); a resolvable m_Script proves the header aligned
                if D.script_of(o, d)[0] != '?':
                    all_mb['readable_script_resolved'] += 1
                all_mb['readable'] += 1
                all_mb['readable_' + ('typetree' if had_tt else 'generated')] += 1
            else:
                cls, ns, _ = D.script_of(o, d)
                all_fail[f'{ns}.{cls}'] += 1
                D.mb_fail_msg.setdefault(f'{ns}.{cls}', str(d)[:300])
    print('MonoBehaviours:', dict(all_mb), f'({time.time() - t0:.1f}s)', flush=True)

    roots = D.roots()
    print(f'{len(roots)} UI roots', flush=True)
    index = []
    scenes = collections.defaultdict(list)
    for fname, tr in roots:
        counter = [0]
        classes = set()
        try:
            n = D.node(tr, counter, classes)
        except Exception as e:  # noqa
            print('ERR', fname, tr.path_id, repr(e), flush=True)
            continue
        entry = {'name': n['name'], 'source': fname, 'pathID': tr.path_id, 'nodes': counter[0],
                 'monoBehaviours': sorted(classes)}
        m = re.fullmatch(r'level(\d+)', fname)
        if m:
            scenes[fname].append((n, entry))
            continue
        out = f"prefab__{safe(n['name'])}__{fname[:12]}.json"
        entry['json'] = out
        with open(os.path.join(OUT, out), 'w', encoding='utf-8') as fp:
            json.dump({'source': fname, 'pathID': tr.path_id, 'root': n}, fp, ensure_ascii=False, indent=1)
        index.append(entry)
    for fname, items in sorted(scenes.items()):
        i = int(fname[5:])
        out = f"scene__{fname}_{SCENES[i] if i < len(SCENES) else ''}.json"
        with open(os.path.join(OUT, out), 'w', encoding='utf-8') as fp:
            json.dump({'source': fname, 'scene': SCENES[i] if i < len(SCENES) else None,
                       'roots': [n for n, _ in items]}, fp, ensure_ascii=False, indent=1)
        for _, e in items:
            e['json'] = out
            e['scene'] = SCENES[i] if i < len(SCENES) else None
            index.append(e)
    index.sort(key=lambda e: (e['json'], e['name'] or ''))
    with open(os.path.join(OUT, 'index.json'), 'w', encoding='utf-8') as fp:
        json.dump(index, fp, ensure_ascii=False, indent=1)
    stats = {'monoBehavioursAll': dict(all_mb), 'failedByClass': dict(all_fail.most_common()),
             'failMessages': {k: D.mb_fail_msg[k] for k in all_fail},
             'monoBehavioursInUI': dict(D.mb_stats), 'roots': len(index),
             'files': len(set(e['json'] for e in index))}
    with open(os.path.join(OUT, 'stats.json'), 'w', encoding='utf-8') as fp:
        json.dump(stats, fp, ensure_ascii=False, indent=1)
    print(json.dumps({k: v for k, v in stats.items() if k != 'failMessages'}, indent=1)[:3000])
    print(f'done in {time.time() - t0:.1f}s')


if __name__ == '__main__':
    sys.setrecursionlimit(10000)
    main()
