#include "ColouredPoint.hpp"

ColouredPoint::ColouredPoint(float x, float y, const std::string& color) : Point2D2(x, y), color(color) {}

std::string ColouredPoint::toString() const {
    return Point2D2::toString() + ", Color: " + color;
}

float ColouredPoint::DistanceFromOrigin() const 
{
    return Point2D2::DistanceFromOrigin();
}

std::ostream& operator<<(std::ostream& os, const ColouredPoint& colouredPoint) {
    os << "Abscisse: " << colouredPoint.x << " Ordonnée: " << colouredPoint.y << " Couleur: " << colouredPoint.color;
    return os;
}

bool operator==(const ColouredPoint& colouredPoint1, const ColouredPoint& colouredPoint2) 
{
    return (colouredPoint1.x == colouredPoint2.x &&
            colouredPoint1.y == colouredPoint2.y &&
            colouredPoint1.color == colouredPoint2.color);
}

ColouredPoint operator+(const ColouredPoint& colouredPoint1, const ColouredPoint& colouredPoint2) 
{
    float x = colouredPoint1.x + colouredPoint2.x;
    float y = colouredPoint1.y + colouredPoint2.y;
    std::string color = colouredPoint1.color;
    return ColouredPoint(x, y, color);
}