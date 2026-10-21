"""SF2 -> Roblox data converter (Phase 2).
Writes Luau ModuleScript sources:
  out/Rigs/<RigName>.lua     merged fighter rig (base skeleton + equipment models)
  out/Anims/<file>.lua       animation, int16 (x8) positions, base64
  out/Moves.lua              move name -> animation file / type / template labels
Args: <combat dir> <out dir>
"""
import base64, os, struct, sys
import xml.etree.ElementTree as ET

COMBAT, OUT = sys.argv[1], sys.argv[2]
QUANT = 8  # 1/8 game unit precision

# The default warrior from usersDefault.xml: Skeleton="Skeleton" Armor="Body" Helm="Head" Weapon="Fists"
BASE_MODELS = ['mdl_skeleton', 'mdl_body', 'mdl_head']
# Weapons are added at runtime from out/WeaponRigs (tools/build_arsenal.py)
RIGS = {'Shadow': BASE_MODELS}
MOVES = ['StanceIdle', 'HighBlock', 'StepForward', 'StepBack', 'BackRoll', 'ForwardRoll', 'FrontFlip', 'BackFlip',
         'Duck', 'HighKick', 'HighKneeUp', 'FrontKick', 'BackKick', 'ReverseJumpKick', 'DoubleJumpKick',
         'ShortJumpKick', 'FrontJumpKick', 'AxeKick', 'BackFlipKick', 'Sweep', 'DoubleSweep', 'LowKick',
         'SuckerKick', 'DodgeReverseKick', 'DodgeKick', 'HighPunch', 'ShortUpwardElbowStrike', 'HeavyPunch',
         'DoublePunch', 'SpinningPunch', 'UpperCut', 'LowPunch', 'ElbowStrike', 'ThrowForward',
         'ThrowThroughTheBack', 'ThrowSuplex']

def lua_str(s):
    return '"' + s.replace('\\', '\\\\').replace('"', '\\"') + '"'

def num(v):
    v = float(v)
    return str(int(v)) if v == int(v) and abs(v) < 1e9 else repr(round(v, 5))

def sig(v):
    """Significant digits (masses go down to 1e-6; ModelEdge weighs ends by mass ratio)."""
    v = float(v)
    return str(int(v)) if v == int(v) and abs(v) < 1e9 else format(v, '.6g')

def b(el, attr):
    return (el.get(attr) or el.get(attr.lower()) or '0') == '1'

def rig_data(model_files):
    """Merge models in order: the base skeleton first, so its nodes keep the animation slot order."""
    nodes, index = [], {}
    edges, caps, tris = [], [], []
    roots = [ET.parse(os.path.join(COMBAT, 'models', f + '.xml')).getroot() for f in model_files]
    # pass 1: nodes in document order, base skeleton first (animation slot order)
    for r in roots:
        for el in r.find('Nodes') if r.find('Nodes') is not None else []:
            if el.tag in index:
                continue
            index[el.tag] = len(nodes) + 1
            t = el.get('Type')
            nodes.append(dict(name=el.tag, kind={'Node': 1, 'MacroNode': 2, 'CenterOfMass': 3}[t],
                              x=float(el.get('X')), y=float(el.get('Y')), z=float(el.get('Z')),
                              mass=float(el.get('Mass') or 0), fixed=b(el, 'Fixed'), cloth=b(el, 'Cloth'),
                              att=float(el.get('Attenuation') or 0), col=el.get('Collisible') == '1', el=el))
    # pass 2: macro children (names may live in any merged model)
    for n in nodes:
        el = n.pop('el')
        k = int(el.get('NodesCount') or 0)
        kids, w = [], []
        for i in range(1, k + 1):
            c = el.get(f'ChildNode{i}')
            if c in index:
                kids.append(index[c]); w.append(float(el.get(f'LCC{i}') or (1.0 / k if n['kind'] == 3 else 0)))
        if n['kind'] == 3 and kids and not any(w):
            w = [1.0 / len(kids)] * len(kids)
        n['kids'], n['w'] = kids, w
    edge_index = {}
    for r in roots:
        for el in r.find('Edges') if r.find('Edges') is not None else []:
            # weapon models often name the ends Node1/Node2 only
            a, c = el.get('End1') or el.get('Node1'), el.get('End2') or el.get('Node2')
            if a not in index or c not in index or el.tag in edge_index:
                continue
            edge_index[el.tag] = len(edges) + 1
            edges.append(dict(a=index[a], b=index[c], len=float(el.get('Length') or 0),
                              muscle=el.get('Type') == 'Muscle', name=el.tag,
                              col=(el.get('Collisible') or el.get('collisible')) == '1', r=float(el.get('Radius') or 0),
                              m1=float(el.get('Margin1') or 0), m2=float(el.get('Margin2') or 0),
                              part=el.get('BodyPart') or ''))
        for el in r.find('Figures') if r.find('Figures') is not None else []:
            t = el.get('Type')
            if t == 'Capsule' and el.get('Edge') in edge_index:
                caps.append(dict(e=edge_index[el.get('Edge')], r=float(el.get('Radius1') or 0),
                                 m1=float(el.get('Margin1') or 0), m2=float(el.get('Margin2') or 0)))
            elif t == 'Triangle' and all(el.get(f'Node{i}') in index for i in (1, 2, 3)):
                tris.append(tuple(index[el.get(f'Node{i}')] for i in (1, 2, 3)))
    return dict(nodes=nodes, edges=edges, caps=caps, tris=tris)

