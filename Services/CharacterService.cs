using Blazored.LocalStorage;

public class CharacterService
{
    // Character instance
    public Character Player { get; private set; } = new Character
    {
        Name = "Hero",
        Level = 1,
        CurrentXP = 0,
        XPToNextLevel = 35,
        Gold = 0
    };

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
    }
}

public async Task SaveCharacterStateAsync()
{
    await _localStorage.SetItemAsync(StorageKey, Player);
}


}