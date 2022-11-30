#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("sewy", -1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("sewy", 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("sewy", 150);
        b.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("sewy", 1);
        b.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("sewy", 1);
        b.decrementGrade();
        b.decrementGrade();
        b.decrementGrade();
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}