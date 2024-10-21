#include "../include/WeightedPoint.hpp"
#include <iostream>

virtual std::string toString() const override 
    {
        return Point2D::toString() + ", Weight: " + std::to_string(weight);
    }

    void setWeight(float w) 
    {
        weight = w;
    }

    float getWeight() const 
    {
        return weight;
    }