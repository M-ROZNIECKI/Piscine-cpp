/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:54:01 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/08 22:54:01 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_UTILS_H
#define PISCINE_CPP_UTILS_H

#include <iostream>
#include <limits>

inline void clean_buff() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif //PISCINE_CPP_UTILS_H
