#include "../include/Point2D2.hpp"
#include <cstddef>

Point2D2::Point2D2()
{
    x = 0;
    y = 0;
    size = 0;
}

Point2D2::Point2D2(float x, float y)
{
    this-> x = x;
    this-> y = y;
    this-> size = size;
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

Point2D2 Point2D2::operator+(const Point2D2& other) const 
{
    return Point2D2(x + other.x, y + other.y);
}