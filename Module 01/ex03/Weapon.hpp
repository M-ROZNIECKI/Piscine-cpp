/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:53:44 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 18:03:48 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon();
		Weapon(const std::string &type);
		void setType(const std::string &new_type);
		const std::string &getType() const;
};

#endif //WEAPON_HPP
