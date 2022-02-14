/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:45:27 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 14:04:49 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void	print_test(T t) {
	std::cout << t << std::endl;
}

template<typename T>
void	inc_test(T t) {
	t++;
}

int main() {
	const std::string	s[5] = {"hello", "hi", "iter", "is", "the nuclear future"};
	int	i[5] = {0, 1, 2, 3, 4};

	iter(s, 5, &print_test);
	iter(i, 5, &print_test);
	iter(i, 5, &inc_test);
	iter(i, 5, &print_test);
	return 0;
}