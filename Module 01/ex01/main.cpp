#include "./Zombie.hpp"

int main()
{
    Zombie *test = zombieHorde(5,"m0hs1ne");
    test->announce();
    delete [] test;
}