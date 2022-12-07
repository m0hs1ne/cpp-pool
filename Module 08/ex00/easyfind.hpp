#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception
{
    virtual const char *what() const throw()
    {
        return "Not found";
    }
};

template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return *it;
}

#endif