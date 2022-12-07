#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _v = rhs._v;
        _n = rhs._n;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_v.size() == _n)
        throw FullException();
    _v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::cout << "size: " << _v.size() << std::endl;
    std::cout << "n: " << _n << std::endl;
    if (_v.size() + (end - begin) > _n)
        throw FullException();
    _v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw NoSpanException();
    std::vector<int> v(_v);
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < min)
            min = v[i] - v[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (_v.size() < 2)
        throw NoSpanException();
    std::vector<int> v(_v);
    std::sort(v.begin(), v.end());
    return v[v.size() - 1] - v[0];
}

const char *Span::FullException::what() const throw()
{
    return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "Span has no span";
}
