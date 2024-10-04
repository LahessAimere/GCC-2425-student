#include "../include/Point2D.hpp"

Point2D::Point2D()
{
    this-> x = 0;
    this-> y = 0;
}

Point2D::Point2D(float x, float y)
{
    this-> x = x;
    this-> y = y;
}

Point2D::Point2D(const Point2D &point2D)
{
    x = point2D.x;
    y = point2D.y;
}

void Point2D::Translate(float x, float y) 
{
    this->x += x;
    this->y += y;
}

float Point2D::Absciss()
{
    return x;
}

float Point2D::Ordinate() 
{
    return y;
}
