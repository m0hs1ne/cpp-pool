#include "Zombie.hpp"

Zombie *zombieHorde(int n,std::string name)
{
    Zombie *zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
        zombie[i].setName(name);
    return (zombie);
}