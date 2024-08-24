#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    ~Point();
    Point(const float pointX, const float pointY);
    Point &operator=(const Point &copy);


    Fixed getPointX() const;
    Fixed getPointY() const;
};



#endif