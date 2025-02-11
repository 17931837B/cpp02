#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		~Point();
		Point(const float x_in, const float y_in);
		Point(const Point& other);
		Point& operator=(const Point& other) {
        if (this != &other) {
            // xとyはconstなのでコピー不要
        }
        return *this;
    }

    Fixed getX() const { return x; }
    Fixed getY() const { return y; }
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif