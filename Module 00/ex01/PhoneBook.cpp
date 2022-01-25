/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:51:39 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/25 19:13:03 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numEntry(0) {
}

void PhoneBook::cmd_add() {
	std::string command;
	int i;

	if (numEntry >= 8) {
		do {
			std::cout << "there is already 8 address in your phonebook, do you ";
			std::cout << "want to delete one of them to add your new contact? y/n: ";
			std::getline(std::cin, command);
			std::cin.clear();
			clearerr(stdin);
			i = -1;
			while (command[++i])
				command.replace(i, 1, 1, \
				static_cast<char>(std::toupper(command[i])));
			std::cout << command << std::endl;
		}while (command != "Y" && command != "N" && command != "O" && command != "YES" &&
				command != "NO" && command != "NON" && command != "OUI");
		if (command == "YES" || command == "Y" || command == "OUI" || command == "O") {
			do {
				ft_search();
				std::cout << "enter the index of the Contact you want to replace: ";
				std::cin >> i;
				std::cin.clear();
				clean_buff();
				if (i > numEntry || i < 0 || std::cin.fail())
					i = numEntry;
			}while (i == numEntry);
			directory[i] = Contact::add_contact();
		}
	} else {
		directory[numEntry] = Contact::add_contact();
		numEntry++;
	}
}

void PhoneBook::ft_search() {
	int	i;
	std::string	str;

	i = -1;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (++i < numEntry) {
		std::cout << "|" << directory[i].aff_base("id", i);
		std::cout << directory[i].aff_base("first name");
		std::cout << directory[i].aff_base("last name");
		std::cout << directory[i].aff_base("nickname") << std::endl;
	}
}

void PhoneBook::cmd_search() {
	int	i;

	if (numEntry == 0)
		std::cout << "there is no Contact inside your directory!!" << std::endl;
	else {
		do {
			ft_search();
			std::cout << "enter the index of the Contact you want: ";
			std::cin >> i;
			if (std::cin.fail())
				i = numEntry;
			std::cin.clear();
			clean_buff();
		} while (i >= numEntry || i < 0);
		directory[i].aff_coordinate();
	}
}
