/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:00:02 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 15:18:10 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <stdexcept>

template<typename T>
class Array {

	private:
		T*				arr;
		unsigned int	n;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array&);
		~Array();

		Array<T>&	operator=(const Array<T>&);
		T&			operator[](int index);

		unsigned int	size();

		class OutOfRange : public std::logic_error {
			public:
				OutOfRange();
		};

};

#include "Array.tpp"

#endif //ITER_HPP