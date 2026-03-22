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

namespace LifeRPG.Services
{
<<<<<<< HEAD
    // Character instance
    public Character Player { get; private set; } = new Character
=======
    public class CharacterService
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
    {
        private readonly IDbContextFactory<LifeRpgContext> _dbFactory;

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
        {
            _dbFactory = dbFactory;
        }

        public async Task<Character> GetOrCreateAsync()
        {
            await using var db = await _dbFactory.CreateDbContextAsync();

            var player = await db.Characters.OrderBy(c => c.Id).FirstOrDefaultAsync();
            if (player == null)
            {
                player = new Character
                {
                    Name = "Hero",
                    Level = 1,
                    CurrentXP = 0,
                    XPToNextLevel = 35,
                    Gold = 0
                };
                db.Characters.Add(player);
                await db.SaveChangesAsync();
            }
            return player;
        }

        public async Task AddXPAsync(int amount)
        {
            await using var db = await _dbFactory.CreateDbContextAsync();

            var player = await db.Characters.OrderBy(c => c.Id).FirstAsync();
            player.CurrentXP += amount;

            while (player.CurrentXP >= player.XPToNextLevel)
            {
                player.CurrentXP -= player.XPToNextLevel;
                player.Level++;
                player.XPToNextLevel = (int)Math.Ceiling(player.XPToNextLevel * 1.5);
            }

            await db.SaveChangesAsync();
        }

        public async Task AddGoldAsync(int amount)
        {
            await using var db = await _dbFactory.CreateDbContextAsync();

            var player = await db.Characters.OrderBy(c => c.Id).FirstAsync();
            player.Gold += amount;

            await db.SaveChangesAsync();
        }
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
    }
}

public async Task SaveCharacterStateAsync()
{
    await _localStorage.SetItemAsync(StorageKey, Player);
}


}