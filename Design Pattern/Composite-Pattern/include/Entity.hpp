#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "Component.hpp"
#include <iostream>

class Entity : public Component
{
    public:
    void update() override
    {
        std::cout << "Entity Update \n";
    }
};

#endif // ENTITY_HPP_