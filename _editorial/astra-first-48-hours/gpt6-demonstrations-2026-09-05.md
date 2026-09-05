# GPT-6 Astra demonstrations worth your attention

Research date: 2026-09-05. The [72-candidate catalogue](gpt6-demo-candidates-2026-09-05.md) contains original-post links, category assignments, individual rubric scores and limitations. It was selected from 504 unique API-captured posts, supplemented by targeted X searches, creator threads, live applications, repositories and research papers. This is a launch-period discovery survey, not a representative benchmark or 72 independently validated successes.

**Start with Waterloo, Manhattan, Gogh Strike, the fly simulation and the Erdős results.** They illustrate quite different capabilities: communicating history spatially, sustaining a large construction project, making a recognizable game, integrating scientific software, and producing formally checkable mathematics. For this personal archive project, Ethan Mollick's living wiki is the most directly relevant idea, although its evidence is much weaker because the artifact is private.

Both requested examples are included: Matt Shumer's Manhattan world and Dan Shipper's Waterloo reconstruction. The user confirmed Waterloo was the remembered battle example. Neither is classified as a game. A controllable camera, walking or driving is insufficient: the games category requires rules, objectives or a play loop. Scientific simulations also remain separate from attractive visualizations; a simulated cell or fly does not establish scientific validity.

## Selection rubric

| Dimension | Weight | What earns credit |
|---|---:|---|
| Evidence | 30% | Original artifact, inspected behavior, disclosed process, independent checking where appropriate |
| Difficulty | 25% | Multiple interacting constraints, sustained work, unfamiliar tools, meaningful reasoning |
| Usefulness | 20% | A real task accomplished or an idea made substantially easier to understand |
| Originality | 15% | A distinctive application or result beyond another interchangeable clone |
| Reproducibility | 10% | Accessible build, source, prompts, inputs, asset provenance or evaluation artifacts |

Each dimension receives 0–5; the weighted total is 6E + 5D + 4U + 3N + 2R. Scores express editorial judgments about the available evidence, not measured model ability. Small differences should not be taken literally. Difficulty and originality remain provisional when only a creator's post is available. Popularity, likes and follower count do not contribute.

Evidence levels: E1 is a first-person assertion; E2 adds an identifiable artifact or attached media not yet inspected in detail; E3 includes inspected output or process; E4 adds usable live behavior, inspectable source/process or comparably substantial documentation; E5 requires external or formal checking. These levels do not automatically verify every claim. Loading a game does not verify its entire campaign, and reading a proof repository does not mean rerunning the proof checker.

The category picks below also consider what the example teaches. Where the evidence is thin, the pick is explicitly provisional. There is only one dedicated educational explainer in the selected pool, so that category's selection is a lead, not a demonstrated victory over a broad field.

Honorable mentions distinguish close contenders from candidates with a noteworthy feature. A mention does not raise the evidence score or imply additional testing. Cross-category mentions identify a different use of the same artifact and do not increase the 72-candidate count.

## The picks

### Historical reconstruction: Waterloo — Dan Shipper

