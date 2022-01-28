/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:03:55 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 17:18:06 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "constructor by default of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "constructor with name of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old) : ClapTrap(old) {
	std::cout << "constructor by copy of FragTrap called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "destructor of FragTrap " << Name << " Called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (HitPoints > 0 && EnergyPoints > 0) {
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing ";
		std::cout << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else if (HitPoints > 0)
		std::cout << "not enough Energy Points" << std::endl;
	else
		std::cout << "FragTrap is broken an can't attack" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hey guys lets do a high five" << std::endl;
}

