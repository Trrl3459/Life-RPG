using Blazored.LocalStorage;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using LifeRPG;
using LifeRPG.Services;
using MudBlazor.Services;
using Blazored.LocalStorage;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp =>
    new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddMudServices();
builder.Services.AddBlazoredLocalStorageAsSingleton();
builder.Services.AddSingleton<CharacterService>();

<<<<<<< HEAD
// ✅ Register EF Core SQLite DbContext *before* Build()
builder.Services.AddDbContextFactory<LifeRpgContext>(options =>
    options.UseSqlite("Filename=lifeRpg.db"));

builder.Services.AddScoped<CharacterService>();
builder.Services.AddScoped<QuestService>();

var host = builder.Build();

<<<<<<< HEAD
builder.Services.AddBlazoredLocalStorage();

builder.Services.AddMudServices(opts =>
{
    opts.SnackbarConfiguration.PositionClass = Defaults.Classes.Position.BottomEnd;
    opts.SnackbarConfiguration.PreventDuplicates = true;
    opts.SnackbarConfiguration.VisibleStateDuration = 2500;
    opts.SnackbarConfiguration.ShowCloseIcon = true;
});


await builder.Build().RunAsync();
=======
// ✅ Ensure DB exists
using (var scope = host.Services.CreateScope())
{
    var factory = scope.ServiceProvider.GetRequiredService<IDbContextFactory<LifeRpgContext>>();
    await using var db = await factory.CreateDbContextAsync();
    await db.Database.EnsureCreatedAsync();
}

await host.RunAsync(); // ✅ Remove the duplicate RunAsync below
>>>>>>> d1b96d2 (Added SQLite integration and eliminated Blazored LocalStorage)
=======
await builder.Build().RunAsync();
>>>>>>> c86725c (Migrate from EF Core + SQLite to Blazored.LocalStorage)
