/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:48:00 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 15:52:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign (const Point& p1, const Point& p2, const Point& p3) {
	float res;
	float p1x = p1.getX().toFloat(), p2x = p2.getX().toFloat(), p3x = p3.getX().toFloat(), \
	p1y = p1.getY().toFloat(), p2y = p2.getY().toFloat(), p3y = p3.getY().toFloat();

	res = (p1x - p3x) * (p2y - p3y) - (p2x - p3x) * (p1y - p3y);

	return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	bool res[3];

	res[0] = sign(point, a, b) <= 0.0f;
	res[1] = sign(point, b, c) <= 0.0f;
	res[2] = sign(point, c, a) <= 0.0f;
	return ((res[0] == res[1]) && (res[2] == res[1]));
}
