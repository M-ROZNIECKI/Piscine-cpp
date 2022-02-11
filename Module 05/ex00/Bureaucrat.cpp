/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:05:54 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 20:29:30 by mrozniec         ###   ########.fr       */
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

Bureaucrat::GradeTooHighExcept::GradeTooHighExcept() : std::logic_error("Grade was set too high\n") {
}

Bureaucrat::GradeTooLowExcept::GradeTooLowExcept() : std::logic_error("Grade was set too low\n") {
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a) {
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << "." << std::endl;
	return os;
}
