#include "../include/ColouredPoint.hpp"
#include <iostream>

ColouredPoint(float x, float y, const std::string& color) : Point2D(x, y), color(color) {}

    virtual std::string toString() const override {
        return Point2D::toString() + ", Color: " + color;
    }