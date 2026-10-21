"""Packed data modules: a value as JSON -> zstd -> base64, read back by SF2.Pack (EncodingService
Base64Decode + DecompressBuffer + HttpService:JSONDecode). A packed module is
    return "<base64>"                      (fits in one Source)
    return {"<name>.1", "<name>.2", ...}   (base64 split across sibling modules, each `return "<chunk>"`)
Binary blobs (images) use write_blob: the same, without the JSON step.
"""
import base64, json, os
from compression import zstd

MAX_SOURCE = 190_000  # Studio refuses 200,000+; a base64 string module has almost no overhead

def _clear(folder, name):
    for f in os.listdir(folder):
        if f == name + '.lua' or (f.startswith(name + '.') and f[len(name) + 1:-4].isdigit()):
            os.remove(os.path.join(folder, f))

def write_blob(folder, name, data: bytes, level=19):
    os.makedirs(folder, exist_ok=True)
    _clear(folder, name)
    b64 = base64.b64encode(zstd.compress(data, level=level)).decode()
    step = MAX_SOURCE - 64
    if len(b64) <= step:
        open(os.path.join(folder, name + '.lua'), 'w', encoding='utf8', newline='\n').write(f'return "{b64}"\n')
        return 1, len(b64)
    parts = [b64[i:i + step] for i in range(0, len(b64), step)]
    for n, p in enumerate(parts, 1):
        open(os.path.join(folder, f'{name}.{n}.lua'), 'w', encoding='utf8', newline='\n').write(f'return "{p}"\n')
    names = ','.join(f'"{name}.{n}"' for n in range(1, len(parts) + 1))
    open(os.path.join(folder, name + '.lua'), 'w', encoding='utf8', newline='\n').write(f'return {{{names}}}\n')
    return len(parts) + 1, len(b64)

def write_json(folder, name, value, level=19):
    data = json.dumps(value, separators=(',', ':'), ensure_ascii=False).encode('utf8')
    return write_blob(folder, name, data, level)
