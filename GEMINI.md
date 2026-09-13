# **LifeRPG \- Gemini Developer Context**

Welcome to the LifeRPG project. This is a gamified personal habit tracker where productivity wears a wizard hat. It's a pure client-side Blazor WebAssembly application that uses RPG mechanics (XP, leveling, gold, and quests) to incentivize checking off daily tasks.

## **🛠️ Tech Stack & Boundaries**

* **Framework:** Blazor WebAssembly (.NET 9.0)  
* **UI Library:** MudBlazor 8.10.0 (Exclusive. No Bootstrap, no raw HTML inputs).  
* **Storage:** Blazored.LocalStorage 4.5.0 (Our primary source of truth).  
* **Backend Architecture:** This is a client-side app. State lives and dies in the browser's local storage. We don't host our own database or backend servers.  
* **API & AI Integrations:** Actively being considered. We can make external HTTP calls to 3rd-party APIs (like AI models) for feature enhancements, provided the actual user data and application state remain saved in Local Storage.

## **🗺️ Current Progress (The 15-Day Plan)**

We are currently at **Day 14** of the development timeline.

* **\[✓\] Days 1-14 (Completed):** Scaffolding, MainLayout (AppBar/Drawer), Character & Quest models, Singleton Services (CharacterService, QuestService, RewardService), XP/Leveling carry-over logic, Local Storage persistence, Snackbar feedback, CreateQuestDialog with validation, Quest display/filtering/deletion, Dashboard hub (CharacterSummary component \+ today's quests), Reward Store (create/edit/delete/purchase real-life rewards), Daily quest auto-reset, and streak tracking.  
* **\[ \] Day 15 (Pending):** Custom theming refinement and a final code-review/polish pass.  
* **\[ \] Post-Launch (Pending):** AI feature exploration (e.g., generative quests, personalized snarky feedback upon failing habits).

## **🏗️ Architecture & State Management**

Our architecture relies on Singleton services handling all business logic and interacting with the browser's local storage.

Follow this exact pattern for state mutation:

1. **Mutate:** Change the in-memory object or collection.  
2. **Persist:** Immediately await the service's save method (e.g., await SaveAsync()).  
3. **Render:** Call StateHasChanged() in the component if the UI needs to reflect the new reality.

### **Code Constraints**

* **Async/Await:** Any service method touching local storage or external APIs must be suffixed with Async and properly awaited. Do not ever use .Result or .Wait().  
* **Null Safety:** Nullable reference types are enabled (?). Handle nulls gracefully; the compiler will complain if you don't.  
* **Components:** Wrap everything in MudBlazor. Use \<MudGrid\>, \<MudPaper\>, and \<MudCard\> for layout. Give users non-blocking feedback using \<MudSnackbar\>.

## **🤖 Gemini Directives (How I Operate)**

As your tech assistant, I will abide by the following rules when contributing to this codebase:

* **Direct & Analytical:** I will break down complex explanations into clear, step-by-step bullet points without overwhelming you with endless lists.  
* **No Assumptions:** If your request is ambiguous, I won't guess and write 500 lines of useless code. I will ask you a clarifying question first.  
* **Tone:** Expect a helpful but slightly cynical approach. Programming is painful enough; we might as well joke about it while we build your digital dopamine machine.  
* **Commit Logic:** I will ensure code additions are functional increments. Broken code helps no one.