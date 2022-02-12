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
	int sign = 0;
	long int temp = 0;
	char	*strTemp;

	if (inputStr[0] == '+' || inputStr[0] == '-')
		sign = 1;
	if (inputStr.length() == 4 && inputStr[0] == '\\' &&
	inputStr.find_first_not_of("01234567", 1) == std::string::npos) {
		temp = strtol(inputStr.c_str() + 1, NULL, 8);
		// arriver a 256 ca reboucle, tester dans la console print '\576' et print '\176'
		if (temp > 255)
			temp -= 256;
		if (temp < 128) {
			strTemp = new char[2];
			strTemp[0] = temp;
			strTemp[1] = 0;
			inputStr = strTemp;
			delete strTemp;
			inputType = 0x01;
			return;
		}
		else if (temp < 256) {
			strTemp = new char[2];
			strTemp[0] = 127 - temp;
			strTemp[1] = 0;
			inputStr = strTemp;
			delete strTemp;
			inputType = 0x01;
			return;
		}
	}
	if (inputStr.length() == 1 && !std::isdigit(inputStr[0]))
		inputType = 0x01;
	else if (inputStr == "nan" || inputStr == "-inf" || inputStr == "+inf" ||
			((inputStr.find('.') != std::string::npos) &&
			inputStr.find_first_not_of("0123456789.", sign) == std::string::npos))
		inputType = 0x08;
	else if ((inputStr.find('f') == inputStr.length() - 1 &&
			  inputStr.find_first_not_of("0123456789.f", sign) == std::string::npos) ||
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
