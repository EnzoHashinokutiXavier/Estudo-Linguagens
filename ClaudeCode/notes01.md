# **Claude Code**
                                 PAREI NO TOKEN USAGE
## What is Claude Code ? 

Its not just a chatbot that you type a message and you get a replie

It can :
- create files
- build websites
- install packages on your machine
- do rerpetitive task

## Terminal

Claude Code doesn't run in a browser like chat gpt
Instead of clicking buttons you just type commands

## Permissions

- You can make a settings.json file to standardize with your team the permissions of what cloude code can do
- It make Claude run more faster without need to ask every single action
- You candeny access to some files that have important informations

## Tools

Claude Code is more powerfull than regular Claude or ChatGPT because ir has access to many tools
It has the capacibilities to interact with your computer

- read - claude can look at your files and data
- write - claude can create new files
- bash - claude can run commands

You Dont need to tell which tool to use, just describe what you want

## Context Window

The context memory has a limit, at a certain point, Claude begins to deviate from the objectives.

You can clear with 
```
/clear
```

---

## Compact Context

- When conversation is going realy long, the conversation window starts to fill up
- If you dont compact claude starts losing important info
- Claude can compact automactically when detects that context is close to full
- Summarizes the informations and clear out the noise
- If claude is getting confuse during session, you can do it manually

```
/compact
```
- You can give more specific instructions what to keep and what is important

## Conversation History

Claude automatcly save your conversation

you can get to last conversation with
```
claude --resume
```

## Models

Set model:
```
/model
```

- ### Haiku 4.5 (Fast / Light)
    - Most budget-friendly option
    - Quick edits and simple questions
    - High-volume scripted tasks
    - Fast & cheap

- ### Sonnet 4.6 (Default)
    - Best for daily coding tasks
    - Refactoring and code reviews
    - Strong reasoning for debugging
    - AI-driven development

- ### Opus 4.7 (Advanced)
    - Smartest and most capable model
    - Complex planning and architecture
    - Handling ambiguous or multi-step tasks
    - "A senior engineer who is great at thinking through hard problems"

---

## CLAUDE.md — Rules & Instructions

Explain the rules for how you want things done in a project.

Create: **CLAUDE.md** at the root of your project.

Use it to:
- Set coding conventions (naming, formatting, comments)
- Define tech stack and frameworks in use
- List forbidden patterns or anti-patterns
- Give context about the project domain

Claude reads this file automatically on every request.  
You can also create nested `CLAUDE.md` files inside subfolders for more specific rules.

---

## Prompts — Reusable Templates

Create reusable prompt templates for common tasks.

Create: **prompt.md** (or any `.md` file)

To reference it in a message:
```
@prompt.md
```

Useful for: code review templates, test generation, PR descriptions, etc.

---

## Thinking Depth

Control how deeply Claude reasons before responding:

| Command | When to use |
|---|---|
| *(no instruction)* | Simple, routine tasks |
| `think` | Moderate tasks — adds a brief reasoning step |
| `think hard` | Medium complexity — architectural decisions, tricky bugs |
| `ultrathink` | Deeply complex tasks — requires extended reasoning |

---

## Plan Mode

Claude plans **before** writing any code.

How to use:
```
/plan
```

- Claude produces a detailed step-by-step plan
- You review and approve (or edit) the plan
- Only then does Claude begin implementing

Best for: large features, refactors, or anything with multiple moving parts.

---

## Fixing Visual Bugs

- Take a **screenshot** of what you want to fix
- Paste it directly into the chat
- Describe what is wrong or what the expected result should be

Claude can read images and reason about UI issues.

---

## Message Queue

- You can send new requests while Claude is still working
- Messages are queued and processed in order
- Useful for batching follow-up instructions

---

## Sub-Agents

- Claude can spin up multiple sub-agents to work on tasks in parallel
- Each sub-agent can plan independently
- You review results and decide which plan or output to use
- Useful for exploring multiple solutions simultaneously

---

## Memory

- Claude can remember things across multiple conversations
- Claude can recognize patterns that you do
- Claude saves yours patterns, key, command and your preferences in `Auto Memory`

---

## GitHub / AI-Enhanced Collaboration

- You can add a comment on a GitHub issue or PR mentioning Claude
- Claude will read the thread and act like a team member
- Works for: implementing features, writing tests, reviewing code, fixing bugs
- You can add, remove or review what claude nows abaut you

---

## Flags

---

## Useful Slash Commands

| Command | Description |
|---|---|
| `/model` | Switch between Haiku, Sonnet, Opus |
| `/plan` | Enter plan mode before writing code |
| `/clear` | Clear conversation context |
| `/cost` | Show token usage and cost for the session |
| `/compact` | Summarize and compress conversation history |
| `/review` | Run a code review on the current branch |
| `/init` | Generate a CLAUDE.md for the current project |
| `/help` | Show all available commands |

---

## Tips for Best Results

- **Be specific**: Describe what you want, why, and any constraints.
- **Reference files**: Use `@filename` to include a file in context.
- **Iterate**: Ask Claude to revise or try a different approach — it adapts.
- **Use Plan mode** for big tasks so you catch misunderstandings early.
- **CLAUDE.md is your contract**: the clearer it is, the less you need to repeat yourself.
- **Smaller context = faster + cheaper**: Use `/compact` or `/clear` when the session gets long.
