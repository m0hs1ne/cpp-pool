#include "HarlFilter.hpp"

void HarlFilter::debug()
{
    std::cout << "[DEBUG]: " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return;
}

void HarlFilter::info()
{
    std::cout << "[INFO]: " << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
    return;
}

void HarlFilter::warning()
{
    std::cout << "[WARNING]: " << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return;
}

void HarlFilter::error()
{
    std::cout << "[ERROR]: " <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
    return;
}

void HarlFilter::complain(std::string level)
{
    int i = -1;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(++i < 4)
        if (level == levels[i])
            break;
    switch (i)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}