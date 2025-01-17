#ifndef WEAPONUPGRADE_HPP_
#define WEAPONUPGRADE_HPP_

#include "IWeapon.hpp"
#include <memory>


struct WeaponUpgrade : IWeapon 
{
    protected:
    std::unique_ptr<IWeapon> weapon;
    explicit WeaponUpgrade(std::unique_ptr<IWeapon> baseWeapon): weapon(std::move(baseWeapon)){}

    std::string getDescription() const override 
    {
        return weapon->getDescription();
    }

    int getDamage() const override 
    {
        return weapon->getDamage();
    }
};

#endif // WEAPONUPGRADE_HPP_