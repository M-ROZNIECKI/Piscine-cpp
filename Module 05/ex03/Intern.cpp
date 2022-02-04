/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:31:48 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 21:24:24 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::shrubConstructor(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::robotConstructor(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::presConstructor(const std::string &target) {
	return new PresidentialPardonForm(target);
}

Intern::Intern() {
}

Intern::Intern(const Intern &) {
}

Intern::~Intern() {
}

Intern &Intern::operator=(const Intern &old) {
	if (this == &old)
		return *this;
	return *this;
}

Form *Intern::makeForm(const std::string &doc, const std::string &target) {
	std::string call[3] = {"shrubbery creation",
						   "robotomy request",
						   "presidential pardon"};

	Form*	(* form[3])(const std::string&) = {&shrubConstructor,
												&robotConstructor,
												&presConstructor};

	for (int i = 0; i < 3; ++i) {
		if (doc == call[i]) {
			std::cout << "Intern creates " << doc << std::endl;
			return form[i](target);
		}
	}
	std::cout << doc << " does not exist" << std::endl;
	std::cout << "try a form name that is existing" << std::endl;
	return NULL;
}
