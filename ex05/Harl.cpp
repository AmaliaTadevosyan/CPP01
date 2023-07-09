#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void    Harl::debug()
{
    std::cout << "Harl debug function is called" << std::endl;
}

void    Harl::info()
{
    std::cout << "Harl info function is called" << std::endl;
}

void    Harl::warning()
{
    std::cout << "Harl warning function is called" << std::endl;
}

void    Harl::error()
{
    std::cout << "Harl error function is called" << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*funcTable[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*funcTable[i])();
            break;
        }
    }
}