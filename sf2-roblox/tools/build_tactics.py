"""AI tactic data for the Roblox port: combat\\tactics\\* archives + tacticSettings.xml + ComputerSettings.xml
-> packed JSON modules in out\\Tactics\\ (read by SF2.AI through SF2.Pack.json).

    python -I tools/build_tactics.py <combat dir> <out dir>
    python -I tools/build_tactics.py --peek <tactics dir> <archive>...      (dump a few tables)

Archive format: specs/tactics-binary.md. Open questions of the spec, resolved from the decompile:
  * entry `type` is AiData.HFDKHELIKGE (dump.cs TypeDefIndex 1954): 0 = outcometablesforattack (attack tables),
    1 = movementsTable, 2 = dodgeTable, 7 = shiftTable. So type 0 = attacks (the spec had it the other way round);
    the data agrees: type 0 responses are attacks/throws, type 2 responses are the ComputerSettings movement list.
  * layout B `group`/`name` = (enemy weapon part, my weapon part): the entry (G, N) holds the tables for enemy
    animations that belong to weapon G ('' = shared moves: kicks, steps, hits) answered with my moves of weapon N
    ('' = shared). My weapon vs enemy weapon = union of the entries with G in {'', enemy} and N in {'', mine}
    (files `_`, `_<mine>`, `_<enemy>`, `<a>_<b>`). The holder's group label is N (ModelAi.KNJIHAIAMCG = my weapon).
  * base archives (`default`, `EMPTY`, `<weapon>`): dodge tables against the attacks of that weapon (`default` /
    `EMPTY` = shared attacks and missiles; EMPTY is a superset of default) + shift tables.
  * TacticalTable.name = one of MY nodes (NHeel_1 / NHeel_2: the Align pivot of the responses listed in it);
    TacticalTable.value = the enemy frame of its first row (TacticalTable.OPHALLPMFHB: row = frame - value).
    Frames are ticks since the enemy animation's FirstFrame (ModelAnimation.OJEODKKHEPE + FANDONIBLKC).
  * IntervalNew: `distances` are bucket edges, `interframes` one value per bucket (always nDist - 1 of them;
    IntervalNew.ENBJCAFOOGB: d in [e0, eLast), first i with d < e[i+1] -> value[i]; > 0 means usable).
    Distance = (my node x - enemy animation origin x) * enemy facing (+ DistanceError).
    Value: attack tables = enemy frame at which my attack lands (ModelAi.PEFJCLPHJFA keeps it when
    value <= enemy frame + EnemyResponseDelay); dodge tables = ticks left before the enemy's hit.
  * ShiftTable payload (ModelShiftTable.ICNKLIDJEBG): u32 size, u32 nodeCount, nodeCount x cstr node name,
    then (size - header)/4 floats = frames x nodeCount node x offsets per tick. Parsed and checked, not emitted
    (the port reads node positions directly).
"""
import os, struct, sys
import xml.etree.ElementTree as ET

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

TYPE_NAMES = {0: 'attack', 1: 'movement', 2: 'dodge', 7: 'shift'}


class R:
    def __init__(s, b): s.b = b; s.p = 0
    def u32(s): v = struct.unpack_from('<I', s.b, s.p)[0]; s.p += 4; return v
    def u16(s): v = struct.unpack_from('<H', s.b, s.p)[0]; s.p += 2; return v
    def i16(s): v = struct.unpack_from('<h', s.b, s.p)[0]; s.p += 2; return v
    def i32(s): v = struct.unpack_from('<i', s.b, s.p)[0]; s.p += 4; return v
    def u8(s): v = s.b[s.p]; s.p += 1; return v
    def f32(s): v = struct.unpack_from('<f', s.b, s.p)[0]; s.p += 4; return v
    def cstr(s):
        e = s.b.index(0, s.p); v = s.b[s.p:e].decode('latin1'); s.p = e + 1; return v
    def raw(s, n): v = s.b[s.p:s.p + n]; s.p += n; return v
    def eof(s): return s.p >= len(s.b)


def names(r, cnt):
    lens = [r.u8() for _ in range(cnt)]
    return [r.raw(n).decode('latin1') for n in lens]


