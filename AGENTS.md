# SF2 → Roblox port: rules for any coding agent

This file is for every agent (Claude Code, Antigravity/Gemini, Codex, ...). `CLAUDE.md` and `GEMINI.md`
only point here.

Read [START_HERE.md](START_HERE.md) before working. It holds the status, next steps and how to build,
install and test. Per-system details and every deviation from the original are in
[`sf2-roblox/README.md`](sf2-roblox/README.md).

## Keep the docs current: after every change, not only at session end
Whenever you commit a change (code, generated output, tools), update the docs in the same commit:
- **`START_HERE.md`**
  - Section 3 (current status): what now works, what is verified and how, what isn't.
  - Section 4 (next steps): remove what's done, add what the change left open.
  - The "Last updated" line: date and a few words on the change.
  - Section 6 (session log): one line per session. Extend the session's line rather than adding one per commit.
- **`sf2-roblox/README.md`**: the per-system section for any system whose behaviour, layout or deviations from the original changed.

Keep each file's headings and format. Don't create new status files. Leave `docs\` alone (it's history). If a change truly doesn't affect what the docs say, say so in the commit message.

Before ending a turn in which you changed something, check the docs still match what the code does now.

## How this port is made
- Faithful to the original: rules come from the decompiled C (`sf2-il2cpp\decomp\`) and the game's own
  data (`sf2-data\decrypted\`, built into `sf2-roblox\out\`). **No guesswork**: when the data and the
  decompile don't settle something, ask the user; they can take screenshots of the real game on their
  phone or check how it behaves. Write any unavoidable approximation into the README as a deviation.
- Generated files under `sf2-roblox\out\` come from the Python tools in `sf2-roblox\tools\`; don't edit
  them by hand.
- Lua files are tab-indented; edit them with exact-text edits, not regex rewrites.

## Standing constraints
- The repo stays private. Never print or commit anything under `sf2-data\keys\`.
- Commit after each step (small, described commits; no force pushes).
- No subagents or large multi-agent workflows unless the user asks.
- The user tests in Studio and compares against the original on their phone.
- Ask before downloading anything (state what, from where, how big).
