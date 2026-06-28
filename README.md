# Brakexity

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

##### experimental, not yet meant for use

- Perplexity Sonar 1: working

- OpenAI GPT 5.4 free: not working

- Deepseek V3: working

- xAI Grok 4.3 fast: possibly working

### Discipliner

- Deepseek V3: working

- Perplexity sonar 1: working

- OpenAi GPT 5.4 free: working

- Google Gemini 3.1 flash-lite: working
