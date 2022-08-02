#include "Zombie.hpp"

int main()
{
    Zombie guts;
    guts.setName("Guts");
    Zombie *casca = newZombie("Casca");
    randomChump("Griffith");
    casca->announce();
    guts.announce();
    delete casca;
    return 0;
}