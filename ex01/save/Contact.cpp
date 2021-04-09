/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:55:04 by mrozniec          #+#    #+#             */
/*   Updated: 2021/04/02 04:16:31 by mrozniec         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string login,
				 std::string zipCode, std::string email, std::string phoneNumber, struct std::tm birthdayDate,
				 std::string favoriteMeal, std::string underwearColor, std::string darkestSecret): first_name(firstName), last_name(lastName), nickname(nickname),
																								   login(login), postal_addr(zipCode), email_addr(email), phone_number(phoneNumber),
																								   birthday_date(birthdayDate), favorite_meal(favoriteMeal), underwear_color(underwearColor), darkest_secret(darkestSecret)
				 {
				 }

Contact Contact::add_contact()
{
	std::string first_name, last_name, nickname, login, postal_addr, email_addr, phone_number, favorite_meal, underwear_color, darkest_secret, temp_str;
	struct std::tm birthday_date;
	int fail_conv;

	std::cout << "enter the first name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (first_name.empty())
		std::getline(std::cin, first_name);
	std::cout << "enter the last name: ";
	while (last_name.empty())
		std::getline(std::cin, last_name);
	std::cout << "enter the nickname: ";
	while (nickname.empty())
		std::getline(std::cin, nickname);
	std::cout << "enter the login: ";
	std::cin >> login;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "enter the postal address: ";
	while (postal_addr.empty())
		std::getline(std::cin, postal_addr);
	std::cout << "enter the email address: ";
	std::cin >> email_addr;
	std::cout << "enter the phone number: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (phone_number.empty())
		std::getline(std::cin, phone_number);
	fail_conv = 0;
	do
	{
		if (fail_conv)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error reading time\n";
		}
		fail_conv = 0;
		std::cout << "enter the birthday date at the format 18/06/1958: ";
		std::cin >> temp_str;
		if (temp_str.size() < 7)
			fail_conv = 1;
		else if (!(std::istringstream(temp_str.substr(0, 2)) >> birthday_date.tm_mday) || birthday_date.tm_mday > 31 || birthday_date.tm_mday < 1)
			fail_conv = 1;
		else if (!(std::istringstream(temp_str.substr(3, 2)) >> birthday_date.tm_mon) || --birthday_date.tm_mon > 11 || birthday_date.tm_mon < 0)
			fail_conv = 1;
		else if (!(std::istringstream(temp_str.substr(6, 4)) >> birthday_date.tm_year) || birthday_date.tm_year > 9999 || birthday_date.tm_year < 0)
			fail_conv = 1;
		else if (temp_str[2] != '/' || temp_str[5] != '/')
			fail_conv = 1;
	}while (fail_conv);
	std::cout << "enter the favorite meal: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (favorite_meal.empty())
		std::getline(std::cin, favorite_meal);
	std::cout << "enter the underwear color: ";
	while (underwear_color.empty())
		std::getline(std::cin, underwear_color);
	std::cout << "enter the darkest secret: ";
	while (darkest_secret.empty())
		std::getline(std::cin, darkest_secret);
	std::cout << "thanks you for adding a new Contact\n";

	return Contact(first_name, last_name, nickname, login, postal_addr, email_addr, phone_number, birthday_date, favorite_meal, underwear_color, darkest_secret);
}

std::string Contact::get_first_name() const
{
	return (first_name);
}

void Contact::aff_coordinate() const
{
	std::cout << "postal address: " << postal_addr << "\n";
	std::cout << "email address:  " << email_addr << "\n";
	std::cout << "phone number:   " << phone_number << "\n";
}

std::string Contact::aff_base(std::string command)
{
	int size;

	if (command == "first name")
		command.assign(first_name);
	else if (command == "last name")
		command.assign(last_name);
	else if (command == "nickname")
		command.assign(nickname);
	else
		command = "";
	size = command.size();
	if (size > 10)
	{
		command.resize(9);
		command += ".";
	}
	else
		command.insert(0, (10 - size), ' ');
	command += "|";
	return (command);
}

std::string Contact::aff_base(std::string command, unsigned int index)
{
	int size;
	std::ostringstream convert;

	if (command == "id")
	{
		convert << index;
		command = convert.str();
	}
	else
		command = "";
	size = command.size();
	if (size > 10)
	{
		command.resize(9);
		command += ".";
	}
	else
		command.insert(0, (10 - size), ' ');
	command += "|";
	return (command);
}
