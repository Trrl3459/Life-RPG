using Microsoft.EntityFrameworkCore;
using LifeRPG.Models;

namespace LifeRPG.Data
{
    public class LifeRpgContext : DbContext
    {
        public DbSet<Character> Characters => Set<Character>();
        public DbSet<Quest> Quests => Set<Quest>();
        
        public LifeRpgContext(DbContextOptions<LifeRpgContext> options) : base(options) { }

        protected override void OnConfiguring(DbContextOptionsBuilder options)
        {
            if (!options.IsConfigured){
                // This creates a SQLite database file in the app's local folder
                //options.UseSqlite("Data Source=lifeRpg.db");
                options.UseSqlite($"Filename=lifeRpg.db");
            }
        }
    }
}