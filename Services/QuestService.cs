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
        if (_quests.Count == 0)
            _quests = await _localStorage.GetItemAsync<List<Quest>>(StorageKey) ?? new();

        await ResetDailyQuestsIfNeededAsync();
        return _quests;
    }

    private async Task ResetDailyQuestsIfNeededAsync()
    {
        var today = DateTime.UtcNow.Date;
        var changed = false;

        foreach (var quest in _quests)
        {
            if (quest.Type == QuestType.Daily && quest.IsCompleted &&
                quest.LastCompletedUtc is not null && quest.LastCompletedUtc.Value.Date < today)
            {
                quest.IsCompleted = false;
                changed = true;
            }
        }

        if (changed)
            await SaveAsync();
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
        quest.LastCompletedUtc = DateTime.UtcNow;
        await SaveAsync();

        await _characterService.AddXPAsync(quest.XPReward);
        await _characterService.AddGoldAsync(quest.GoldReward);
        await _characterService.RegisterDailyActivityAsync();
    }

    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _quests);
    }
}
