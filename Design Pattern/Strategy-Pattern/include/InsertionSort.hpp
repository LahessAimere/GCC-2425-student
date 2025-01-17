#ifndef INSERTIONSORT_HPP_
#define INSERTIONSORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct InsertionSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        std::vector<int> copyVector(vector);
        std::cout << "InsertionSort::sort()\n";

        //La boucle commence à partir de l'index 1, car l'élément à l'index 0 est déjà "trié"
        for (std::size_t i = 1; i < copyVector.size(); ++i)
        {
            int currentElement = copyVector[i]; //Élément à insérer
            std::size_t j = i;

            while (j > 0 && copyVector[j - 1] > currentElement)
            {
                copyVector[j] = copyVector[j - 1];
                --j;
            }
            copyVector[j] = currentElement;
        }
        for (int value : copyVector)
        {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
};

#endif // INSERTIONSORT_HPP_