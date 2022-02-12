/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:01:14 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 17:46:07 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("robotomy request", 72, 45), target("default") {
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &istarget) :
Form("robotomy request", 72, 45), target(istarget) {
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old) :
Form(old), target(old.getTarget()) {
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &old) {
	if (this == &old)
		return *this;
	this->target = old.getTarget();
	setSignature(old.getSignature());
	return *this;
}

const std::string &RobotomyRequestForm::getTarget() const {
	return this->target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw NoSignatureExcept();
	checkLvl(this->getExecGrade(), executor);
	int	randomizer = rand() % 100;
	std::cout << "random drill sound" << std::endl;
	if (randomizer > 49)
		std::cout << target << " was robotomised successfully" << std::endl;
	else
		std::cout << "the robotomy of " << target << " was a failure!!" << std::endl;
}

RobotomyRequestForm::NoSignatureExcept::NoSignatureExcept() :
		std::logic_error("No signature present inside the Form") {
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &a) {
	os << "Form " << a.getName() << ", need a grade " << a.getSignGrade();
	os << " for a signature and a grade " << a.getExecGrade();
	os << " to be executed" << std::endl;
	if (a.getSignature())
		os << "this form is signed and his target is " << a.getTarget() << std::endl;
	else
		os << "this form is not signed and his target is " << a.getTarget() << std::endl;
	return os;
}
