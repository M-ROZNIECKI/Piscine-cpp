/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:07:54 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/10 19:55:50 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
}

void Karen::debug() {
	std::cout << "My kid want to eat a burger, so i'm taking a burger with";
	std::cout << " extra cheese and bacon even if it's not on the menu" << std::endl;
}

void Karen::info() {
	std::cout << "Stop complaining about my child, it's not his fault if this restaurant";
	std::cout << " is making things difficult by not wanting to make burger for him" << std::endl;
}

void Karen::warning() {
	std::cout << "My kid is a good child and he has the wright to cry and complain";
	std::cout << " about the poor service of this restaurant, i'm going to make a complain about them" << std::endl;
}

void Karen::error() {
	std::cout << "I WANT TO SPEAK TO THE MANAGER... NOW" << std::endl;
}

void Karen::complain(std::string level) {
	std::string	lvl_call[4];
	void		(Karen::* lvl_func[4])();
	lvl_func[0] = &Karen::debug;
	lvl_call[0] = "debug";
	lvl_func[1] = &Karen::info;
	lvl_call[1] = "info";
	lvl_func[2] = &Karen::warning;
	lvl_call[2] = "warning";
	lvl_func[3] = &Karen::error;
	lvl_call[3] = "error";
	for (int i = -1; i < 4; ++i)
	{
		if (level == lvl_call[i])
			(this->*lvl_func[i])();
	}
}
