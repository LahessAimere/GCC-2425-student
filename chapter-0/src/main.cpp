#include <iostream>
#include <vector>
#include "../include/Point2D.hpp"
#include "../include/Point2D2.hpp"
#include "../include/WeightedPoint.hpp"
#include "../include/ColouredPoint.hpp"

std::string DisplayPoint2D(const Point2D2& point2D) 
{
    return point2D.toString();
}

void DisplayPoints(const std::vector<Point2D2*>& points) 
{
    for (const auto& point : points) 
    {
        std::cout << point->toString() << std::endl;
    }
}

int main()
{
    //Abscisse et Ordonné d’un point donné en argument
    Point2D2 point2D(6, 9);
    std::cout << "Abscisse et Ordonné d’un point donné en argument: \n" << DisplayPoint2D(point2D) << std::endl;

    //Origin
    Point2D2 o(0.0, 0.0);

    //WeightedPoint
    WeightedPoint p2(3.0, 4.0, 5.5);
    std::cout << "\nWeightedPoint: \n" << DisplayPoint2D(p2) << std::endl;

    //Couloured
    ColouredPoint p3(6.0, 7.0, "red");
    std::cout << "\nCouloured: \n" << DisplayPoint2D(p3) << std::endl;

    //Translate
    point2D.Translate(1.0f, 1.0f);
    std::cout << "\nDéplace les points de coordonnées (x, y) dans la direction des nombres données: \n" << DisplayPoint2D(point2D) << std::endl;

    //Addition de deux points
    Point2D2 p4 = point2D + p2;
    std::cout << "\nAddition (p1 + p2): \n" << p4.toString() << std::endl;

    //Cin Points x,y
    Point2D2 newPoint;
    std::cout << "\nEntrez les coordonnées du nouveau point (x y) : \n";
    float x, y;
    std::cin >> x >> y;
    newPoint = Point2D2(x, y);
    std::cout << "\nPoint après extraction: \n" << DisplayPoint2D(newPoint) << std::endl;
    
    //Total Points (il marche pas)
    std::cout << "\nTotal de points créés : \n" << Point2D::getCount() << std::endl;

    return 0;
}