#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(NULL)
{
    std::cout << name << " Constructor" <<std::endl;
}

HumanB::HumanB()
{
    std::cout << "Default HumanB Destructor" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " Destructor" << std::endl;
}

void HumanB::attack()
{
    if (!_weapon)
        return ;
    std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}