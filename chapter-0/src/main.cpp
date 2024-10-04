#include <iostream>
#include "../include/Point2D.hpp"

void DisplayPoint2D(Point2D point2D) {
    std::cout << "Coordonnées des point2D [Absciss et Ordinate]: (" << point2D.Absciss() << " , " << point2D.Ordinate() 
    << ")" <<std::endl;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;

    Point2D point2D(6, 9);
    DisplayPoint2D(point2D);

    return 0;
}