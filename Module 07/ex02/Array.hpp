/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:00:02 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 15:50:23 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <stdexcept>

template<typename T>
class Array {

	private:
		T*		arr;
		size_t	n;

	public:
		Array();
		Array(size_t n);
		Array(const Array<T>&);
		~Array();

		Array<T>&	operator=(const Array<T>&);
		T&			operator[](size_t index) const;

		size_t	size() const;

};

#include "Array.tpp"

#endif //ITER_HPP
