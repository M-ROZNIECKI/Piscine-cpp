/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:28:19 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 15:28:19 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& old) : Animal(old) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(old.getBrain());
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat& old) {
	std::cout << "Cat assignation overload" << std::endl;
	if (this == &old)
		return *this;
	this->setBrain(old.getBrain());
	this->type = old.getType();
	return *this;
}

Brain Cat::getBrain() const {
	return *brain;
}

void Cat::setBrain(const Brain &old) {
	brain->setIdeas(old.getIdeas());
}

void Cat::makeSound() const {
	std::cout << "Miaou (human you are my slave)" << std::endl;
}
