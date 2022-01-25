/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:27:50 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/18 18:29:41 by mrozniec         ###   ########.fr       */
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

	Contact(const std::string& firstName, const std::string& lastName, \
			const std::string& nickname, const std::string& phoneNumber, \
			const std::string& darkestSecret);

	void aff_coordinate() const;

	static Contact add_contact();

	std::string aff_base(std::string command, unsigned int index);

	std::string aff_base(std::string command);

	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};
#endif