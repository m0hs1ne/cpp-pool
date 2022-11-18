#include "./Zombie.hpp"

int main()
{
    Zombie* test = newZombie("m0hs1ne");
    test->announce();
    randomChump("Guts");
    delete test;
}