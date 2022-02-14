/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:00:02 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 13:50:44 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename Tab>
void	iter(const Tab* tab, size_t l, void (*fct)(const Tab& tab)) {
	for (size_t i = 0; i < l; ++i)
		(*fct)(tab[i]);
}

template<typename Tab>
void	iter(Tab* tab, size_t l, void (*fct)(Tab& tab)) {
	for (size_t i = 0; i < l; ++i)
		(*fct)(tab[i]);
}

#endif //ITER_HPP
