#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main() {
    std::cout << "Vector test" << std::endl;
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(-1);
    vec.push_back(10);
    vec.push_back(0);

    std::cout << "4 is in position: " << easyfind(vec, 4) << std::endl;
    try {
        std::cout << "42 is in position: " << easyfind(vec, 42) << std::endl;
    } catch (std::logic_error &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-1 is in position: " << easyfind(vec, -1) << std::endl;

    std::cout << std::endl << "List test" << std::endl;
    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(-1);
    list.push_back(10);
    list.push_back(0);
    std::cout << "5 is in position: " << easyfind(list, 5) << std::endl;
    std::cout << "0 is in position: " << easyfind(list, 0) << std::endl;

	return 0;
}
