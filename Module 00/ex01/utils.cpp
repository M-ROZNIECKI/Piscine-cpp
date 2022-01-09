/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:43:41 by mrozniec          #+#    #+#             */
/*   Updated: 2022/01/09 14:43:41 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void clean_buff() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
