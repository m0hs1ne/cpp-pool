#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->type = weaponType;
}

Weapon::~Weapon()
{
	return;
}

const std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string& _type)
{
	this->type = _type;
}