// Data/Quest.cs
using System;

namespace LifeRPG.Data;
public sealed class Quest
{
    public Guid Gid { get; set; } = Guid.NewGuid();

    public int Id { get; set; }                     // Used for database
    public string Title { get; set; } = string.Empty;
    public string Description { get; set; } = string.Empty;
    public QuestType Type { get; set; }
    public int XPReward { get; set; }
    public int GoldReward { get; set; }
    public bool IsCompleted { get; set; }
    public DateTime CreatedUtc { get; set; } = DateTime.UtcNow;
    public DateTime? DueDate { get; set; } // optional, nice for Weeklies/Milestones
}
