#include <iostream>
#include <unistd.h>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap Casca;
    ClapTrap Guts("Guts");

    Casca.attack("Griffith");
    Guts.attack("Griffith");
    Casca.takeDamage(5);
    Guts.takeDamage(10);
    Casca.beRepaired(5);
    Guts.beRepaired(10);
}