def holder(b):
    """TacticalTableHolder blob -> ({enemyAnim: [(label, [(node, start, rows)])]}, labels, animNames).
    rows[i] = [(myAnim, edges, values), ...] for enemy frame start + i."""
    r = R(b)
    an = names(r, r.u16())
    labels = names(r, r.i16())
    tA, nG, nT, nI, nN, nD, nF = [r.u32() for _ in range(7)]
    tableAnim = [r.u16() for _ in range(tA)]
    sc = r.i16() or 1
    dist = [r.i16() * sc for _ in range(nD)]
    inter = [r.i32() for _ in range(nF)]
    inAnim = [r.u16() for _ in range(nN)]
    di = fi = ni = gi = ti = ii = 0
    out = {}
    for ta in tableAnim:
        groups = []
        for _ in range(r.u16()):
            gi += 1
            lab = labels[r.u16()]
            tables = []
            for _ in range(r.u16()):
                ti += 1
                nm = r.cstr(); n_iv = r.u16(); val = r.i16() if n_iv > 0 else 0
                ivs = []
                for _ in range(n_iv):
                    ii += 1
                    k = r.u16()
                    nd = [r.u16() for _ in range(k)]
                    nf = [r.u16() for _ in range(k)]
                    row = []
                    for j in range(k):
                        a = an[inAnim[ni]]; ni += 1
                        e, v = dist[di:di + nd[j]], inter[fi:fi + nf[j]]
                        assert len(v) == max(0, len(e) - 1), 'one value per distance bucket'
                        row.append((a, e, v)); di += nd[j]; fi += nf[j]
                    ivs.append(row)
                tables.append((nm, val, ivs))
            groups.append((lab, tables))
        out[an[ta]] = groups
    # the loader's own consistency asserts
    assert r.eof() and (gi, ti, ii, ni, di, fi) == (nG, nT, nI, nN, nD, nF), 'pool sizes'
    return out, labels, an


def shift_tables(b):
    r = R(b)
    out = {}
    for _ in range(r.u32()):
        anim = r.cstr()
        size = r.u32(); start = r.p
        nodes = [r.cstr() for _ in range(r.u32())]
        n = (size - (r.p - start)) // 4
        assert (size - (r.p - start)) % 4 == 0 and n % len(nodes) == 0, 'count % 4 / count % nodeCount'
        out[anim] = (nodes, [r.f32() for _ in range(n)])
        assert r.p == start + size
    assert r.eof()
    return out


def archive(path):
    r = R(open(path, 'rb').read())
    matchup = '_' in os.path.basename(path)
    ents = []
    while not r.eof():
        t = r.u32(); g = r.cstr() if matchup else None; n = r.cstr(); sz = r.u32(); d = r.raw(sz)
        ents.append((t, g, n, d))
    return ents


def pack_holder(b):
    """Compact JSON form: {"a": [my anim names], "x": {enemyAnim: [[node, start, rows], ...]}} with
    rows[i] = 0 (nothing) or a flat list [animIndex, k, e_1..e_k, v_1..v_k-1, animIndex, ...]."""
    h, labels, an = holder(b)
    used, idx = [], {}
    def ai(a):
        if a not in idx:
            idx[a] = len(used); used.append(a)
        return idx[a]
    x = {}
    for enemy, groups in h.items():
        tabs = []
        for lab, tables in groups:
            for nm, val, ivs in tables:
                rows = []
                for row in ivs:
                    flat = []
                    for a, e, v in row:
                        if len(e) < 2:
                            continue
                        flat += [ai(a), len(e)] + e + v
                    rows.append(flat or 0)
                while rows and rows[-1] == 0:
                    rows.pop()
                if rows:
                    tabs.append([nm, val, rows])
        if tabs:
            x[enemy] = tabs
    return {'a': used, 'x': x}


########################################################################## settings

def num(v, d=0.0):
    try:
        return float(v)
    except (TypeError, ValueError):
        return d


FACTOR_ATTRS = ['Base', 'Limit', 'AntiLimit', 'CounterFactor', 'DamageFactor', 'HealthFactor', 'EnemyHealthFactor',
                'AnimationFramesFactor', 'ChildFramesFactor', 'MagicBulletFactor', 'MissileBulletFactor', 'HitFactor',
                'DistanceFactor', 'Shift', 'ConditionalDesigionFactor']


def factors(el):
    """TacticFactors.HNIHOIAMDPC: every attribute defaults to 0 (EIABCPKDEBD.GICIEKCGOHA(attr, 0)), names are
    case-sensitive (the data's `Antilimit` typo is ignored, as in the game). FactorType: "Linear" -> 1 else 0."""
    if el is None:
        return None
    f = {k: num(el.get(k)) for k in FACTOR_ATTRS if el.get(k) is not None}
    if (el.get('FactorType') or '') == 'Linear':
        f['linear'] = True
    af = []
    for c in el.findall('AnimationFactors'):
        af.append({'anim': c.get('Animation') or '', **{k: num(c.get(k)) for k in ('HitFactor', 'DamageFactor', 'CounterFactor') if c.get(k) is not None}})
    if af:
        f['anims'] = af
    return f


def minmax(el):
    if el is None:
        return None
    return {'min': factors(el.find('Min')) or {}, 'max': factors(el.find('Max')) or {}}


