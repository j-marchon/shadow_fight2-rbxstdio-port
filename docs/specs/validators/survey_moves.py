"""Survey moves.xml: element paths (collapsed by role), attributes, small enums; dump a compact schema.
Args: <moves.xml> <out schema txt>"""
import collections, sys
import xml.etree.ElementTree as ET

root = ET.parse(sys.argv[1]).getroot()
paths = collections.Counter()
attrs = collections.defaultdict(collections.Counter)
vals = collections.defaultdict(collections.Counter)
children = collections.defaultdict(collections.Counter)

# Collapse recursive condition/operator nesting so the schema stays readable.
def norm(tag, parent):
    return tag

def walk(el, path):
    paths[path] += 1
    for a, v in el.attrib.items():
        attrs[path][a] += 1
        if len(vals[(path, a)]) <= 25:
            vals[(path, a)][v] += 1
    for c in el:
        p = path + '/' + c.tag
        if c.tag == 'Operator' and path.endswith('/Operator'):
            p = path  # fold nested operators
        children[path][c.tag] += 1
        walk(c, p)

walk(root, root.tag)
with open(sys.argv[2], 'w', encoding='utf8') as f:
    for p in sorted(paths):
        f.write(f'{p}  [{paths[p]}]\n')
        if attrs[p]:
            f.write('    attrs: ' + ', '.join(f'{a}({c})' for a, c in attrs[p].most_common()) + '\n')
        for a in attrs[p]:
            v = vals[(p, a)]
            if 1 < len(v) <= 25 and a not in ('Name', 'FileName', 'Frame', 'Min', 'Max', 'Start', 'End'):
                f.write(f'      {a}: ' + ', '.join(f'{k}({n})' for k, n in v.most_common()) + '\n')
print('distinct paths', len(paths))
print('top-level:', {c.tag: len(list(c)) for c in root})
move_children = children['Movesxml/Moves/Move']
print('Move children:', dict(move_children.most_common()))
for sec in ['Conditions', 'Events', 'Actions', 'Intervals', 'Tactics']:
    agg = collections.Counter()
    for p, ch in children.items():
        if p.endswith('/' + sec):
            agg.update(ch)
    print(f'\nchildren of any <{sec}>:', dict(agg.most_common(60)))
