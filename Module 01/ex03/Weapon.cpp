/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:53:32 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 18:29:33 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("default") {}

Weapon::Weapon(const std::string &new_type) : type(new_type) {
}

void Weapon::setType(const std::string &new_type) {
	type = new_type;
}

const std::string &Weapon::getType() const {
	return type;
}
