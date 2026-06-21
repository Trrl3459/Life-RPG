using Blazored.LocalStorage;
using LifeRPG.Data;

namespace LifeRPG.Services;

public class QuestService
{
    private const string StorageKey = "quests";
    private readonly ILocalStorageService _localStorage;
    private readonly CharacterService _characterService;
    private List<Quest> _quests = new();

    public QuestService(ILocalStorageService localStorage, CharacterService characterService)
    {
        _localStorage = localStorage;
        _characterService = characterService;
    }

    public async Task<List<Quest>> GetQuestsAsync()
    {
        if (_quests.Count > 0)
            return _quests;

        _quests = await _localStorage.GetItemAsync<List<Quest>>(StorageKey) ?? new();
        return _quests;
    }

    public async Task AddQuestAsync(Quest quest)
    {
        _quests.Add(quest);
        await SaveAsync();
    }

    public async Task RemoveQuestAsync(Quest quest)
    {
        _quests.Remove(quest);
        await SaveAsync();
    }

    public async Task UpdateQuestAsync(Quest quest)
    {
        await SaveAsync();
    }

    public async Task CompleteQuestAsync(Quest quest)
    {
        if (quest.IsCompleted)
            return;

        quest.IsCompleted = true;
        await SaveAsync();

        await _characterService.AddXPAsync(quest.XPReward);
        await _characterService.AddGoldAsync(quest.GoldReward);
    }

    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _quests);
    }
}
