#ifndef _CHAPTER_O_POINT_2D_HPP_
#define _CHAPTER_O_POINT_2D_HPP_

class Point2D
{
private:
    float x;
    float y;

public:
    Point2D();
    Point2D(float x, float y);
    Point2D(const Point2D& point2D);
    ~Point2D() = default;

    void Translate(float x, float y);

    float Absciss();
    float Ordinate();
};

#endif // _CHAPTER_O_POINT_2D_HPP_