def rig_sections(nodes, edges, caps, tris):
    """Luau table fields for these rig parts; indices are absolute in the merged rig."""
    out = ['\tnodes = {']
    for n in nodes:
        kids = ('{' + ','.join(map(str, n['kids'])) + '}') if n['kids'] else 'nil'
        w = ('{' + ','.join(num(x) for x in n['w']) + '}') if n['kids'] else 'nil'
        out.append(f"\t\t{{name={lua_str(n['name'])},kind={n['kind']},x={num(n['x'])},y={num(n['y'])},z={num(n['z'])},"
                   f"mass={sig(n['mass'])},fixed={str(n['fixed']).lower()},cloth={str(n['cloth']).lower()},"
                   f"att={num(n['att'])},col={str(n['col']).lower()},kids={kids},w={w}}},")
    out.append('\t},\n\tedges = {')
    for e in edges:
        out.append(f"\t\t{{{e['a']},{e['b']},{num(e['len'])},{str(e['muscle']).lower()}}},")
    # ModelEdge collision data (ModelCollision), aligned with edges: name, Collisible, Radius, Margin1/2, BodyPart
    out.append('\t},\n\tedgeInfo = {')
    for e in edges:
        out.append(f"\t\t{{name={lua_str(e['name'])},col={str(e['col']).lower()},r={num(e['r'])},"
                   f"m1={num(e['m1'])},m2={num(e['m2'])},part={lua_str(e['part'])}}},")
    out.append('\t},\n\tcapsules = {')
    for c in caps:
        out.append(f"\t\t{{{c['e']},{num(c['r'])},{num(c['m1'])},{num(c['m2'])}}},")
    out.append('\t},\n\ttriangles = {')
    for t in tris:
        out.append(f'\t\t{{{t[0]},{t[1]},{t[2]}}},')
    out.append('\t},')
    return out

def build_rig(name, model_files):
    d = rig_data(model_files)
    out = (['-- Generated by tools/convert.py from ' + ', '.join(model_files), 'return {', f'\tname = {lua_str(name)},',
            '\tanimatedCount = 67,'] + rig_sections(d['nodes'], d['edges'], d['caps'], d['tris']) + ['}\n'])
    return '\n'.join(out), {k: len(v) for k, v in d.items()}

def convert_anim(fn):
    raw = open(os.path.join(COMBAT, 'animations', fn), 'rb').read()
    frames = struct.unpack_from('<i', raw, 0)[0]
    p, flags, packed, n0 = 4, bytearray(), bytearray(), None
    for _ in range(frames):
        flags.append(raw[p]); n = struct.unpack_from('<i', raw, p + 1)[0]
        vals = struct.unpack_from(f'<{3 * n}f', raw, p + 5); p += 5 + 12 * n
        n0 = n0 or n
        assert n == n0
        for v in vals:
            q = int(round(v * QUANT))
            assert -32768 <= q <= 32767, (fn, v)
            packed += struct.pack('<h', q)
    assert p == len(raw)
    src = (f'-- Generated by tools/convert.py from animations/{fn}\n'
           f'return {{frames={frames},nodes={n0},quant={QUANT},'
           f'flags={lua_str(base64.b64encode(bytes(flags)).decode())},'
           f'data={lua_str(base64.b64encode(bytes(packed)).decode())}}}\n')
    return src, frames, n0

def main():
    os.makedirs(os.path.join(OUT, 'Rigs'), exist_ok=True)
    os.makedirs(os.path.join(OUT, 'Anims'), exist_ok=True)
    for name, files in RIGS.items():
        src, stats = build_rig(name, files)
        open(os.path.join(OUT, 'Rigs', name + '.lua'), 'w', encoding='utf8').write(src)
        print('rig', name, stats, f'{len(src) / 1024:.0f} KB')
    moves = {m.get('Name'): m for m in ET.parse(os.path.join(COMBAT, 'moves.xml')).getroot().find('Moves')}
    lines = ['-- Generated by tools/convert.py from moves.xml', 'return {']
    total = 0
    for mv in MOVES:
        m = moves[mv]
        fn = m.get('FileName').replace('.bytes', '')
        src, frames, n = convert_anim(fn)
        open(os.path.join(OUT, 'Anims', fn + '.lua'), 'w', encoding='utf8').write(src)
        total += len(src)
        lines.append(f"\t{{name={lua_str(mv)},file={lua_str(fn)},frames={frames},type={lua_str(m.get('Type') or '')},"
                     f"first={m.get('FirstFrame') or 0},mid={m.get('MidFrames') or 0},"
                     f"labels={lua_str(m.get('Template') or '')}}},")
    lines.append('}\n')
    open(os.path.join(OUT, 'Moves.lua'), 'w', encoding='utf8').write('\n'.join(lines))
    print('anims', len(MOVES), f'{total / 1024:.0f} KB total')

if __name__ == "__main__":
    main()
