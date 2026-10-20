"""Compile moves.xml into a Luau move set for one equipment loadout (Phase 3).
Keeps every move whose <Locks> pass for the loadout and whose animation exists, and emits
events / condition trees / intervals / align / direction in a compact Luau table.
Also copies the needed animations through convert.py's encoder.
Args: <combat dir> <out dir> Shadow   (the default Fists loadout; every weapon's moves come from
build_arsenal.py's move library, filtered at runtime)
"""
import os, sys
import xml.etree.ElementTree as ET

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# Default warrior (usersDefault.xml) -> list.xml items, with a weapon item swapped in
def loadout(name='Fists', sub='Fists'):
    return [
        dict(Name='Skeleton', Type='Skeleton', SubType='Skeleton'),
        dict(Name='Body', Type='Armor', SubType=''),
        dict(Name='Head', Type='Helm', SubType=''),
        dict(Name=name, Type='Weapon', SubType=sub),
        dict(Name='NoRanged', Type='Ranged', SubType=''),
        dict(Name='NoMagic', Type='Magic', SubType=''),
    ]
items = loadout()

def item_ok(el):
    t, st, n = el.get('Type'), el.get('SubType'), el.get('Name')
    hit = any((not t or i['Type'] == t) and (not st or i['SubType'] == st) and (not n or i['Name'] == n) for i in items)
    return hit != (el.get('Not') == '1')

def lock_ok(el):
    tag = el.tag
    if tag == 'Item':
        return item_ok(el)
    if tag == 'Operator':
        kids = [lock_ok(c) for c in el]
        v = all(kids) if (el.get('Type') or '').lower() == 'and' else any(kids)
        return v != (el.get('Not') == '1')
    if tag in ('Perk', 'Screen'):
        return el.get('Not') == '1'  # no perks / not on a special screen
    return True

def locks_pass(move):
    locks = move.find('Locks')
    return locks is None or all(lock_ok(c) for c in locks)

def lock_tree(el):
    """One <Locks> child as a Luau tree, for filtering against a loadout at runtime (same rules as lock_ok)."""
    tag, nt = el.tag, b(el, 'Not')
    if tag == 'Item':
        return (f"{{t=\"item\",nt={nt},type={s(el.get('Type') or '')},sub={s(el.get('SubType') or '')},"
                f"name={s(el.get('Name') or '')}}}")
    if tag == 'Operator':
        op = 'and' if (el.get('Type') or '').lower() == 'and' else 'or'
        return f"{{t=\"op\",op=\"{op}\",nt={nt},kids={{{','.join(lock_tree(c) for c in el)}}}}}"
    if tag in ('Perk', 'Screen'):
        return f"{{t=\"const\",v={nt}}}"
    return '{t="const",v=true}'

def s(v):
    return '"' + str(v).replace('\\', '\\\\').replace('"', '\\"') + '"'

def b(el, a):
    return 'true' if el.get(a) == '1' else 'false'

def num(v, default=0):
    try:
        f = float(v)
        return str(int(f)) if f == int(f) else repr(f)
    except (TypeError, ValueError):
        return str(default)

def anchor(el):
    if el is None:
        return 'nil'
    parts = [f"player={s(el.get('Player') or 'Me')}", f"object={s(el.get('Object') or 'Pivot')}"]
    if el.get('Part'): parts.append(f"part={s(el.get('Part'))}")
    if el.get('ShiftX'): parts.append(f"shiftX={num(el.get('ShiftX'))}")
    if el.get('ShiftY'): parts.append(f"shiftY={num(el.get('ShiftY'))}")
    if el.get('Frame') == 'Previous': parts.append('previous=true')
    return '{' + ','.join(parts) + '}'

unknown_tags = {}

def gx(el):
    """Any element as {t=tag,a={...},c={...}} (the SF2.Xml shape), for actions and other rarely used parts."""
    parts = [f't={s(el.tag)}']
    if el.attrib:
        parts.append('a={' + ','.join(f'[{s(k)}]={s(v)}' for k, v in el.attrib.items()) + '}')
    kids = list(el)
    if kids:
        parts.append('c={' + ','.join(gx(c) for c in kids) + '}')
    return '{' + ','.join(parts) + '}'

