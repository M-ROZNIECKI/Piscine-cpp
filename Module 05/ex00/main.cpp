/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 20:35:50 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat a("test1");
		Bureaucrat b("test2", 50);
		Bureaucrat c("test3", 1);
		Bureaucrat d;
		std::cout << a << b << c << d << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat d("test4", 180);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat a("test5");
		a.decGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat a("test6", 1);
		a.incGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat a("test7", 0);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}