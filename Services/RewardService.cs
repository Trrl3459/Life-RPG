using Blazored.LocalStorage;
using LifeRPG.Data;

namespace LifeRPG.Services;

public class RewardService
{
    private const string StorageKey = "rewards";
    private readonly ILocalStorageService _localStorage;
    private List<Reward> _rewards = new();
    private bool _loaded;

    public RewardService(ILocalStorageService localStorage)
    {
        _localStorage = localStorage;
    }

    public async Task<List<Reward>> GetRewardsAsync()
    {
        if (_loaded)
            return _rewards;

        _rewards = await _localStorage.GetItemAsync<List<Reward>>(StorageKey) ?? new();
        _loaded = true;
        return _rewards;
    }

    public async Task AddRewardAsync(Reward reward)
    {
        _rewards.Add(reward);
        await SaveAsync();
    }

    public async Task UpdateRewardAsync(Reward reward)
    {
        var index = _rewards.FindIndex(r => r.Id == reward.Id);
        if (index >= 0)
            _rewards[index] = reward;

        await SaveAsync();
    }

    public async Task RemoveRewardAsync(Reward reward)
    {
        _rewards.Remove(reward);
        await SaveAsync();
    }

    private async Task SaveAsync()
    {
        await _localStorage.SetItemAsync(StorageKey, _rewards);
    }
}
