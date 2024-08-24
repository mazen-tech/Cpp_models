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

    // calculate the area of the triangle formed by the points
    Fixed triangle = ((bY - cY) * (aX - cX) + (cX - bX) * (aY - cY));

    // calculate the area of each of the sub-triangles
    Fixed subTriangle1 = ((bY - cY) * (pointX - cX) + (cX - bX) * (pointY - cY));
    Fixed subTriangle2 = ((cY - aY) * (pointX - cX) + (aX - cX) * (pointY - cY));

    // calculate the barycentric coordinates
    subTriangle1 = subTriangle1 / triangle;
    subTriangle2 = subTriangle2 / triangle;

    // calculate the third barycentric coordinate
    Fixed subTriangle3 = Fixed(1) - subTriangle1 - subTriangle2;

    // check if the point is inside the triangle
    return subTriangle1 > Fixed(0) && subTriangle2 > Fixed(0) && subTriangle3 > Fixed(0);
}