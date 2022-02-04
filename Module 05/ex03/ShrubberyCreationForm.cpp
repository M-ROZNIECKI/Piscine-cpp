/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:59:12 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 18:06:55 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("shrubbery creation", 145, 137), target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& istarget) :
Form("shrubbery creation", 145, 137), target(istarget) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old) :
Form(old), target(old.getTarget()) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old) {
	if (this == &old)
		return *this;
	this->target = old.getTarget();
	setSignature(old.getSignature());
	return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::beSigned(Bureaucrat &old) {
	checkLvl(this->getSignGrade(), old);
	this->setSignature(true);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw NoSignatureExcept();
	checkLvl(this->getExecGrade(), executor);
	std::string fileName, errorMsg;
	fileName = target + "_shrubbery";
	errorMsg = "Shrubbery Form can't open the file " + fileName;
	std::ofstream outFile;
	outFile.open(fileName.c_str(), std::ofstream::app | std::ofstream::out);
	if (!outFile.is_open())
		throw std::ios_base::failure(errorMsg);
	outFile << "     ^     " << std::endl;
	outFile << "    / \\    " << std::endl;
	outFile << "   /   \\   " << std::endl;
	outFile << "  /     \\  " << std::endl;
	outFile << " /_______\\ " << std::endl;
	outFile << "    |_|    " << std::endl;
	outFile.close();
}

ShrubberyCreationForm::NoSignatureExcept::NoSignatureExcept() :
		std::logic_error("No signature present inside the Form") {
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &a) {
	os << "Form " << a.getName() << ", need a grade " << a.getSignGrade();
	os << " for a signature and a grade " << a.getExecGrade();
	os << " to be executed" << std::endl;
	if (a.getSignature())
		os << "this form is signed and his target is " << a.getTarget() << std::endl;
	else
		os << "this form is not signed and his target is " << a.getTarget() << std::endl;
	return os;
}
