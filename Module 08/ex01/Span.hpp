#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<int> _v;
    unsigned int _n;
    Span();

public:
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();
    Span &operator=(Span const &rhs);
    void addNumber(int n);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
    class FullException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class NoSpanException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif