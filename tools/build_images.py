"""Every texture the port references -> packed 8-bit palette images (tools/pack.py blobs) for SF2.Images.
Which textures: any token naming an extracted texture (or "<Atlas>.<sprite>") in the UI layouts
(sf2-assets/ui), the game XMLs (stages, list, quests, story, settings, locations) and moves.xml effects.
Each texture is downscaled to fit MAX_SIZE (EditableImage limit 1024) and quantized to 256 RGBA colours.
  out/Images/<texture>.lua   blob: u16 w, u16 h, u16 colours, colours x RGBA, w*h indices
  out/ImageIndex.lua         packed JSON: texture -> [w, h, sourceW, sourceH, {sprite: [x, y, w, h, pivotX, pivotY]}]
                             (sprite rects in source pixels, y from the top)
Run with the UnityPy venv (Pillow): python -I tools/build_images.py [--dry]
"""
import json, os, re, struct, sys
from concurrent.futures import ProcessPoolExecutor

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pack import write_blob, write_json

ASSETS = 'D:/Tools/work/sf2-assets'
DATA = 'D:/Tools/work/sf2-data'
OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'out')
MAX_SIZE = 1024
PACK_ORDER = ['APK', 'ZONE_1', 'ZONE_2', 'ZONE_3', 'ZONE_4', 'ZONE_5', 'ZONE_6', 'ZONE_7', 'ZONE_7_2', 'ZONE_7_3']

def sources():
    """Texts that may name textures."""
    texts = []
    for d, _, fs in os.walk(os.path.join(ASSETS, 'ui')):
        for f in fs:
            if f.endswith('.json'):
                texts.append(open(os.path.join(d, f), encoding='utf8').read())
    dec = os.path.join(DATA, 'decrypted', 'apk')
    for f in os.listdir(dec):
        p = os.path.join(dec, f)
        if os.path.isfile(p) and (f.endswith('.xml') or f.endswith('_params')):
            try:
                texts.append(open(p, encoding='utf-8-sig', errors='replace').read())
            except OSError:
                pass
    for f in ('list.xml',):
        texts.append(open(os.path.join(DATA, 'decrypted', 'bundles', f), encoding='utf-8-sig').read())
    texts.append(open(os.path.join(DATA, 'combat', 'moves.xml'), encoding='utf-8-sig').read())
    for d, _, fs in os.walk(os.path.join(DATA, 'extracted_more')):
        for f in fs:
            if f.endswith('_params'):
                head = open(os.path.join(d, f), 'rb').read(8)
                if b'<' in head:
                    texts.append(open(os.path.join(d, f), encoding='utf-8-sig', errors='replace').read())
    return texts

def wanted(textures):
    byname = {}
    for key in textures:
        pack, name = key.split('/', 1)
        byname.setdefault(name, []).append(pack)
    tokens = set()
    for t in sources():
        tokens.update(re.findall(r'[A-Za-z0-9_\-]+(?:\.[A-Za-z0-9_\-]+)?', t))
    # names built at runtime: battle buttons (BattleBtn<state>), maps
    for name in byname:
        if name.startswith(('BattleBtn', 'Map', 'MapBtn')):
            tokens.add(name)
    want = {}
    for tok in tokens:
        name = tok.split('.', 1)[0]
        if name in byname:
            packs = byname[name]
            pack = next((p for p in PACK_ORDER if p in packs), sorted(packs)[0])
            want[name] = pack
    return want

def convert(job):
    name, pack = job
    from PIL import Image
    src = os.path.join(ASSETS, 'tex', pack, name + '.png')
    im = Image.open(src).convert('RGBA')
    sw, sh = im.size
    # the main game (APK, act packs) at full EditableImage size; event, raid and offer art at half
    limit = MAX_SIZE if (pack == 'APK' or pack.startswith('ZONE_') and pack != 'ZONE_RAID') else MAX_SIZE // 2
    s = min(1.0, limit / max(sw, sh))
    if s < 1:
        im = im.resize((max(1, round(sw * s)), max(1, round(sh * s))), Image.LANCZOS)
    w, h = im.size
    q = im.quantize(256, method=Image.Quantize.FASTOCTREE)
    pal = q.getpalette(rawmode='RGBA') or []
    n = len(pal) // 4
    blob = struct.pack('<HHH', w, h, n) + bytes(pal[:n * 4]) + q.tobytes()
    files, size = write_blob(os.path.join(OUT, 'Images'), name, blob)
    return name, [w, h, sw, sh], size

def main():
    dry = '--dry' in sys.argv
    textures = json.load(open(os.path.join(ASSETS, 'textures.json')))
    atlas = json.load(open(os.path.join(ASSETS, 'atlas.json')))
    want = wanted(textures)
    raw = sum(min(1, (MAX_SIZE / max(textures[f'{p}/{n}']))) ** 2 * textures[f'{p}/{n}'][0] * textures[f'{p}/{n}'][1]
              for n, p in want.items())
    print('textures wanted', len(want), 'of', len(textures), f'~{raw / 1e6:.0f} M pixels after downscale')
    if dry:
        return
    os.makedirs(os.path.join(OUT, 'Images'), exist_ok=True)
    for f in os.listdir(os.path.join(OUT, 'Images')):
        os.remove(os.path.join(OUT, 'Images', f))
    index, total = {}, 0
    with ProcessPoolExecutor(max_workers=8) as ex:
        for name, dims, size in ex.map(convert, sorted(want.items())):
            sprites = atlas.get(f'{want[name]}/{name}', {})
            index[name] = dims + [sprites]
            total += size
    write_json(OUT, 'ImageIndex', index)
    print('images', len(index), f'{total / 1e6:.1f} MB base64')

if __name__ == '__main__':
    main()
