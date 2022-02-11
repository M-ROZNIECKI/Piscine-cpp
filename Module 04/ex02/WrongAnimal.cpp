/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:32:26 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 22:32:26 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "WrongAnimal constructor with type" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old) : type(old.getType()) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& old) {
	std::cout << "WrongAnimal assignation overload operator called" << std::endl;
	this->type = old.getType();
	return *this;
}

const std::string&	WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "random WrongAnimal sound" << std::endl;
}
