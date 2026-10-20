"""Every weapon in list.xml -> Luau data for the in-game arsenal.
Writes:
  out/Arsenal.lua             catalog: groups (by act / category) -> weapons {id, name, item, sub, model}
  out/WeaponRigs/<model>.lua  the weapon model's nodes/edges/figures, appended to the base rig at runtime
                              (indices are absolute in the merged rig, so it is base + this part as-is)
  out/MoveLib/<n>.lua         every move that has its animation, with its <Locks>; SF2.Arsenal filters
                              them for a loadout the way compile_moves.locks_pass does
  out/Anims/<file>.lua        every animation the library uses
Args: <combat dir> <out dir> <english localization file>
"""
import os, re, sys
import xml.etree.ElementTree as ET

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
COMBAT, OUT, LOC = sys.argv[1], sys.argv[2], sys.argv[3]

from convert import BASE_MODELS, rig_data, rig_sections, lua_str
from compile_moves import compile_move, usable, write_anims

GROUPS = ['Act 1', 'Act 2', 'Act 3', 'Act 4', 'Act 5', 'Act 6', 'Interlude', 'Act 7', 'Underworld', 'Raid Sets',
          'Events', 'Offers', 'Enemies']
PACK_GROUP = {
    'ZONE_1': 'Act 1', 'ZONE_2': 'Act 2', 'ZONE_3': 'Act 3', 'ZONE_4': 'Act 4', 'ZONE_5': 'Act 5', 'ZONE_6': 'Act 6',
    'ZONE_6_1': 'Act 6', 'ZONE_IM': 'Interlude', 'ZONE_7': 'Act 7', 'ZONE_7_2': 'Act 7', 'ZONE_7_3': 'Act 7',
    'ZONE_RAID': 'Underworld', 'FUNGUS_SET': 'Raid Sets', 'VOLCANO_SET': 'Raid Sets', 'KARCER_SET': 'Raid Sets',
}

def group_of(w):
    pack, name = w.get('PackLabel'), w.get('Name')
    if pack in PACK_GROUP:
        return PACK_GROUP[pack]
    if pack and (pack.startswith('WEEKLY_OFFER') or pack.startswith('GIFT_')):
        return 'Offers'
    if pack:  # CLANS (seasonal + battle pass), EVENT_*, festivals, versional assets
        return 'Events'
    if w.get('ShopHide') != '1':
        return 'Act 1'  # base shop
    if 'RAIDSTARTER' in name:
        return 'Underworld'
    if '_HW' in name:
        return 'Events'
    return 'Enemies'  # enemy-only items (Titan's sword, the Hunger's scythe, ...)

def humanize(item):
    return ' '.join(p.capitalize() for p in re.sub(r'^(WEAPON|MAGIC)_', '', item).split('_'))

def catalog():
    loc = open(LOC, encoding='utf-8-sig').read()
    names = dict(re.findall(r'<Word Title="([^"]+)">([^<]*)</Word>', loc))
    items = ET.parse(os.path.join(COMBAT, 'config', 'list.xml')).getroot().find('Items')
    groups = {g: [] for g in GROUPS}
    groups['Act 1'].append(dict(id='Fists', name='Fists', item='Fists', sub='Fists', model=None, level=0))
    for w in items:
        if w.get('Type') != 'Weapon' or not w.get('Model'):
            continue  # no model: internal bullets / WEAPON_UNKNOWN
        groups[group_of(w)].append(dict(
            id=w.get('Name'), name=(names.get(w.get('Name')) or humanize(w.get('Name'))).strip(), item=w.get('Name'),
            sub=w.get('SubType') or '', model=w.get('Model'), level=int(w.get('Level') or 999)))
    for g in groups.values():
        g.sort(key=lambda w: (w['level'], w['name'].lower()))
    return groups

def weapon_rig(base, model):
    full = rig_data(BASE_MODELS + [model])
    cut = {k: len(v) for k, v in base.items()}
    for k in base:  # the base part must come out unchanged, so the runtime can share it
        assert full[k][:cut[k]] == base[k], (model, k)
    part = {k: full[k][cut[k]:] for k in full}
    return rig_sections(part['nodes'], part['edges'], part['caps'], part['tris'])

MAX_SOURCE = 180_000  # Studio refuses a Source of 200,000 characters or more

