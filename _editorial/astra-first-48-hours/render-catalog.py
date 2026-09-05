"""Render the preserved catalog table to an explicitly chosen output file."""
import argparse
import json
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("output", type=Path)
args = parser.parse_args()
rows = json.loads(Path(__file__).with_name("catalog.json").read_text())
lines = ["| Category | Demo / creator | What's interesting | Links |", "|---|---|---|---|"]
for row in rows:
    links = " · ".join(f"[{link['label']}]({link['url']})" for link in row["links"])
    cells = [row["display_category"], f"{row['title']} · {row['author']}", row["summary"], links]
    lines.append("| " + " | ".join(cells) + " |")
with args.output.open("x") as output:
    output.write("\n".join(lines) + "\n")
print(f"Rendered {len(rows)} rows to {args.output}")
