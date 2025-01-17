#ifndef IWEAPON_HPP_
#define IWEAPON_HPP_

#include <string>

struct IWeapon 
{
    virtual ~IWeapon() = default;
    virtual std::string getDescription() const = 0;
    virtual int getDamage() const = 0;
};

#endif // IWEAPON_HPP_