#include "../header/Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(const float pointX, const float pointY) : x(pointX), y(pointY) {}

//Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}

Point &Point::operator=(const Point &copy)
{
    if (this == &copy)
    {
        (Fixed) this->x = copy.getPointX();
        (Fixed) this->y = copy.getPointY();
    }
    return *this;
}


Fixed Point::getPointX() const
{
    return (Fixed(this->x));
}

Fixed Point::getPointY() const
{
    return (Fixed(this->y));
}