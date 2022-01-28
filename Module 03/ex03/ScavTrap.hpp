/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:56:05 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/26 22:24:49 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();

		void	attack(const std::string& target);

		void	guardGate();
};

#endif //SCAVTRAP_HPP
