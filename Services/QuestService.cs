// Services/QuestService.cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Blazored.LocalStorage;
using LifeRPG.Data;
using MudBlazor;

namespace LifeRPG.Services
{
    public class QuestService
    {
        private const string StoreKey = "quests";
        private readonly ILocalStorageService _storage;
        private readonly CharacterService _character;
        private readonly ISnackbar _snackbar;

        public List<Quest> Quests { get; private set; } = new();

        public QuestService(ILocalStorageService storage, CharacterService character, ISnackbar snackbar)
        {
            _storage = storage;
            _character = character;
            _snackbar = snackbar;
        }

        public async Task LoadAsync()
            => Quests = await _storage.GetItemAsync<List<Quest>>(StoreKey) ?? new();

        public async Task SaveAsync()
            => await _storage.SetItemAsync(StoreKey, Quests);

        public async Task AddQuestAsync(Quest q)
        {
            Quests.Add(q);
            await SaveAsync();
        }

        public async Task<bool> CompleteQuestAsync(Guid id)
        {
            var q = Quests.FirstOrDefault(x => x.Gid == id);
            if (q is null || q.IsCompleted) return false;

            q.IsCompleted = true;
            await SaveAsync();

            // Reward the player
            await _character.AddXPAsync(q.XPReward);
            await _character.AddGoldAsync(q.GoldReward);

            _snackbar.Add($"Quest Complete! +{q.XPReward} XP, +{q.GoldReward} Gold", Severity.Success); // non-blocking feedback
            return true;
        }

        public async Task DeleteQuestAsync(Guid id)
        {
            Quests.RemoveAll(x => x.Gid == id);
            await SaveAsync();
        }
    }
}