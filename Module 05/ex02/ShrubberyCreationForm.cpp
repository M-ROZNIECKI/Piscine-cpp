/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:59:12 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/04 16:40:27 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 145, 137), target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& istarget) :
Form("ShrubberyCreationForm", 145, 137), target(istarget) {
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
