using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using LifeRPG;
using MudBlazor;
using MudBlazor.Services;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

builder.Services.AddMudServices();

builder.Services.AddSingleton<CharacterService>();

builder.Services.AddMudServices(opts =>
{
    opts.SnackbarConfiguration.PositionClass = Defaults.Classes.Position.BottomEnd;
    opts.SnackbarConfiguration.PreventDuplicates = true;
    opts.SnackbarConfiguration.VisibleStateDuration = 2500;
    opts.SnackbarConfiguration.ShowCloseIcon = true;
});


await builder.Build().RunAsync();
