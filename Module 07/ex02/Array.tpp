/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:54:12 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 15:48:51 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(new T[0]), n(0) {
}

template<typename T>
Array<T>::Array(size_t n) : arr(new T[n]), n(n) {
}

template<typename T>
Array<T>::Array(const Array<T> &old) : arr(new T[old.size()]), n(old.size()) {
	for (size_t i = 0; i < n; ++i)
		this->arr[i] = old[i];
}

template<typename T>
Array<T>::~Array() {
	delete [] arr;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &old) {
	if (this == old)
		return *this;
	delete [] arr;
	n = old.size();
	arr = new T[n];
	for (size_t i = 0; i < n; ++i)
		arr[i] = old[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](size_t index) const {
	if (index >= n || index < 0)
		throw std::out_of_range("Out of range");
	return this->arr[index];
}

template<typename T>
size_t Array<T>::size() const {
	return n;
}

#endif //ARRAY_TPP
