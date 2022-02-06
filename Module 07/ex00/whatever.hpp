/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:55:28 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/05 20:01:57 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T&	min(T& a, T& b) {
	if (a < b)
		return a;
	return b;
}

template<typename T>
T&	max(T& a, T& b) {
	if (a > b)
		return a;
	return b;
}

#endif //WHATEVER_HPP
