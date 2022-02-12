/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:02:05 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/02 23:02:05 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("presidential pardon", 25, 5), target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &istarget) :
Form("presidential pardon", 25, 5), target(istarget) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old) :
Form(old), target(old.getTarget()) {

}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &old) {
	if (this == &old)
		return *this;
	this->target = old.getTarget();
	setSignature(old.getSignature());
	return *this;
}

const std::string &PresidentialPardonForm::getTarget() const {
	return this->target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw NoSignatureExcept();
	checkLvl(this->getExecGrade(), executor);
	std::cout << target << " received presidential pardon by Zaphod Beeblebrox";
	std::cout << std::endl;
}

PresidentialPardonForm::NoSignatureExcept::NoSignatureExcept() :
		std::logic_error("No signature present inside the Form") {
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &a) {
	os << "Form " << a.getName() << ", need a grade " << a.getSignGrade();
	os << " for a signature and a grade " << a.getExecGrade();
	os << " to be executed" << std::endl;
	if (a.getSignature())
		os << "this form is signed and his target is " << a.getTarget() << std::endl;
	else
		os << "this form is not signed and his target is " << a.getTarget() << std::endl;
	return os;
}
