#include "../header/Point.hpp"
#include "../header/Fixed.hpp"

/*returning True if the point is inside the triangle 
fals when it's not */

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed const aX = a.getPointX();
    Fixed const aY = a.getPointY();
    Fixed const bX = b.getPointX();
    Fixed const bY = b.getPointY();
    Fixed const cX = c.getPointX();
    Fixed const cY = c.getPointY();
    Fixed const pointX = point.getPointX();
    Fixed const pointY = point.getPointY();

    Fixed triangle = ((bY - cY) * (aX - cX) * (cX - bX) * (aY - cY));

    Fixed subTri1 = ((bY - cY) * (pointX - cX) + (cX - bX) * (pointY - cY));
    Fixed subTri2 = ((cY - aY) * (pointX - cX) + (aX - cX) * (pointY - cY));

    subTri1 = subTri1 / triangle;
    subTri2 = subTri2 / triangle;

    Fixed subTri3 = Fixed(1) - subTri1 - subTri2;
    return subTri1 > Fixed(0) && subTri2 > Fixed(0) && subTri3 > Fixed(0);
}