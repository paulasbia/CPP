#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>

template<typename T> void swap(T &a, T &b)
{
    if(&a ==&b)
        return;
    T temp = a;
    a = b;
    b = temp;
}

#endif