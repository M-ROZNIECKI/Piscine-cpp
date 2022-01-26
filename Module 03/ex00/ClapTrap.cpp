//
// Created by fenrir on 25/01/2022.
//

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
	std::cout << "destructor of ClapTrap " << this->Name << " Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a) {
	std::cout << "assignation overload operator for ClapTrap called" << std::endl;
	this->Name = a.getName();
	this->AttackDamage = a.getDmg();
	this->EnergyPoints = a.getEp();
	this->HitPoints = a.getHp();
	return *this;
}

std::string ClapTrap::getName() const {
	std::cout << "Name Getter called" << std::endl;
	return this->Name;
}

unsigned int ClapTrap::getHp() const {
	std::cout << "HP Getter called" << std::endl;
	return this->HitPoints;
}

unsigned int ClapTrap::getEp() const {
	std::cout << "EP Getter called" << std::endl;
	return this->EnergyPoints;
}

unsigned int ClapTrap::getDmg() const {
	std::cout << "Dmg Getter called" << std::endl;
	return this->AttackDamage;
}

void ClapTrap::attack(const std::string &target) {
	if (this->HitPoints > 0 && this->EnergyPoints > 0) {
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
		std::cout << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout << "not enough Energy Points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->Name << " take " << amount << " damage" << std::endl;
	if (amount >= this->HitPoints)
		this->HitPoints = 0;
	else
		this->HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints > 0 && this->EnergyPoints > 0) {
		std::cout << "ClapTrap " << this->Name << " repaired him self and get ";
		std::cout << amount << " HitPoints back" << std::endl;
		this->HitPoints += amount;
		this->EnergyPoints--;
	}
	else
		std::cout << "not enough Energy Points" << std::endl;
}
