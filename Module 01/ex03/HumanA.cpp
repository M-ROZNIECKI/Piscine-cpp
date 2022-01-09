/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:53:57 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 19:01:49 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon_type) : name(name), weapon_type(weapon_type) {
}

void	HumanA::attack() {
	std::cout << name << " attacks with his " << weapon_type.getType() << std::endl;
}
