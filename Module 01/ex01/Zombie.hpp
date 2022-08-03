#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        std::string getName()
        {
            return (name);
        }

        void setName(std::string name1)
        {
            name = name1;
        }
};
Zombie *zombieHorde(int n,std::string type);

#endif