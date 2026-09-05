# GPT-6 Astra: parametric CAD follow-up

Researched 2026-09-05. **The Onshape rover remains the strongest inspected revision-workflow example. The best new practical lead is an Onshape model train; the most striking new assembly is Adam's cutaway turbofan.** Five focused candidates are below. Four are additions to the original survey; the rover is C02 there. These are researched demonstrations, not five independently reproduced models.

The important distinction is editable design intent: named dimensions, geometric relationships, feature dependencies and assembly mates that survive a change. A detailed solid model, a STEP export or a rotating assembly alone does not establish that. Code-based parametric models also qualify, but their parameters and regeneration behavior must be inspected rather than inferred from the software's capabilities. Onshape's [FeatureScript documentation](https://cad.onshape.com/FsDoc/) confirms that its standard and custom features use the same parametric modeling language; using it does not automatically guarantee a well-structured design.

## Focused shortlist

| ID | Demonstration | Parametric evidence | Revision evidence | Native artifact acquired? | Judgment |
|---|---|---|---|---|---|
| P01 / C02 | [Onshape rover](https://x.com/Alpha10six/status/2096261751389978640) | Assembly tree and mate features visible in inspected clip frames | Specific redesign request visible; creator describes bracket, compute-module and ventilation changes | No | Strongest inspected workflow |
| P02 | [NS6400 train on a GP7 chassis](https://www.reddit.com/r/codex/comments/1w7rvgr/astra_just_built_my_sscale_model_train_in_onshape/) | Author explicitly identifies FeatureScript | Follow-up corrections, snap-fits, LED accommodation and print layout reported | No | Best new practical lead; author evidence |
| P03 | [Adam / Aurora TF-01 cutaway turbofan](https://x.com/adamdotnew/status/2096053889141489669) | Onshape instances, mates and mate-animation controls visible | Clearance-check workflow visible, but successful dimensional revision not established | No | Strong assembly demonstration; vendor claims |
| P04 | [SO-101 arm](https://x.com/MakerMatters/status/2096262183281692918) | WebCAD assembly, script panel and mechanism controls visible | No successful follow-up edit established | No | Credible mechanism lead; parametric quality unresolved |
| P05 | [FreeCAD scooter redesign](https://x.com/heecheee/status/2096179696245629412) | FreeCAD model tree visible; MCP use stated | Author compares prior Sol model with Astra redesign | No | Useful FOSS workflow lead; constraint history unresolved |

“Visible” means I inspected captured output, not that I operated the CAD model. “Reported” means the creator says it happened. No native artifact acquired means I cannot test regeneration, interference, dimensions or print fit independently. It does not mean the creator has no files or will never share them.

## P01: Onshape rover — a stronger case than the original survey established

The [inspected frames](../../../../archive/twitter/store/research/parametric-cad-2026-09-05/rover-start.png) show an assembly instance tree and 52 mate features. The adjacent agent text reports healthy mates and an interference check, while retaining physical checks as outstanding. Those are model-generated assertions, not independently rerun results. A [later frame](../../../../archive/twitter/store/research/parametric-cad-2026-09-05/rover-later.png) shows the user correcting bracket orientation and the agent describing its intended revisions. This is substantial evidence of a real engineering conversation inside CAD; it does not establish a fully constrained sketch tree or error-free regeneration. [Original clip](https://x.com/Alpha10six/status/2096261751389978640).

The creator's [follow-up](https://x.com/Alpha10six/status/2096262616947577024) identifies a camera-bracket redesign, moving the Jetson module for port access and adding ventilation. A [setup reply](https://x.com/Alpha10six/status/2096285689335669208) says Codex built a custom tool/plugin for the intended workflow. An [earlier reply](https://x.com/Alpha10six/status/2096218173284532541) describes beginning with browser computer use before building that integration. I found no public connector repository or native document link in the inspected replies and targeted author search.

**Why it leads:** it addresses changes to an existing assembly with practical access and mounting concerns. The decisive next artifact is the native Onshape document before and after a dimension change, including regeneration and mate status.

## P02: model train — strongest new evidence of iterative design for printing

The owner wanted an NS6400 body adapted to an already printed GP7 chassis. Follow-up requests addressed incorrect details, printability, snap-fits and lighting. The author explicitly says FeatureScript built the geometry and reports a recommended fit coupon. This provides an unusually concrete account of adapting a design to existing hardware, but the claims are not independent fit-test results. I read the post and author comments through web retrieval; the browser hit Reddit's human-verification page, and the image fetch failed. No native file was acquired. [Creator's full account](https://www.reddit.com/r/codex/comments/1w7rvgr/astra_just_built_my_sscale_model_train_in_onshape/).

**Why it matters:** design revisions and fabrication intent are explicit. The useful next evidence would be the FeatureScript source, dimension controls and a successful physical coupon test, rather than another beauty image.

## P03: Adam's turbofan — impressive assembly structure, unresolved model provenance

The inspected [frame](../../../../archive/twitter/store/research/parametric-cad-2026-09-05/adam.png) shows an Onshape document titled Aurora TF-01, a cutaway turbofan, 140 instances, 11 mate features and a mate-animation control. This is stronger assembly evidence than a rendered engine. The side panel discusses blade/shaft clearances, but I did not inspect actual numerical results or run the motion myself. Adam [claims the assembly came from one prompt](https://x.com/adamdotnew/status/2096079344275960216). That authorship claim remains unverified; visible feature names are not a reliable record of model lineage. [Original demonstration](https://x.com/adamdotnew/status/2096053889141489669).

Adam's [Copilot product page](https://adam.new/copilot) describes Onshape/Fusion integration, selected-geometry context, feature-tree cleanup and variables that propagate through a design. These are relevant product capabilities, not independent verification of the specific clip. No public native Aurora document was located in the inspected material.

**Why it merits attention:** assembly relationships and motion, rather than merely geometric complexity. It is the strongest vendor candidate in this follow-up.

## P04 and P05: worthwhile, with a lower verification ceiling

**SO-101 arm:** the [inspected frame](../../../../archive/twitter/store/research/parametric-cad-2026-09-05/so101.png) shows WebCAD, grouped assembly parts, a script panel and joint/mechanism controls. Its contact/interference status reads unchecked. The creator calls it parametric, but I found no exposed native file, parameter sweep or successful edit demonstration. Keep it as a mechanism candidate; do not describe it as verified collision-free robotics. [Original post](https://x.com/MakerMatters/status/2096262183281692918).

**FreeCAD scooter:** the Japanese-language [post](https://x.com/heecheee/status/2096179696245629412) identifies FreeCAD MCP and compares the earlier Sol result with Astra's redesign. I inspected the [side-by-side image](../../../../archive/twitter/store/research/parametric-cad-2026-09-05/freecad-scooter.png), which shows the FreeCAD interface and model tree. It does not reveal sketch constraints, an editable feature chain or regeneration. The requested resemblance to a standards-compliant product is a design brief, not evidence that the result is certified or compliant.

## Reusable tools found during the search

**[text-to-cad](https://github.com/earthtojake/text-to-cad)** is the most directly relevant open-source lead for a local experiment. Its MIT-licensed repository supplies agent skills for CAD creation/editing, inspection and viewing, with STEP among its outputs. This gives us an existing workflow to evaluate before writing our own. I inspected the repository description, not its execution or security in depth. I have not installed it, and this survey does not establish its Astra-specific performance.

**[CADAM](https://github.com/Adam-CAD/CADAM)** is an open-source, GPL-3.0 text-to-CAD application with OpenSCAD source and public examples. It must be distinguished from Adam's Onshape Copilot. I inspected a [turbofan example's code](https://github.com/Adam-CAD/CADAM/blob/master/benchmarks/11-turbofan-jet-engine.md): its blade-count parameter feeds a repeated blade construction, while many other dimensions are embedded directly in the code. That illustrates degrees of parametrization. It is not the native Aurora Onshape model, and the inspected page does not establish Astra attribution. The source was read, not rendered or modified.

**Onshape FeatureScript plus an integration** is the closest route to the rover/train workflow. The rover's custom connector is not a public reusable artifact I could find. Adam offers an existing integration, while FeatureScript itself has public documentation and example features. A working integration still needs an explicit check of how it handles failed features and ambiguous geometry selections.

## What a decisive reproduction should demonstrate

Use a small sensor bracket or electronics enclosure with a named sensor width, mounting-hole pitch, wall thickness and connector clearance. Start with the native source and a known-good regenerated model. Then change sensor width, move the hole pattern and alter wall thickness independently. Check that dependent geometry follows, mates remain meaningful, solids regenerate and clearances stay positive. Finally request an impossible combination and check whether the agent detects it instead of silently changing the design intent.

Preserve the input dimensions, native source, revision history, screenshots and check outputs. If printing, make a coupon first and record measured fit. None of this follow-up's five candidates has been independently verified through that complete sequence here. The research establishes promising workflows and concrete examples; it does not establish that constraint-preserving CAD automation is solved.

## Research record

This follow-up used the signed-in X browser, web search, creator replies, primary product documentation and repositories. Searches covered Onshape, FreeCAD, FeatureScript, parametric CAD, CadQuery, build123d and SolidWorks; generic Blender demos, untested suggestions and reposts were excluded. Screenshots are preserved under `store/research/parametric-cad-2026-09-05/`. No paid X API requests, installations, account changes or messages to creators were made. The original 72-candidate survey remains a dated snapshot; this is a linked supplement with five focused entries, including one existing candidate.
