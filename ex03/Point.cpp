#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(const float x_in, const float y_in): x(x_in), y(y_in)
{
}

Point::Point(const Point& other): x(other.x), y(other.y)
{
}