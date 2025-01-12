#include "../include/Point2D2.hpp"
#include <cstddef>
#include <sstream>

int Point2D2::count = 0;

Point2D2::Point2D2()
{
    x = 0;
    y = 0;
    size = 0;
    num = ++count;
}

Point2D2::Point2D2(float x, float y)
{
    this-> x = x;
    this-> y = y;
    this-> size = size;
    num = ++count;
}

void Point2D2::Translate(float dx, float dy) 
{
    this-> x += dx;
    this-> y += dy;
}

void Point2D2::TranslateAll(Point2D2** points, size_t size, float dx, float dy) 
{
    for (size_t i = 0; i < size; ++i) 
    {
        points[i]->Translate(dx, dy);
    }
}

std::string Point2D2::toString() const
{
    return "Point2D2(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

int Point2D2::getNum() const
{
    return num;
}

int Point2D2::getCount()
{
    return count;
}

float Point2D2::DistanceFromOrigin() const 
{
    return std::sqrt(x * x + y * y);
}

std::ostream& operator<<(std::ostream& ostream, const Point2D2& point2D2)
{
    ostream << "Point " << point2D2.getNum() << ": (" << point2D2.x << ", " << point2D2.y << ")";
    return ostream;
}