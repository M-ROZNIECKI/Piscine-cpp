#ifndef PISCINE_CPP_MUTANTSTACK_HPP
#define PISCINE_CPP_MUTANTSTACK_HPP

#include <stack>
#include <ostream>
#include <vector>
#include <algorithm>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public:
        class iterator : public std::iterator<std::input_iterator_tag, T, long, const T*, T> {
            private:
                std::vector<T> content;
                unsigned int position;
            public:
                explicit iterator(const MutantStack &stack, long position = 0);
                ~iterator();
                void operator++();
                void operator--();
                bool operator!=(const iterator &other) const;
                T operator*() const;
        };

        iterator begin() const;

        iterator end() const;
};

#include "MutantStack.tpp"

#endif //PISCINE_CPP_MUTANTSTACK_HPP
