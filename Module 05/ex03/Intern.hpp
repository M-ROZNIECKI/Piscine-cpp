/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:31:31 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 21:13:59 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	private:
		static Form*	shrubConstructor(const std::string&);
		static Form*	robotConstructor(const std::string&);
		static Form*	presConstructor(const std::string&);

	public:
		Intern();
		Intern(const Intern&);
		~Intern();

		Intern	&operator=(const Intern&);

		Form*	makeForm(const std::string&, const std::string&);
};

#endif //INTERN_HPP
