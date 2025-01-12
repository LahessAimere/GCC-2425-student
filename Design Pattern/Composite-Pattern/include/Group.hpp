#ifndef GROUP_HPP_
#define GROUP_HPP_

#include "Component.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

class Group : public Component
{
public:
    void update() override
    {
        std::cout << "Group Update \n";
        for (auto& child : children)
        {
            child->update();
        }
    }

    void add(const std::shared_ptr<Component>& component) override
    {
        children.push_back(component);
    }

    void remove (const std::shared_ptr<Component>& component) override
    {
        children.erase
        (std::remove_if(children.begin(), children.end(), 
        [&component](const std::shared_ptr<Component>& c)
        {
            return c == component;
        }), children.end()
        );
    }

private:
    std::vector<std::shared_ptr<Component>> children;
};

#endif // GROUP_HPP_