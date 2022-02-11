/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:07:35 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 19:19:11 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(),
ScavTrap(), Name("default") {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage= 30;
	std::cout << "constructor by default of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"),
FragTrap(name), ScavTrap(name), Name(name){
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage= 30;
	std::cout << "constructor with name of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old) : ClapTrap(old), FragTrap(old),
												   ScavTrap(old) {
	std::cout << "constructor by copy of DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "destructor of DiamondTrap " << Name << " Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &old) {
	std::cout << "assignation overload operator for DiamondTrap called" << std::endl;
	Name = old.getDName();
	ClapTrap::Name = old.getName();
	AttackDamage = old.getDmg();
	EnergyPoints = old.getEp();
	HitPoints = old.getHp();
	return *this;
}

const std::string &DiamondTrap::getDName() const {
	return this->Name;
}

void DiamondTrap::whoAmI() {
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << " and my DiamondTrap name is ";
	std::cout << this->Name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
