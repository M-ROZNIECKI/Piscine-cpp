/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:32:02 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 16:09:43 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert() : inputStr(), inputType(0) {
}

Convert::Convert(const std::string &newStr) : inputStr(newStr), inputType(0) {
}

Convert::Convert(const Convert &old) : inputStr(old.getString()), inputType(old.getType()) {
}

Convert::~Convert() {
}

Convert &Convert::operator=(const Convert &old) {
	if (this == &old)
		return *this;
	this->inputType = old.getType();
	this->inputStr = old.getString();
	return *this;
}

void Convert::checkType() {
	if (inputStr.length() == 1 && !std::isdigit(inputStr[0]))
		inputType = 0x01;
	else if (inputStr == "nan" || inputStr == "-inf" || inputStr == "+inf" ||
			((inputStr.find('.') != std::string::npos) &&
			inputStr.find('f') == std::string::npos))
		inputType = 0x08;
	else if ((inputStr.find('f') == inputStr.length() - 1) ||
			inputStr == "nanf" || inputStr == "+inff" || inputStr == "-inff")
		inputType = 0x04;
	else
		inputType = 0x02;
}

int Convert::getType() const {
	return inputType;
}

std::string Convert::getString() const {
	return inputStr;
}
