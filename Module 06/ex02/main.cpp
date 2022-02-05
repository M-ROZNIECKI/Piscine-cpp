/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:22:57 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 19:43:25 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"

Base* generate() {
	srand(time(NULL));
	int	randomizer = rand() % 3;
	switch (randomizer) {
		case 1:
			return new A;
		case 2:
			return new B;
		default:
			return new C;
	}
}

void identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (a != NULL) {
		std::cout << "p is pointing to an object of class A" << std::endl;
		return;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != NULL) {
		std::cout << "p is pointing to an object of class B" << std::endl;
		return;
	}
	C *c = dynamic_cast<C*>(p);
	if (c != NULL) {
		std::cout << "p is pointing to an object of class C" << std::endl;
		return;
	}
}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "p is a reference to an object of class A" << std::endl;
	}
	catch (std::exception & e) {
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "p is a reference to an object of class B" << std::endl;
	}
	catch (std::exception & e) {
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "p is a reference to an object of class C" << std::endl;
	}
	catch (std::exception & e) {
	}
}

int main(void) {
	Base* test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}
