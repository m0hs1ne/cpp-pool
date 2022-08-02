#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
    // std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
    // std::cout << "Contact destroyed" << std::endl;
}

void	print_strngap(std::string str)
{
	int i = 0;

	std::cout << str;
	while ((unsigned long)i < (10 - str.length()))
	{
		std::cout << " ";
		i++;
	}
	std::cout << "|";
}

void	print_nine(std::string str)
{
	int i = 0;

	while (i < 9)
	{
		putchar(str[i]);
		i++;
	}
	std::cout << ".|";
}


void	print_contact(class Phonebook *book)
{
	std::string	index;
	int			i = 0;

	std::cout << std::endl << "Enter the contact Index:" << std::endl << ">";
	std::getline(std::cin, index);
	while (i < 8)
	{
		if (index[0] - 48 == i && index[1] == '\0')
		{
            if (book->contact[i].first_name.empty())
            {
                std::cout << "Contact not found" << std::endl;
                return ;
            }
			std::cout << "************" << std::endl;
			std::cout << "|First name|	" << book->contact[i].first_name << std::endl;
			std::cout << "|Last name |	" << book->contact[i].last_name << std::endl;
			std::cout << "|Nickname  |	" << book->contact[i].nickname << std::endl;
			std::cout << "|Secret    |	" << book->contact[i].darksecret << std::endl;
			std::cout << "|Nb Phone  |	" << book->contact[i].phone_nb << std::endl;
			std::cout << "************\n" << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "Contact not found\n" << std::endl;
}

void	search_contact(class Phonebook *book, int *i)
{
	int j = 0;

	if (*i == 0)
	{
		std::cout << "The Phonebook is empty" << std::endl;
		return ;
	}
	else if (*i > 8 )
		*i = 8;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	while (j < *i)
	{
		std::cout << "|" << j << "         |";
		if (book->contact[j].first_name.length() > 10)
			print_nine(book->contact[j].first_name);
		else
			print_strngap(book->contact[j].first_name);
		if (book->contact[j].last_name.length() > 10)
			print_nine(book->contact[j].last_name);
		else
			print_strngap(book->contact[j].last_name);
		if (book->contact[j].nickname.length() > 10)
			print_nine(book->contact[j].nickname);
		else
			print_strngap(book->contact[j].nickname);
		std::cout << std::endl;
		j++;
	}
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	print_contact(book);
}

Contact		add_contact(void)
{
	Contact contact;

	std::cout << "First name:\n>";
	std::getline(std::cin, contact.first_name);
	std::cout << std::endl;
	std::cout << "Last name:\n>";
	std::getline(std::cin, contact.last_name);
	std::cout << std::endl;
	std::cout << "Nickname:\n>";
	std::getline(std::cin, contact.nickname);
	std::cout << std::endl;
	std::cout << "Phone number:\n>";
	std::getline(std::cin, contact.phone_nb);
	std::cout << std::endl;
	std::cout << "Darkest secret:\n>";
	std::getline(std::cin, contact.darksecret);
    std::cout << std::endl;
	return (contact);
}