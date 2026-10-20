"""Pack the game's sounds into a few long Ogg Vorbis files for upload (Roblox plays uploaded assets only):
  sfx_<n>.ogg     every short clip back to back (0.25 s of silence between), 44.1 kHz stereo, <= 3.5 min each
  music_<n>.ogg   music tracks back to back (1 s apart), <= 6.5 min each
Writes D:/Tools/work/sf2-assets/audio_packs/*.ogg and audio_index.json:
  {clip: [packFile, start, length]}  (seconds; the runtime plays the region with Sound.PlaybackRegion)
Run with the UnityPy venv (numpy, soundfile): python -I tools/build_audio.py
"""
import json, os
import numpy as np
import soundfile as sf

ASSETS = 'D:/Tools/work/sf2-assets'
OUT = os.path.join(ASSETS, 'audio_packs')
RATE = 44100
SFX_GAP, MUSIC_GAP = 0.25, 1.0
SFX_MAX, MUSIC_MAX = 210, 390

def load(path):
    data, rate = sf.read(path, dtype='float32', always_2d=True)
    if data.shape[1] == 1:
        data = np.repeat(data, 2, axis=1)
    data = data[:, :2]
    if rate != RATE:
        n = int(round(len(data) * RATE / rate))
        x = np.linspace(0, len(data) - 1, n)
        data = np.stack([np.interp(x, np.arange(len(data)), data[:, c]) for c in range(2)], axis=1).astype('float32')
    return data

def is_music(name, seconds):
    return name.startswith(('fight', 'raid', 'menu', 'credits', 'act')) and seconds > 20 or seconds > 30

def main():
    os.makedirs(OUT, exist_ok=True)
    meta = json.load(open(os.path.join(ASSETS, 'audio.json')))
    files = {}
    for d, _, fs in os.walk(os.path.join(ASSETS, 'audio')):
        for f in fs:
            if f.endswith('.wav'):
                files.setdefault(f[:-4], os.path.join(d, f))
    music = sorted(n for n in files if is_music(n, meta.get(n, [0, 0, 0, 0])[3]))
    sfx = sorted(n for n in files if n not in music)
    index = {}
    for kind, names, gap, limit in (('sfx', sfx, SFX_GAP, SFX_MAX), ('music', music, MUSIC_GAP, MUSIC_MAX)):
        packs, cur, t = [], [], 0.0
        for n in names:
            data = load(files[n])
            length = len(data) / RATE
            if cur and t + length > limit:
                packs.append(cur); cur, t = [], 0.0
            cur.append((n, data)); t += length + gap
        if cur:
            packs.append(cur)
        for i, pack in enumerate(packs, 1):
            name = f'{kind}_{i}'
            chunks, t = [], 0.0
            silence = np.zeros((int(gap * RATE), 2), dtype='float32')
            for n, data in pack:
                index[n] = [name, round(t, 4), round(len(data) / RATE, 4)]
                chunks += [data, silence]
                t += len(data) / RATE + gap
            # libsndfile's Vorbis encoder crashes on one huge write: feed it in 1 s blocks
            full = np.concatenate(chunks)
            with sf.SoundFile(os.path.join(OUT, name + '.ogg'), 'w', RATE, 2, format='OGG', subtype='VORBIS') as out:
                for i in range(0, len(full), RATE):
                    out.write(full[i:i + RATE])
            print(name, len(pack), 'clips', round(t, 1), 's', os.path.getsize(os.path.join(OUT, name + '.ogg')) // 1024, 'KB')
    json.dump(index, open(os.path.join(ASSETS, 'audio_index.json'), 'w'), indent=0)

if __name__ == '__main__':
    main()
