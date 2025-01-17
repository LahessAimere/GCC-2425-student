#ifndef SWORD_HPP_
#define SWORD_HPP_

#include "IWeapon.hpp"
#include <string>

struct Sword final : IWeapon 
{
    std::string getDescription() const override 
    {
        return "Sword";
    }

    int getDamage() const override 
    {
        return 10;
    }
};

#endif // SWORD_HPP_