import sys, os, UnityPy
# Dump every quest-like TextAsset from the APK's Unity data, keeping same-named ones apart
src, out = sys.argv[1], sys.argv[2]
os.makedirs(out, exist_ok=True)
env = UnityPy.load(src)
for o in env.objects:
    if o.type.name != "TextAsset":
        continue
    try:
        d = o.read()
    except Exception:
        continue
    n = d.m_Name
    if not any(k in n.lower() for k in ("story", "core", "quest", "battles")):
        continue
    data = d.m_Script
    if isinstance(data, str):
        data = data.encode("utf-8", "surrogateescape")
    fn = os.path.join(out, f"{n}__{o.assets_file.name[:8]}_{o.path_id}")
    with open(fn, "wb") as f:
        f.write(data)
    print(fn, len(data), flush=True)
