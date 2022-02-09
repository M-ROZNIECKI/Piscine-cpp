/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/09 20:31:41 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc == 2)
	{
		Karen karen;
		std::string	lvl_call[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int i = 0;

		while (i < 4 && argv[1] != lvl_call[i])
			i++;

		switch (i) {
			case 0:
			{
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
			}
			case 1:
			{
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;
			}
			case 2:
			{
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
			}
			case 3:
			{
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				std::cout << std::endl;
				break;
			}
			default:
			{
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			}
		}
	}
	return 0;
}
