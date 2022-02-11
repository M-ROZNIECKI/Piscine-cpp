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

FragTrap &FragTrap::operator=(const FragTrap &old) {
	std::cout << "assignation overload operator for FragTrap called" << std::endl;
	Name = old.getName();
	AttackDamage = old.getDmg();
	EnergyPoints = old.getEp();
	HitPoints = old.getHp();
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hey guys lets do a high five" << std::endl;
}
