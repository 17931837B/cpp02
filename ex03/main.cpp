/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-14 08:57:22 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-14 08:57:22 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);
	Point p1(5, 5);
	Point p2(0, 0);
	Point p3(10,0);
	Point p4(1,1);
	Point p5(5,0);
	Point p6(15, 15);

	std::cout << "p1: " << bsp(a, b, c, p1) << "\n"; // 1 
	std::cout << "p2: " << bsp(a, b, c, p2) << "\n"; // 0
	std::cout << "p3: " << bsp(a, b, c, p3) << "\n"; // 0
	std::cout << "p4: " << bsp(a, b, c, p4) << "\n"; // 1
	std::cout << "p5: " << bsp(a, b, c, p5) << "\n"; // 0
	std::cout << "p6: " << bsp(a, b, c, p6) << "\n"; // 0
	return (0);
}