def cond(el):
    tag, nt = el.tag, b(el, 'Not')
    if tag == 'Operator':
        op = 'and' if (el.get('Type') or '').lower() == 'and' else 'or'
        return f"{{t=\"op\",op=\"{op}\",nt={nt},kids={{{','.join(cond(c) for c in el)}}}}}"
    if tag == 'Keys':
        taps = [k.get('Type') for k in el if k.get('PressType') == 'Tap']
        holds = [k.get('Type') for k in el if k.get('PressType') == 'Hold']
        return (f"{{t=\"keys\",nt={nt},taps={{{','.join(map(s, taps))}}},"
                f"holds={{{','.join(map(s, holds))}}}}}")
    if tag == 'CurrentAnimation':
        return f"{{t=\"anim\",nt={nt},name={s(el.get('Name') or '')},player={s(el.get('Player') or 'Me')}}}"
    if tag == 'CurrentInterval':
        return f"{{t=\"interval\",nt={nt},name={s(el.get('Name') or el.get('Type') or '')},player={s(el.get('Player') or 'Me')}}}"
    if tag == 'RoundStage':
        return f"{{t=\"stage\",nt={nt},name={s(el.get('Name') or '')}}}"
    if tag == 'ModExists':
        return f"{{t=\"mod\",nt={nt},name={s(el.get('Name') or '')}}}"
    if tag == 'Item':
        return (f"{{t=\"item\",nt={nt},type={s(el.get('Type') or '')},sub={s(el.get('SubType') or '')},"
                f"name={s(el.get('Name') or '')},player={s(el.get('Player') or 'Me')}}}")
    if tag == 'Distance':
        return (f"{{t=\"dist\",nt={nt},axis={s(el.get('Axis') or 'X')},min={num(el.get('Min'), -1e9)},"
                f"max={num(el.get('Max'), 1e9)},from={anchor(el.find('From'))},to={anchor(el.find('To'))}}}")
    if tag == 'Player':
        return f"{{t=\"player\",nt={nt},number={num(el.get('Number'), 1)}}}"
    if tag == 'Name':
        return f"{{t=\"name\",nt={nt},value={s(el.get('Value') or '')}}}"
    if tag == 'Hit':  # ConditionHit: the hit just taken (name, and Critical/Shock type)
        return f"{{t=\"hit\",nt={nt},name={s(el.get('Name') or '')},type={s(el.get('Type') or '')}}}"
    if tag == 'Health':  # own health (fraction of life)
        return f"{{t=\"health\",nt={nt},min={num(el.get('Min'), -1e9)},max={num(el.get('Max'), 1e9)}}}"
    if tag == 'PhysicsFrameNumber':  # ticks since the ragdoll started
        return f"{{t=\"physframes\",nt={nt},min={num(el.get('Min'), -1e9)},max={num(el.get('Max'), 1e9)}}}"
    if tag == 'Bullets':
        return f"{{t=\"bullets\",nt={nt},min={num(el.get('Min'), 0)}}}"
    unknown_tags[tag] = unknown_tags.get(tag, 0) + 1
    # evaluated by MoveEngine.check from the raw element (Direction, BattleType, Perk, RoundResult, ...)
    return f"{{t=\"x\",nt={nt},tag={s(tag)},el={gx(el)}}}"

def conds(parent):
    if parent is None:
        return '{}'
    return '{' + ','.join(cond(c) for c in parent) + '}'

def usable(m, have):
    """The move's animation exists (ragdoll moves have none)."""
    fn = (m.get('FileName') or '').replace('.bytes', '')
    return fn in have or (m.get('Physics') == '1' and not fn), fn

