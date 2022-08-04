#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string _type;
    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type)
        {
            this->_type = type;
        }
        std::string const &getType()
        {
            return (this->_type);
        }

};

#endif