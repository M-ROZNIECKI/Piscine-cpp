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

template<typename Tab, typename TLength>
void	iter(const Tab* tab, TLength l, void (*fct)(const Tab& tab)) {
	for (int i = 0; i < l; ++i)
		(*fct)(tab[i]);
}

#endif //ITER_HPP
