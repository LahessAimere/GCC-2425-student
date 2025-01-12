#ifndef COMPONENT_HPP_
#define COMPONENT_HPP_

#include <memory>

class Component
{
    public:
    virtual ~Component() = default;
    virtual void update() = 0;
    virtual void add(const std::shared_ptr<Component>& Component){};
    virtual void remove(const std::shared_ptr<Component>& Component){};
};

#endif // COMPONENT_HPP_