#include <iostream>
#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    std::cout << std::endl
              << "----Let the bureaucracy begin----" << std::endl
              << std::endl;

    std::cout << "\n\n---------FORMS CREATION TEST---------\n\n"
              << std::endl;

    PresidentialPardonForm form("the imposible future");
    ShrubberyCreationForm form2("my_beautyfull_ASCII_trees");
    RobotomyRequestForm form3("someone");

    std::cout << "\n\n---------SIGN AND EXECUTE TEST---------\n\n"
              << std::endl;

    Bureaucrat john;
    Bureaucrat fred("fred", 1);

    john.executeForm(form);
    fred.executeForm(form);
    fred.executeForm(form2);
    fred.executeForm(form3);

    john.signForm(form);
    std::cout << form << std::endl;
    fred.signForm(form);
    fred.signForm(form3);
    fred.signForm(form2);

    john.executeForm(form);
    fred.executeForm(form);
    fred.executeForm(form3);
    fred.executeForm(form2);

    std::cout << "\n\n---------NEW INCREMENT DECREMENT CHECK TEST---------\n\n"
              << std::endl;

    std::cout << john << std::endl;
    std::cout << fred << std::endl;

    try
    {
        fred.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        fred.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << fred << std::endl;
    std::cout << john << std::endl;

    return (0);
}
