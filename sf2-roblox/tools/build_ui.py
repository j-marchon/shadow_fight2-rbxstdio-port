"""The original UI layouts (sf2-assets/ui, from tools/dump_ui.py) -> compact packed JSON for SF2.UI.
One module per root: out/UI/<Root> (prefabs by root name, scenes as scene_<level>_<Scene>).
Node: {n=name, a=active, r=[anchorMin x,y, anchorMax x,y, anchoredPosition x,y, sizeDelta x,y, pivot x,y,
       scale x,y, rotationZ], i=image?, x=text?, b=button?, k=[MonoBehaviour classes], s={runtime sprite fields},
       c=[children]}
  image: {s=sprite, t=type, c=[r,g,b,a], f=[fillMethod, fillAmount, fillOrigin], d=[border L,B,R,T], p=preserveAspect}
  text:  {t=text, k=locKey, z=fontSize, l=alignment, c=[r,g,b,a], f=font, u=upper, w=bestFit}
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
            txt = {'t': ui.get('text') or '', 'z': ui.get('labelFontSize') or ui.get('fontSize') or 30,
                   'l': ui.get('alignment') or 'MiddleCenter', 'c': [r4(x) for x in ui.get('color', [1, 1, 1, 1])],
                   'f': ui.get('font') or ''}
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
