#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "Nameless ScavTrap constructor called" << std::endl;
	this->name = "nameless";
	this->hPoints = 100;
	this->ePoints = 50;
	this->aDamage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->name = _name;
	this->hPoints = 100;
	this->ePoints = 50;
	this->aDamage = 20;
	std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hPoints = rhs.hPoints;
		this->ePoints = rhs.ePoints;
		this->aDamage = rhs.aDamage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string &target)
{
	if (!this->hPoints)
	{
		std::cout << "ScavTrap " << this->name << " He's died!" << std::endl;
		return;
	}
	if (this->ePoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->aDamage << " points of damage!" << std::endl;
		this->ePoints--;
	}
	else
		std::cout << "ScavTrap " << this->name << " does not have enough Energy to Attack" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!this->hPoints)
	{
		std::cout << "ScavTrap " << this->name << " He's died!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */