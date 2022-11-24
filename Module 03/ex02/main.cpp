#include <iostream>
#include <unistd.h>
#include "FragTrap.hpp"

int main()
{
    FragTrap Casca;
    FragTrap Guts("Guts");

    Casca.attack("Griffith");
    Guts.attack("Griffith");
    Casca.takeDamage(5);
    Guts.takeDamage(100);
    Casca.beRepaired(5);
    Guts.beRepaired(10);
    Casca.highFivesGuys();
    Guts.highFivesGuys();
}