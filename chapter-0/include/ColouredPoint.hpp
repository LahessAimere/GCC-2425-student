#ifndef COLOUREDPOINT_HPP
#define COLOUREDPOINT_HPP

#include "Point2D2.hpp"
#include <string>

class ColouredPoint : public Point2D2 {
private:
    std::string color;

public:
    ColouredPoint();
    ColouredPoint(float x, float y, const std::string& color);
    ~ColouredPoint() = default;

    std::string toString() const override;
    float DistanceFromOrigin() const override;

    friend std::ostream& operator<<(std::ostream& os, const ColouredPoint& colouredPoint);
    friend bool operator==(const ColouredPoint& colouredPoint1, const ColouredPoint& colouredPoint2);
    friend ColouredPoint operator+(const ColouredPoint& colouredPoint1, const ColouredPoint& colouredPoint2);
};

#endif