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

float WeightedPoint::DistanceFromOrigin() const 
{
    return Point2D2::DistanceFromOrigin();
}

std::ostream& operator<<(std::ostream& os, const WeightedPoint& weightedPoint) {
    os << "Abscisse: " << weightedPoint.x << " Ordonnée: " << weightedPoint.y
       << " Poids: " << weightedPoint.weight;
    return os;
}

bool operator==(const WeightedPoint& wp1, const WeightedPoint& wp2) 
{
    return (wp1.x == wp2.x &&
            wp1.y == wp2.y &&
            wp1.weight == wp2.weight);
}

WeightedPoint operator+(const WeightedPoint& wp1, const WeightedPoint& wp2) 
{
    float totalWeight = wp1.weight + wp2.weight;
    float x = (wp1.x * wp1.weight + wp2.x * wp2.weight) / totalWeight;
    float y = (wp1.y * wp1.weight + wp2.y * wp2.weight) / totalWeight;

    return WeightedPoint(x, y, totalWeight);
}