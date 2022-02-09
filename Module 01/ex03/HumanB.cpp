/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:54:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 19:07:09 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon_type(NULL) {
}

void	HumanB::setWeapon(Weapon &n_weapon_type) {
	weapon_type = &n_weapon_type;
}

void	HumanB::attack() {
	if (weapon_type == NULL)
		std::cout << name << " attacks with his bare hands" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon_type->getType() << std::endl;
}
