/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:15:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/11 19:05:59 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

	private:
		int		value;
		static	const int nb_frac = 8;

	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed	&operator=(const Fixed&);

		int		getRawBits() const;
		void	setRawBits(const int raw);

};

#endif //FIXED_HPP
