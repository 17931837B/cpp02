/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-14 08:57:27 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-14 08:57:27 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

Point &Point::operator=(const Point& other)
{
	(void)other;
	return *this;
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}
