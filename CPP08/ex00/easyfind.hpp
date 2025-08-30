#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
    {
        throw std::runtime_error("Value is not in container!\n");
    }
    return it;
}

#endif