/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:43:41 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/25 18:49:01 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void clean_buff() {
	clearerr(stdin);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
