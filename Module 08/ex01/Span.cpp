#include "Span.hpp"

Span::Span() : max(0) {
}

Span::Span(unsigned int max): max(max) {
}

Span::Span(const Span &clone): max(clone.max) {
    set.clear();
    set = clone.set;
}

Span::~Span() {
    set.clear();
}

void Span::addNumber(int number) {
    if (set.size() >= max)
        throw Span::TooManyNumber();
    set.insert(number);
}

void Span::spanPossible() const {
    if (set.size() <= 1)
        throw Span::NotEnoughNumber();
}

int Span::shortestSpan() const {
    spanPossible();

    std::set<int> distances;
    for (std::set<int>::iterator it = set.begin(); it != set.end();)
        distances.insert(std::abs(*it - *++it));

    return *distances.begin();
}

int Span::longestSpan() const {
    spanPossible();
    return *std::max_element(set.begin(), set.end()) - *std::min_element(set.begin(), set.end());
}

Span &Span::operator=(const Span &copy) {
    if (this == &copy)
        return *this;

    max = copy.max;
    set.clear();
    set = copy.set;
    return *this;
}

unsigned int Span::getMax() const {
    return max;
}

const char *Span::TooManyNumber::what() const throw() {
    return "Too many number";
}

const char *Span::NotEnoughNumber::what() const throw() {
    return "Not enough number to calculate a span";
}
