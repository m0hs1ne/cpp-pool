#include "./Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string _name)
{
    this->name = _name;
    std::cout << this->name << " Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destructor called" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}