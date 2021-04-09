/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:00:53 by mrozniec          #+#    #+#             */
/*   Updated: 2021/04/02 00:06:21 by mrozniec         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#define SIZE_TAB 8

void ft_search(Contact directory[SIZE_TAB])
{
	int i;
	std::string str;

	i = -1;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (++i < SIZE_TAB && !directory[i].get_first_name().empty())
	{
		std::cout << "|" << directory[i].aff_base("id", i) << directory[i].aff_base("first name") <<
		directory[i].aff_base("last name") << directory[i].aff_base("nickname") << std::endl;
	}
}

int main()
{
	int exit;
	int i;
	Contact directory[SIZE_TAB];
	std::string command;

	exit = 0;
	while (exit == 0)
	{
		i = -1;
		std::cout << "enter a command (command accepted: \"ADD\", \"SEARCH\" and \"EXIT\")\n";
		std::cin >> command;
		while (command[++i])
			command.replace(i, 1, 1, (char)std::toupper(command[i]));
		i = 0;
		if (command == "ADD")
		{
			while (i < SIZE_TAB && !directory[i].get_first_name().empty())
				i++;
			if (i == SIZE_TAB)
			{
				while (command != "Y" && command != "N" && command != "O" && command != "YES" &&
				command != "NO" && command != "NON" && command != "OUI")
				{
					std::cout << "there is already " << SIZE_TAB << " address in your directory, do you want to delete one of them? y/n: ";
					std::cin >> command;
					i = -1;
					while (command[++i])
						command.replace(i, 1, 1, (char)std::toupper(command[i]));
					std::cout << command << std::endl;
				}
				if (command == "YES" || command == "Y" || command == "OUI" || command == "O")
				{
					while (i == SIZE_TAB)
					{
						i = 0;
						ft_search(directory);
						std::cout << "enter the index of the Contact you want to replace: ";
						std::cin >> i;
						if (i > SIZE_TAB || i < 0)
							i = SIZE_TAB;
					}
					directory[i] = Contact::add_contact();
				}
			}
			else
				directory[i] = Contact::add_contact();
		}
		else if (command == "SEARCH")
		{
			if (directory[0].get_first_name().empty())
				std::cout << "there is no Contact inside your directory!!\n";
			else
			{
				i = SIZE_TAB;
				while (i == SIZE_TAB || std::cin.fail())
				{
					ft_search(directory);
					std::cout << "enter the index of the Contact you want: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cin >> i;
					if (i >= SIZE_TAB || i < 0 || directory[i].get_first_name().empty())
						i = SIZE_TAB;
				}
				directory[i].aff_coordinate();
			}
		}
		else if (command == "EXIT")
			exit = 1;
		else
			std::cout << "enter a valid command, try again\n";
	}
	return (0);
}