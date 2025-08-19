using MudBlazor;

namespace LifeRpg.Theme;

public static class RpgColors
{
    // RPG-named colors (hex values are what MudBlazor actually uses)
    // Primary      = "Treasure Gold"
    // Secondary    = "Hero Blue"
    // Success      = "XP Green"
    // Error        = "Boss Red"
    // Warning      = "Quest Amber"
    // Info         = "Lore Cyan"
    // Background   = "Town Square" (light) / "Dungeon Slate" (dark)
    // Surface      = "Scroll Parchment" (light) / "Obsidian Slab" (dark)
    // TextPrimary  = "Ink Black" (light) / "Moonlight" (dark)

    public static readonly MudTheme Instance = new()
    {
        // Light mode = parchment UI, gold accents
        PaletteLight = new PaletteLight
        {
            Primary       = "#D4AF37", // Treasure Gold
            Secondary     = "#3B82F6", // Hero Blue
            Success       = "#22C55E", // XP Green
            Error         = "#EF4444", // Boss Red
            Warning       = "#F59E0B", // Quest Amber
            Info          = "#06B6D4", // Lore Cyan

            Background    = "#F5F5F4", // Town Square (warm gray 100)
            Surface       = "#FFFFFF", // Scroll Parchment
            AppbarBackground = "#FFFFFF",
            DrawerBackground = "#FFFFFF",

            TextPrimary   = "#111827", // Ink Black
            TextSecondary = "#374151",

            // Optional accents
            Tertiary      = "#A855F7", // Arcane Violet
            Dark          = "#78350F"  // Aged Leather
        },

        // Dark mode = slate UI, gold accents pop
        PaletteDark = new PaletteDark
        {
            Primary       = "#D4AF37", // Treasure Gold
            Secondary     = "#60A5FA", // Hero Blue (lighter for contrast)
            Success       = "#34D399", // XP Green+
            Error         = "#F87171", // Boss Red+
            Warning       = "#FBBF24", // Quest Amber+
            Info          = "#22D3EE", // Lore Cyan+

            Background    = "#0F172A", // Dungeon Slate (slate-900)
            Surface       = "#111827", // Obsidian Slab (gray-900)
            AppbarBackground = "#111827",
            DrawerBackground = "#111827",

            TextPrimary   = "#F9FAFB", // Moonlight
            TextSecondary = "#E5E7EB",

            Tertiary      = "#C084FC", // Arcane Violet+
            Dark          = "#1F2937"  // Tempered Steel
        },
    };
}
