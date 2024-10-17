#include "../include/Point2D.hpp"
#include <cmath>
#include <sstream>

int Point2D::count = 0;

Point2D::Point2D() 
{
    x = 0;
    y = 0;
    num = ++count;
    label = "unknown";
}

Point2D::Point2D(float x, float y, std::string _label) 
{
    this->x = x;
    this->y = y;
    num = ++count;
    label = _label;
}

Point2D::Point2D(const Point2D& point2D) : Point2D(point2D.x, point2D.y, point2D.label)
{
    this->num = ++count;
}

void Point2D::Translate(float dx, float dy) 
{
    this-> x += dx;
    this-> y += dy;
}

void Point2D::Homothety(Point2D p, Point2D o, float ratio)
{
    this-> x = o.Absciss() + ratio * (p.Absciss() - o.Absciss());
    this-> y = o.Ordinate() + ratio * (p.Ordinate() - o.Ordinate());
}

void Point2D::Rotation(float radiant)
{
    float newX = x * std::cos(radiant) - y * std::sin(radiant);
    float newY = x * std::sin(radiant) + y * std::cos(radiant);
    this-> x = newX;
    this-> y = newY;
}

float Point2D::Absciss()
{
    return x;
}

float Point2D::Ordinate() 
{
    return y;
}

float Point2D::Rho()
{
    return std::sqrt(x * x + y * y);
}

float Point2D::Theta()
{
    return std::atan2(y, x);
}

std::ostream& operator<<(std::ostream& ostream, Point2D& point2D)
{
    ostream << "Point #" << point2D.getNum() << " [" << point2D.label << "]: ("
            << point2D.x << ", " << point2D.y << ")";
    return ostream;
}

std::istream& operator>>(std::istream& istream, Point2D& point2D) 
{
    istream >> point2D.x >> point2D.y;
    return istream;
}

std::string Point2D::toString()
{
    std::ostringstream ss;
    ss << "Point #" << num << " (" << x << ", " << y << ")";
    return ss.str();
}

Point2D& Point2D::operator=(Point2D P)
{
    this-> x = P.x;
    this-> y = P.y;
    this-> label = P.label;
    return *this;
}

int Point2D::getNum() const
{
    return num;
}

int Point2D::getCount()
{
    return count;
}