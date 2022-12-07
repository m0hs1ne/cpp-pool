#include "easyfind.hpp"
#include <vector>
#include <array>
int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(0);
        v.push_back(2);
        v.push_back(1);
        v.push_back(4);
        v.push_back(5);
        std::cout << easyfind(v, 1) << std::endl;
        std::cout << easyfind(v, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::array<int, 5> a;
        a[0] = 0;
        a[1] = 2;
        a[2] = 1;
        a[3] = 4;
        a[4] = 5;
        std::cout << easyfind(a, 1) << std::endl;
        std::cout << easyfind(a, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}