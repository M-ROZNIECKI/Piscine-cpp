/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:30 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 21:39:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** Constructor destructor
*/

Point::Point() : x(Fixed()), y(Fixed()) {
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {
}

Point::Point(const Fixed x, const Fixed y) : x(Fixed(x)), y(Fixed(y)) {
}

Point::Point(const Point &a) : x(Fixed(a.getX())), y(Fixed(a.getY())) {
}

Point::~Point() {
}

/*
** Operator overload
*/

Point &Point::operator=(const Point&) {
	return *this;
}

const Fixed &Point::getX() const {
	return this->x;
}

const Fixed &Point::getY() const {
	return this->y;
}
