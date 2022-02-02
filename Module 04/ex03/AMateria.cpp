/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:14:44 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/01 15:08:01 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {
}

AMateria::AMateria(const std::string &type) : type(type) {
}

AMateria::AMateria(const AMateria &old) : type(old.getType()) {
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(const AMateria &old) {
	if (this == &old)
		return *this;
	return *this;
}

const std::string &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* use a default spell at " << target.getName() << " *" << std::endl;
}
