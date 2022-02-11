/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:56:19 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 22:34:41 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("default"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "constructor by default of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), HitPoints(10), \
	EnergyPoints(10), AttackDamage(0) {
	std::cout << "constructor with name of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old) : Name(old.getName()), \
	HitPoints(old.getHp()), EnergyPoints(old.getEp()), AttackDamage(old.getDmg()) {
	std::cout << "constructor by copy of ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor of ClapTrap " << Name << " Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
	std::cout << "assignation overload operator for ClapTrap called" << std::endl;
	Name = a.getName();
	AttackDamage = a.getDmg();
	EnergyPoints = a.getEp();
	HitPoints = a.getHp();
	return *this;
}

const std::string& ClapTrap::getName() const {
	return Name;
}

const unsigned int& ClapTrap::getHp() const {
	return HitPoints;
}

const unsigned int& ClapTrap::getEp() const {
	return EnergyPoints;
}

const unsigned int& ClapTrap::getDmg() const {
	return AttackDamage;
}

void ClapTrap::attack(const std::string &target) {
	if (HitPoints > 0 && EnergyPoints > 0) {
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing ";
		std::cout << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else if (HitPoints > 0)
		std::cout << "not enough Energy Points" << std::endl;
	else
		std::cout << "ClapTrap is broken an can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << Name << " take " << amount << " damage" << std::endl;
	if (amount >= HitPoints)
		HitPoints = 0;
	else
		HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (HitPoints > 0 && EnergyPoints > 0) {
		std::cout << "ClapTrap " << Name << " repaired him self and get ";
		std::cout << amount << " HitPoints back" << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else if (HitPoints > 0)
		std::cout << "not enough Energy Points" << std::endl;
	else
		std::cout << "ClapTrap is broken an can't repair himself" << std::endl;
}
