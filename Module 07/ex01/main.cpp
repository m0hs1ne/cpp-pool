#include "iter.hpp"
#include <functional>

template <typename T>
void print(const T &to_print)
{
    std::cout << " - " << to_print << " - " << std::endl;
}

int main()
{
    std::string s[] = {"Hello", "World", "!"};
    int a[] = {1, 2, 3, 4};

    iter(a, 4, &print);

    std::cout << std::endl
              << "***********************" << std::endl
              << std::endl;

    iter(s, 3, &print);
}