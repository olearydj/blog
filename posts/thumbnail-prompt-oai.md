# OpenAI Imagegen Thumbnail Prompt

Use this prompt when generating thumbnails for blog posts with OpenAI image generation. Replace `<blog summary>` with a concise summary of the post's core idea before generating.

```text
Create a simple, clean thumbnail / social preview image for a technical blog post.

Goal:
Visualize the core idea of the post as a single clear concept, not as a literal screenshot or a text-heavy infographic.

Input article summary:
<blog summary>

Instructions:
- Read the summary and identify the one main idea that should be visualized.
- Create a minimalist technical illustration that communicates that idea at a glance.
- Use a consistent style: flat vector shapes, dark background, high contrast, clean edges, subtle depth, and a practical technical feel.
- Favor a small number of large visual elements over many small ones.
- Show a simple flow or relationship if appropriate: a few input elements, one central structure, and one inspection / result / outcome element.
- Use abstract UI-like blocks, panels, arrows, layers, containers, or symbols rather than detailed interfaces.
- Do not use screenshots.
- Do not use brand logos.
- Do not make it futuristic, glossy, or decorative.
- Keep it readable when very small, like in a blog list or social card.
- Avoid dense detail, tiny labels, or clutter.
- If text is used at all, use only a few large readable words, ideally no more than 1 short phrase or command-like label.
- Do not repeat the article title unless it is absolutely necessary.
- Emphasize clarity, structure, and the central idea.

Composition guidance:
- One strong central visual metaphor.
- 3-5 large shapes or grouped elements maximum.
- Clean left-to-right or inward flow.
- Plenty of negative space.
- Strong silhouette and thumbnail readability.

Output style:
- Minimal technical blog thumbnail
- Flat vector / infographic-adjacent
- Dark theme
- Clear, practical, modern
- Designed for a blog header and social preview
```

