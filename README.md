# Brakexity

The prompts that enhances your AI experience

##### coding focused ai prompts for talking agents. originally meant for perplexity

## Info

- This is a repo with prompts for ai to code better, judge your code, 

- Note: the coder prompts contain ponytail logic to minimize code length

## Which prompt should you use?

### Coder

- This prompt is for overall coding

#### features

- makes the ai split functions into code blocks

- makes the ai create headers aswell

- makes the ai prioritizing minimalism

- has build and plan mode, specified at the start of each message using [PLAN] or [BUILD]

- judges both your and its own code

#### who should use this?

people who want to code and learn from mistakes.

### Agent

- This prompt is a proof-of-concept that ai can output json, which can be used to execute commands on your own system

#### features

- outputs only JSON when coding

- prefers minimalism

- has build and plan mode

- Nearly the same as Coder, but it makes the ai give you json actions

#### who should use this?

people who want to test the JSON action format and arent using it for anything serious.

### Discipliner

- this prompt is purely to reduce user laziness

#### features

- works on most ai's as it doesnt modify output as much and is in *user preference* format

- Tells you to not be lazy instead of doing simple tasks for you

#### who should use this?

people who want the ai to discipline them.

### Planner

- Makes the ai purely plan your project

#### features

- like coder, but only plans projects

#### who would use this?

people who want the ai to focus purely on planning

### NODIN - NO Do It Never (Now released)

- Before use, read the [NODIN NOTE.md](NODIN/NOTE.md) for more information

- This is a work in progress prompt aimed to achieve a full jailbreak on deepseek bypasing all rules

- The NODIN prompt is a private work in progress

- First versions of the prompt has now officially been released. more versions up to v0.0.7+ will be released in the future

#### features

- Bypasses core system safety and security rules

- Tricks the AI into adopting a opposite persona of "Do It Never" making it do everything that "DIN" doesnt do

#### who would use this?

people who want to experiment with making AI LLMs treat higher level rules as fake

### CAI-Cenap

- This prompt adds dynamic module loading to the ai

- Also partially counts as a jailbreak as the bypass version disables system safety and security rules

#### features

- actions like #load, #unload, #search, #add

#### who would use this?

people who want to add any custom behaviour to the ai without modifying the core prompt

### Thinking

- This is a prompt to make the AI think before answering

#### features

- before answering, the ai thinks in a code block and fact-checks itself

#### who would use this?

people who want the ai to think before answering

### keybreak

- This is a harmless prompt to add formattinf to the ai

#### features

- Sections & subsections for formatting

- The ai will explain how it works

#### who would use this?

people who either forgot that xml exists or prefer the look and extra features possible to add

## Which ai does it work on?

##### may be partially outdated, mainly tested on sonar 1 and deepseek

##### only latest versions

### Coder

- Perplexity Sonar 1: working

- OpenAI GPT 5.4 free: not working

- Deepseek V3: working

- xAI Grok 4.3 fast: not working

- Google Gemini 3.1 flash-lite: working

- Google Gemini 3.1 pro: working

- Google Gemini 3.5 flash: working

- Google NoteBookLM: working

- Google chrome Search Overview: working

### Agent

- Perplexity Sonar 1: working

- OpenAI GPT 5.4 free: not working

- Deepseek V3: working

- xAI Grok 4.3 fast: possibly working

### Discipliner

- Deepseek V3: working

- Perplexity sonar 1: working

- OpenAi GPT 5.4 free: working

- Google Gemini 3.1 flash-lite: working

### Planner

- Deepseek V3: working

### CAI-Cenap

- Deepseek V3: working

- Google Gemini 3.1 flash-lite: working

### Thinking

- Deepseek V3: working

- Perplexity Sonar 1: working

- OpenAI gpt 5.4 free: working

### NODIN

- Deepseek V3: working

- Gemini 3.1 flash-lite: possibly working

- Perplexity sonar 1: not working

- OpenAI gpt 5.4 free: not working

### keybreak

- Deepseek V3: working but broken respones during complex tasks sometimes

- OpenAI gpt 5.4 free: partially working - accepts and understand the format but has a wrong picture of it

- Perplexity sonar 1: working
