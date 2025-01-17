#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

#include "IObserver.hpp"
#include <vector>

class ISubject {
public:
    virtual ~ISubject() = default;
    virtual void Attach(IObserver* observer) = 0;
    virtual void Detach(IObserver* observer) = 0;
    virtual void Notify() = 0;
};

#endif // ISUBJECT_HPP