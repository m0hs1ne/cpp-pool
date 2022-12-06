#include "Array.hpp"

int main()
{
    Array<int> a(10);

    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << std::endl;
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<int> b(a);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << b[i] << std::endl;
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<int> c(5);

    c = a;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << c[i] << std::endl;
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    std::cout << a.size() << std::endl;

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<std::string> d(3);

    d[0] = "Hello";
    d[1] = "World";
    d[2] = "!";

    for (int i = 0; i < 3; ++i)
    {
        std::cout << d[i] << " ";
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<std::string> e(d);

    for (int i = 0; i < 3; ++i)
    {
        std::cout << e[i] << " ";
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<std::string> f(2);

    f = d;

    for (int i = 0; i < 3; ++i)
    {
        std::cout << f[i] << " ";
    }

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    std::cout << d.size() << std::endl;

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    Array<std::string> g;

    std::cout << g.size() << std::endl;

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;
}