#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

# define  NC = \033[0m
# define  RED = \033[0;91m
# define  ORANGE = \033[93m
# define  GREEN = \033[0;92m
# define  PURPLE = \033[0;95m
# define  BLUE = \033[0;34m
# define  BOLD = \033[1m
class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        Contact contact[8];

};




#endif