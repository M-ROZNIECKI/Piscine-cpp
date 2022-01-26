/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:30 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 17:19:45 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** Constructor destructor
*/

Point::Point() : x(Fixed()), y(Fixed()) {

}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {

}

Point::Point(const Point &a) : x(a.getX()), y(a.getY()) {

}

Point::~Point() {
}

/*
** Operator overload
*/

Point &Point::operator=(const Point& a) {
	if (this == &a)
		return *this;
	this->~Point();
	new (this) Point(a);
	return *this;
}

const Fixed &Point::getX() const {
	return this->x;
}

const Fixed &Point::getY() const {
	return this->y;
}
