#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename F> void iter(T *array, int length, F func)
{
    if (!array || !func)
        return;
    for(int i = 0; i < length; i++)
        func(array[i]);
}

#endif