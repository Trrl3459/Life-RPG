using Blazored.LocalStorage;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using LifeRPG;
using LifeRPG.Services;
using MudBlazor;
using MudBlazor.Services;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp =>
    new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

builder.Services.AddBlazoredLocalStorageAsSingleton();

builder.Services.AddMudServices(opts =>
{
    opts.SnackbarConfiguration.PositionClass = Defaults.Classes.Position.BottomEnd;
    opts.SnackbarConfiguration.PreventDuplicates = true;
    opts.SnackbarConfiguration.VisibleStateDuration = 2500;
    opts.SnackbarConfiguration.ShowCloseIcon = true;
});

builder.Services.AddSingleton<CharacterService>();
builder.Services.AddSingleton<QuestService>();
builder.Services.AddSingleton<RewardService>();

await builder.Build().RunAsync();
