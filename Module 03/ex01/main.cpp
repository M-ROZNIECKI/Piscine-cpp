/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 22:48:26 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap default_scav;
	ScavTrap test1("test1");

	default_scav.guardGate();
	std::cout << "default_scav has " << default_scav.getHp() << " HP" << std::endl;
	test1.attack(default_scav.getName());
	default_scav.takeDamage(test1.getDmg());
	std::cout << "default_scav has " << default_scav.getHp() << " HP" << std::endl;
	std::cout << "default_scav Name is " << default_scav.getName() << std::endl;
	default_scav = test1;
	std::cout << "default_scav has " << default_scav.getHp() << " HP" << std::endl;
	std::cout << "default_scav Name is " << default_scav.getName() << std::endl;
	default_scav.attack(test1.getName());
	test1.takeDamage(default_scav.getDmg());
}
