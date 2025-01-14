#ifndef QUICKSORT_HPP_
#define QUICKSORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct QuickSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        std::vector<int> copyVector = vector;
        std::cout << "QuickSort::sort()\n";

        //Appel à la fonction récursive quickSort pour trier le tableau
        quickSort(copyVector, 0, copyVector.size() - 1);

        for (int value : copyVector)
        {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    private:
    //On divise le tableau et obtenir l'index du pivot
    void quickSort(std::vector<int>& vector, int low, int high)
    {
        if (low < high)
        {
            int pivotIndex = partition(vector, low, high);

            //Trier récursivement les sous-tableaux à gauche et à droite du pivot
            quickSort(vector, low, pivotIndex - 1);
            quickSort(vector, pivotIndex + 1, high);
        }
    }

    int partition(std::vector<int>& vector, int low, int high)
    {
        int pivot = vector[high]; //Le pivot est "high"
        int i = low - 1;

        //Réorganisation des éléments par rapport au pivot
        for (int j = low; j < high; ++j)
        {
            if (vector[j] < pivot)
            {
                ++i;
                std::swap(vector[i], vector[j]); //Swap des éléments pour mettre les plus petits que le pivot à gauche
            }
        }
        //On place le pivot à sa bonne position
        std::swap(vector[i + 1], vector[high]);
        return i + 1; //Return l'index du pivot
    }
};


#endif //QUICKSORT_HPP_