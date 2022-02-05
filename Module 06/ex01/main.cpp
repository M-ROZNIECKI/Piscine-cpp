/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:36:58 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 18:39:46 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

int main() {
	Data	data;
	Data	*ptrData;

	std::cout << "data addr: " << &data << std::endl;
	ptrData = deserialize(serialize(&data));
	std::cout << "data addr: " << ptrData << " after serialize/deserialize";
	std::cout << std::endl;
	ptrData->i = 666;
	std::cout << "ptrData->i = " << ptrData->i << std::endl;
	data.i = 777;
	std::cout << "ptrData->i = " << ptrData->i << " after having set data.i at 777";
	std::cout << std::endl;
	return 0;
}