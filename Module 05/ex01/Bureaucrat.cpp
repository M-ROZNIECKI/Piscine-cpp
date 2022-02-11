/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:05:54 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 22:33:58 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150) {
}

Bureaucrat::Bureaucrat(const std::string& myName, unsigned int myGrade) : name(myName) {
	if (myGrade > 150)
		throw GradeTooLowExcept();
	if (myGrade < 1)
		throw GradeTooHighExcept();
	grade = myGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old) : name(old.getName()),
												grade(old.getGrade()) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old) {
	if (this == &old)
		return *this;
	this->grade = old.getGrade();
	return *this;
}

const std::string &Bureaucrat::getName() const {
	return this->name;
}

const unsigned int&	Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incGrade() {
	if (grade == 1)
		throw GradeTooHighExcept();
	grade--;
}

void Bureaucrat::decGrade() {
	if (grade == 150)
		throw GradeTooLowExcept();
	grade++;
}

void Bureaucrat::signForm(Form &doc) {
	if (!doc.getSignature()) {
		try {
			doc.beSigned(*this);
			std::cout << this->getName() << " signed " << doc.getName() << std::endl;
		} catch (std::exception & e) {
			std::cout << this->getName() << " couldn't sign " << doc.getName();
			std::cout << " because his " << e.what()  << std::endl;
		}
	}
	else {
		std::cout << this->getName() << " couldn't sign " << doc.getName();
		std::cout << " because it was already signed" << std::endl;
	}
}

Bureaucrat::GradeTooHighExcept::GradeTooHighExcept() : std::logic_error("Grade was set too high") {
}

Bureaucrat::GradeTooLowExcept::GradeTooLowExcept() : std::logic_error("Grade was set too low") {
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a) {
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << "." << std::endl;
	return os;
}
