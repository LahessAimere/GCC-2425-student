#ifndef _CHAPTER_O_WEIGHTEDPOINT_HPP_
#define _CHAPTER_O_WEIGHTEDPOINT_HPP_

#include "Point2D2.hpp"
#include <string>

class WeightedPoint : public Point2D2
{
private:
    float weight;

public:
    WeightedPoint();
    WeightedPoint(float x, float y, float weight);
    ~WeightedPoint() = default;

    virtual std::string toString() const override;

    void setWeight(float weight);
    float getWeight() const;
};

#endif // _CHAPTER_O_WEIGHTEDPOINT_HPP_