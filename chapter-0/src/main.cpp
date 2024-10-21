#include <iostream>
#include "../include/Point2D.hpp"

void DisplayPoint2D(Point2D point2D) {
    std::cout << point2D << std::endl;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;

    Point2D point2D(6, 9, "A");
    Point2D o(0.0, 0.0, "Origine");
    float ratio = 7;

    point2D.Homothety(point2D, o, ratio);

    DisplayPoint2D(point2D);

    Point2D newPoint;
    std::cout << "Entrez les coordonnées du nouveau point (x y) : ";
    std::cin >> newPoint;

    DisplayPoint2D(newPoint);

    std::cout << "Nombre de points créés : " << Point2D::getCount() << std::endl;

    WeightedPoint weight(1.0f, 2.0f, 3.5f);
    displayPoint(weight); 

    return 0;
}