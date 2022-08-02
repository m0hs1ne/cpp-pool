#include "Contact.hpp"
#include "PhoneBook.hpp"

void	menu(void)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "| Choose an option:                         |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|-> ADD                                     |" << std::endl;
	std::cout << "|-> SEARCH                                  |" << std::endl;
	std::cout << "|-> EXIT                                    |" << std::endl;
	std::cout << "*********************************************" << std::endl;
}

int	main(void)
{
	int			i = 0;
    int         j = 0;
	bool		quit = false;
	Phonebook	book;

	std::string	input;
	while (quit == false)
	{
		menu();
		if ((prompt_and_input(input, &book, &i, &j)) > 0)
			quit = true;
	}
	std::cout << "Have a nice day, bye !" << std::endl;
	return (0);
}
