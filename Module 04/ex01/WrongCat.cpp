/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:30:50 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 16:30:50 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& old) : WrongAnimal(old) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& old) {
	std::cout << "WrongCat assignation overload" << std::endl;
	this->type = old.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Miaou (human i am your slave)" << std::endl;
}
