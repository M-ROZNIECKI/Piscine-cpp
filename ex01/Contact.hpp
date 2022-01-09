/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:27:50 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/08 22:34:13 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CONTACT
# define DEF_CONTACT

# include <cstring>
# include <iomanip>
# include <iostream>
# include <ctime>
# include <limits>
# include <sstream>
# include "utils.hpp"

class Contact {
	public:

	Contact();

	Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname, const std::string& login, const std::string& zipCode, const std::string& email, const std::string& phoneNumber,
			struct std::tm birthdayDate, const std::string& favoriteMeal, const std::string& underwearColor,
			const std::string& darkestSecret);

	void aff_coordinate() const;

	std::string get_first_name() const;

	void get_birthday() const;

	static Contact add_contact();

	std::string aff_base(std::string command, unsigned int index);

	std::string aff_base(std::string command);

	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_addr;
	std::string email_addr;
	std::string phone_number;
	struct std::tm birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};
#endif