def write_anims(combat, out, files):
    from convert import convert_anim  # same encoder as Phase 2
    os.makedirs(os.path.join(out, 'Anims'), exist_ok=True)
    for fn in sorted(files):
        dest = os.path.join(out, 'Anims', fn + '.lua')
        if not os.path.exists(dest):
            src, _, _ = convert_anim(fn)
            open(dest, 'w', encoding='utf8').write(src)
    open(os.path.join(out, 'anim_list.txt'), 'w').write('\n'.join(sorted(f[:-4] for f in os.listdir(os.path.join(out, 'Anims')))) + '\n')

def main():
    combat, out, name = sys.argv[1], sys.argv[2], sys.argv[3]
    assert name == 'Shadow', 'weapons are built by build_arsenal.py'
    root = ET.parse(os.path.join(combat, 'moves.xml')).getroot()
    have = set(os.listdir(os.path.join(combat, 'animations')))
    kept, skipped_lock, skipped_anim = [], 0, 0
    for m in root.find('Moves'):
        if not locks_pass(m):
            skipped_lock += 1; continue
        ok, fn = usable(m, have)
        if not ok:
            skipped_anim += 1; continue
        kept.append((m, fn))
    lines = [f'-- Generated by tools/compile_moves.py for loadout {name}', 'return {']
    lines += [compile_move(m, fn) for m, fn in kept]
    lines.append('}\n')
    open(os.path.join(out, 'MoveSet_' + name + '.lua'), 'w', encoding='utf8').write('\n'.join(lines))
    write_anims(combat, out, {fn for _, fn in kept if fn})
    print(f'moves kept {len(kept)}, locked out {skipped_lock}, missing anim {skipped_anim}')
    print('condition tags not yet supported (evaluate as false):', unknown_tags)

