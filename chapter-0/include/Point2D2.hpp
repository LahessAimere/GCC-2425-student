#ifndef _CHAPTER_O_POINT_2D_2_HPP_
#define _CHAPTER_O_POINT_2D_2_HPP_

#include <cstddef>
#include <iostream>
#include <string>

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

private:
    /**
     * @brief Taille de la collection de points
     */
    size_t size;
    std::string name;

public:
    Point2D2();
    Point2D2(float x, float y);

    /**
     * @brief Destructeur par défaut
     */
    ~Point2D2() = default;

    void Translate(float x, float y);
    void TranslateAll(Point2D2** points, size_t size, float dx, float dy); 

    virtual std::string toString() const;

    Point2D2 operator+(const Point2D2& other) const;
};

#endif // _CHAPTER_O_POINT_2D_2_HPP_