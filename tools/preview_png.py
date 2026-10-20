"""Render fighter geometry posted from Studio to a PNG (SF2-style black silhouettes on parchment).
Args: <json in> <png out> [px_per_stud]"""
import json, sys
from PIL import Image, ImageDraw

data = json.load(open(sys.argv[1]))
S = float(sys.argv[3]) if len(sys.argv) > 3 else 40
SS = 2  # supersampling
xs, ys = [], []
for fig in data:
    for c in fig['caps']:
        xs += [c[0], c[2]]; ys += [c[1], c[3]]
    for t in fig.get('tris', []):
        xs += t[0::2]; ys += t[1::2]
x0, x1, y0, y1 = min(xs) - 1, max(xs) + 1, -0.6, max(ys) + 0.8
k = S * SS
W, H = int((x1 - x0) * k), int((y1 - y0) * k)
img = Image.new('RGB', (W, H), (217, 210, 195))
d = ImageDraw.Draw(img)
tx = lambda x: (x - x0) * k
ty = lambda y: (y1 - y) * k
d.line([(0, ty(0)), (W, ty(0))], fill=(122, 112, 95), width=2 * SS)
for fig in data:
    for t in fig.get('tris', []):
        d.polygon([(tx(t[i]), ty(t[i + 1])) for i in (0, 2, 4)], fill=(0, 0, 0))
    for c in fig['caps']:
        w = max(1.0, c[4] * k)
        a, b = (tx(c[0]), ty(c[1])), (tx(c[2]), ty(c[3]))
        d.line([a, b], fill=(0, 0, 0), width=int(round(w)))
        r = w / 2
        for p in (a, b):
            d.ellipse([p[0] - r, p[1] - r, p[0] + r, p[1] + r], fill=(0, 0, 0))
img = img.resize((W // SS, H // SS), Image.LANCZOS)
d = ImageDraw.Draw(img)
for fig in data:
    if fig['caps']:
        cx = (min(c[0] for c in fig['caps']) - x0) * S
        d.text((cx, img.height - 14), fig['name'], fill=(60, 50, 40))
img.save(sys.argv[2])
print('wrote', sys.argv[2], img.size)
