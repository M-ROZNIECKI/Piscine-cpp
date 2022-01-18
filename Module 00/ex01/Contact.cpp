/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:55:04 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 18:29:41 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::Contact(const std::string& firstName,
				 const std::string& lastName,
				 const std::string& nickname,
				 const std::string& phoneNumber,
				 const std::string& darkestSecret):
				 	 first_name(firstName),
					 last_name(lastName),
					 nickname(nickname),
					 phone_number(phoneNumber),
					 darkest_secret(darkestSecret) {
}

Contact Contact::add_contact() {
	std::string first_name, last_name, nickname, login, phone_number, darkest_secret;

	std::cout << "enter the first name: ";
	clean_buff();
	while (first_name.empty())
		std::getline(std::cin, first_name);
	std::cout << "enter the last name: ";
	while (last_name.empty())
		std::getline(std::cin, last_name);
	std::cout << "enter the nickname: ";
	while (nickname.empty())
		std::getline(std::cin, nickname);
	std::cout << "enter the phone number: ";
	while (phone_number.empty())
		std::getline(std::cin, phone_number);
	std::cout << "enter the darkest secret: ";
	while (darkest_secret.empty())
		std::getline(std::cin, darkest_secret);

	std::cout << "thanks you for adding a new Contact\n";

	return Contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

std::string Contact::get_first_name() const {
	return first_name;
}

void Contact::aff_coordinate() const {
	std::cout << "phone number:   " << phone_number << "\n";
}

std::string Contact::aff_base(std::string command) {
	std::basic_string<char>::size_type size;

	if (command == "first name")
		command.assign(first_name);
	else if (command == "last name")
		command.assign(last_name);
	else if (command == "nickname")
		command.assign(nickname);
	else
		command = "";
	size = command.size();
	if (size > 10) {
		command.resize(9);
		command += ".";
	} else
		command.insert(0, (10 - size), ' ');

	command += "|";

	return command;
}

std::string Contact::aff_base(std::string command, unsigned int index) {
	std::basic_string<char>::size_type size;
	std::ostringstream convert;

	if (command == "id") {
		convert << index;
		command = convert.str();
	} else
		command = "";

	size = command.size();
	if (size > 10) {
		command.resize(9);
		command += ".";
	} else
		command.insert(0, (10 - size), ' ');

	command += "|";

	return command;
}
