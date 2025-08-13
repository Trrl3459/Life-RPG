public class CharacterService
{
    public Character Player { get; set; } = new Character
    {
        Name = "Hero",
        Level = 1,
        CurrentXP = 0,
        XPToNextLevel = 35,
        Gold = 0
    };
}
