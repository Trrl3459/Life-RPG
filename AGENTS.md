# LifeRPG - Gamified Habit Tracker

## Project Overview

LifeRPG is a gamified personal habit tracker built as a Blazor WebAssembly application. The application transforms daily goals and tasks into a role-playing game experience where users create a character, define quests (habits and tasks), earn experience points and gold for completing them, level up their character, and spend gold on custom real-life rewards.

This is a single-page application running entirely in the browser with data persisted to browser local storage. There is no backend server or database beyond what the browser provides.

## Tech Stack

* **Framework**: Blazor WebAssembly (.NET 9.0)
* **UI Library**: MudBlazor 8.10.0
* **State Persistence**: Blazored.LocalStorage 4.5.0
* **Development Environment**: Windsurf IDE (VS Code based)
* **Runtime**: WebAssembly in the browser

## Project Structure

```
LifeRPG/
├── Data/                      # Domain models and enums
│   ├── Character.cs          # Player character with stats, level, XP, gold, streak
│   ├── Quest.cs              # Quest model with rewards, completion, and reset tracking
│   ├── QuestType.cs          # Quest type enum (Daily, Weekly, Milestone)
│   └── Reward.cs             # Reward model for the reward store
├── Services/                  # Business logic and state management
│   ├── CharacterService.cs   # Manages character state, XP, leveling, gold, streak
│   ├── QuestService.cs       # Manages quest CRUD, completion, rewards, and Daily reset (depends on CharacterService)
│   └── RewardService.cs      # Manages reward CRUD with local storage persistence
├── Pages/                     # Routable page components
│   ├── Home.razor            # Landing page (`/home`) — still the Blazor template content, to be rewritten
│   ├── Dashboard.razor       # Main hub: live character summary + today's incomplete Daily quests (default route `/`)
│   ├── Character.razor       # Character sheet: summary card, rename, and Debug Tools card (`#if DEBUG` only)
│   ├── Quests.razor          # Quest log: filter by type, complete, delete, create via dialog
│   └── Rewards.razor         # Reward store: create, edit, delete, and purchase rewards with gold
├── Components/                # Reusable non-page UI (dialogs, etc.)
│   ├── CreateQuestDialog.razor  # MudDialog + MudForm for creating a new quest
│   ├── CreateRewardDialog.razor # MudDialog + MudForm for creating/editing a reward
│   ├── CharacterSummary.razor   # Character card (level badge, XP bar, gold/streak chips) used on Dashboard and Character page
│   └── EmptyState.razor         # Reusable empty-state panel (icon, title, message, optional action button)
├── Layout/                    # Layout components
│   ├── MainLayout.razor      # Primary app layout with MudLayout, drawer, app bar
│   └── NavMenu.razor         # Navigation menu (legacy, unused — MainLayout's MudNavMenu is what actually renders)
├── Theme/                     # Custom theming
│   └── ThemeFactory.cs       # Defines `RpgTheme`: parchment palette, Cinzel heading/button typography
├── wwwroot/css/app.css       # RPG styling: gold-trimmed cards/dialogs, level badge, empty-state border
├── Program.cs                # Application entry point and service registration
├── App.razor                 # Root component with routing
└── \_Imports.razor            # Global using statements
```

## Common Commands

### Build and Run

```bash
# Run with hot reload (use this for development)
dotnet watch run

# Build the project
dotnet build

# Publish for production
dotnet publish -c Release



\# If none of the above properly runs the program

dotnet watch --launch-profile https
```

### Debugging

The project is configured to run on `http://localhost:5017` (HTTP) and `https://localhost:7124` (HTTPS) in development mode.

Hot reload cannot apply some edits (for example adding a static field, as in `ThemeFactory.cs`) and the page will crash with an "unhandled error" and a `hot_reload.c` assertion in the console. This is not an app bug — restart `dotnet watch` (Ctrl+R) and reload.

## Domain Concepts and Terminology

This application uses RPG game terminology to represent productivity concepts:

* **Character**: The user's avatar with a name, level, experience points, and gold
* **Quest**: A task or habit the user wants to complete (analogous to a to-do item)
* **XP (Experience Points)**: Points earned by completing quests that contribute to leveling up
* **Gold**: Currency earned by completing quests, spent on rewards
* **Level**: Character progression milestone reached by accumulating XP
* **Reward**: Real-life incentive the user defines and purchases with gold
* **Daily/Weekly/Milestone**: Quest types indicating recurrence or importance

## Architecture and Coding Conventions

### Service Layer

All services are registered as singletons in `Program.cs`. Services manage application state and coordinate between the UI and local storage. Services should expose async methods for any operations involving state persistence.

`QuestService` depends on `CharacterService` (injected via constructor) so that `CompleteQuestAsync` can grant XP and gold in one call. Keep the dependency in this direction only — `CharacterService` must not depend back on `QuestService`, to avoid a circular singleton registration.

Note the `Character` model lives in `LifeRPG.Data`, but there is also a routable `LifeRPG.Pages.Character` (the `Character.razor` page component) — the two share a short name. Code outside `Pages/Character.razor` that needs the data model must reference it as `LifeRPG.Data.Character` to avoid a compiler ambiguity (see `Dashboard.razor`).

### State Persistence Pattern

All state changes must be immediately persisted to local storage. The pattern is:

1. Modify in-memory state
2. Call the service's save method (`SaveAsync()`, `SaveCharacterStateAsync()`, etc.)
3. Trigger UI refresh via `StateHasChanged()` if needed

Example from QuestService:

```csharp
public async Task AddQuestAsync(Quest q)
{
    Quests.Add(q);
    await SaveAsync();  // Always save after mutating state
}
```

### Data Models

