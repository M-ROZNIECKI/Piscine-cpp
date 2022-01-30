/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:25:57 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 23:30:28 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog&);
		~Dog();

		Dog	&operator=(const Dog&);

		void	makeSound() const;

};

#endif //DOG_HPP
