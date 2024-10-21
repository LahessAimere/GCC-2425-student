#ifndef _CHAPTER_O_WeightedPoint_HPP_
#define _CHAPTER_O_WeightedPoint_HPP_
#include <iostream>

class WeightedPoint : public Point2D
{
private:
    float weight;

public:
    WeightedPoint();
    ~WeightedPoint();

    void WeightedPoint(float x, float y, float weight) : Point2D(x, y), weight(weight);

    virtual std::string toString() const override;

    void setWeight(float Weight);

    float getWeight() const;
};

#endif // _CHAPTER_O_WeightedPoint_HPP_