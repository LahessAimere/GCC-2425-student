#ifndef BUBBLESORT_HPP_
#define BUBBLESORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct BubbleSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        std::cout <<"BubbleSort::sort()\n";
    }
};


#endif //BUBBLESORT_HPP_