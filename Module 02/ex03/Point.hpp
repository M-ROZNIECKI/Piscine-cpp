/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:36 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 15:45:40 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"


class Point {

	private:
		Fixed const x;
		Fixed const	y;

	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point&);
		~Point();

		Point	&operator=(const Point&);

		const Fixed& getX() const;
		const Fixed& getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //POINT_HPP
