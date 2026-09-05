# Astra first-48-hours editorial records

Unpublished supporting notes for the September 5, 2026 article. This folder is excluded from Quarto rendering and resources. Exclusion from the website does not make files private if they are later committed and pushed to a public Git repository. Credentials, raw API responses, and personal archive records remain outside the blog.

## Published outputs

- [Article source](../../posts/2026-09-05-astra-first-48-hours/index.qmd) and [live article](https://antisimplistic.com/posts/2026-09-05-astra-first-48-hours/).
- [Catalog source](../../posts/2026-09-05-astra-demonstration-catalog/index.qmd) and [live catalog](https://antisimplistic.com/posts/2026-09-05-astra-demonstration-catalog/).
- [Published X-thread text](astra-twitter-thread-2026-09-05.md) and [live thread](https://x.com/Antisimplistic/status/2096349863554302130). Twelve posts and eight images; parent links and attachments verified through the API.
- [LinkedIn draft](linkedin-draft.md), not posted.

## Supporting material

- [Editorial brief](editorial-brief.md): audience, voice references, article shape, conclusions, and visual decisions.
- [Research review](gpt6-demonstrations-2026-09-05.md), [original 72 candidates](gpt6-demo-candidates-2026-09-05.md), and [parametric CAD follow-up](gpt6-parametric-cad-2026-09-05.md). These preserve the research-stage judgments and scoring, which were not the final article's presentation scheme.
- [Final catalog data](catalog.json): 82 entries, with exact displayed categories and final outbound links. The original 72 include related projects, not 72 independent successful replications; ten later additions include limitations and evaluations.
- [Final image manifest](image-sources.json): all 38 published image files, captions, source URLs, and hashes. Reconstructed from the final article; not a record of every historical download URL or video timestamp.
- [Original catalog generator](catalog-builder-original.py.txt): preserved source history of a one-off script with historical paths and side effects. Do not execute it as a current publishing command. Use `adhoc-python render-catalog.py /private/tmp/astra-table.md` to regenerate the table from the preserved JSON for comparison; it does not modify a published post.

## Operational records kept in the Twitter archive

[Twitter archive README](../../../../archive/twitter/README.md) documents authentication, acquisition, and publication tooling. Raw evidence remains under `../../../../archive/twitter/store/research/gpt6-demos/20260905T174033Z/` and `../../../../archive/twitter/store/research/parametric-cad-2026-09-05/`. Private publication IDs and progress are in `../../../../archive/twitter/state/astra-thread-publication.json`; do not copy the state directory into this repository. Redirect notes at the previous Twitter documentation paths preserve discoverability.

[Codex/Astra configuration](../../../../obsidian/vault/dojo/codex/codex-astra-configuration.md) remains in Obsidian. General voice guides remain in their own projects and are linked from the editorial brief. Temporary superseded article drafts, previews, and QA screenshots were not promoted into durable notes.
