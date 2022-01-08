/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:39:20 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/08 22:16:59 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1) {
		for (int i = 1; i < argc; i++)
			for (int n = 0;  argv[i][n]; n++)
				std::cout << (char) std::toupper(argv[i][n]);
		std::cout << std::endl;
	}
	return 0;
}
