
#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {
}

template<class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T> &old) :
std::stack<T, Container>(old) {
}

template<class T, class Container>
MutantStack<T, Container>::~MutantStack() {
}

template<class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &old) {
	if (this == &old)
		return *this;
	this->c = old.c;
	return *this;
}

template<class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
	return this->c.begin();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
	return this->c.begin();
}

template<class T, class Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin() {
	return this->c.rbegin();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin() const {
	return this->c.rbegin;
}

template<class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
	return this->c.end();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
	return this->c.end();
}

template<class T, class Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend() {
	return this->c.rend();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend() const {
	return this->c.rend();
}

#endif //MUTANTSTACK_TPP
