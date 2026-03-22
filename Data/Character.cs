namespace LifeRPG.Data
{
    public sealed class Character
    {
        public string Name { get; set; } = "Hero";
        public int Level { get; set; } = 1;
        public int CurrentXP { get; set; }
        public int XPToNextLevel { get; set; } = 35;
        public int Gold { get; set; } = 0;

        public int AttackLevel { get; set; } = 1;
        public int WillpowerLevel { get; set; } = 1;
        public int VitalityLevel { get; set; } = 1;

        public int StreakDays { get; set; }

        public int StatLevel => AttackLevel + WillpowerLevel + VitalityLevel;
    }
}
