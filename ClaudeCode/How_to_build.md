# [How Senior Engineers Actually Build With AI in 2026](https://www.youtube.com/watch?v=14RP8liACqo)

"Desing the system and let ai make all code"

# 6 files you need to use every project

Every project you need to create 6 files :
- ai-workflow-rules.md
- architecture-context.md
- code-standards.md
- project-overview.md
- ui-context.md

## project-overview.md

- overview : what the project is
- goals 
- core user flow
- features
- scope
    - in scope
    - out of scope
    - sucess criteria

## architecture-context.md

- stack
- system boundaries
- storage model
- auth and collaboration model
- starter system designs
- ai generaion model
    - design generation
    - spec generation
    - invariants

## code-standards.md

- general
- programing languages
- api routes
- data and storage
- file organization

## ai-workflow-rules.md

- approach
- scoping rules
- when to split work
- handling missing requirements
- protected foundation components

## ui-context.md

- theme
- typography
- border radius
- canvas
    - color palette
    - edge style
    - shapes
    - connection handles
    - canvas background
- component library
- layout patterns
- icons

## progress-tracker

- current phase
- current goal
- completed
- in progress
- next up
- open questions 
- architecture decisions
- session notes

# Phases

Each unity have : 

- Goal
- Design Decisions
- Implementation
- Dependencies
- Constraints
- Done Checklist

Send the context and the model to the AI in the context section, then send the response to the code-generation AI to generate the component.
Mark that unity as done in the progress tracker

Example : 

## 1.Project Setup
- Initialize Next.js app
- Configure TS + Tailwind
- Clean boilerplate  
DONE WHEN : App runs with empty screen

## 2.Design System
- Install shadcn/ui
- Add Button, Dialog, Input
- Set up global theme tokens
DONE WHEN : All components render correctly

## 3.Editor Layout Shell
- Create navbar
- Create sidebar container
- Add layout structure   
DONE WHEN : You see a static editor layout