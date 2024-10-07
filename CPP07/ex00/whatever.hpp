#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T &a, T &b)
{
    if(&a == &b)
        return;
    T temp = a;
    a = b;
    b = temp;
}

template<typename T> T min(T &a, T &b)
{
    return((a < b) ? a: b);
}

template<typename T> T max(T &a, T &b)
{
    return((a > b) ? a: b);
}

#endif