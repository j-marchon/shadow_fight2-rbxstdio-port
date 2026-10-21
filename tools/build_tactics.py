import struct, sys, os

class R:
    def __init__(s, b): s.b = b; s.p = 0
    def u32(s): v = struct.unpack_from('<I', s.b, s.p)[0]; s.p += 4; return v
    def u16(s): v = struct.unpack_from('<H', s.b, s.p)[0]; s.p += 2; return v
    def i16(s): v = struct.unpack_from('<h', s.b, s.p)[0]; s.p += 2; return v
    def i32(s): v = struct.unpack_from('<i', s.b, s.p)[0]; s.p += 4; return v
    def u8(s): v = s.b[s.p]; s.p += 1; return v
    def cstr(s):
        e = s.b.index(0, s.p); v = s.b[s.p:e].decode('latin1'); s.p = e + 1; return v
    def raw(s, n): v = s.b[s.p:s.p+n]; s.p += n; return v
    def eof(s): return s.p >= len(s.b)

def names(r, cnt):
    lens = [r.u8() for _ in range(cnt)]
    return [r.raw(n).decode('latin1') for n in lens]

def holder(b):
    r = R(b)
    an = names(r, r.u16())
    labels = names(r, r.i16())
    tA, nG, nT, nI, nN, nD, nF = [r.u32() for _ in range(7)]
    tableAnim = [r.u16() for _ in range(tA)]
    sc = r.i16() or 1
    dist = [r.i16() * sc for _ in range(nD)]
    inter = [r.i32() for _ in range(nF)]
    inAnim = [r.u16() for _ in range(nN)]
    di = fi = ni = 0
    out = {}
    for ta in tableAnim:
        groups = []
        for _ in range(r.u16()):
            lab = labels[r.u16()]
            tables = []
            for _ in range(r.u16()):
                nm = r.cstr(); ni_ = r.u16(); val = r.i16() if ni_ > 0 else 0
                ivs = []
                for _ in range(ni_):
                    k = r.u16()
                    nd = [r.u16() for _ in range(k)]
                    nf = [r.u16() for _ in range(k)]
                    row = []
                    for j in range(k):
                        a = an[inAnim[ni]]; ni += 1
                        row.append((a, dist[di:di+nd[j]], inter[fi:fi+nf[j]])); di += nd[j]; fi += nf[j]
                    ivs.append(row)
                tables.append((nm, val, ivs))
            groups.append((lab, tables))
        out[an[ta]] = groups
    assert r.eof() and di == nD and fi == nF and ni == nN
    return out, labels, an

def archive(path):
    r = R(open(path, 'rb').read())
    B = '_' in os.path.basename(path)
    ents = []
    while not r.eof():
        t = r.u32(); g = r.cstr() if B else None; n = r.cstr(); sz = r.u32(); d = r.raw(sz)
        ents.append((t, g, n, d))
    return ents

if __name__ == '__main__' and sys.argv[1] == '--peek':
    D = sys.argv[2]
    for f in sys.argv[3:]:
        for t, g, n, d in archive(os.path.join(D, f)):
            print(f, t, repr(g), repr(n), len(d))
            if t in (0, 1, 2):
                h, labels, an = holder(d)
                print('  labels', labels[:30], len(labels), 'anims', len(an), 'tableAnims', len(h))
                for a in list(h)[:3]:
                    for lab, tables in h[a][:2]:
                        for nm, val, ivs in tables[:3]:
                            print('   ', a, lab, nm, val, len(ivs), [x for x in ivs[:2]])
