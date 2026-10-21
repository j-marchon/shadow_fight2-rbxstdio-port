"""Survey + validate model XML: sections, element Types, attributes per (section, Type), reference integrity.
Args: <models dir>"""
import collections, os, sys
import xml.etree.ElementTree as ET

mdir = sys.argv[1]
sections = collections.Counter(); roots = collections.Counter()
attrs = collections.defaultdict(collections.Counter)     # (section, Type) -> attr -> count
values = collections.defaultdict(collections.Counter)    # (section,Type,attr) -> sample values (small enums)
types = collections.Counter()
refs_bad = collections.Counter(); refs_total = collections.Counter(); bad_files = []
examples = {}
for fn in sorted(os.listdir(mdir)):
    try:
        root = ET.parse(os.path.join(mdir, fn)).getroot()
    except Exception as e:
        bad_files.append((fn, str(e))); continue
    roots[root.tag] += 1
    names = set()
    for sec in root:
        sections[sec.tag] += 1
        for el in sec:
            names.add(el.tag)
    for sec in root:
        for el in sec:
            t = el.get('Type') or '(none)'
            key = (sec.tag, t)
            types[key] += 1
            examples.setdefault(key, (fn, el.tag, dict(el.attrib)))
            for a, v in el.attrib.items():
                attrs[key][a] += 1
                if len(values[(sec.tag, t, a)]) < 12:
                    values[(sec.tag, t, a)][v] += 1
            for a, v in el.attrib.items():
                if a in ('End1', 'End2') or a.startswith('ChildNode') or a in ('Edge', 'Node', 'Node1', 'Node2', 'Node3', 'Edge1', 'Edge2', 'Parent'):
                    refs_total[a] += 1
                    if v not in names:
                        refs_bad[a] += 1
            for sub in el:  # nested children (e.g. figure parts)
                types[(sec.tag + '/' + el.tag.split('-')[0][:0] + '<child>', sub.tag)] += 1
print('files', sum(roots.values()), 'roots', dict(roots), 'unparseable', bad_files[:3])
print('sections', dict(sections))
print('\nTypes per section:')
for k, n in sorted(types.items()):
    print(f'  {k}: {n}')
print('\nAttributes per (section, Type):')
for k in sorted(attrs):
    print(f'  {k}: ' + ', '.join(f'{a}({c})' for a, c in attrs[k].most_common()))
print('\nSmall-enum attribute values:')
for k, c in sorted(values.items()):
    if len(c) <= 8 and k[2] not in ('X', 'Y', 'Z'):
        print(f'  {k}: {dict(c)}')
print('\nReference integrity (attr: unresolved/total):', {a: f'{refs_bad[a]}/{refs_total[a]}' for a in refs_total})
print('\nExamples:')
for k, ex in examples.items():
    print(f'  {k}: {ex[0]} <{ex[1]} {ex[2]}>'[:400])
