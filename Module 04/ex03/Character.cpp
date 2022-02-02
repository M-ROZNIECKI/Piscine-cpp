/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:25:04 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/01 19:04:07 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default"), inventory() {
	inventory[0] = NULL;
	inventory[1] = NULL;
	inventory[2] = NULL;
	inventory[3] = NULL;
}

Character::Character(const std::string &Name) : name(Name), inventory() {
	inventory[0] = NULL;
	inventory[1] = NULL;
	inventory[2] = NULL;
	inventory[3] = NULL;
}

Character::Character(const Character &old) : name(old.getName()), inventory() {
	for (int i = 0; i < 4; ++i) {
		if (old.getMateria()[i] != NULL)
			this->inventory[i] = old.getMateria()[i]->clone();
	}
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

Character &Character::operator=(const Character &old) {
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

const std::string &Character::getName() const {
	return this->name;
}

const AMateria*const* Character::getMateria() const {
	return this->inventory;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
