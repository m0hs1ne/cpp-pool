#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE EXPLOSION *" << std::endl;
    else
    {
        std::string str = "";
        for (int i = 1; i < ac; i++)
        {
            for (size_t j = 0; j < strlen(av[i]); j++)
                str += toupper(av[i][j]);
        }
        std::cout <<  str << std::endl;
    }
    return (0);
}