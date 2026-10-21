"""Write out/install.txt: every script the place needs, with a content hash, for tools/install.luau.
Lines: <class>\t<studio path>\t<url path>\t<sha1>
  src/SF2/**.lua        -> ModuleScript ReplicatedStorage/SF2/**
  src/*.client.lua      -> LocalScript  StarterPlayer/StarterPlayerScripts/*
  src/*.server.lua      -> Script       ServerScriptService/*
  out/**.lua            -> ModuleScript ReplicatedStorage/SF2/Data/**
Run from the repo root: python -I tools/make_manifest.py
"""
import hashlib, os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def sha(p):
    return hashlib.sha1(open(p, 'rb').read()).hexdigest()[:16]

def walk(base):
    for d, _, files in os.walk(base):
        for f in sorted(files):
            if f.endswith('.lua'):
                p = os.path.join(d, f)
                yield os.path.relpath(p, ROOT).replace('\\', '/')

def main():
    lines = []
    for rel in walk(os.path.join(ROOT, 'src')):
        name = rel.split('/')[-1]
        if rel.startswith('src/SF2/'):
            lines.append(('ModuleScript', 'ReplicatedStorage/SF2/' + rel[len('src/SF2/'):-4], rel))
        elif name.endswith('.client.lua'):
            lines.append(('LocalScript', 'StarterPlayer/StarterPlayerScripts/' + name[:-11], rel))
        elif name.endswith('.server.lua'):
            lines.append(('Script', 'ServerScriptService/' + name[:-11], rel))
    for rel in walk(os.path.join(ROOT, 'out')):
        lines.append(('ModuleScript', 'ReplicatedStorage/SF2/Data/' + rel[len('out/'):-4], rel))
    with open(os.path.join(ROOT, 'out', 'install.txt'), 'w', encoding='utf8', newline='\n') as f:
        for cls, path, rel in lines:
            f.write(f'{cls}\t{path}\t{rel}\t{sha(os.path.join(ROOT, rel))}\n')
    print(len(lines), 'entries')

if __name__ == '__main__':
    main()
