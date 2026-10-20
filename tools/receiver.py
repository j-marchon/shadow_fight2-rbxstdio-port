"""Local-only receiver: Studio POSTs JSON here (HttpService:PostAsync) -> written to preview/<name>.json.
Run: python -I tools/receiver.py   (binds 127.0.0.1:8766)"""
import http.server, os, re

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'preview')
os.makedirs(OUT, exist_ok=True)

class H(http.server.BaseHTTPRequestHandler):
    def do_POST(self):
        name = re.sub(r'[^A-Za-z0-9_.-]', '_', self.path.strip('/')) or 'post'
        body = self.rfile.read(int(self.headers.get('Content-Length', 0)))
        with open(os.path.join(OUT, name + '.json'), 'wb') as f:
            f.write(body)
        self.send_response(200); self.end_headers(); self.wfile.write(b'ok')
    def log_message(self, *a):
        pass

http.server.HTTPServer(('127.0.0.1', 8766), H).serve_forever()
