#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed area = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY());
    if (area == 0) return false;
	Fixed tmp = (b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY());
	Fixed tmp2 = (c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY());
    Fixed s = tmp / area;
    Fixed t = tmp2 / area; // tの型をFixedに変更

    return (s > 0 && t > 0 && (s + t) < 1);
}
