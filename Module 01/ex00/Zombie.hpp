/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:49:18 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 15:02:33 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		void announce(void);

		Zombie();
		Zombie(std::string name);
		~Zombie();
};

#endif //ZOMBIE_HPP
