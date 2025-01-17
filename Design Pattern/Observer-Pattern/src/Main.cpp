#include "GameInstance.hpp"
#include "Scoreboard.hpp"

int main() 
{
    GameInstance game;

    Scoreboard scoreboard(game);

    game.SetScore(10); 
    game.SetScore(20); 
    game.SetScore(100); 

    return 0;
}