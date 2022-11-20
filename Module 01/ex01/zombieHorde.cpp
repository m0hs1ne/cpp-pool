#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "baghi t9awlabni" << std::endl;
        exit(0);
    }
    Zombie *z = new Zombie[N];
    for(int i=0;i < N;i++)
        z[i].setName(name);
    return z;
}