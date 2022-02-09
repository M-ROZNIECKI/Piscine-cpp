//
// Created by flifloo on 05/02/2022.
//

#ifndef PISCINE_CPP_SPAN_HPP
#define PISCINE_CPP_SPAN_HPP


#include "Span.hpp"
#include <set>
#include <algorithm>

class Span {
    private:
        unsigned int max;
        std::set<int> set;

        void spanPossible() const;

    public:
        Span();
        Span(unsigned int max);
        Span(const Span &clone);
        ~Span();
        void addNumber(int number);
        template <typename T>
        void addNumber(T start, T end);
        int shortestSpan() const;
        int longestSpan() const;
        unsigned int getMax() const;
        Span &operator=(Span const &copy);

        class TooManyNumber: std::exception {
            public:
                virtual const char* what() const throw();
        };

        class NotEnoughNumber: std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#include "Span.tpp"

#endif //PISCINE_CPP_SPAN_HPP
