"""The original UI layouts (sf2-assets/ui, from tools/dump_ui.py) -> compact packed JSON for SF2.UI.
One module per root: out/UI/<Root> (prefabs by root name, scenes as scene_<level>_<Scene>).
Node: {n=name, a=active, r=[anchorMin x,y, anchorMax x,y, anchoredPosition x,y, sizeDelta x,y, pivot x,y,
       scale x,y, rotationZ], i=image?, x=text?, b=button?, k=[MonoBehaviour classes], s={runtime sprite fields},
       c=[children], lg=layout group?, le=LayoutElement?, cf=ContentSizeFitter?, m=mask?}
  lg: {t=H/V/G, p=[padding L,R,T,B], a=childAlignment (0..8), s=spacing, c=[controlW,H], e=[expandW,H], r=reverse}
      grid: {t=G, p, a, cs=[cell w,h], sp=[spacing x,y], k=[constraint, count]}
  image: {s=sprite, t=type, c=[r,g,b,a], f=[fillMethod, fillAmount, fillOrigin], d=[border L,B,R,T], p=preserveAspect}
  text:  {t=text, k=locKey, z=fontSize (best fit: its max), l=alignment, c=[r,g,b,a], f=font, u=upper, w=bestFit,
          m=best-fit min size, s=line spacing}
Run: python -I tools/build_ui.py
"""
import json, os, re, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pack import write_json

UI = 'D:/SF2-Port/sf2-assets/ui'
OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'out', 'UI')

def r4(v):
    return round(float(v), 3)

