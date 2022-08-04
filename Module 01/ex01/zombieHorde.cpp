#include "Zombie.hpp"

Zombie *zombieHorde(int n,std::string name)
{
    if (n < 0)
        return 0;
    Zombie *zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
        zombie[i].setName(name);
    return (zombie);
}