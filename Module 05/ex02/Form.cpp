/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:47:38 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 14:07:55 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), signature(false), signGrade(1), execGrade(1) {
}

Form::Form(const std::string &docName, const unsigned int signLvl,
		   const unsigned int execLvl) : name(docName), signature(false),
		   signGrade(signLvl), execGrade(execLvl) {
	if (signLvl > 150 || execLvl > 150)
		throw GradeTooLowExcept();
	if (signLvl < 1 || execLvl < 1)
		throw GradeTooHighExcept();
}

Form::Form(const Form &old) : name(old.getName()), signature(old.getSignature()),
							signGrade(old.getSignGrade()), execGrade(old.execGrade) {
}

Form::~Form() {
}

Form &Form::operator=(const Form &old) {
	if (this == &old)
		return *this;
	this->signature = old.getSignature();
	return *this;
}

const std::string &Form::getName() const {
	return this->name;
}

const bool&	Form::getSignature() const {
	return this->signature;
}

const unsigned int&	Form::getSignGrade() const {
	return this->signGrade;
}

const unsigned int&	Form::getExecGrade() const {
	return this->execGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	checkLvl(this->signGrade, bureaucrat);
	this->setSignature(true);
}

void Form::setSignature(bool settings) {
	this->signature = settings;
}

void Form::checkLvl(unsigned int lvl, const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > lvl)
		throw GradeTooLowExcept();
}

Form::GradeTooHighExcept::GradeTooHighExcept() : std::logic_error("Grade was too high") {
}

Form::GradeTooLowExcept::GradeTooLowExcept() : std::logic_error("Grade was too low") {
}

std::ostream &operator<<(std::ostream &os, const Form &a) {
	os << "Form " << a.getName() << ", need a grade " << a.getSignGrade();
	os << " for a signature and a grade " << a.getExecGrade();
	os << " to be executed" << std::endl;
	if (a.getSignature())
		os << "this form is signed" << std::endl;
	else
		os << "this form is not signed" << std::endl;
	return os;
}
