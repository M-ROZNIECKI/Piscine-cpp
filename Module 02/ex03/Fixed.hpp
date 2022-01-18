/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:15:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/12 19:16:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

	private:
		int		value;
		static	const int nb_frac = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed&);
		~Fixed();

		Fixed	&operator=(const Fixed&);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;

		static Fixed		&min(Fixed &l, Fixed& r);
		static const Fixed	&min(const Fixed& l, const Fixed& r);
		static Fixed		&max(Fixed &l, Fixed& r);
		static const Fixed	&max(const Fixed& l, const Fixed& r);

};

std::ostream&	operator<<(std::ostream& os, const Fixed& a);

bool			operator>(const Fixed& l, const Fixed& r);
bool			operator<(const Fixed& l, const Fixed& r);
bool			operator>=(const Fixed& l, const Fixed& r);
bool			operator<=(const Fixed& l, const Fixed& r);
bool			operator==(const Fixed& l, const Fixed& r);
bool			operator!=(const Fixed& l, const Fixed& r);

Fixed			operator+(const Fixed& l, const Fixed& r);
Fixed			operator-(const Fixed& l, const Fixed& r);
Fixed			operator*(const Fixed& l, const Fixed& r);
Fixed			operator/(const Fixed& l, const Fixed& r);

#endif //FIXED_HPP
