#include <iostream>
#include <memory>

#include "Sword.hpp"
#include "SharpeningDecorator.hpp"

int main() {
    // Weapon
    std::unique_ptr<IWeapon> sword = std::make_unique<Sword>();
    std::cout << sword->getDescription() << " deals " << sword->getDamage() << " damage.\n";

    // Sharpening
    std::unique_ptr<IWeapon> sharpenedSword = std::make_unique<SharpeningDecorator>(std::move(sword));
    std::cout << sharpenedSword->getDescription() << " deals " << sharpenedSword->getDamage() << " damage.\n";

    return 0;
}