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

#ifndef HUMANB_HPP
#define HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"


class HumanB {
	private:
		const std::string name;
		Weapon *weapon_type;

	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &weapon_type);
		void	attack();
};


#endif //HUMANB_HPP
