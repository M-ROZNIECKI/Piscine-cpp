/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:54:12 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 12:13:34 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main() {
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << " , &a = " << &a << std::endl;
	std::cout << "b = " << b << " , &b = " << &b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " , &a = " << &a << std::endl;
	std::cout << "b = " << b << " , &b = " << &b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << " , &min( a, b ) = ";
	std::cout << &min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << " , &max( a, b ) = ";
	std::cout << &max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;

	return 0;
}
