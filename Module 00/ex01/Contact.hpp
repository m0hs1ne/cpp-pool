#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_nb;
        std::string darksecret;
};

Contact		add_contact(void);
void	search_contact(class Phonebook *book, int *i);

#endif