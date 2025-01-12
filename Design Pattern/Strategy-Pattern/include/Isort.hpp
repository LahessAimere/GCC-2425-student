#ifndef ISORT_HPP_
#define ISORT_HPP_

#include <vector>

struct Isort
{
    virtual ~Isort() = default;
    virtual void sort(const std::vector<int>& vector) = 0;
};


#endif // ISORT_HPP_