def named_list(el, tag='Animation', key='Name'):
    if el is None:
        return None
    return [{'name': c.get(key) or '', 'f': factors(c)} for c in el.findall(tag)]


def tactic_parts(t):
    """One <Tactic> element -> {part: value}; a part present here replaces the template's (UseDefense per chance)."""
    p = {}
    ud = t.find('UseDefense')
    if ud is not None:
        for tag, key in (('CounterAttackChance', 'counter'), ('DodgeChance', 'dodge'), ('BlockChance', 'block')):
            if ud.find(tag) is not None:
                p[key] = factors(ud.find(tag))
    for tag, key in (('UseSafeAttackChance', 'safeAttack'), ('TableAttackChance', 'tableAttack'),
                     ('CautiousMovementsChance', 'cautious'), ('DodgeMissilesChance', 'dodgeMissiles'),
                     ('DodgeMagicChance', 'dodgeMagic')):
        if t.find(tag) is not None:
            p[key] = factors(t.find(tag))
    for tag, key in (('DistanceError', 'distanceError'), ('FrameError', 'frameError'),
                     ('ResponseDelay', 'responseDelay'), ('EnemyResponseDelay', 'enemyResponseDelay')):
        if t.find(tag) is not None:
            p[key] = minmax(t.find(tag))
    if t.find('QuickAttacks') is not None:
        p['quickAttacks'] = named_list(t.find('QuickAttacks'), 'QuickAttackChance', 'Animation')
    if t.find('Evades') is not None:
        p['evades'] = named_list(t.find('Evades'), 'EvadeChance', 'Animation')
    if t.find('AnimationWeights') is not None:
        p['weights'] = named_list(t.find('AnimationWeights'))
    if t.find('ExpectedWait') is not None:
        p['expectedWait'] = named_list(t.find('ExpectedWait'))
    m = t.find('Memory')
    if m is not None:
        p['memory'] = {'strikes': num(m.get('Strikes'), 3), 'roundFactor': num(m.get('RoundFactor'), 1)}
    return p


def tactics(ts):
    els = {}
    order = []
    for t in ts.find('Tactics').findall('Tactic'):
        els[t.get('Name')] = t  # a later duplicate (Titan_Aggressive is listed twice) wins, as a dictionary load would
        order.append(t.get('Name'))
    done = {}

    def resolve(name, stack=()):
        if name in done:
            return done[name]
        t = els[name]
        base = {}
        tpl = t.get('Template')
        if tpl and tpl in els and tpl not in stack:
            base = dict(resolve(tpl, stack + (name,)))
        base.update(tactic_parts(t))
        base['type'] = t.get('Type') or base.get('type') or 'Tabular'
        base['name'] = name
        done[name] = base
        return base
    return {n: resolve(n) for n in els}


def name_list(parent, tag='Animation'):
    if parent is None:
        return []
    return [c.get('Name') for c in parent.iter(tag) if c.get('Name')]


def tcond(el):
    """TacticConditionBase subclasses (Animation, AnimationFrame, Distance, ModelItem, Operator, Random)."""
    a = dict(el.attrib)
    c = {'t': el.tag}
    if el.tag == 'Operator':
        c['op'] = (a.get('Type') or 'And').lower()
        c['kids'] = [tcond(k) for k in el]
    elif el.tag == 'Animation':
        c['player'] = a.get('Player', 'Me'); c['names'] = (a.get('Animations') or a.get('Name') or '').split('|')
    elif el.tag == 'AnimationFrame':
        c['player'] = a.get('Player', 'Me'); c['op'] = a.get('Operator', 'Equal'); c['v'] = num(a.get('Frame'))
    elif el.tag == 'Distance':
        c['from'] = a.get('From', 'Me'); c['to'] = a.get('To', 'Enemy'); c['op'] = a.get('Operator', 'LessEqual')
        c['v'] = num(a.get('Distance'))
    elif el.tag == 'ModelItem':
        c['player'] = a.get('Player', 'Me'); c['slot'] = a.get('SlotType', ''); c['sub'] = a.get('SubType', '')
        c['name'] = a.get('Name', '')
    elif el.tag == 'Random':
        c['p'] = num(a.get('PercentPerFrame'))
    if a.get('Not') == '1':
        c['nt'] = True
    return c


