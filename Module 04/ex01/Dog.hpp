/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:25:57 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/31 14:17:54 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog&);
		virtual ~Dog();

		Dog	&operator=(const Dog&);

		Brain	getBrain() const;
		void	setBrain(const Brain&);

		void	makeSound() const;

};

#endif //DOG_HPP
