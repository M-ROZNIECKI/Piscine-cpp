#include "Span.hpp"
#include <iostream>

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try {
        sp.addNumber(42);
    } catch (Span::TooManyNumber &e) {
        std::cout << e.what() << std::endl;
    }

    Span sp2 = Span(5);
    try {
        sp2.shortestSpan();
    } catch (Span::NotEnoughNumber &e) {
        std::cout << e.what() << std::endl;
    }
    sp2.addNumber(10);
    try {
        sp2.shortestSpan();
    } catch (Span::NotEnoughNumber &e) {
        std::cout << e.what() << std::endl;
    }
    sp2.addNumber(100);
    sp2.addNumber(10000);
    sp2.addNumber(1000000);
    sp2.addNumber(100000000);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    Span sp3 = Span(10000);
    std::set<int> input;

    srand(time(NULL));
    for (unsigned int i = 0; i < sp3.getMax(); i++) {
        int r = rand() % 100000;
        input.insert(r);
//        std::cout << r << " ";
    }
    std::cout << std::endl;

    sp3.addNumber(input.begin(), input.end());

    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
}
