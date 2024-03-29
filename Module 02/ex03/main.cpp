/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 17:26:19 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {

	Point	a;
	Point	b(Fixed(1), Fixed());
	Point	c(Fixed(), Fixed(1));
	Point	point1(Fixed(0.25f), Fixed(0.25f));
	Point	point2(Fixed(0.5f), Fixed(0.5f));
	Point	testCp(point2);
	Point	outside(2.00, 2.00);

	std::cout << "point1.x=" << point1.getX() << std::endl;
	std::cout << "point1.y=" << point1.getY() << std::endl;
	if (bsp(a, b, c, point1))
		std::cout << "is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "is outside the triangle" << std::endl << std::endl;

	std::cout << "point2.x=" << point2.getX() << std::endl;
	std::cout << "point2.y=" << point2.getY() << std::endl;
	if (bsp(a, b, c, point2))
		std::cout << "is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "is outside the triangle" << std::endl << std::endl;

	std::cout << "outside.x=" << outside.getX() << std::endl;
	std::cout << "outside.y=" << outside.getY() << std::endl;
	if (bsp(a, b, c, outside))
		std::cout << "is inside the triangle" << std::endl << std::endl;
	else
		std::cout << "is outside the triangle" << std::endl << std::endl;

	std::cout << "a.x= " << a.getX();
	std::cout << " a.y= " << a.getY() << std::endl;
	a = point1;
	std::cout << "a = point1" << std::endl;
	std::cout << "a.x= " << a.getX();
	std::cout << " a.y= " << a.getY() << std::endl;
	std::cout << "point2.x = " << point2.getX() << " point2.y = " << point2.getY() << std::endl;
	std::cout << "testCp.x = " << testCp.getX() << " testCp.y = " << testCp.getY() << std::endl;
	std::cout << "&point2.x = " << &(point2.getX()) << " &point2.y = " << &(point2.getY()) << std::endl;
	std::cout << "&testCp.x = " << &(testCp.getX()) << " &testCp.y = " << &(testCp.getY()) << std::endl;
	return 0;
}
