

public enum StatType { Attack, Willpower, Vitality }
public sealed class Character
{
    public string Name { get; set; } = "Player";    // Default name
    public int Level { get; set; } = 1;             // Default level
    public int CurrentXP { get; set; }         
    public int XPToNextLevel { get; set; }
    public int Gold { get; set; } = 0;              // Default gold

    public int AttackLevel { get; set; } = 1;
    public int WillpowerLevel { get; set; } = 1;
    public int VitalityLevel { get; set; } = 1;

    public int StreakDays { get; set; }

    public int StatLevel => AttackLevel + WillpowerLevel + VitalityLevel;
}
