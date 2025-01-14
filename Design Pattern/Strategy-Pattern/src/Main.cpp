#include<iostream>
#include<vector>
#include<memory>
#include<random>
#include<algorithm>

#include "Isort.hpp"
#include "BubbleSort.hpp"
#include "InsertionSort.hpp"
#include "QuickSort.hpp"

void genericSorting(const std::vector<int>& vector)
{
    std::unique_ptr<Isort> sortingAlgorithm = std::make_unique<QuickSort>();
    
    if (std::size_t collectionSize = vector.size(); collectionSize < 16)
    {
        sortingAlgorithm = std::make_unique<BubbleSort>();
    }
    else if (collectionSize < 64)
    {
        sortingAlgorithm = std::make_unique<InsertionSort>();
    }

    sortingAlgorithm -> sort(vector);
}

void displayVector(const std::vector<int>& vector)
{
    std::cout << "[";
    for (const int& i : vector)
    {
        std::cout << i << " ";
    }
    std::cout << "]";
    
}

void fillRandomlyVector(int numberOfRandomNumbers, std::vector<int>& vector)
{
    std::mt19937 generation(std::random_device{}());
    std::uniform_int_distribution distribution(0,255);

    vector.reserve(numberOfRandomNumbers);
    for (int  i = 0; i < numberOfRandomNumbers; i++)
    {
        vector.emplace_back(distribution(generation));
    }
    
}

int main ()
{
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;

    fillRandomlyVector(6, v1);
    fillRandomlyVector(17, v2);
    fillRandomlyVector(65, v3);

    genericSorting(v1);
    genericSorting(v2);
    genericSorting(v3);

    displayVector(v1);
    genericSorting(v1);
    displayVector(v1);

    displayVector(v2);
    genericSorting(v2);
    displayVector(v2);

    displayVector(v3);
    genericSorting(v3);
    displayVector(v3);

    return 0;
}