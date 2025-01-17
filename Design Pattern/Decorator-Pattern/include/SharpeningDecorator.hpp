#ifndef SHARPENINGDECORATOR_HPP_
#define SHARPENINGDECORATOR_HPP_

#include "WeaponUpgrade.hpp"

struct SharpeningDecorator final : WeaponUpgrade 
{
    explicit SharpeningDecorator(std::unique_ptr<IWeapon> baseWeapon): WeaponUpgrade(std::move(baseWeapon)){}

    std::string getDescription() const override 
    {
        return weapon->getDescription() + "Sharpening";
    }

    int getDamage() const override 
    {
        return weapon->getDamage() + 5;
    }
};

#endif // SHARPENINGDECORATOR_HPP_