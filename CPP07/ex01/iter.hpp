#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T> void iter(T *array, int length, void(*f)(T&))
{
    if (!array || !f)
        return;
    for(int i = 0; i < length; i++)
        f(array[i]);
}

#endif