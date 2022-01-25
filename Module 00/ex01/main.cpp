/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:00:53 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/25 18:54:42 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
	int exit;
	int i;
	PhoneBook phoneBook;
	std::string command;

	exit = 0;
	while (exit == 0) {
		i = -1;
		std::cout << "enter a command (command accepted: \"ADD\", \"SEARCH\" and \"EXIT\")\n";
		std::getline(std::cin, command);
		std::cin.clear();
		clearerr(stdin);
		while (command[++i])
			command.replace(i, 1, 1, (char)std::toupper(command[i]));
		if (command == "ADD") {
			phoneBook.cmd_add();
		} else if (command == "SEARCH") {
			phoneBook.cmd_search();
		} else if (command == "EXIT")
			exit = 1;
		else
			std::cout << "enter a valid command, try again\n";
	}
	return 0;
}