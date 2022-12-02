#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Form *makeForm(const std::string &formName, const std::string &target);

	Form *makeShrubberyCreationForm(const std::string &target);
	Form *makeRobotomyRequestForm(const std::string &target);
	Form *makePresidentialPardonForm(const std::string &target);

	Intern &operator=(Intern const &rhs);

private:
};

#endif /* ********************************************************** INTERN_H */