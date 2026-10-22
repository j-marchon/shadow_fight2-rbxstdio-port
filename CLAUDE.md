# SF2 → Roblox port: rules for models

Read [START_HERE.md](START_HERE.md) before working. It holds the status, next steps and how to build, install and test.

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

## Standing constraints
- The repo stays private. Never print or commit anything under `sf2-data\keys\`.
- Commit after each step.
- No subagents or large workflows unless the user asks.
- The user tests in Studio and compares against the original on their phone.
