#include <iostream>
#include <unistd.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Casca;
    ScavTrap Guts("Guts");

    Casca.attack("Griffith");
    Guts.attack("Griffith");
    Casca.takeDamage(5);
    Guts.takeDamage(100);
    Casca.beRepaired(5);
    Guts.beRepaired(10);
    Casca.guardGate();
    Guts.guardGate();
}