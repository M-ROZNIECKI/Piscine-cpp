/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:45:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 15:22:13 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	Array<int>	arr(10);

	std::cout << "arr[2] = " << arr[2] << std::endl;
	arr[2] = 16;
	std::cout << "arr[2] = " << arr[2] << std::endl;

	return 0;
}
