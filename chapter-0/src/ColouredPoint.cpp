#include "ColouredPoint.hpp"

ColouredPoint::ColouredPoint(float x, float y, const std::string& color) : Point2D2(x, y), color(color) {}

std::string ColouredPoint::toString() const {
    return Point2D2::toString() + ", Color: " + color;
}