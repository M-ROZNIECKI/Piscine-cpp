/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:54:41 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 18:14:14 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <iomanip>
#include "convert.hpp"

int main(int argc, char **argv) {
	char	aChar;
	int		aInt, sign;
	float	aFloat;
	double	aDouble;
	std::string	inputStr = argv[1];

	if (argc != 2) {
		std::cout << "error number of argument not respected" << std::endl ;
		return 1;
	}

	Convert	conv(inputStr);
	conv.checkType();
	if (inputStr[0] == '+' || inputStr[0] == '-')
		sign = 1;
	switch (conv.getType()) {
		case 0x01:	aChar	= inputStr[0];
			aInt	= static_cast<int>(aChar);
			aFloat	= static_cast<float>(aChar);
			aDouble	= static_cast<double>(aChar);
			break;
		case 0x02:
			if (inputStr.find_first_not_of("0123456789", sign) !=
			std::string::npos) {
				std::cout << "Not a valid value" << std::endl;
				return 1;
			}
			if (std::strtod(inputStr.c_str(), NULL) <= INT_MAX &&
			std::strtod(inputStr.c_str(), NULL) >= INT_MIN) {
				aInt	= std::atoi(inputStr.c_str());
				aFloat	= static_cast<float>(aInt);
				aDouble	= static_cast<double>(aInt);
				aChar	= static_cast<char>(aInt);
				break;
			}
		case 0x08:
			try {
				aDouble = std::atof(inputStr.c_str());
				aFloat	= static_cast<float>(aDouble);
				aInt	= static_cast<int>(aDouble);
				aChar	= static_cast<char>(aDouble);
			} catch (std::exception& e) {
				std::cout << "Not a valid value" << std::endl;
				return 1;
			}
			break;
		case 0x04:
			try {
				aFloat	= std::atof(inputStr.c_str());
				aDouble	= static_cast<double>(aFloat);
				aInt	= static_cast<int>(aFloat);
				aChar	= static_cast<char>(aFloat);
			} catch (std::exception& e) {
				std::cout << "Not a valid value" << std::endl;
				return 1;
			}
			break;
		default:
			return 2;
	}

	if (aDouble > 127 || aDouble < 0 || aDouble != aDouble)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(aChar))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << aChar << '\'' << std::endl;
	if (aDouble > INT_MAX || aDouble < INT_MIN || aDouble != aDouble)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << aInt << std::endl;
	std::cout << "float: " << aFloat;
	if (inputStr == "+inf" || inputStr == "-inf" ||
		inputStr == "+inff" || inputStr == "-inff" || aDouble != floor(aDouble))
		std::cout << "f" << std::endl;
	else
		std::cout << ".0f" << std::endl;
	std::cout << "double: " << aDouble;
	if (inputStr == "+inf" || inputStr == "-inf" ||
	inputStr == "+inff" || inputStr == "-inff" || aDouble != floor(aDouble))
		std::cout << std::endl;
	else
		std::cout << ".0" << std::endl;

	return 0;
}
