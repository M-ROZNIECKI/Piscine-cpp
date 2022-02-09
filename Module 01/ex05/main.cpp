/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:48:15 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/10 20:10:51 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main() {

	Karen karen;

	std::cout << "debug karen is = ";
	karen.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "info karen is = ";
	karen.complain("INFO");
	std::cout << std::endl;

	std::cout << "warning karen is = ";
	karen.complain("WARNING");
	std::cout << std::endl;

	std::cout << "error karen is = ";
	karen.complain("ERROR");
	std::cout << std::endl;

	std::cout << "fart karen is = ";
	karen.complain("FART");
	std::cout << std::endl;

	return 0;
}
