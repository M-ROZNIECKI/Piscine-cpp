/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:54:09 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 19:01:49 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		const std::string name;
		const Weapon &weapon_type;
	public:
		HumanA(const std::string &name, const Weapon &weapon_type);
		void attack();
};

#endif //HUMANA_HPP
