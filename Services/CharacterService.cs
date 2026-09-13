using Blazored.LocalStorage;
using LifeRPG.Data;

namespace LifeRPG.Services;

public class CharacterService
{
    private const string StorageKey = "character";
    private readonly ILocalStorageService _localStorage;
    private Character? _character;

    public CharacterService(ILocalStorageService localStorage)
    {
        _localStorage = localStorage;
    }

    public async Task<Character> GetOrCreateAsync()
    {
        if (_character is not null)
            return _character;

        _character = await _localStorage.GetItemAsync<Character>(StorageKey);

        if (_character is null)
        {
            _character = new Character
            {
                Name = "Hero",
                Level = 1,
                CurrentXP = 0,
                XPToNextLevel = 35,
                Gold = 0
            };
            await SaveAsync();
        }
        else if (ExpireStreakIfNeeded(_character))
        {
            await SaveAsync();
        }

        return _character;
    }

    private static bool ExpireStreakIfNeeded(Character player)
    {
        if (player.LastActivityUtc is null || player.StreakDays == 0)
            return false;

        var today = DateTime.UtcNow.Date;
        if (player.LastActivityUtc.Value.Date < today.AddDays(-1))
        {
            player.StreakDays = 0;
            return true;
        }

        return false;
    }

    public async Task RegisterDailyActivityAsync()
    {
        var player = await GetOrCreateAsync();
        var today = DateTime.UtcNow.Date;
        var lastDate = player.LastActivityUtc?.Date;

        if (lastDate == today)
            return; // already counted today

        player.StreakDays = lastDate == today.AddDays(-1) ? player.StreakDays + 1 : 1;
        player.LastActivityUtc = today;
        await SaveAsync();
    }

    public async Task AddXPAsync(int amount)
    {
        var player = await GetOrCreateAsync();
        player.CurrentXP += amount;

        while (player.CurrentXP >= player.XPToNextLevel)
        {
            player.CurrentXP -= player.XPToNextLevel;
            player.Level++;
            player.XPToNextLevel = (int)Math.Ceiling(player.XPToNextLevel * 1.5);
        }

        await SaveAsync();
    }

    public async Task AddGoldAsync(int amount)
    {
        var player = await GetOrCreateAsync();
        player.Gold += amount;
        await SaveAsync();
    }

    public async Task<bool> SpendGoldAsync(int amount)
    {
        if (amount < 0)
            throw new ArgumentOutOfRangeException(nameof(amount));

        var player = await GetOrCreateAsync();
        if (player.Gold < amount)
            return false;

        player.Gold -= amount;
        await SaveAsync();
        return true;
    }

    public async Task SetNameAsync(string? name)
    {
        var player = await GetOrCreateAsync();
        player.Name = string.IsNullOrWhiteSpace(name) ? "Hero" : name.Trim();
        await SaveAsync();
    }

    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _character);
    }
}
