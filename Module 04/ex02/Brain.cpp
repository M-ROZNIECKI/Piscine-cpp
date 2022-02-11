/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:22:34 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/30 22:09:52 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain was constructed by default" << std::endl;
}

Brain::Brain(std::string *things, int sizeTab) {
	std::cout << "Brain with ideas is created" << std::endl;
	this->setIdeas(things, sizeTab);
}

Brain::Brain(const Brain &old) {
	std::cout << "Brain was cloned" << std::endl;
	this->setIdeas(old.getIdeas());
}

Brain::~Brain() {
	std::cout << "this is a lobotomy" << std::endl;
}

Brain &Brain::operator=(const Brain &old) {
	std::cout << "Brain assignment overload" << std::endl;
	if (this == &old)
		return *this;
	this->setIdeas(old.getIdeas());
	return *this;
}

const std::string *Brain::getIdeas() const {
	return this->ideas;
}

void Brain::setIdeas(const std::string *things, int sizeTab) {
	try {
		for (int i = 0; i < 100 && i < sizeTab ; i++) {
			ideas[i] = things[i];
		}
	} catch (std::exception & e) {
		std::cerr << "wrong sizeTab" << std::endl;
	}
}
