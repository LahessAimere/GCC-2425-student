#ifndef QUICKSORT_HPP_
#define QUICKSORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct QuickSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        std::cout <<"QuickSort::sort()\n";
    }
};


#endif //QUICKSORT_HPP_