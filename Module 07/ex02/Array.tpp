/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrozniec <mrozniec@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:54:12 by mrozniec          #+#    #+#             */
/*   Updated: 2022/02/06 15:22:13 by mrozniec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(new T[0]), n(0) {
}

template<typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), n(n) {
}

template<typename T>
Array<T>::Array(const Array &old) : arr(new T[old.size()]), n(old.size()) {
	for (int i = 0; i < this->n; ++i)
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
	delete [] this->arr;
	this->n = old.size();
	this->arr = new T[this->n];
	for (int i = 0; i < this->n; ++i)
		this->arr[i] = old[i];
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) {
	if (index >= static_cast<int>(this->n) || index < 0)
		throw OutOfRange();
	return this->arr[index];
}

template<typename T>
unsigned int Array<T>::size() {
	return this->n;
}

template<typename T>
Array<T>::OutOfRange::OutOfRange() : std::logic_error("Out of range") {
}

#endif //ARRAY_TPP
