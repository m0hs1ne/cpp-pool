#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();

	void AForm() const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

private:
	std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */