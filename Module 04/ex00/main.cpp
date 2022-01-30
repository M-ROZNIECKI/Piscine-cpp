/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:34:33 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 16:48:29 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Dog();
	const Animal* l = new Cat();
	const WrongAnimal* tester0 = new WrongCat();
	const WrongCat* tester1 = new WrongCat();
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << tester0->getType() << " " << std::endl;
	std::cout << tester1->getType() << " " << std::endl;
	std::cout << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();
	k->makeSound();
	l->makeSound();
	tester0->makeSound();
	tester1->makeSound();
	std::cout << std::endl;

	delete (meta);
	delete (j);
	delete (i);
	delete (k);
	delete (l);
	delete (tester0);
	delete (tester1);

	return 0;
}