"""The game's fonts (sf2-assets/fonts) as glyph atlases for SF2.Text. Roblox cannot load a TTF, so each
font the UI layouts name (AGOpusBold, majallab, CarterOne) is rendered at PX pixels per em into 8-bit
alpha atlases in the SF2.Images blob format (white, 256 alpha levels):
  out/Fonts/Font_<font>_<page>.lua   blob: u16 w, u16 h, u16 256, 256 x RGBA, w*h indices
  out/Fonts/Metrics_<font>.lua       packed JSON: {px, ascent, descent,
                                       glyphs: {codepoint: [page, x, y, w, h, xoff, yoff, advance]}}
xoff/yoff place the glyph box from the pen position on the baseline (y down, so yoff is negative above it).
Page 1 holds ASCII and Latin-1, page 2 Latin Extended-A and Cyrillic, so a screen in English decodes one
small atlas per font. Characters a font lacks (CJK) are left out; SF2.Text falls back to a Roblox font.
Run with the UnityPy venv (Pillow): D:\\Tools\\venvs\\unitypy\\Scripts\\python.exe -I tools/build_fonts.py
"""
import os, struct, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pack import write_blob, write_json

FONTS_DIR = 'D:/SF2-Port/sf2-assets/fonts'
OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'out', 'Fonts')
FONTS = ['AGOpusBold', 'majallab', 'CarterOne']
PX = 64
PAD = 2
WIDTH = 1024
EXTRA = '№×÷–—‘’‚“”„…•€™'
PAGES = [
    [chr(c) for c in range(32, 127)] + [chr(c) for c in range(0xA0, 0x100)] + list(EXTRA),
    [chr(c) for c in range(0x100, 0x180)] + [chr(c) for c in range(0x400, 0x460)],
]

def has_glyph(font, ch, notdef):
    if ch == ' ' or ch == '\u00a0':
        return True
    m = font.getmask(ch)
    return m.getbbox() is not None and bytes(m) != notdef

def main():
    from PIL import Image, ImageDraw, ImageFont
    os.makedirs(OUT, exist_ok=True)
    for f in os.listdir(OUT):
        os.remove(os.path.join(OUT, f))
    for name in FONTS:
        font = ImageFont.truetype(os.path.join(FONTS_DIR, name + '.ttf'), PX)
        ascent, descent = font.getmetrics()
        notdef = bytes(font.getmask('\ue000'))
        glyphs = {}
        for page, chars in enumerate(PAGES, 1):
            boxes = []
            for ch in dict.fromkeys(chars):
                if not has_glyph(font, ch, notdef):
                    continue
                x0, y0, x1, y1 = font.getbbox(ch, anchor='ls')
                boxes.append((ch, x0, y0, max(0, x1 - x0), max(0, y1 - y0), font.getlength(ch)))
            # shelf packing, tallest first
            order = sorted(boxes, key=lambda b: -b[4])
            x = y = shelf = 0
            place = {}
            for ch, x0, y0, w, h, adv in order:
                if x + w + PAD > WIDTH:
                    x, y, shelf = 0, y + shelf + PAD, 0
                place[ch] = (x, y)
                x += w + PAD
                shelf = max(shelf, h)
            height = y + shelf + PAD
            img = Image.new('L', (WIDTH, max(1, height)), 0)
            draw = ImageDraw.Draw(img)
            for ch, x0, y0, w, h, adv in boxes:
                px, py = place[ch]
                if w and h:
                    draw.text((px - x0, py - y0), ch, font=font, fill=255, anchor='ls')
                glyphs[str(ord(ch))] = [page, px, py, w, h, x0, y0, round(adv, 2)]
            pal = b''.join(bytes((255, 255, 255, a)) for a in range(256))
            blob = struct.pack('<HHH', img.width, img.height, 256) + pal + img.tobytes()
            write_blob(OUT, f'Font_{name}_{page}', blob)
            print(name, 'page', page, len(boxes), 'glyphs', img.size)
        write_json(OUT, 'Metrics_' + name, {'px': PX, 'ascent': ascent, 'descent': descent, 'glyphs': glyphs})

if __name__ == '__main__':
    main()
