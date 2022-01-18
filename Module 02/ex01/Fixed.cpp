/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:15:22 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/12 13:49:45 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructor destructor
*/

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = 0;
	this->value = value << nb_frac;
}

Fixed::Fixed(const float value) : value(static_cast<int>(roundf(value * (1 << nb_frac)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a) : value(a.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/*
** Operator overload
*/

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called" << std::endl;
	this->value = a.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &a) {
	os << a.toFloat();
	return os;
}

/*
** Member function
*/

int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return (static_cast<float>(this->getRawBits()) / static_cast<float>(1 << nb_frac));
}

int Fixed::toInt() const {
	return (this->value >> nb_frac);
}
