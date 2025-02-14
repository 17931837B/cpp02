/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-14 08:56:49 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-14 08:56:49 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY());
	if (area == 0)
		return (false);
	Fixed s_tmp = (b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY());
	Fixed t_tmp = (c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY());
	Fixed s = s_tmp / area;
	Fixed t = t_tmp / area;
	return (s > 0 && t > 0 && (s + t) < 1);
}
