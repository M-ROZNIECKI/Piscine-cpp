/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:56:13 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 22:32:21 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "constructor by default of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "constructor with name of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old) {
	std::cout << "constructor by copy of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "destructor of ScavTrap " << Name << " Called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (HitPoints > 0 && EnergyPoints > 0) {
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing ";
		std::cout << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "not enough Energy Points" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
