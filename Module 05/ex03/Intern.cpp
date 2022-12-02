#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(const std::string &FormName, const std::string &TargetName)
{
	std::string Forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*ptr[3])(const std::string &) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	Form *form;

	for (int i = 0; i < 3; i++)
	{
		if (FormName == Forms[i])
		{
			form = (this->*(ptr[i]))(TargetName);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	std::cout << "Intern can't find " << FormName << " Form ." << std::endl;
	return (NULL);
}

Form *Intern::makeShrubberyCreationForm(const std::string &TargetName)
{
	return (new ShrubberyCreationForm(TargetName));
}

Form *Intern::makeRobotomyRequestForm(const std::string &TargetName)
{
	return (new RobotomyRequestForm(TargetName));
}

Form *Intern::makePresidentialPardonForm(const std::string &TargetName)
{
	return (new PresidentialPardonForm(TargetName));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */