#ifndef _CHAPTER_O_POINT_2D_2_HPP_
#define _CHAPTER_O_POINT_2D_2_HPP_

#include <cstddef>
#include <iostream>
#include <string>
#include <ostream>

class Point2D2
{
protected:  
    /**
     * @brief Coordonnée x du point dans le plan
     */
    float x;
    
    /**
     * @brief Coordonnée y du point dans le plan
     */
    float y;

    int num;

private:
    /**
     * @brief Taille de la collection de points
     */
    size_t size;
    std::string name;

public:
    Point2D2();
    Point2D2(float x, float y);
    Point2D2(const Point2D2 &point2D2);

    static int count;

    /**
     * @brief Destructeur par défaut
     */
    ~Point2D2() = default;

    void Translate(float x, float y);
    void TranslateAll(Point2D2** points, size_t size, float dx, float dy); 

    virtual std::string toString() const;

    //virtual float DistanceFromOrigin() const = 0;

    int getNum() const;
    static int getCount();
};

#endif // _CHAPTER_O_POINT_2D_2_HPP_