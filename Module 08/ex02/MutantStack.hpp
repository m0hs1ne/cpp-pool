#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &src) : std::stack<T>(src) {}
    ~MutantStack() {}
    MutantStack &operator=(MutantStack const &rhs)
    {
        if (this != &rhs)
            operator=(rhs);
        return *this;
    }

    typedef typename std::deque<T>::iterator iterator;

    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif