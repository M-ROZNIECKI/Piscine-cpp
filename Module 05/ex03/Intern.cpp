/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:31:48 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 20:35:51 by mrozniec         ###   ########.fr       */
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

Intern::Intern() : call(), form() {
	call[0] = "shrubbery creation";
	call[1] = "robotomy request";
	call[2] = "presidential pardon";
	form[0] = &shrubConstructor;
	form[1] = &robotConstructor;
	form[2] = &presConstructor;
}

Intern::Intern(const Intern &) : call(), form() {
	call[0] = "shrubbery creation";
	call[1] = "robotomy request";
	call[2] = "presidential pardon";
	form[0] = &shrubConstructor;
	form[1] = &robotConstructor;
	form[2] = &presConstructor;
}

Intern::~Intern() {
}

Intern &Intern::operator=(const Intern &old) {
	if (this == &old)
		return *this;
	return *this;
}

Form *Intern::makeForm(const std::string &doc, const std::string &target) {
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
