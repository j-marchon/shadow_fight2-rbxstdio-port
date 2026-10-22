"""Print a compact tree of a dumped UI layout (sf2-assets/ui/*.json): name, rect, sprite, text, classes.
Usage: python -I tools/ui_tree.py <json> [maxdepth] [Root/sub/path]   (set PYTHONIOENCODING=utf-8 on Windows)"""
import json, sys

def rect(r):
    if not r: return ''
    a = r['anchorMin'] + r['anchorMax']
    p = r['anchoredPosition']; s = r['sizeDelta']
    out = 'a[%g,%g,%g,%g] p(%g,%g) s(%g,%g)' % (*a, *p, *s)
    if r['pivot'] != [0.5, 0.5]: out += ' pv(%g,%g)' % tuple(r['pivot'])
    sc = r['localScale'][:2]
    if sc != [1.0, 1.0]: out += ' sc(%g,%g)' % tuple(sc)
    if r.get('rotationZ'): out += ' rot%g' % r['rotationZ']
    return out

def comps(n):
    bits = []
    for c in n.get('components', []):
        if c.get('type') != 'MonoBehaviour':
            if c.get('type') in ('Canvas', 'CanvasGroup'): bits.append(c['type'])
            continue
        ui = c.get('ui') or {}
        k = ui.get('kind')
        cls = c.get('class')
        if k == 'Image':
            bits.append('IMG:%s%s' % (ui.get('sprite'), '' if ui.get('type') in (None, 'simple') else '/' + ui['type']))
        elif k in ('Text', 'TextMeshProUGUI'):
            bits.append('TXT:%r%s z%s' % ((ui.get('text') or '')[:40], ' k=' + ui['locKey'] if ui.get('locKey') else '', ui.get('fontSize')))
        elif k in ('Button', 'Toggle'):
            bits.append(k.upper())
        elif cls not in ('ResolutionImage', 'LabelAlias', 'LabelAliasLE', 'NonDrawingGraphic'):
            bits.append(cls)
    return ' '.join(bits)

def walk(n, d, maxd):
    act = '' if n.get('active', True) else ' (off)'
    print('  ' * d + n.get('name', '') + act + '  ' + rect(n.get('rect')) + '  ' + comps(n))
    if d < maxd:
        for c in n.get('children', []):
            walk(c, d + 1, maxd)

def find(n, path):
    if not path: return n
    head, _, rest = path.partition('/')
    for c in n.get('children', []):
        if c.get('name') == head: return find(c, rest)

d = json.load(open(sys.argv[1], encoding='utf-8'))
maxd = int(sys.argv[2]) if len(sys.argv) > 2 else 99
roots = d['roots'] if 'roots' in d else [d.get('root', d)]
for r in roots:
    if len(sys.argv) > 3:
        head, _, rest = sys.argv[3].partition('/')
        if r.get('name') != head: continue
        r = find(r, rest)
        if not r: continue
    walk(r, 0, maxd)
