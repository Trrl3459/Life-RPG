<<<<<<< HEAD
<<<<<<< HEAD
using Blazored.LocalStorage;
=======
using System;
using System.Linq;
using System.Threading.Tasks;
using LifeRPG.Data;
using LifeRPG.Models;
using Microsoft.EntityFrameworkCore;
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
=======
using Blazored.LocalStorage;
using LifeRPG.Data;
>>>>>>> c86725c (Migrate from EF Core + SQLite to Blazored.LocalStorage)

namespace LifeRPG.Services;

public class CharacterService
{
<<<<<<< HEAD
<<<<<<< HEAD
    // Character instance
    public Character Player { get; private set; } = new Character
=======
    public class CharacterService
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
=======
    private const string StorageKey = "character";
    private readonly ILocalStorageService _localStorage;
    private Character? _character;

    public CharacterService(ILocalStorageService localStorage)
>>>>>>> c86725c (Migrate from EF Core + SQLite to Blazored.LocalStorage)
    {
        _localStorage = localStorage;
    }

<<<<<<< HEAD
<<<<<<< HEAD
    private readonly ILocalStorageService _localStorage;
    private const string StorageKey = "life-rpg-character";

    // Constructor
    public CharacterService(ILocalStorageService localStorage)
    {
        _localStorage = localStorage;
    }

    public async Task LoadCharacterStateAsync()
{
    var storedCharacter = await _localStorage.GetItemAsync<Character>(StorageKey);
    if (storedCharacter != null)
    {
        Player = storedCharacter;
    }
    else
    {
        // Fallback to default if no data (e.g., from Day 2)
        Player = new Character { Name = "Hero", Level = 1, CurrentXP = 0, XPToNextLevel = 35, Gold = 0 };
=======
        public CharacterService(IDbContextFactory<LifeRpgContext> dbFactory)
=======
    public async Task<Character> GetOrCreateAsync()
    {
        if (_character is not null)
            return _character;

        _character = await _localStorage.GetItemAsync<Character>(StorageKey);

        if (_character is null)
>>>>>>> c86725c (Migrate from EF Core + SQLite to Blazored.LocalStorage)
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

<<<<<<< HEAD
            await db.SaveChangesAsync();
        }
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
=======
    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _character);
>>>>>>> c86725c (Migrate from EF Core + SQLite to Blazored.LocalStorage)
    }
}

public async Task SaveCharacterStateAsync()
{
    await _localStorage.SetItemAsync(StorageKey, Player);
}


}