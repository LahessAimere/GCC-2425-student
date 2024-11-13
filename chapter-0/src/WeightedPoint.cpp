#include "WeightedPoint.hpp"
#include "../include/Point2D2.hpp"

std::string WeightedPoint::toString() const 
{
    return Point2D2::toString() + ", Weight: " + std::to_string(weight);
}

void WeightedPoint::setWeight(float w) 
{
    this->weight = w;
}

float WeightedPoint::getWeight() const 
{
    return weight;
}

WeightedPoint::WeightedPoint(float x, float y, float weight) : Point2D2(x, y), weight(weight) {}