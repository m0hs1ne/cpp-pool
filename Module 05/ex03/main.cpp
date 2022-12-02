#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << std::endl
              << "----Let the bureaucracy begin----" << std::endl
              << std::endl;

    Intern intern;
    Form *formPresidential = intern.makeForm("presidential pardon", "the imposible future");
    Form *formShrubbery = intern.makeForm("shrubbery creation", "intern_tree");
    Form *formRobotomy = intern.makeForm("robotomy request", "my_boss");
    Form *inexitentForm = intern.makeForm("piporopopopo", "nothing");
    Bureaucrat bureaucrat("Lucy", 1);
    bureaucrat.executeForm(*formPresidential);
    bureaucrat.signForm(*formPresidential);
    bureaucrat.executeForm(*formPresidential);
    bureaucrat.executeForm(*formShrubbery);
    bureaucrat.signForm(*formShrubbery);
    bureaucrat.executeForm(*formShrubbery);
    bureaucrat.executeForm(*formRobotomy);
    bureaucrat.signForm(*formRobotomy);
    bureaucrat.executeForm(*formRobotomy);
    delete formPresidential;
    delete formRobotomy;
    delete formShrubbery;
    delete inexitentForm;
    return (0);
}
