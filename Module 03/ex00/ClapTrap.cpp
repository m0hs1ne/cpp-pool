#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : name("nameless"), hPoints(10), ePoints(10), aDamage(0)

{
    std::cout << "Nameless constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hPoints(10), ePoints(10), aDamage(0)
{
    std::cout << this->name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
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

void ClapTrap::attack(const std::string &target)
{
    if (!this->hPoints)
    {
        std::cout << "ClapTrap " << this->name << " He's died!" << std::endl;
        return;
    }
    if (this->ePoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->aDamage << " points of damage!" << std::endl;
        this->ePoints--;
    }
    else
        std::cout << "ClapTrap " << this->name << " does not have enough Energy to Attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->hPoints)
    {
        std::cout << "ClapTrap " << this->name << " He's died!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " take " << amount << " of Damage!" << std::endl;
    if (amount > this->hPoints)
        this->hPoints = 0;
    else
        this->hPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hPoints)
    {
        std::cout << "ClapTrap " << this->name << " He's died!" << std::endl;
        return;
    }
    if (this->ePoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " recover " << amount << " of he's Hit points!" << std::endl;
        if (amount + this->hPoints > 4294967295)
            this->hPoints = 4294967295;
        else
            this->hPoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " does not have enough Energy to be Repaired" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */