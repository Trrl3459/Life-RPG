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

        return _character;
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

    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _character);
    }
}