[Original post](https://x.com/danshipper/status/2095880567313092770) · [Open the reconstruction](https://waterloo-guard-meets-the-line.vercel.app/)

**My strongest recommendation for an immediately explorable demonstration.** It focuses on Maitland's Guards confronting the French advance, with viewpoints behind either formation, an overhead view and a timeline separating advance, volley and withdrawal. I opened the build, started playback and jumped to the volley; the interface advanced to that phase and the scene rendered successfully. A [captured live view](../../../../archive/twitter/store/research/gpt6-demos/20260905T174033Z/waterloo-live.png) records the inspection.

The source notes materially improve the work: they distinguish the sourced episode from authored troop counts, terrain detail and compressed choreography. They also identify disputed battalion attribution and reused visual assets. Shipper's “historically accurate” tweet is broader than the application's own claims. The [National Army Museum](https://www.nam.ac.uk/explore/battle-waterloo) supports the broad advance-and-repulse episode, but that does not validate every figure's position or movement. The application also links the [Guards Museum](https://theguardsmuseum.com/history/revolutionary-and-napoleonic-wars/) and [eyewitness letters](https://www.pns1814.co.uk/Waterloo%20Letters.htm).

**Honorable mentions**

- **Close contender — [Mollick's Alexandria](https://alexandria-mouseion.netlify.app/) (C34, 80 versus Waterloo's 84).** Its working reading collection distinguishes surviving editions from fragmentary or lost works and says it is not a recovered library inventory. It offers broader exploration and reading; Waterloo gets the pick for making one historical event inspectable through a controlled timeline. I opened the catalogue, but did not audit every text. [Original post](https://x.com/emollick/status/2095601539066777748) · [Repository](https://github.com/emollick/alexandria-mouseion).
- **Noteworthy reconstruction problem — [Boullée's unbuilt Newton cenotaph](https://x.com/emollick/status/2096270461122347131) (C35).** A few sketches and a description become a narrated Blender walkthrough of architecture that was never built. The appeal is making an unrealized design spatially understandable; unseen geometry remains interpretation, and the result has less inspected evidence than Waterloo.
- **Noteworthy cinematic approach — [Geobukseon turtle ship](https://x.com/i/status/2096241698925916633) (C36).** It moves from a ship interior to a naval battle inspired by Yi's campaigns. That connects machinery, space and historical action, but its cinematic presentation has not been established as an accurate reconstruction.

### Interactive worlds: Manhattan for ambition; Void Explorer for engineering transparency

[Matt Shumer's Manhattan post](https://x.com/mattshumer_/status/2095609734845927525) · [Detailed account](https://somethingbig.ai/a)

**Manhattan is the scale pick.** Its interest is sustained construction in Unreal over roughly a week. Shumer describes a coordinator and implementer arrangement, existing assets, substantial token consumption and an unfinished city. This is evidence of progress on a large project, not completion of NYC or an ordinary single-prompt budget. I read the account; I did not drive the build myself. It remains the user's requested drivable-world candidate, with live drivability unverified here.

**[Void Explorer](https://developers.openai.com/blog/how-to-build-games-with-astra) is the more instructive engineering pick.** The creator explains transitions between space and planetary surfaces, physics, rendering scale and iterative visual development. Its account exposes decisions and correction cycles that short clips hide. Although the author calls it a game, the demonstrated exploration belongs here under the user's classification. [Original post](https://x.com/truthyvalue/status/2096291942091153563).

**Honorable mentions**

- **Noteworthy art direction — [Van Gogh's Town](https://van-goghs-town.surge.sh/) (C42).** Six paintings become one walkable place. The distinctive challenge is carrying an artistic vocabulary across a coherent environment; the source paintings also supply much of its visual identity. It is related to Gogh Strike, not an independent second creator's result. [Original post](https://x.com/petergostev/status/2095776685807346105).
- **Noteworthy living environment — [ABYSSAL](https://abyssal-living-deep.netlify.app/?site=reef&seed=713&light=day&surface=1) (C41).** Underwater exploration and procedural marine behavior make it more than a static scene, with a [repository](https://github.com/emollick/abyssal-living-deep) available for follow-up. It trails the picks on inspected evidence; its animals are not validated biological models.
- **Noteworthy deployment workflow — [VRChat beach world](https://x.com/pichikyo/status/2096285284178788612) (C43).** The Blender/Unity work includes collisions and optimization for an existing social platform. That integration matters beyond appearance. The creator's unfinished baking step keeps it from being a completion showcase.
- **Noteworthy input constraint — [Shanghai Bund from one photograph](https://x.com/yiyangleex/status/2096290966550544893) (C48).** The photo-to-Blender-to-Godot sequence is an interesting route from a flat reference to a navigable scene. Geographic fidelity and invented unseen detail remain unchecked.

### Games: Gogh Strike — Peter Gostev

[Original post](https://x.com/petergostev/status/2096013280519016608) · [Play](https://gogh-strike.surge.sh/) · [Repository](https://github.com/petergpt/gogh-strike)

**The most distinctive game candidate:** painter characters, rival crews and a coherent painted town, with weapons, scoring and timed matches. I inspected character selection and entered the FPS interface. Browser automation did not get past the persistent mouse-capture overlay, so I cannot claim verified movement or combat.

A useful correction emerged from the repository: the post advertises 5v5, while the current README describes 6v6, single-player against bots. It explicitly says online multiplayer is absent. The source includes provenance and third-party notices, which make it more reviewable than a clip alone. “Multiplayer shooter built in six hours” would therefore be a misleading summary.

**Honorable mentions**

- **Joint-score contender — [Zork in 3D](https://zork-underground-empire.netlify.app/) (C19, tied at 74).** Translating a text adventure into a spatial experience poses a different design problem from making a shooter. I entered and resumed the expedition and received proximity guidance after interaction; inventory, journal and treasure count were present. It could be the better pick for adventure design, but full puzzle fidelity remains untested. Gogh Strike wins the editorial tie on its distinctive visual/game concept, not a measured quality advantage. [Original post](https://x.com/emollick/status/2096047660662722620).
- **Noteworthy reproducibility — [VECTOR RUSH](https://x.com/AIDREAMMAN/status/2096284215126229146) (C20).** A Godot/Blender antigravity racer with a [source repository](https://github.com/ToBeWin/vector-rush), making it a useful engine-based counterpoint to browser demos. Its feel, course design and local build remain untested.
- **Noteworthy feedback loop — [FTL-like game with agent self-play](https://x.com/SIGKITTEN/status/2095647833797824735) (C23).** The interesting claim is that the agent plays what it builds. That could close the loop between implementation and testing, but the attached demonstration has not been checked through a full playthrough.
- **Noteworthy target platform — [Lumen Echo Game Boy ROM](https://x.com/LumenMythTech/status/2096292333318717859) (C22).** A constrained legacy platform gives this a different engineering target from another modern 3D clone. The ROM has not been tested on hardware or in an emulator here.
- **Noteworthy accessibility — [a nine-year-old's racing game](https://x.com/suganthan/status/2096286445434708416) (C29).** Parent-guided creation is interesting as a change in who can make a game. It is not evidence of independent child development or unattended model autonomy.

### Reasoning and research: FrontierMath Erdős results

[Epoch's announcement](https://epoch.ai/latest/announcing-frontiermath-erdos) · [Paper](https://epoch.ai/files/frontiermath-erdos.pdf) · [Proof repository](https://github.com/epoch-research/LeanOpenProblems)

**The strongest evidence of substantive reasoning in this survey.** Epoch reports formally checked new results on open mathematical problems. The corrected budgeted result is two solutions among 68 problems; additional nonstandard runs bring the unique total to five. These are not interchangeable claims. A pricing correction complicates the nominal budget comparison, and the broader campaign cost substantially more. I inspected the primary materials but did not rerun Lean.

**Honorable mentions**

- **Strong alternative kind of evidence — [BabaIsBench](https://quesma.com/benchmarks/babaisbench/) (C60, 84 versus 94).** Solving 15 Lake levels demonstrates reasoning through a game's rules rather than producing a game. It offers a more approachable example than new mathematics, but its text interface and differing agent harnesses qualify comparisons. The Erdős study gets the pick for the novelty and formal checking of the results.
- **Noteworthy compact process example — [Loïc Boursin's grid puzzle](https://x.com/LoicBoursin/status/2096284293152567637) (C61).** A small puzzle makes the reported solve process easier to inspect than a large software project. Its single example and estimated human comparison are too limited to support a broad speed or reasoning claim.

### Scientific and engineering simulation: fly brain and nerve cord in the browser — Mehran

[Original post](https://x.com/mehrantsi/status/2096282317148885453)

**The most interesting scientific-software integration candidate.** The creator distinguishes prior Sol-assisted Rust/Metal work from Astra's newer dataset integration and WASM/WebGPU port. That makes the contribution unusually legible. The significance is connecting research data, an existing model and a usable interface; it is not established proof that the biological system has been faithfully reproduced. This pick remains provisional because I did not inspect its live dynamics or compare outputs with experimental data.

**Honorable mentions**

- **Close contender — [orbital rendezvous](https://x.com/i/status/2096225621303042258) (C63, 70 versus 72).** It distinguishes two-body propagation from HCW guidance and discusses navigation, docking gates and grading integrity. Choose this to examine explicit engineering criteria; the fly project gets the pick for integrating scientific data and an existing simulation into a browser. Both remain provisional. Author grading and modified treatment of a competitor's hard-failure criterion limit benchmark conclusions.
- **Close contender — [Trackmania physics reconstruction](https://x.com/achepta_tm/status/2096258619574513880) (C64, 70).** Recreating the physics in C# and running it through WASM gives this a substantial behavioral target beyond rendering. Existing collidable meshes supply assets; fidelity against the original engine is the missing decisive check.
- **Noteworthy agent behavior — [Shumer's inhabited civilization](https://x.com/mattshumer_/status/2095596175705399482) (C65).** Multiple agent-driven inhabitants make this a different experiment from a scenic world. Existing assets and elaborate orchestration are disclosed. Apparent social behavior is not itself evidence of a validated social model, and related updates count as one project.
- **Noteworthy operational use — [Jet Factory V2](https://x.com/konstantinsaifo/status/2096260471020011981) (C67).** Machine cycles and a returning tug suggest a way to make manufacturing flow understandable. It could be more practically useful than a spectacular physics clip; the claimed real-world timings need a provenance audit.
- **Noteworthy exploratory idea — [spatial inference from dog-bark audio](https://x.com/literallydenis/status/2095989219390844985) (C69).** Unusual input makes this worth following. The creator explicitly says it is not a 3D map yet, so it earns a mention for the experiment rather than a demonstrated acoustic reconstruction.
### CAD and fabrication: the dual-GB10 enclosure — @mr_r0b0t

**Parametric CAD follow-up:** [Focused review of the Onshape rover, model train, turbofan, SO-101 arm and FreeCAD scooter](gpt6-parametric-cad-2026-09-05.md). For editable CAD and revision workflows, the rover is now the strongest inspected lead; the enclosure remains the original survey's physical-test-print pick. The supplement distinguishes visible assembly structure from unverified constraint preservation.

[Original post](https://x.com/mr_r0b0t/status/2096266507839824353)

**The physical-world pick, provisionally.** The creator reports printing test coupons for a fourth enclosure iteration designed with an Astra-powered Hermes agent. A fit test is a more consequential artifact than a beauty render, but it does not establish a completed enclosure, thermal performance or safe sustained operation. I read the post and its attached-evidence references; I did not watch the entire print or inspect dimensions.

**Honorable mentions**

- **Joint-score contender — [Onshape robot](https://x.com/Alpha10six/status/2096261751389978640) (C02, tied at 66).** The agent edits through a backend connector it built while the human controls the mouse and view. That may be the more transferable CAD workflow; the enclosure gets the pick for reaching a physical test-print stage. Neither has completed mechanical validation here.
- **Noteworthy drawing-to-presentation workflow — [bottle schematics to Blender](https://x.com/fffabs/status/2096284491677376763) (C03).** Turning technical drawings into beauty shots connects design documentation to communication. Its narrower contribution is valuable, but a convincing render does not demonstrate dimensional correctness.
- **Noteworthy reconstruction task — [image-to-CAD](https://x.com/wieslawsoltes/status/2096290662412947597) (C05).** The candidate targets a CAD representation rather than just a picture. Its usefulness depends on editable geometry and accurate dimensions, neither independently established in this review.

### Film and music: Ableton composition — Pietro Schirano

[Original demonstration](https://x.com/skirano/status/2095595942544089525)

**The provisional creative-workflow pick.** Schirano describes synthesized instruments, musical parts and arrangement created through an Ableton MCP connection. An editable production workflow has more follow-on value than an isolated generated audio file. I read the primary thread; I did not independently audit the Ableton project or perform an audio-quality comparison.

**Honorable mentions**

- **Noteworthy synchronization problem — [piano waltz and 3D pianist](https://x.com/higgsfield_ai/status/2096292350180163648) (C11).** Matching finger animation to musical events is more constrained than adding a soundtrack to a render. It trails Ableton because the note/finger correspondence and production provenance have not been independently checked; it is a vendor demonstration.
- **Noteworthy creative tooling — [A Room Made of Replies](https://x.com/SkyeSharkie/status/2096276401204936939) (C10).** The film is accompanied by claims of changes to the creator's tools, suggesting an agent can help adapt the production process as well as produce content. The tooling and any claimed physical behavior remain unverified.
- **Noteworthy focused execution — [INCEPTION title sequence](https://x.com/lepadphone/status/2096285071192035406) (C13).** A recognizable title-animation brief makes the intended visual result easy to understand. The creator excludes the music from Astra's contribution, and the scene has not been independently inspected here.
- **Supplementary discovery — [Duncan Trussell's Backrooms film](https://x.com/duncantrussell/status/2096003511104508411).** A Blender-based atmospheric film is a distinctive storytelling counterpoint to the music pick. It was discovered in the broader research but is outside the 72 scored entries; this mention does not turn it into a scored or independently verified result.
### Product and interfaces: Parallax Desk — @outscape

[Original post](https://x.com/outscape/status/2096286659566309605) · [Open the demo](https://parallax-desk.uhgall.chatgpt.site)

**The provisional interface pick:** a spatial desktop that responds to head position. It illustrates how an idea previously not worth implementing can become an experiment. I did not enable camera tracking in this session, so the mechanism is a creator claim, not a completed local test.

**Honorable mentions**

- **Close contender — [3D iPod-shaped Codex thread app](https://x.com/skirano/status/2095648379455861054) (C51, 64 versus 66).** It combines a Blender object with an application interface for real Codex threads. This may be more relevant to everyday Codex use than Parallax Desk; the latter gets the pick for its more unusual interaction mechanism. The reported build time is unverified.
- **Close contender, different strength — [Google Sheets portrait](https://x.com/velvet_shark/status/2096284077150114303) (C52, 64).** Painting 9,216 cells and editing the screencast is a memorable cross-application workflow. It has less direct product utility and does not establish spreadsheet-analysis competence.
- **Noteworthy input-to-interface translation — [video recreated as interactive code](https://x.com/skirano/status/2095595938534351231) (C54).** The side-by-side presentation makes fidelity an inspectable question and adds the possibility of interaction beyond the reference video. Neither behavioral fidelity nor the claimed interaction was independently tested.

### Software and personal knowledge: Mollick's living wiki

[Original post](https://x.com/emollick/status/2095606622055760159)

**The most relevant idea for your archive, with the weakest inspectable evidence among the picks.** Mollick describes turning a large collection of personal correspondence, calendar material and writing into a maintained wiki with recurring briefings over several days. The artifact is private. We should borrow the pattern, not assume its reliability: canonical source records, derived topic pages, citations back to originals and rebuildable summaries would make it testable here.

**Honorable mention**

- **Noteworthy maintenance work — [Hazumi News database migration](https://x.com/jrzscodes/status/2096284357610610836) (C72).** Moving from Supabase to Cloudflare D1 concerns an existing application's infrastructure rather than a fresh demo. It illustrates useful work beyond content generation, but I did not inspect migration tests or data-preservation evidence. The living wiki gets the pick for relevance to this archive, not stronger public verification.

**Supplementary evaluation:** [Every's production rewrite](https://every.to/benchmarks/senior-engineer-benchmark) is a more demanding software check than a new landing page. Astra's reported score is 71 against human references of 89 and 96, with unequal follow-up conditions across models. This is useful context for assessing maintenance claims, not an additional scored candidate or a claim that senior engineering is solved.
### Education and explanation: Derya Unutmaz's T-cell explainer

[Original post](https://x.com/DeryaTR_/status/2095659170661904804)

**A promising expert-led teaching lead.** An immunologist describes a five-minute explainer built with Remotion, image generation and narration tooling. The valuable pattern is an expert directing and evaluating an audiovisual explanation. I have not independently checked every biological statement or frame, so this is not a medical accuracy endorsement. Only one dedicated explainer made this shortlist; the historical exhibits provide stronger inspected evidence for educational interaction.

**Honorable mentions for educational use, cross-listed from other categories**

- **[Alexandria's reading collection](https://alexandria-mouseion.netlify.app/) (C34).** Its surviving/lost distinction and access to actual texts support source-based exploration beyond a narrated lesson. The catalogue interaction was inspected, giving it stronger direct evidence than the T-cell video; it remains primarily a historical reconstruction.
- **[Waterloo's timeline and viewpoints](https://waterloo-guard-meets-the-line.vercel.app/) (C33).** Looking at the same encounter from different positions could support teaching about perspective and historical interpretation. Playback was tested; improved student learning was not. This is the historical winner being recognized for a separate educational feature.
- **[Cell motility and stress-response sandbox](https://x.com/tsuname/status/2096283873214956016) (C68).** Adjustable stresses and gradients suggest a useful way to explore relationships interactively. That is a potential teaching use, not a validated biological explanation or measured learning outcome.

There is no second dedicated explainer in this shortlist to call a close competitor to the T-cell video. These cross-category mentions identify worthwhile educational features without inventing a broader comparison.

## What the survey actually suggests

The strongest pattern is the combination of an agent with existing tools, assets and a feedback loop. Blender, Unreal, Ableton, Onshape and published scientific packages supply substantial capabilities. Crediting that scaffolding does not diminish the result; it identifies what a person would need to reproduce it.

“One prompt” is a poor unit of comparison. It can mean a modest direct request, or a coordinator launching a long and expensive sequence of work. Most posts do not disclose failed attempts, spend or human steering. Keep these as separate fields rather than using the phrase as a quality score.

The most persuasive demonstrations expose their limitations within the artifact. Waterloo identifies its interpretive elements. Alexandria distinguishes readable texts from missing works. The fly author names the prior model's contribution. Those disclosures raise confidence more than a dramatic caption does.

Failures belong beside the highlights. [Victor Taelin's allocator account](https://x.com/VictorTaelin/status/2096273196412498057) reports trouble turning a diagnosis into a solution under real constraints; [Mollick's research-taste experiment](https://x.com/emollick/status/2095717185200988439) describes technically competent but uninteresting research choices. Neither failure is counted as a successful demo in the 72-candidate list.

## Evidence and reproducibility

Private raw responses, request parameters and hashes are in `store/research/gpt6-demos/20260905T174033Z/`. The directory also holds machine-readable `candidates.json` and `candidates.csv`, screenshots and the catalogue-building script. The raw pool contains 504 unique posts; 72 selected candidates include one targeted-browser Waterloo entry and one external mathematical study. This is a count of distinct selected demonstrations/projects, not authors, independent replications or successful tests. Related Van Gogh projects remain separately identified rather than hidden as unrelated examples.

The acquisition began with eight bounded searches across games, science, engineering, creative work, office work, software, earlier posts and unusual results, then followed creator posts, replies and historical keywords. Search is biased toward public, searchable, visually shareable English-language work, with some multilingual discoveries. The catalogue intentionally retains candidates with limited evidence so future inspection can improve or reject them.

Approximate research API charges are $3.81 before deduplication adjustments, calculated from 580 retrieved post records and 91 user records at the rates used during setup. This is an estimate, not a reconciled billing balance. No additional credits were purchased and no auto-recharge was enabled. Browser verification does not use the paid X API helper. Rerunning acquisition scripts would make new paid requests; rebuilding the catalogue from saved data does not.
