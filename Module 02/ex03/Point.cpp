/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:30 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 15:16:16 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** Constructor destructor
*/

Point::Point() : x(Fixed()), y(Fixed()), x_assign(Fixed()), y_assign(Fixed()) {

}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) , \
x_assign(Fixed(x)), y_assign(Fixed(y)) {

}

Point::Point(const Point &a) : x(a.getX()), y(a.getY()), x_assign(a.getAssignX()), y_assign(a.getAssignY()) {

}

Point::~Point() {

}

/*
** Operator overload
*/

Point &Point::operator=(const Point &a) {
	this->setAssignX(a.getAssignX());
	this->setAssignY(a.getAssignY());
	return *this;
}

const Fixed &Point::getX() const {
	return this->x;
}

const Fixed &Point::getY() const {
	return this->y;
}

const Fixed &Point::getAssignX() const {
	return this->x_assign;
}

const Fixed &Point::getAssignY() const {
	return this->y_assign;
}

void Point::setAssignX(const Fixed cor) {
	this->x_assign = cor;
}

void Point::setAssignY(const Fixed cor) {
	this->y_assign = cor;
}
