#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        Contact contact[8];

};

int		prompt_and_input(std::string input, Phonebook *book, int *i, int *j);


#endif