Models live in the `Data/` folder and are simple POCOs with properties. Use records or sealed classes where appropriate. All models that persist to local storage must be serializable.

### UI Components

* **Always use MudBlazor components**, never raw HTML inputs or Bootstrap components
* Use `<MudCard>` for content grouping
* Use `<MudGrid>` and `<MudPaper>` for layouts
* Use `<MudSnackbar>` for non-blocking user feedback
* Use `<MudDialog>` for modal interactions
* Follow MudBlazor's parameter binding conventions (`@bind-Value` for two-way binding)
* Use `<EmptyState>` (`Components/EmptyState.razor`) for any list or section with nothing to show, instead of plain text
* Developer-only controls (e.g. the +XP/+Gold cheats on `Character.razor`) must sit behind `#if DEBUG` so they are absent from Release builds; expose the flag as a non-const property to avoid CS0162 warnings
* Theme: the RPG look lives in `Theme/ThemeFactory.cs` and `wwwroot/css/app.css` (gold `--rpg-gold` trim, Cinzel headings). Reuse those instead of inline styles

### Async/Await

All service methods that touch local storage must be async. Use the `Async` suffix for all async methods. Always await async calls; do not use `.Result` or `.Wait()`.

### Null Safety

The project has nullable reference types enabled. Use `?` for nullable types and handle null cases explicitly.

## Current Development Status

### Completed (Days 1-15 of 15-Day Plan)

* Project scaffolding and MudBlazor setup
* MainLayout with MudAppBar and MudDrawer navigation
* Character model and CharacterService with local storage persistence
* XP and leveling system with carry-over logic
* Character page with basic stat display
* Quest model, QuestType enum, and QuestService
* Quest list persistence to local storage
* Quest completion logic with XP and gold rewards (`QuestService.CompleteQuestAsync`)
* Snackbar notifications for quest completion
* CreateQuestDialog component with form validation (`Components/CreateQuestDialog.razor`)
* Quests page with type filtering, completion, and deletion (`Pages/Quests.razor`)
* Dashboard page with live character summary and today's incomplete Daily quests (`CharacterSummary.razor` extracted; `/` is now the default route, `Home.razor` moved to `/home`)
* Reward Store CRUD (`Data/Reward.cs`, `Services/RewardService.cs`, `Pages/Rewards.razor`, `Components/CreateRewardDialog.razor`)
* Reward purchase/redemption logic (`CharacterService.SpendGoldAsync`, wired into `Rewards.razor`)
* Daily quest reset — `Quest.LastCompletedUtc` drives auto-reset of completed Daily quests on a new day (`QuestService.GetQuestsAsync`)
* Streak tracking — `Character.StreakDays`/`LastActivityUtc` increment on consecutive-day quest completion and expire after a missed day (`CharacterService.RegisterDailyActivityAsync`)

* Day 15 — theme refinement: game-like RPG theme (parchment palette, Cinzel headings, gold-trimmed cards), `EmptyState` component on Dashboard/Quests/Rewards, Dashboard "All dailies complete!" state, redesigned Character page (cheats behind `#if DEBUG`)
* Day 15 — code review: removed unused `Counter.razor` and `RpgColors`, fixed CS0162 warning, `QuestService` now uses a `_loaded` flag like `RewardService`. Release build: 0 warnings, 0 errors

### Known Follow-ups (post Day 15)

* Daily reset and streaks compare **UTC** dates, so they roll over at UTC midnight rather than the user's local midnight
* `Home.razor` is still the Blazor template (fake links, "successfully running" snackbar)
* Dead code: `Layout/NavMenu.razor` (+ CSS), unused `Character` stat fields (`AttackLevel`, `WillpowerLevel`, `VitalityLevel`, `StatLevel`), no-op `QuestService.UpdateQuestAsync`
* Drawer nav links sometimes do not render until a re-render (e.g. opening a dialog) on a fresh page load
* The disabled "Completed" button has low contrast on the parchment background
* The "Login" app bar button is a placeholder kept for a possible future login system

## Development Workflow

When implementing new features:

1. Start in Plan Mode to think through the approach
2. Create models first if new domain concepts are needed
3. Implement service layer with persistence
4. Build UI components using MudBlazor
5. Test state persistence by refreshing the browser
6. Add appropriate user feedback with MudSnackbar

When modifying existing features:

1. Review the relevant service to understand current state management
2. Maintain the existing persistence pattern (mutate then save)
3. Update UI bindings if service contracts change
4. Test that data persists correctly across browser sessions

## Important Constraints

* **No Backend**: This is a pure client-side application. Do not introduce server-side code, APIs, or database connections.
* **Browser Storage Only**: All data persists via Blazored.LocalStorage. Do not use cookies, session storage, or external storage services.
* **MudBlazor Only**: Do not introduce other UI frameworks or component libraries. Stick with MudBlazor for consistency.
* **Follow the Plan**: The 15-day plan in the project documentation serves as the roadmap. Implement features in the order specified unless explicitly told otherwise.

## Testing and Validation

To verify features are working:

* Refresh the browser to confirm data persists across sessions
* Check browser console for errors or warnings
* Verify MudSnackbar notifications appear for user actions
* Test that XP accumulation triggers level-ups correctly
* Confirm gold deductions work when purchasing rewards, and that the Purchase button is disabled when gold is insufficient
* Build with `dotnet build -c Release` to confirm there are no warnings and the Debug Tools card is compiled out

## Git Workflow

When making commits:

* Use clear, descriptive commit messages that reference the day/feature being implemented
* Example: "Day 7: Add CreateQuestDialog with form validation"
* Commit working increments, not broken or partial implementations

## Future Considerations

AI features are being considered for post-launch but are not part of the current implementation scope. Do not implement AI integrations, recommendations, or generative features at this time.