def settings(cfg):
    ts = ET.parse(os.path.join(cfg, 'tacticSettings.xml')).getroot()
    cs = ET.parse(os.path.join(cfg, 'ComputerSettings.xml')).getroot()
    rnd = ts.find('Random')
    delays = [{'name': d.get('Animation'), 'min': num(d.get('Min')), 'max': num(d.get('Max'))}
              for d in rnd.find('Delays').findall('Delay')]
    cond = []
    for pa in ts.find('ConditionalDecisions').findall('PlayerAnimation'):
        reacts = []
        for r in pa.find('Reactions').findall('Animations'):
            co = r.find('Conditions')
            reacts.append({'names': (r.get('Names') or '').split('|'), 'priority': num(r.get('Priority')),
                           'conds': [tcond(k) for k in co] if co is not None else []})
        cond.append({'anim': pa.get('Name'), 'reactions': reacts})
    red = cs.find('TablesReduction')
    out = {
        'tactics': tactics(ts),
        'random': {'intervals': name_list(rnd.find('Intervals'), 'Interval'), 'delays': delays,
                   'beginnerCheat': num(rnd.find('BeginnerCheat').get('Treshold'))},
        'noDecision': {'intervals': name_list(ts.find('NoDecision/Intervals'), 'Interval'),
                       'moves': name_list(ts.find('NoDecision/Moves'), 'Move')},
        'ignoredEnemy': name_list(ts.find('IgnoredEnemyAnimations')),
        'randomizingEnemy': name_list(ts.find('RandomizingEnemyAnimation')),
        'cautious': name_list(ts.find('CautiousMovements')),
        'safeDodges': name_list(ts.find('SafeDodges')),
        'emergencyDodges': name_list(ts.find('EmergencyDodges')),
        'evadeThrowDodges': name_list(ts.find('EvadeThrowDodges')),
        'evadeUnsafeDodges': name_list(ts.find('EvadeUnsafeDodges')),
        'unexpected': name_list(ts.find('UnexpectedMoves'), 'Move'),
        'missiles': name_list(ts.find('MissileAnimations')),
        'magic': name_list(ts.find('MagicAnimations')),
        'distanceNode': ts.find('DistanceNode').get('Name'),
        'conditional': cond,
        # ComputerSettings.xml
        'tableWeapons': [w.get('TacticWeapon') for w in cs.find('OutcomeTables/Items/Weapons')],
        'throws': name_list(cs.find('OutcomeTables/Throws/Throws')),
        'throwable': name_list(cs.find('OutcomeTables/Throws/ThrowableIntervals'), 'Interval'),
        'movements': name_list(cs.find('MovementsTables/MovementsMainIterations')),
        'directionNode': cs.find('DirectionNode').get('Name'),
        'uninterruptStrict': name_list(cs.find('UninterruptibleIntervals/Strict'), 'Interval'),
        'uninterruptExtended': name_list(cs.find('UninterruptibleIntervals/Extended'), 'Interval'),
        'step': int(num(red.find('MovementsTables').get('Step'), 5)),
        'attackFrames': [int(x) for x in (red.find('AttackTables').get('Frames') or '').split('|') if x],
    }
    return out


########################################################################## main

def main(combat, out):
    from pack import write_json
    tdir = os.path.join(combat, 'tactics')
    odir = os.path.join(out, 'Tactics')
    os.makedirs(odir, exist_ok=True)
    index = {}
    total = 0
    for f in sorted(os.listdir(tdir)):
        ents = archive(os.path.join(tdir, f))
        e_out, meta = [], []
        for t, g, n, d in ents:
            if t in (0, 1, 2):
                h = pack_holder(d)
                e_out.append({'t': t, 'g': g or '', 'n': n, 'h': h})
                meta.append([t, g or '', n, len(h['x'])])
            elif t == 7:
                st = shift_tables(d)
                meta.append([t, g or '', n, len(st)])
            else:
                raise ValueError(f'{f}: unknown entry type {t}')
        parts, size = write_json(odir, f, {'e': e_out})
        total += size
        index[f] = meta
        print(f'{f:24s} {parts} module(s) {size // 1024} KB  ' + ', '.join(f'{TYPE_NAMES[m[0]]}:{m[1]}/{m[2]}' for m in meta))
    s = settings(os.path.join(combat, 'config'))
    s['archives'] = index
    parts, size = write_json(odir, 'Settings', s)
    print(f'Settings {parts} module(s) {size // 1024} KB; archives total {total // 1024} KB')


if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == '--peek':
        D = sys.argv[2]
        for f in sys.argv[3:]:
            for t, g, n, d in archive(os.path.join(D, f)):
                print(f, TYPE_NAMES.get(t, t), repr(g), repr(n), len(d))
                if t in (0, 1, 2):
                    h, labels, an = holder(d)
                    for a in list(h)[:3]:
                        for lab, tables in h[a][:2]:
                            for nm, val, ivs in tables[:2]:
                                print('   ', a, repr(lab), nm, val, len(ivs), ivs[0][:3] if ivs else None)
    else:
        main(sys.argv[1], sys.argv[2])
