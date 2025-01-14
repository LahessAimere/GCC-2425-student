#ifndef BUBBLESORT_HPP_
#define BUBBLESORT_HPP_

#include <iostream>
#include "Isort.hpp"

struct BubbleSort final : Isort
{
    void sort(const std::vector<int>& vector) override
    {
        //Création d'une copie du tableau pour éviter de modifier l'original
        std::vector<int> copyVector = vector;
        std::cout <<"BubbleSort::sort()\n";

        //Première boucle : on effectue plusieurs passes pour trier le tableau
        for (std::size_t i = 0; i < copyVector.size(); ++i)
        {
            //Deuxième boucle : compare chaque élément avec son suivant
            for (std::size_t j = 0; j < copyVector.size() - i - 1; ++j)
            {
                //Si l'élément courant est plus grand que le suivant, on les échange
                if (copyVector[j] > copyVector[j + 1])
                {
                    std::swap(copyVector[j], copyVector[j + 1]);
                }
            }
            //À chaque itération, le plus grand élément "bulle" à la fin de la portion non triée
        }

        //Affichage du tableau trié (ici, il s'agit de `copyVector`, pas `vector`)
        for (int value : copyVector)
        {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
};


#endif //BUBBLESORT_HPP_