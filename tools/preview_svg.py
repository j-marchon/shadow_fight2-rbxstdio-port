"""Render fighter geometry posted from Studio (capsules + triangles, in studs) to an SVG, SF2-style black silhouettes.
Args: <json in> <svg out>"""
import json, sys

data = json.load(open(sys.argv[1]))
S = 60  # px per stud
xs, ys = [], []
for fig in data:
    for c in fig['caps']:
        xs += [c[0], c[2]]; ys += [c[1], c[3]]
    for t in fig.get('tris', []):
        xs += t[0::2]; ys += t[1::2]
x0, x1, y0, y1 = min(xs) - 1, max(xs) + 1, -0.5, max(ys) + 1
W, H = (x1 - x0) * S, (y1 - y0) * S
tx = lambda x: (x - x0) * S
ty = lambda y: (y1 - y) * S
out = [f'<svg xmlns="http://www.w3.org/2000/svg" width="{W:.0f}" height="{H:.0f}" style="background:#d9d2c3">',
       f'<line x1="0" y1="{ty(0):.1f}" x2="{W:.0f}" y2="{ty(0):.1f}" stroke="#7a705f" stroke-width="2"/>']
for fig in data:
    for t in fig.get('tris', []):
        pts = ' '.join(f'{tx(t[i]):.1f},{ty(t[i + 1]):.1f}' for i in (0, 2, 4))
        out.append(f'<polygon points="{pts}" fill="#000"/>')
    for c in fig['caps']:
        out.append(f'<line x1="{tx(c[0]):.1f}" y1="{ty(c[1]):.1f}" x2="{tx(c[2]):.1f}" y2="{ty(c[3]):.1f}" '
                   f'stroke="#000" stroke-width="{c[4] * S:.1f}" stroke-linecap="round"/>')
    if fig['caps']:
        out.append(f'<text x="{tx(min(c[0] for c in fig["caps"])):.0f}" y="{H - 6:.0f}" font-family="monospace" font-size="14">{fig["name"]}</text>')
out.append('</svg>')
open(sys.argv[2], 'w').write('\n'.join(out))
print('wrote', sys.argv[2], f'{W:.0f}x{H:.0f}')
