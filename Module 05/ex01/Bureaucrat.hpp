#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &op);
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "\033[0;91mGrade too high\033[0m";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "\033[0;91mGrade too low\033[0m";
		}
	};

private:
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif /* ****************************************************** BUREAUCRAT_H */