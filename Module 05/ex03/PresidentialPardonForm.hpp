#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	void AForm() const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

private:
	std::string _target;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */