
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

	public:
		MutantStack();
		explicit MutantStack(const MutantStack<T>&);
		virtual	~MutantStack();

		MutantStack<T, Container>&	operator=(const MutantStack<T, Container>&);

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		const_iterator begin() const;
		reverse_iterator rbegin();
		const_reverse_iterator rbegin() const;

		iterator end();
		const_iterator end() const;
		reverse_iterator rend();
		const_reverse_iterator rend() const;

};

#include "MutantStack.tpp"

#endif //MUTANTSTACK_HPP
