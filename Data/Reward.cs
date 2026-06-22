// Data/Reward.cs
using System;

namespace LifeRPG.Data;

public sealed class Reward
{
    public Guid Id { get; set; } = Guid.NewGuid();

    public string Title { get; set; } = string.Empty;
    public string Description { get; set; } = string.Empty;
    public int Cost { get; set; }
}
