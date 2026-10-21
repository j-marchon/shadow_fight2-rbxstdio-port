"""Validate moves.xml cross-references.
Args: <moves.xml> <models dir>"""
import collections, os, sys
import xml.etree.ElementTree as ET

root = ET.parse(sys.argv[1]).getroot()
mdir = sys.argv[2]
moves = list(root.find('Moves'))
move_names = {m.get('Name') for m in moves}
templates = {t.get('Name') for t in root.find('Templates')}
triggers = {t.get('Name') for t in root.find('Triggers')}
labels_used = collections.Counter(l for m in moves for l in (m.get('Template') or '').split('|') if l)

# every edge/node name across all models (attacking parts may live on weapons)
edges, nodes = set(), set()
for fn in os.listdir(mdir):
    r = ET.parse(os.path.join(mdir, fn)).getroot()
    for sec in r:
        for el in sec:
            (edges if sec.tag == 'Edges' else nodes).add(el.tag)

interval_names = set()
for m in moves:
    for iv in m.iter('Interval'):
        if iv.get('Name'):
            interval_names.add(iv.get('Name'))
        if iv.get('Type'):
            interval_names.add(iv.get('Type'))

checks = collections.defaultdict(lambda: [0, collections.Counter()])
def check(kind, value, ok):
    checks[kind][0] += 1
    if not ok:
        checks[kind][1][value] += 1

name_pool = move_names | templates | labels_used.keys() | {'$Move'}
for m in moves:
    for l in (m.get('Template') or '').split('|'):
        if l:
            check('Template label declared in <Templates>', l, l in templates)
    for el in m.iter('CurrentAnimation'):
        check('CurrentAnimation Name -> move/label', el.get('Name'), el.get('Name') in name_pool)
    for el in m.iter('CurrentInterval'):
        check('CurrentInterval Name -> interval name/type', el.get('Name'), el.get('Name') in interval_names)
    for ev in m.find('Events') if m.find('Events') is not None else []:
        if ev.tag in ('AnimationEnd', 'AnimationStart') and ev.get('Name'):
            check('Event AnimationEnd/Start Name -> move/label', ev.get('Name'), ev.get('Name') in name_pool)
        if ev.tag in ('IntervalEnd', 'IntervalStart') and ev.get('Name'):
            check('Event IntervalEnd Name -> interval', ev.get('Name'), ev.get('Name') in interval_names)
    for e in m.iter('AttackingParts'):
        for ed in e:
            check('AttackingParts Edge -> model edge', ed.get('Name'), ed.get('Name') in edges)
    for tag in ('Pivot', 'Position', 'From', 'To'):
        for el in m.iter(tag):
            if el.get('Object') == 'Nodes' and el.get('Part'):
                check(f'{tag} Part (Object=Nodes) -> model node', el.get('Part'), el.get('Part') in nodes)
    for el in m.iter('PlayAnimation'):
        n = el.get('Name')
        if n:
            check('PlayAnimation Name -> move', n, n in move_names)
    for el in m.iter('TryOnEnd'):
        n = el.get('Name') or el.get('Trigger')
        if n:
            check('TryOnEnd -> move/trigger', n, n in move_names | triggers)

print(f'moves {len(moves)}, templates {len(templates)}, triggers {len(triggers)}, labels used {len(labels_used)}')
for k, (n, bad) in checks.items():
    print(f'{k}: {n - sum(bad.values())}/{n} ok' + (f'  unresolved: {dict(bad.most_common(8))}' if bad else ''))
