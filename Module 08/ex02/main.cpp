#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    std::cout << "Test with list" << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << "lst back = " << list.back() << std::endl;
    list.pop_back();
    std::cout << "size = " << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    //[...]
    list.push_back(0);
    std::list<int>::iterator it_list = list.begin();
    std::list<int>::iterator ite_list = list.end();
    ++it_list;
    --it_list;
    while (it_list != ite_list) {
        std::cout << *it_list << std::endl;
        ++it_list;
    }
	std::cout << "test with reverse iterator:" << std::endl;
	std::list<int>::reverse_iterator it_list2 = list.rbegin();
	std::list<int>::reverse_iterator ite_list2 = list.rend();
	++it_list2;
	--it_list2;
	while (it_list2 != ite_list2) {
		std::cout << *it_list2 << std::endl;
		++it_list2;
	}

    std::cout << std::endl << "Test with MutantStack" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

	std::cout << "test with reverse iterator:" << std::endl;

	MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite2 = mstack.rend();

 	++it2;
 	--it2;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int> s(mstack);
    return 0;
}