def write_module(folder, name, header, lines):
    """Write `return { <lines> }` (lines: fields '\\tkey = {', entries, '\\t},'). Over MAX_SOURCE, each field's
    entries go into sibling modules '<name>.<key>.<n>' and the main module joins them back."""
    src = '\n'.join([header, 'return {'] + lines + ['}\n'])
    if len(src) < MAX_SOURCE:
        open(os.path.join(folder, name + '.lua'), 'w', encoding='utf8').write(src)
        return 1
    fields, key = {}, None
    for line in '\n'.join(lines).split('\n'):
        m = re.match(r'^\t(\w+) = \{$', line)
        if m:
            key = m.group(1); fields[key] = []
        elif line != '\t},':
            fields[key].append(line)
    main = [header, 'local p = script.Parent', 'local function join(name, n)', '\tlocal t = {}',
            '\tfor i = 1, n do', '\t\tlocal part = require(p:FindFirstChild(name .. "." .. i))',
            '\t\ttable.move(part, 1, #part, #t + 1, t)', '\tend', '\treturn t', 'end', 'return {']
    count = 1
    for key, entries in fields.items():
        chunks, cur, size = [], [], 0
        for e in entries:
            if size + len(e) > MAX_SOURCE - 1000 and cur:
                chunks.append(cur); cur, size = [], 0
            cur.append(e); size += len(e) + 1
        chunks.append(cur)
        for n, c in enumerate(chunks, 1):
            open(os.path.join(folder, f'{name}.{key}.{n}.lua'), 'w', encoding='utf8').write(
                '\n'.join([header, 'return {'] + c + ['}\n']))
        main.append(f'\t{key} = join("{name}.{key}", {len(chunks)}),')
        count += len(chunks)
    open(os.path.join(folder, name + '.lua'), 'w', encoding='utf8').write('\n'.join(main + ['}\n']))
    return count

def main():
    groups = catalog()
    # rigs
    rigdir = os.path.join(OUT, 'WeaponRigs')
    os.makedirs(rigdir, exist_ok=True)
    for f in os.listdir(rigdir):
        os.remove(os.path.join(rigdir, f))
    base = rig_data(BASE_MODELS)
    models = sorted({w['model'] for g in groups.values() for w in g if w['model']})
    files = 0
    for model in models:
        files += write_module(rigdir, model, '-- Generated by tools/build_arsenal.py from ' + model, weapon_rig(base, model))
    print('weapon rigs', len(models), 'in', files, 'modules')
    # catalog
    lines = ['-- Generated by tools/build_arsenal.py from list.xml (every weapon with a model), grouped by act',
             'return {']
    count = 0
    for g in GROUPS:
        if not groups[g]:
            continue
        lines.append(f'\t{{name={lua_str(g)},weapons={{')
        for w in groups[g]:
            model = lua_str(w['model']) if w['model'] else 'nil'
            lines.append(f"\t\t{{id={lua_str(w['id'])},name={lua_str(w['name'])},item={lua_str(w['item'])},"
                         f"sub={lua_str(w['sub'])},model={model}}},")
            count += 1
        lines.append('\t}},')
    lines.append('}\n')
    open(os.path.join(OUT, 'Arsenal.lua'), 'w', encoding='utf8').write('\n'.join(lines))
    print('weapons', count, {g: len(v) for g, v in groups.items()})
    # move library
    root = ET.parse(os.path.join(COMBAT, 'moves.xml')).getroot()
    have = set(os.listdir(os.path.join(COMBAT, 'animations')))
    kept = []
    for m in root.find('Moves'):
        ok, fn = usable(m, have)
        if ok:
            kept.append((m, fn))
    lib = os.path.join(OUT, 'MoveLib')
    os.makedirs(lib, exist_ok=True)
    for f in os.listdir(lib):
        os.remove(os.path.join(lib, f))
    chunks, cur, size = [], [], 0
    for m, fn in kept:
        line = compile_move(m, fn, with_locks=True)
        if size + len(line) > MAX_SOURCE - 1000 and cur:
            chunks.append(cur); cur, size = [], 0
        cur.append(line); size += len(line) + 1
    chunks.append(cur)
    for n, chunk in enumerate(chunks, 1):
        src = [f'-- Generated by tools/build_arsenal.py: moves.xml part {n}/{len(chunks)}', 'return {'] + chunk + ['}\n']
        open(os.path.join(lib, f'{n}.lua'), 'w', encoding='utf8').write('\n'.join(src))
    files = {fn for _, fn in kept if fn}
    write_anims(COMBAT, OUT, files)
    print('move library', len(kept), 'moves in', len(chunks), 'parts,', len(files), 'animations')

if __name__ == '__main__':
    main()
