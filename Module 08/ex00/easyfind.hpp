#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(const T &container, int target) {
    typename T::const_iterator res = std::find(container.begin(), container.end(), target);
    if (res == container.end())
        throw std::logic_error("Not found");
    else
        return std::distance(container.begin(), res);
}

#endif //EASYFIND_HPP
