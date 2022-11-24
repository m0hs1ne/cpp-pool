#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "Nameless FragTrap constructor called" << std::endl;
	this->name = "nameless";
	this->hPoints = 100;
	this->ePoints = 100;
	this->aDamage = 30;
}

FragTrap::FragTrap(std::string _name)
{
	this->name = _name;
	this->hPoints = 100;
	this->ePoints = 100;
	this->aDamage = 30;
	std::cout << "FragTrap " << this->name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
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

void FragTrap::highFivesGuys()
{
	if (this->hPoints > 0)
		std::cout << "FragTrap " << this->name << " gives a high five" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is dead" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */