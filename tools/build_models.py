"""Every model XML (combat/models, 594) -> out/Models/<model>.lua as packed JSON (tools/pack.py), by name,
for SF2.Rigs to merge at runtime the way ModelLoader / convert.rig_data does (first model wins a node or
edge name; macro children, edge ends and figures resolve across the whole merged set).
  n = [[name, kind, x, y, z, mass, fixed, cloth, attenuation, collisible, [kid names], [LCC or null]], ...]
  e = [[name, end1, end2, length, muscle, collisible, radius, margin1, margin2, bodyPart], ...]
  c = [[edgeName, radius, margin1, margin2], ...]          (Capsule figures)
  t = [[node1, node2, node3], ...]                          (Triangle figures)
Run: python -I tools/build_models.py
"""
import os, sys
import xml.etree.ElementTree as ET

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pack import write_json

MODELS = 'D:/Tools/work/sf2-data/combat/models'
OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'out', 'Models')

def f(v):
    v = float(v or 0)
    return int(v) if v == int(v) and abs(v) < 1e9 else float(format(v, '.6g'))

def flag(el, attr):
    return (el.get(attr) or el.get(attr.lower()) or '0') == '1'

def model(root):
    n, e, c, t = [], [], [], []
    for el in root.find('Nodes') if root.find('Nodes') is not None else []:
        kind = {'Node': 1, 'MacroNode': 2, 'CenterOfMass': 3}.get(el.get('Type'), 1)
        k = int(el.get('NodesCount') or 0)
        kids, w = [], []
        for i in range(1, k + 1):
            ch = el.get(f'ChildNode{i}')
            if ch:
                kids.append(ch)
                lcc = el.get(f'LCC{i}')
                w.append(f(lcc) if lcc is not None else None)
        n.append([el.tag, kind, f(el.get('X')), f(el.get('Y')), f(el.get('Z')), f(el.get('Mass')),
                  flag(el, 'Fixed'), flag(el, 'Cloth'), f(el.get('Attenuation')), el.get('Collisible') == '1', kids, w])
    for el in root.find('Edges') if root.find('Edges') is not None else []:
        a, b = el.get('End1') or el.get('Node1'), el.get('End2') or el.get('Node2')
        if not a or not b:
            continue
        e.append([el.tag, a, b, f(el.get('Length')), el.get('Type') == 'Muscle',
                  (el.get('Collisible') or el.get('collisible')) == '1', f(el.get('Radius')),
                  f(el.get('Margin1')), f(el.get('Margin2')), el.get('BodyPart') or ''])
    for el in root.find('Figures') if root.find('Figures') is not None else []:
        ty = el.get('Type')
        if ty == 'Capsule' and el.get('Edge'):
            c.append([el.get('Edge'), f(el.get('Radius1')), f(el.get('Margin1')), f(el.get('Margin2'))])
        elif ty == 'Triangle' and all(el.get(f'Node{i}') for i in (1, 2, 3)):
            t.append([el.get('Node1'), el.get('Node2'), el.get('Node3')])
    return {'n': n, 'e': e, 'c': c, 't': t}

def main():
    os.makedirs(OUT, exist_ok=True)
    for x in os.listdir(OUT):
        os.remove(os.path.join(OUT, x))
    count = files = size = 0
    for fn in sorted(os.listdir(MODELS)):
        if not fn.endswith('.xml'):
            continue
        try:
            root = ET.parse(os.path.join(MODELS, fn)).getroot()
        except ET.ParseError as err:
            print('unparsed', fn, err); continue
        k, sz = write_json(OUT, fn[:-4], model(root))
        files += k; size += sz; count += 1
    print('models', count, 'modules', files, f'{size / 1e6:.1f} MB')

if __name__ == '__main__':
    main()
