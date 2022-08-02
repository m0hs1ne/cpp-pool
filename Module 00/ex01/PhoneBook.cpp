#include "PhoneBook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
    // std::cout << "Phonebook created" << std::endl;
}

Phonebook::~Phonebook(void)
{
    // std::cout << "Phonebook destroyed" << std::endl;
}

int		prompt_and_input(std::string input, Phonebook *book, int *i, int *j)
{

	std::cout << std::endl;
	std::cout << ">";
	std::getline(std::cin, input);
    if (input.empty())
        return (1);
	if (input == "EXIT")
		return (1);
	else if (input == "ADD")
	{
		if (*i < 8)
        {
			book->contact[*i] = add_contact();
            if (book->contact[*i].first_name.empty() || book->contact[*i].last_name.empty() || book->contact[*i].nickname.empty() || book->contact[*i].phone_nb.empty() || book->contact[*i].darksecret.empty())
            {
                std::cout << "Contact is not complete" << std::endl;
                return (1);
            }
            std::cout << std::endl << "Contact added to the Phonebook" << std::endl;
            std::cout << std::endl;
            *i += 1;
        }
		else
        {
			book->contact[*j] = add_contact();
            *j += 1;
        }
        if (*j == 8)
            *j = 0;
	}
	else if (input == "SEARCH")
		search_contact(book, i);
    else
        std::cout << "Invalid command" << std::endl;
	return (0);
}