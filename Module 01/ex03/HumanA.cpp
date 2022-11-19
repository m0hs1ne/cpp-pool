#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	// std::cout << "HumanA assigned" << std::endl;
	return;
}

HumanA::~HumanA()
{
	// std::cout << "HumanA default destructor called" << std::endl;
	return ;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}