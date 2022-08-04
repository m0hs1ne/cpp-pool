#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    if (name.empty())
        return ;
    std::cout << name << " Constructor" <<std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " Destructor" << std::endl;
}

void HumanA::attack()
{
    if (this->_weapon.getType().empty())
        return ;
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}