/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:54:20 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 19:00:52 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_HUMANB_HPP
#define PISCINE_CPP_HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"


class HumanB {
	private:
		const std::string name;
		Weapon *weapon_type;

	public:
		HumanB(const std::string &name);
		HumanB(const std::string &name, Weapon &weapon_type);
		void	setWeapon(Weapon &weapon_type);
		void	attack();
};


#endif //PISCINE_CPP_HUMANB_HPP
