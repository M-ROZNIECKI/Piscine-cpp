/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:16:36 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 15:44:27 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"


class Point {

	private:
		Fixed const x;
		Fixed const	y;
		Fixed		x_assign;
		Fixed		y_assign;

	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point&);
		~Point();

		Point	&operator=(const Point&);

		const Fixed& getX() const;
		const Fixed& getY() const;
		const Fixed& getAssignX() const;
		const Fixed& getAssignY() const;

		void setAssignX(const Fixed cor);
		void setAssignY(const Fixed cor);

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //POINT_HPP
