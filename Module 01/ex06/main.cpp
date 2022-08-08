#include "HarlFilter.hpp"

int main(int ac,char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./HarlFilter level" << std::endl;
        return (0);
    }
    HarlFilter harl;
    harl.complain(av[1]);
    return (1);
}