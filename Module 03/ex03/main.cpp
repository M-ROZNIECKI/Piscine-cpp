/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/28 19:21:29 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap default_frag;
	DiamondTrap test1("test1");

	default_frag.highFivesGuys();
	std::cout << "default_frag has " << default_frag.getHp() << " HP" << std::endl;
	test1.attack(default_frag.getName());
	default_frag.takeDamage(test1.getDmg());
	std::cout << "default_frag has " << default_frag.getHp() << " HP" << std::endl;
	std::cout << "default_frag Name is " << default_frag.getName() << std::endl;
	default_frag = test1;
	default_frag.highFivesGuys();
	default_frag.whoAmI();
	default_frag.guardGate();
	std::cout << "default_frag has " << default_frag.getHp() << " HP" << std::endl;
	std::cout << "default_frag Name is " << default_frag.getName() << std::endl;
	default_frag.attack(test1.getName());
	test1.takeDamage(default_frag.getDmg());

	return 0;
}
