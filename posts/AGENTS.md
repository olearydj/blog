# AGENTS.md

Guidance for agents creating or editing blog posts under `posts/`.

## TIL Style Posts

TIL posts should be short, useful notes about a tool, workflow, command, configuration pattern, or small technical lesson. They are not long-form essays, product documentation, or detailed debugging diaries.

Use the personal story only as context. Center the reusable lesson: what the reader can now do, why it matters, and what caveats keep them from misusing it.

Preferred shape:

- Start with a brief problem or discovery context.
- Show the concrete command, setting, or pattern.
- Include a small sanitized example when it improves understanding.
- Explain why the tool or pattern is useful beyond the immediate anecdote.
- End with caveats or resources only when they add practical value.

Tone and pacing:

- Write in a practical, plainspoken first-person voice when appropriate.
- Keep posts concise but not jagged.
- Do not overuse one-sentence paragraphs.
- Avoid the clipped motivational cadence of many tiny paragraphs.
- Prefer smooth paragraphs that make one clear point each.
- Avoid overexplaining the author's debugging journey unless the steps themselves are the lesson.

Formatting:

- Do not manually hard-wrap prose paragraphs in `.qmd` files; let the editor/rendering environment wrap text.
- Use fenced code blocks with language tags for commands and examples.
- Keep sanitized output samples short enough to remain readable.
- Do not paste raw debug output that may expose local paths, private project instructions, enabled tools, secrets, or other unintended context.
- When generating thumbnails for posts with OpenAI image generation, use `posts/thumbnail-prompt-oai.md` as the base prompt.

Front matter:

- Match the existing post pattern:

```yaml
---
title: "TIL: Clear, Specific Title"
author: "Dan O'Leary"
date: "YYYY-MM-DD"
categories: [TIL, tools]
description: "Short summary"
image: thumbnail.png
draft: false
---
```

- Use `image: thumbnail.png` when a thumbnail exists in the post folder.
- Keep categories focused and consistent with nearby posts.
