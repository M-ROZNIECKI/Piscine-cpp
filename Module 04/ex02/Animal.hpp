/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:01:47 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 22:11:24 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
# include <iostream>

class Animal {

	protected:
		std::string	type;

	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal&);
		virtual ~Animal();

		Animal	&operator=(const Animal&);

		const std::string&	getType() const;

		virtual void	makeSound() const = 0;

};

#endif //ANIMAL_HPP
