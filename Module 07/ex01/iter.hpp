#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, std::size_t length, void (*func)(const T &))
{
    for (std::size_t i = 0; i < length; ++i)
    {
        func(arr[i]);
    }
}

#endif