#ifndef COLOUREDPOINT_HPP
#define COLOUREDPOINT_HPP

#include "Point2D2.hpp"
#include <string>

class ColouredPoint : public Point2D2 {
private:
    std::string color;

public:
    ColouredPoint(float x, float y, const std::string& color);
    ~ColouredPoint() = default;

    std::string toString() const override;
};

#endif