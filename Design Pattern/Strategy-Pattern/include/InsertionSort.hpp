#ifndef INSERTIONSORT_HPP_
#define INSERTIONSORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct InsertionSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        std::cout <<"InsertionSort::sort()\n";
    }
};


#endif // INSERTIONSORT_HPP_