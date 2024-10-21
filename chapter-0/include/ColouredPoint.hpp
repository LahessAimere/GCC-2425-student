#ifndef _CHAPTER_O_ColouredPoint_HPP_
#define _CHAPTER_O_ColouredPoint_HPP_
#include <iostream>

class ColouredPoint : public Point2D
{
private:
    std::string color;

public:
    ColouredPoint();
    ~ColouredPoint();

    ColouredPoint(float x, float y, const std::string& color) : Point2D(x, y), color(color);
};

#endif // _CHAPTER_O_ColouredPoint_HPP_