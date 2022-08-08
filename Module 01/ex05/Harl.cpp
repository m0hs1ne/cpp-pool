#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG]" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return;
}

void Harl::info()
{
    std::cout << "[INFO]" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
    return;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return;
}

void Harl::error()
{
    std::cout << "[ERROR]" <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
    return;
}

void Harl::complain(const char * level)
{
    if (!level)
        return;
    std::string lvl = std::string(level);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void (Harl::*func_ptr)(void);
    func_ptr funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++)
    {
        if (lvl == levels[i])
        {
            (this->*funcs[i])();
            return;
        }
        
    }
    std::cout << "can't find this level!" << std::endl;
}