def node(n):
    out = {'n': n.get('name', '')}
    if not n.get('active', True):
        out['a'] = 0
    rect = n.get('rect')
    if rect:
        out['r'] = [r4(x) for x in rect['anchorMin'] + rect['anchorMax'] + rect['anchoredPosition'] + rect['sizeDelta']
                    + rect['pivot'] + rect['localScale'][:2]] + [r4(rect.get('rotationZ', 0))]
    classes, sprites = [], {}
    for comp in n.get('components', []):
        if comp.get('type') != 'MonoBehaviour':
            if comp.get('type') == 'CanvasGroup':
                out['g'] = r4(comp.get('alpha', 1))
            elif comp.get('type') == 'Canvas':
                # a Canvas keeps a zero rect in the scene -- the CanvasScaler sizes it to the screen at
                # runtime -- so SF2.UI has to recognise one and fill the screen itself
                classes.append('Canvas')
            continue
        classes.append(comp.get('class'))
        ui = comp.get('ui') or {}
        kind = ui.get('kind')
        cls = comp.get('class')
        f = comp.get('fields') or {}
        if cls in ('HorizontalLayoutGroup', 'VerticalLayoutGroup') and f:
            p = f.get('m_Padding') or {}
            out['lg'] = {'t': 'H' if cls[0] == 'H' else 'V',
                         'p': [p.get('m_Left', 0), p.get('m_Right', 0), p.get('m_Top', 0), p.get('m_Bottom', 0)],
                         'a': f.get('m_ChildAlignment', 0), 's': r4(f.get('m_Spacing', 0)),
                         'c': [f.get('m_ChildControlWidth', 0), f.get('m_ChildControlHeight', 0)],
                         'e': [f.get('m_ChildForceExpandWidth', 0), f.get('m_ChildForceExpandHeight', 0)],
                         'r': f.get('m_ReverseArrangement', 0)}
        elif cls == 'GridLayoutGroup' and f:
            p = f.get('m_Padding') or {}
            out['lg'] = {'t': 'G', 'p': [p.get('m_Left', 0), p.get('m_Right', 0), p.get('m_Top', 0), p.get('m_Bottom', 0)],
                         'a': f.get('m_ChildAlignment', 0),
                         'cs': [r4(f['m_CellSize']['x']), r4(f['m_CellSize']['y'])],
                         'sp': [r4(f['m_Spacing']['x']), r4(f['m_Spacing']['y'])],
                         'k': [f.get('m_Constraint', 0), f.get('m_ConstraintCount', 1)]}
        elif cls == 'LayoutElement' and f:
            # [ignore, minW, minH, prefW, prefH, flexW, flexH]; -1 = unset, as in Unity
            le = [f.get('m_IgnoreLayout', 0)] + [r4(f.get(k, -1)) for k in (
                'm_MinWidth', 'm_MinHeight', 'm_PreferredWidth', 'm_PreferredHeight', 'm_FlexibleWidth', 'm_FlexibleHeight')]
            # a node may carry two LayoutElements: each value comes from whichever sets it
            if 'le' in out:
                le = [max(out['le'][0], le[0])] + [b if b >= 0 else a for a, b in zip(out['le'][1:], le[1:])]
            out['le'] = le
        elif cls == 'ContentSizeFitter' and f:
            out['cf'] = [f.get('m_HorizontalFit', 0), f.get('m_VerticalFit', 0)]
        elif cls in ('RectMask2D', 'Mask'):
            out['m'] = 1
        for k, v in (ui.get('runtimeSprites') or {}).items():
            if isinstance(v, dict) and v.get('name'):
                sprites[k] = v['name']
        if kind == 'Image' and 'i' not in out:
            info = ui.get('spriteInfo') or {}
            img = {'s': ui.get('sprite') or '', 'c': [r4(x) for x in ui.get('color', [1, 1, 1, 1])]}
            if ui.get('type') and ui.get('type') != 'simple':
                img['t'] = ui['type']
            if ui.get('type') == 'filled':
                img['f'] = [ui.get('fillMethod'), r4(ui.get('fillAmount', 1)), ui.get('fillOrigin', 0)]
            if info.get('border') and any(info['border']):
                img['d'] = [r4(x) for x in info['border']]
            if ui.get('preserveAspect'):
                img['p'] = 1
            out['i'] = img
        elif kind == 'RawImage' and 'i' not in out:
            out['i'] = {'s': ui.get('texture') or '', 'c': [1, 1, 1, 1]}
        elif kind in ('Text', 'TextMeshProUGUI') and 'x' not in out:
            # Best fit sizes the text between minSize and maxSize, whatever fontSize says (LabelAlias's
            # labelFontSize -- 150 on InfoBattle's title -- only applies without it)
            if ui.get('bestFit'):
                size = ui.get('maxSize') or ui.get('fontSize') or 30
            elif (comp.get('fields') or {}).get('_useLabelFontSize', 1):
                size = ui.get('labelFontSize') or ui.get('fontSize') or 30
            else:
                size = ui.get('fontSize') or 30
            font = ui.get('font') or ''
            # with useLocalizationFont the label takes the language's font (AGOpusBold for the Latin and
            # Cyrillic languages) over its own -- the original's coin counts and battle names are AGOpusBold
            if ui.get('useLocalizationFont'):
                font = ''
            txt = {'t': ui.get('text') or '', 'z': size,
                   'l': ui.get('alignment') or 'MiddleCenter', 'c': [r4(x) for x in ui.get('color', [1, 1, 1, 1])],
                   'f': font}
            if ui.get('bestFit') and ui.get('minSize'):
                txt['m'] = ui['minSize']
            if ui.get('lineSpacing') not in (None, 1, 1.0):
                txt['s'] = r4(ui['lineSpacing'])
            if ui.get('locKey'):
                txt['k'] = ui['locKey']
            if ui.get('toUpperCase'):
                txt['u'] = 1
            if ui.get('bestFit'):
                txt['w'] = 1
            out['x'] = txt
        elif kind in ('Button', 'Toggle'):
            out['b'] = 1
    if classes:
        out['k'] = classes
    if sprites:
        out['s'] = sprites
    kids = [node(c) for c in n.get('children', [])]
    if kids:
        out['c'] = kids
    return out

def main():
    os.makedirs(OUT, exist_ok=True)
    for f in os.listdir(OUT):
        os.remove(os.path.join(OUT, f))
    names, count = {}, 0
    for f in sorted(os.listdir(UI)):
        if not f.endswith('.json') or f in ('index.json', 'stats.json'):
            continue
        d = json.load(open(os.path.join(UI, f), encoding='utf8'))
        if f.startswith('scene__'):
            m = re.match(r'scene__(level\d+)_(.+)\.json', f)
            name = f'scene_{m.group(1)}_{m.group(2)}'
            value = {'n': name, 'c': [node(r) for r in d['roots']]}
        else:
            root = d['root']
            name = re.sub(r'[^A-Za-z0-9_]', '_', root['name'])
            if name in names:
                name = name + '_' + f.rsplit('__', 1)[1][:6]
            value = node(root)
        names[name] = f
        write_json(OUT, name, value)
        count += 1
    print('ui roots', count)

if __name__ == '__main__':
    main()
