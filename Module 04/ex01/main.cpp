/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:34:33 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/31 15:55:05 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
/*	const Animal* meta = new Animal();
*/	const Animal* j = new Dog();
	const Animal* i = new Cat();
/*	const Animal* k = new Dog();
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
*/	delete (j);
	delete (i);
/*	delete (k);
	delete (l);
	delete (tester0);
	delete (tester1);
*/
	Animal* zoo[10] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(),
					   new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};

	std::cout << std::endl << std::endl;

	Brain	a;
	Brain	d(a);
	std::string b[10] = {"Hi", "default", "default", "default", "default", "default", "default", "default", "default", "Final"};
	a.setIdeas(b, 10);
	Cat Juno;
	Cat copied(Juno);
	Juno.setBrain(a);
	Brain	e(Juno.getBrain());
	Brain	f(copied.getBrain());

	Brain	c(b, 10);

	for (int ind = 0; ind < 20; ind++) {
		std::string strA = a.getIdeas()[ind];
		std::string strC = c.getIdeas()[ind];
		std::string strD = d.getIdeas()[ind];
		std::string strE = e.getIdeas()[ind];
		std::string strF = f.getIdeas()[ind];
		std::cout << "a[" << ind << "] = " << strA.insert(0, 10 - a.getIdeas()[ind].size(), ' ');
		std::cout << " c[" << ind << "] = " << strC.insert(0, 10 - c.getIdeas()[ind].size(), ' ');
		std::cout << " d[" << ind << "] = " << strD.insert(0, 10 - d.getIdeas()[ind].size(), ' ');
		std::cout << " e[" << ind << "] = " << strE.insert(0, 10 - e.getIdeas()[ind].size(), ' ');
		std::cout << " f[" << ind << "] = " << strF.insert(0, 10 - f.getIdeas()[ind].size(), ' ');
		std::cout << std::endl;
	}

	for (int ind = 0; ind < 10; ++ind) {
		std::cout << "[" << ind << "] : ";
		delete zoo[ind];
		std::cout << std::endl;
	}
	std::cout << "end of main" << std::endl << std::endl;
	return 0;
}
