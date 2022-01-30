/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:24:05 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 23:24:05 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default") {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Animal constructor with type" << std::endl;
}

Animal::Animal(const Animal& old) : type(old.getType()) {
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& old) {
	std::cout << "Animal assignation overload operator called" << std::endl;
	this->type = old.getType();
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "random animal sound" << std::endl;
}
