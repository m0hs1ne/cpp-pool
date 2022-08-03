#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}