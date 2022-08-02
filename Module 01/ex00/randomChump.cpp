#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *Zombie = newZombie(name);
    Zombie->setName(name);
    Zombie->announce();
    delete Zombie;
}