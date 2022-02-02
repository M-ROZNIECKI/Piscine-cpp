/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:13:10 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 14:56:53 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : inventory() {
	inventory[0] = NULL;
	inventory[1] = NULL;
	inventory[2] = NULL;
	inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &old) : inventory() {
	for (int i = 0; i < 4; ++i) {
		if (old.getMateria()[i] != NULL)
			this->inventory[i] = old.getMateria()[i]->clone();
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &old) {
	if (this == &old)
		return *this;
	for (int i = 0; i < 4 ; ++i) {
		if (this->inventory[i] != NULL) {
			delete	this->inventory[i];
			this->inventory[i] = NULL;
		}
		if (old.getMateria()[i] != NULL) {
			this->inventory[i] = old.getMateria()[i]->clone();
		}
	}
	return *this;
}

const AMateria *const *MateriaSource::getMateria() const {
	return this->inventory;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 3; i >= 0; --i) {
		if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	return NULL;
}
