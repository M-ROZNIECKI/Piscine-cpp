/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 17:37:25 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap test1;
	ClapTrap test2("test2");
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	test1.attack(test2.getName());
	test2.takeDamage(test1.getDmg());
	std::cout << "test1 EP= " << test1.getEp() << std::endl;
	std::cout << "test1 have " << test1.getHp() << " HP" << std::endl;
	test1.beRepaired(5);
	std::cout << "test1 have " << test1.getHp() << " HP" << std::endl;
	std::cout << "test2 have " << test2.getHp() << " HP" << std::endl;
	test2.beRepaired(5);
	std::cout << "test2 have " << test2.getHp() << " HP" << std::endl;
}
