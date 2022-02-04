/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 18:04:47 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
/*
	try {
		Bureaucrat a("test1");
		Bureaucrat b("test2", 50);
		Bureaucrat c("test3", 1);
		Bureaucrat d;
		std::cout << a << b << c << d << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat d("test4", 180);
	} catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("test5");
		a.decGrade();
	} catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("test6", 1);
		a.incGrade();
	} catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		Bureaucrat a("test7", 0);
	} catch (std::exception & e) {
		std::cout << e.what();
	}
*/
	try {
		Bureaucrat	test1("test1", 25);
		Bureaucrat	test2("test2", 4);
//		PresidentialPardonForm	a42;
		ShrubberyCreationForm	a42;
//		RobotomyRequestForm	a42;
		std::cout << a42;
		test1.signForm(a42);
		test2.signForm(a42);
		test2.signForm(a42);
		std::cout << a42;
		test2.executeForm(a42);
/*		test2.executeForm(a42);
		test2.executeForm(a42);
		test2.executeForm(a42);
		test2.executeForm(a42);
		test2.executeForm(a42);
		test2.executeForm(a42);
		test2.executeForm(a42);
*/		test1.executeForm(a42);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	test("test", 4);
//		PresidentialPardonForm	a42;
//		ShrubberyCreationForm	a42;
		RobotomyRequestForm	a42;
		std::cout << a42;
		test.executeForm(a42);
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}