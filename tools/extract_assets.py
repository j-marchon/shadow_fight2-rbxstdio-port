"""Extract every image, sprite rect, sound and font from SF2's Unity bundles.
Output (OUT = D:/Tools/work/sf2-assets):
  tex/<pack>/<texture>.png       full-res Texture2D (the _low copies are skipped when a full one exists)
  sprites.json                   sprite name -> [pack, texture, x, y, w, h, pivotX, pivotY]  (y from the top)
  textures.json                  "<pack>/<texture>" -> [w, h]
  audio/<pack>/<clip>.wav        decoded AudioClip
  audio.json                     clip name -> [pack, channels, frequency, seconds]
  fonts/<name>.ttf
Run with the UnityPy venv: python -I tools/extract_assets.py
"""
import json, os, sys, traceback
from concurrent.futures import ProcessPoolExecutor

DATA = 'D:/Tools/work/sf2-data'
OUT = 'D:/Tools/work/sf2-assets'

def sources():
    """(pack, file) for every bundle/serialized file."""
    out = []
    apk = os.path.join(DATA, 'apk_assets/assets/bin/Data')
    out.append(('APK', apk))  # a directory: loaded as one environment (shared resources)
    for base in (os.path.join(DATA, 'raw/gamedata/bundles'), os.path.join(DATA, 'cdn')):
        for d, _, files in os.walk(base):
            for f in files:
                p = os.path.join(d, f)
                rel = os.path.relpath(p, base).replace('\\', '/')
                if f.endswith(('.xml', '.json', '.txt', '.md5')):
                    continue
                pack = rel.rsplit('.', 1)[0] if '.' in rel.split('/')[-1] else rel
                out.append((pack.replace('/', '__'), p))
    return out

def work(job):
    pack, path = job
    import UnityPy
    UnityPy.config.FALLBACK_UNITY_VERSION = '2022.3.62f2'
    res = dict(pack=pack, sprites={}, atlas={}, textures={}, audio={}, fonts=[], errors=[])
    try:
        if os.path.isdir(path):
            # load the files, not the directory: external .resS/.resource streams resolve next to them
            env = UnityPy.load(*[os.path.join(path, f) for f in sorted(os.listdir(path))
                                 if os.path.isfile(os.path.join(path, f))])
        else:
            env = UnityPy.load(path)
    except Exception as e:
        res['errors'].append(f'load {e}')
        return res
    texnames = {}
    for obj in env.objects:
        t = obj.type.name
        try:
            if t == 'Texture2D':
                d = obj.read()
                name = d.m_Name
                texnames[obj.path_id] = name
                if name.endswith('_low'):
                    continue
                dst = os.path.join(OUT, 'tex', pack, name + '.png')
                if not os.path.exists(dst):
                    img = d.image
                    os.makedirs(os.path.dirname(dst), exist_ok=True)
                    img.save(dst)
                    w, h = img.size
                else:
                    w, h = d.m_Width, d.m_Height
                res['textures'][f'{pack}/{name}'] = [w, h]
            elif t == 'AudioClip':
                d = obj.read()
                dst_dir = os.path.join(OUT, 'audio', pack)
                os.makedirs(dst_dir, exist_ok=True)
                if not os.path.exists(os.path.join(dst_dir, d.m_Name + '.wav')):
                    for sname, wav in d.samples.items():
                        n = os.path.splitext(sname)[0]
                        open(os.path.join(dst_dir, n + '.wav'), 'wb').write(wav)
                res['audio'][d.m_Name] = [pack, d.m_Channels, d.m_Frequency, round(d.m_Length, 3)]
            elif t == 'Font':
                d = obj.read()
                data = bytes(d.m_FontData) if d.m_FontData else b''
                if data:
                    os.makedirs(os.path.join(OUT, 'fonts'), exist_ok=True)
                    open(os.path.join(OUT, 'fonts', d.m_Name + '.ttf'), 'wb').write(data)
                    res['fonts'].append(d.m_Name)
        except Exception as e:
            res['errors'].append(f'{t} {obj.path_id}: {e}')
    # sprites last: they reference textures by path id
    for obj in env.objects:
        if obj.type.name != 'Sprite':
            continue
        try:
            d = obj.read()
            rd = d.m_RD
            tex = rd.texture.read() if rd.texture else None
            if tex is None:
                continue
            tname = tex.m_Name
            if tname.endswith('_low'):
                continue
            r = rd.textureRect
            th = tex.m_Height
            piv = d.m_Pivot
            rect = [round(r.x), round(th - r.y - r.height), round(r.width), round(r.height), round(piv.x, 4), round(piv.y, 4)]
            res['sprites'][d.m_Name] = [pack, tname] + rect
            res['atlas'].setdefault(f'{pack}/{tname}', {})[d.m_Name] = rect
        except Exception as e:
            res['errors'].append(f'Sprite {obj.path_id}: {e}')
    return res

def main():
    jobs = sources()
    only = sys.argv[1:]
    if only:
        jobs = [j for j in jobs if j[0] in only]
    os.makedirs(OUT, exist_ok=True)
    sprites, textures, audio, fonts, errors, atlas = {}, {}, {}, [], {}, {}
    if only:  # partial run: merge into the existing index
        def old(n):
            p = os.path.join(OUT, n + '.json')
            return json.load(open(p)) if os.path.exists(p) else {}
        sprites, textures, audio, errors, atlas = old('sprites'), old('textures'), old('audio'), old('errors'), old('atlas')
        for o in (sprites, audio):
            for k in [k for k, v in o.items() if v[0] in only]:
                del o[k]
        for k in only:
            errors.pop(k, None)
    with ProcessPoolExecutor(max_workers=6) as ex:
        for res in ex.map(work, jobs):
            for k, v in res['sprites'].items():
                sprites.setdefault(k, v)
            textures.update(res['textures'])
            atlas.update(res['atlas'])
            for k, v in res['audio'].items():
                audio.setdefault(k, v)
            fonts += res['fonts']
            if res['errors']:
                errors[res['pack']] = res['errors'][:20] + ([f'... {len(res["errors"])} total'] if len(res['errors']) > 20 else [])
            print(res['pack'], len(res['sprites']), len(res['textures']), len(res['audio']), len(res['errors']), flush=True)
    for name, obj in (('sprites', sprites), ('textures', textures), ('audio', audio), ('errors', errors), ('atlas', atlas)):
        json.dump(obj, open(os.path.join(OUT, name + '.json'), 'w'), indent=0, sort_keys=True)
    print('sprites', len(sprites), 'textures', len(textures), 'audio', len(audio), 'fonts', fonts)

if __name__ == '__main__':
    main()
