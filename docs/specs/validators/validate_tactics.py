"""Validate the SF2 tactics archive + TacticalTableHolder spec against every decompressed archive.
Args: <tactics dir>"""
import collections, os, struct, sys

class R:
    def __init__(self, b): self.b, self.p = b, 0
    def u8(self): v = self.b[self.p]; self.p += 1; return v
    def u16(self): v = struct.unpack_from('<H', self.b, self.p)[0]; self.p += 2; return v
    def i16(self): v = struct.unpack_from('<h', self.b, self.p)[0]; self.p += 2; return v
    def u32(self): v = struct.unpack_from('<I', self.b, self.p)[0]; self.p += 4; return v
    def i32(self): v = struct.unpack_from('<i', self.b, self.p)[0]; self.p += 4; return v
    def raw(self, n): v = self.b[self.p:self.p + n]; self.p += n; return v
    def cstr(self):  # BinaryReader.ReadChar loop until '\0' (UTF-8 chars; names are ASCII)
        e = self.b.index(0, self.p); s = self.b[self.p:e].decode('utf-8'); self.p = e + 1; return s
    def eof(self): return self.p == len(self.b)

def names_u16(r):   # KBOKKKALJIN: uint16 count, count length bytes, then chars
    n = r.u16(); lens = r.raw(n); return [r.raw(l).decode('utf-8') for l in lens]
def names_i16(r):   # LFEHAPCICEA: int16 count, then same
    n = r.i16(); lens = r.raw(n); return [r.raw(l).decode('utf-8') for l in lens]

def holder(blob):
    r = R(blob)
    anims = names_u16(r); labels = names_i16(r)
    tableAnim, nGroups, nTables, nIntervals, nIntervalNew, nDist, nInterframes = (r.u32() for _ in range(7))
    anim_idx = [r.u16() for _ in range(tableAnim)]
    scale = r.i16() or 1
    distances = [r.i16() * scale for _ in range(nDist)]
    interframes = [r.i32() for _ in range(nInterframes)]
    inew_anims = [r.u16() for _ in range(nIntervalNew)]
    used = collections.Counter()
    tables = []
    for a in anim_idx:
        g = r.u16(); used['groups'] += g
        for _ in range(g):
            label = labels[r.u16()]
            t = r.u16(); used['tables'] += t
            for _ in range(t):
                name = r.cstr()
                ni = r.u16(); used['intervals'] += ni
                value = r.i16() if ni else 0
                tables.append((anims[a] if a < len(anims) else None, label, name, ni, value))
                for _ in range(ni):
                    k = r.u16(); used['intervalNew'] += k
                    for _ in range(k):
                        used['dist'] += r.u16()
                    for _ in range(k):
                        used['interframes'] += r.u16()
    expect = {'groups': nGroups, 'tables': nTables, 'intervals': nIntervals, 'intervalNew': nIntervalNew,
              'dist': nDist, 'interframes': nInterframes}
    mismatch = {k: (used[k], v) for k, v in expect.items() if used[k] != v}
    return dict(anims=len(anims), labels=len(labels), tables=len(tables), pools=expect,
                mismatch=mismatch, eof=r.eof(), leftover=len(blob) - r.p, sample=tables[:3])

stats = collections.Counter(); problems = []; entry_types = collections.Counter(); sample = None
group_names = collections.Counter()
for fn in sorted(os.listdir(sys.argv[1])):
    blob = open(os.path.join(sys.argv[1], fn), 'rb').read()
    # Base archive ("default"/"EMPTY"): u32 type, cstr name, u32 size, data   (TacticsArchiver.AEJJGGKAHBN(string))
    # Matchup archive (<me>_<enemy>): u32 type, cstr group, cstr name, u32 size, data   (AEJJGGKAHBN(string, string))
    two_strings = '_' in fn
    r = R(blob)
    try:
        while not r.eof():
            typ = r.u32()
            if two_strings:
                group = r.cstr(); group_names[group] += 1
            name = r.cstr(); size = r.u32(); data = r.raw(size)
            entry_types[typ] += 1
            if typ == 7:
                s = R(data); n = s.u32(); stats['shift_tables'] += n
                continue   # ModelShiftTable payload: see model shift spec
            h = holder(data)
            stats['holders'] += 1
            if h['mismatch'] or not h['eof']:
                problems.append((fn, typ, name, h['mismatch'], h['leftover']))
            else:
                stats['holders_ok'] += 1
            sample = sample or (fn, typ, name, h)
    except Exception as e:
        problems.append((fn, 'EXC', repr(e)[:120]))
print('archives', len(os.listdir(sys.argv[1])), 'entry types', dict(entry_types))
print('table holders', stats['holders'], 'fully consistent', stats['holders_ok'], 'shift-table entries', stats['shift_tables'])
print('problems', len(problems), problems[:6])
print('matchup entry group names:', group_names.most_common(12))
print('sample', sample[0], 'type', sample[1], repr(sample[2]), {k: v for k, v in sample[3].items() if k != 'sample'})
print('  first tables:', sample[3]['sample'])
