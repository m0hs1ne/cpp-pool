#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Default Weapon constructor" << std::endl;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << "Weapon Constructor with parameter" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Default Weapon Destructor" << std::endl;
}