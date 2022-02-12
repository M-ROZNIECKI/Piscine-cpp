/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:31:58 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 12:27:44 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
# include <iostream>
# include <cstdlib>

/*
 * inputType=
 * 0b0001 char
 * 0b0010 int
 * 0b0100 float
 * 0b1000 double
*/

class Convert {

	private:
		std::string	inputStr;
		int			inputType;

	public:
		Convert();
		Convert(const std::string&);
		Convert(const Convert&);
		~Convert();

		Convert&	operator=(const Convert&);

		void				checkType();
		const int&			getType() const;
		const std::string&	getString() const;
};


#endif //CONVERT_HPP
