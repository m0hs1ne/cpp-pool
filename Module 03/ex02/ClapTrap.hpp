#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	unsigned int hPoints;
	unsigned int ePoints;
	unsigned int aDamage;
};

#endif /* ******************************************************** CLAPTRAP_H */