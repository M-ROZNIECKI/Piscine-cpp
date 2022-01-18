/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:15:22 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 13:40:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructor destructor
*/

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int value) {
	this->value = 0;
	this->value = value << nb_frac;
}

Fixed::Fixed(const float value) : value(static_cast<int>(roundf(value * (1 << nb_frac)))) {
}

Fixed::Fixed(const Fixed &a) : value(a.getRawBits()) {
}

Fixed::~Fixed() {
}

/*
** Operator overload
*/

Fixed &Fixed::operator=(const Fixed &a) {
	this->value = a.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &a) {
	os << a.toFloat();
	return os;
}

/*
** comp overload
*/

bool			operator>(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() > r.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator<(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() < r.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator>=(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() >= r.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator<=(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() <= r.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator==(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() == r.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator!=(const Fixed& l, const Fixed& r) {
	if (l.getRawBits() != r.getRawBits())
		return (true);
	else
		return (false);
}

/*
** inc/dec overload
*/

Fixed &Fixed::operator++() {
	int value_inc;
	value_inc = this->getRawBits();
	value_inc++;
	this->setRawBits(value_inc);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;
	operator++();
	return old;
}

Fixed &Fixed::operator--() {
	int value_inc;
	value_inc = this->getRawBits();
	value_inc--;
	this->setRawBits(value_inc);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	operator--();
	return old;
}

/*
** Arithmetics operator overload
*/

Fixed			operator+(const Fixed& l, const Fixed& r) {
	Fixed ret(l.toFloat() + r.toFloat());
	return ret;
}

Fixed			operator-(const Fixed& l, const Fixed& r) {
	Fixed ret(l.toFloat() - r.toFloat());
	return ret;
}

Fixed			operator*(const Fixed& l, const Fixed& r) {
	Fixed ret(l.toFloat() * r.toFloat());
	return ret;
}

Fixed			operator/(const Fixed& l, const Fixed& r) {
	Fixed ret(l.toFloat() / r.toFloat());
	return ret;
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

Fixed &Fixed::min(Fixed &l, Fixed &r) {
	if (l < r)
		return l;
	return r;
}

const Fixed &Fixed::min(const Fixed &l, const Fixed &r) {
	if (l < r)
		return l;
	return r;
}

Fixed &Fixed::max(Fixed &l, Fixed &r) {
	if (l > r)
		return l;
	return r;
}

const Fixed &Fixed::max(const Fixed &l, const Fixed &r) {
	if (l > r)
		return l;
	return r;
}
