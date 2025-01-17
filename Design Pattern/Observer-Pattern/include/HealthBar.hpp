#ifndef HEALTHBAR_HPP_
#define HEALTHBAR_HPP_

#include "IObserver.hpp"
#include "Game.hpp"
#include <iostream>

struct HealthBar : IObserver 
{
private:
    Game& game;

public:
    HealthBar(Game& gameInstance) : game(gameInstance) 
    {
        game.attach(this);
    }

    ~HealthBar() 
    {
        game.detach(this);
    }

    void update() override 
    {
        std::cout << "HealthBar: Player health is now " << game.getPlayerHealth() << ".\n";
    }
};

#endif // HEALTHBAR_HPP_