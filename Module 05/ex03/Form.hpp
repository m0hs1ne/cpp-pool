#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	virtual ~Form();

	Form &operator=(Form const &rhs);

	const std::string &getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &b);

	void execute(Bureaucrat const &executor) const;
	virtual void AForm() const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade is Too High");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade is Too Low");
		}
	};

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Form not signed to execute it");
		}
	};

private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif /* ************************************************************ FORM_H */