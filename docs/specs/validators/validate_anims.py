"""Validate the SF2 animation binary spec against every file.
Spec: int32 frames; per frame: byte flag, int32 nodeCount, nodeCount x (float32 x, y, z); little-endian; EOF exactly.
Args: <animations dir> <models dir>"""
import collections, math, os, struct, sys
import xml.etree.ElementTree as ET

adir, mdir = sys.argv[1:3]
stats = collections.Counter(); flags = collections.Counter(); nodecounts = collections.Counter()
frames_hist = collections.Counter(); bad = []; lo = [1e9] * 3; hi = [-1e9] * 3
per_anim_nodes = {}
for fn in sorted(os.listdir(adir)):
    b = open(os.path.join(adir, fn), 'rb').read()
    try:
        p = 0
        (frames,) = struct.unpack_from('<i', b, p); p += 4
        if not (0 < frames < 100000):
            raise ValueError(f'frames={frames}')
        counts = set()
        for _ in range(frames):
            flag = b[p]; p += 1
            (n,) = struct.unpack_from('<i', b, p); p += 4
            flags[flag] += 1; counts.add(n)
            vals = struct.unpack_from(f'<{3 * n}f', b, p); p += 12 * n
            for i, v in enumerate(vals):
                if not math.isfinite(v):
                    raise ValueError('non-finite value')
                a = i % 3
                lo[a] = min(lo[a], v); hi[a] = max(hi[a], v)
        if p != len(b):
            raise ValueError(f'{len(b) - p} trailing bytes')
        stats['ok'] += 1
        frames_hist[frames] += 1
        for c in counts:
            nodecounts[c] += 1
        if len(counts) > 1:
            stats['varying_nodecount'] += 1
        per_anim_nodes[fn] = sorted(counts)
    except Exception as e:
        bad.append((fn, str(e)))

print('files:', stats['ok'] + len(bad), 'ok:', stats['ok'], 'bad:', len(bad), bad[:5])
print('flag byte values:', dict(flags))
print('node counts (animations using it):', dict(nodecounts.most_common()))
print('animations whose node count varies per frame:', stats['varying_nodecount'])
print('frames: min', min(frames_hist), 'max', max(frames_hist), 'median-ish', sorted(frames_hist.elements())[len(list(frames_hist.elements())) // 2])
print('coordinate ranges x/y/z:', [(round(l, 1), round(h, 1)) for l, h in zip(lo, hi)])

# model node counts, to see which models animations drive
def model_counts(path):
    root = ET.parse(path).getroot()
    nodes = root.find('Nodes')
    if nodes is None:
        return None
    kinds = collections.Counter(n.get('Type') or 'Node' for n in nodes)
    return len(list(nodes)), dict(kinds)
for m in ['mdl_skeleton', 'mdl_skeleton_heavy', 'mdl_body', 'mdl_head', 'mdl_skeleton_magic', 'mdl_skeleton_missile', 'mdl_skeleton_punching_bag']:
    p = os.path.join(mdir, m + '.xml')
    if os.path.exists(p):
        print(m, model_counts(p))
