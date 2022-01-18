/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 15:57:46 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {

	Point	a;
	Point	b(Fixed(1), Fixed());
	Point	c(Fixed(), Fixed(1));
	Point	point1(Fixed(0.25f), Fixed(0.25f));
	Point	point2(Fixed(0.5f), Fixed(0.5f));

	std::cout << "point1.x=" << point1.getX() << std::endl;
	if (bsp(a, b, c, point1))
		std::cout << "is inside the triangle" << std::endl;
	else
		std::cout << "is outside the triangle" << std::endl;

	std::cout << "point2.x=" << point2.getX() << std::endl;
	if (bsp(a, b, c, point2))
		std::cout << "is inside the triangle" << std::endl;
	else
		std::cout << "is outside the triangle" << std::endl;

	std::cout << "a.x=" << a.getX() << " a.x_assign=" << a.getAssignX();
	std::cout << " a.y=" << a.getY() << " a.y_assign=" << a.getAssignY() << std::endl;
	a = point1;
	std::cout << "a.x=" << a.getX() << " a.x_assign=" << a.getAssignX();
	std::cout << " a.y=" << a.getY() << " a.y_assign=" << a.getAssignY() << std::endl;
	return 0;
}
