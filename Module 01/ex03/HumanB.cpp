#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	// std::cout << "HumanB default constructor called" << std::endl;
	return;
}

HumanB::~HumanB()
{
	// std::cout << "HumanB default destructor called" << std::endl;
	return;
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}