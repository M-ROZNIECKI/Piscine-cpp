/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:26:02 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 23:46:02 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& old) : Animal(old) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(old.getBrain());
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog& old) {
	std::cout << "Dog assignation overload" << std::endl;
	if (this == &old)
		return *this;
	this->setBrain(old.getBrain());
	this->type = old.getType();
	return *this;
}

Brain Dog::getBrain() const {
	return *brain;
}

void Dog::setBrain(const Brain &old) {
	brain->setIdeas(old.getIdeas());
}

void Dog::makeSound() const {
	std::cout << "BARK BARK BARK" << std::endl;
}