def compile_move(m, fn, with_locks=False):
    """One move as a Luau table entry line. with_locks adds the <Locks> trees (move library)."""
    ev = []
    for e in (m.find('Events') if m.find('Events') is not None else []):
        ev.append(f"{{{s(e.tag)},{s(e.get('Name') or '')}}}")
    iv = []
    for i in (m.find('Intervals') if m.find('Intervals') is not None else []):
        if i.tag != 'Interval':
            continue
        extra = ''
        if i.get('Type') == 'Attack':
            # IntervalAttack: AttackingParts edges, Hit names, Damage, Impulse, Ignores*
            ap = i.find('AttackingParts')
            parts = [e.get('Name') for e in ap if e.get('Name')] if ap is not None else []
            hits = [h.get('Name') for h in i.findall('Hit') if h.get('Name')]
            dmg = i.find('Damage'); imp = i.find('Impulse')
            extra = (f",parts={{{','.join(map(s, parts))}}},hits={{{','.join(map(s, hits))}}},"
                     f"damage={num(dmg.get('Value') if dmg is not None else 0)},"
                     f"impulse={{{num(imp.get('X') if imp is not None else 0)},{num(imp.get('Y') if imp is not None else 0)}}},"
                     f"ignoresBlock={'true' if i.find('IgnoresBlock') is not None else 'false'},"
                     f"ignoresInvulnerable={'true' if i.find('IgnoresInvulnerable') is not None else 'false'},"
                     f"noCritical={b(dmg, 'NoCritical') if dmg is not None else 'false'},"
                     f"bodyPart={s(dmg.get('BodyPart') or '') if dmg is not None else 'nil'},"
                     f"damageTypes={{{','.join('{' + s(d.get('Type') or '') + ',' + num(d.get('Shift'), 0) + '}' for d in (dmg.findall('Damage') if dmg is not None else []))}}},"
                     f"defenseTypes={{{','.join(s(d.get('Type') or '') for d in (dmg.findall('Defense') if dmg is not None else []))}}},"
                     f"hitWindows={{{','.join('{' + s(h.get('Name') or '') + ',' + num(h.get('Start'), -1) + ',' + num(h.get('End'), -1) + '}' for h in i.findall('Hit') if h.get('Start') is not None)}}}")
        iv.append(f"{{name={s(i.get('Name') or i.get('Type') or '')},type={s(i.get('Type') or '')},id={s(i.get('ID') or '')},"
                  f"noEffect={b(i, 'NoEffect')},start={num(i.get('Start'), 0)},stop={num(i.get('End'), 100000)}{extra}}}")
    al = m.find('Align')
    align = 'nil'
    if al is not None:
        pv = al.find('Pivot')
        align = (f"{{axis={s(al.get('Axis') or 'X|Z')},pivotObject={s(pv.get('Object') if pv is not None else 'Nodes')},"
                 f"pivotPart={s((pv.get('Part') if pv is not None else '') or 'NPivot')},position={anchor(al.find('Position'))}}}")
    sd = m.find('SetDirection')
    setdir = 'nil'
    if sd is not None:
        imp = sd.find('Impulse')
        if imp is not None:  # face along (or, Reverse="1", against) the impulse of the hit just taken
            setdir = f"{{impulse=true,reverse={b(imp, 'Reverse')}}}"
        else:
            setdir = f"{{from={anchor(sd.find('From'))},to={anchor(sd.find('To'))},reverse={b(sd, 'Reverse')}}}"
    tr = []
    for t in (m.find('Transitions') if m.find('Transitions') is not None else []):
        if t.tag != 'Transition':
            continue
        shift = t.get('FrameShift') is not None
        val = num(t.get('FrameShift') if shift else t.get('FirstFrame'), 0)
        tr.append(f"{{shift={'true' if shift else 'false'},value={val},conditions={conds(t.find('Conditions'))}}}")
    labels = [l for l in (m.get('Template') or '').split('|') if l]
    acts = m.find('Actions')
    actions = '{' + ','.join(gx(a) for a in acts) + '}' if acts is not None else '{}'
    vel = m.find('Velocity')
    velocity = (f"{{x={num(vel.get('X'), 0)},y={num(vel.get('Y'), 0)},ax={num(vel.get('Ax'), 0)}}}"
                if vel is not None else 'nil')
    rot = m.find('Rotation')
    rotation = gx(rot) if rot is not None else 'nil'
    tac = m.find('Tactics')
    tactics = conds(tac.find('Conditions')) if tac is not None and tac.find('Conditions') is not None else 'nil'
    shift_node = al.get('ShiftModelNode') if al is not None else None
    extra = (f",actions={actions},velocity={velocity},rotation={rotation},tactics={tactics},"
             f"endsStage={b(m, 'EndsStage')},noMagicRecharge={b(m, 'NoMagicRecharge')},noWallRepulsion={b(m, 'NoWallRepulsion')},"
             f"styleFactor={num(m.get('StyleFactor'), 1)},tacticWeapon={s(m.get('TacticWeapon') or '')},"
             f"tacticEquivalent={s(m.get('TacticEquivalent') or '')},tacticWallShift={num(m.get('TacticWallShift'), 0)},"
             f"cameraCOM={b(m, 'CameraCOMAlignStage')},looped={b(m, 'Looped')},noAnimation={b(m, 'NoAnimation')},"
             f"alignOnParentWall={b(m, 'AlignOnParentWallCollision')},shiftModelNode={s(shift_node) if shift_node else 'nil'}")
    locks = ''
    if with_locks and m.find('Locks') is not None:
        locks = f",locks={{{','.join(lock_tree(c) for c in m.find('Locks'))}}}"
    return (
        f"\t{{name={s(m.get('Name'))},file={s(fn) if fn else 'nil'},physics={b(m, 'Physics')},type={s(m.get('Type') or '')},priority={num(m.get('Priority'))},"
        f"first={num(m.get('FirstFrame'), 0)},mid={num(m.get('MidFrames'), 0)},endFrame={num(m.get('EndFrame'), -1)},"
        f"noInterp={b(m, 'NoInterpolationFrames')},labels={{{','.join(map(s, labels))}}},"
        f"events={{{','.join(ev)}}},conditions={conds(m.find('Conditions'))},intervals={{{','.join(iv)}}},"
        f"align={align},setDirection={setdir},mirror={s(m.get('MirrorNode') or '')},transitions={{{','.join(tr)}}}{extra}{locks}}},")

if __name__ == '__main__':
    main()
