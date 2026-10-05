using MudBlazor;

namespace LifeRpg.Theme;

/// <summary>
/// Central place for all LifeRPG colors, spacing, and typography.
/// </summary>
public static class RpgTheme
{
    private static readonly string[] HeadingFont = { "Cinzel", "Georgia", "serif" };

    public static readonly MudTheme Instance = new()
    {
        // Light palette (day mode)
        PaletteLight = new PaletteLight
        {
            // RPG mapping: Primary = Mana, Secondary = Stamina, Tertiary = Gold
            Primary           = "#6C63FF",   // Mana (indigo / deep purple vibe)
            Secondary         = "#00C853",   // Stamina (emerald)
            Tertiary          = "#FFB300",   // Gold
            Info              = "#42A5F5",
            Success           = "#2E7D32",
            Warning           = "#F57C00",
            Error             = "#D32F2F",
            AppbarBackground  = "#673AB7",
            AppbarText        = Colors.Shades.White,
            Background        = "#F3EAD7",   // Parchment
            Surface           = "#FFFBF0",   // Scroll
            DrawerBackground  = "#FBF3DF",
            TextPrimary       = "#2B2118"    // Ink
        },

        // Dark palette (night mode)
        PaletteDark = new PaletteDark
        {
            Primary           = "#8F88FF",
            Secondary         = "#69F0AE",
            Tertiary          = "#FFD54F",
            Info              = "#90CAF9",
            Success           = "#81C784",
            Warning           = "#FFB74D",
            Error             = "#EF9A9A",
            Background        = "#121212",
            Surface           = "#1E1E1E",
            AppbarBackground  = "#2E264F",
            AppbarText        = Colors.Shades.White
        },

        LayoutProperties = new LayoutProperties
        {
            DefaultBorderRadius = "10px"
        },

        Typography = new Typography
        {
            H4 = new H4Typography { FontFamily = HeadingFont, FontWeight = "700" },
            H5 = new H5Typography { FontFamily = HeadingFont, FontWeight = "700" },
            H6 = new H6Typography { FontFamily = HeadingFont, FontWeight = "700" },
            Button = new ButtonTypography { FontFamily = HeadingFont, FontWeight = "700" }
        }
    };
}
