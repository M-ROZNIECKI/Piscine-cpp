/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:56:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 20:56:27 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap&);

		std::string		getName() const;
		unsigned int	getHp() const;
		unsigned int	getEp() const;
		unsigned int	getDmg() const;

		virtual void	attack(const std::string& target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
