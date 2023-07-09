#include "Harl.hpp"

int filterFunc(char *argv)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == argv)
        {
            return (i);
        }
    }
    return (-1);
}

void    harlSwitch(char *argv, Harl &harl)
{
    switch (filterFunc(argv))
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Not a valid input" << std::endl;
            break; 
    }
}

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
        std::cout << "Must give an valid argument!" << std::endl;
    else
        harlSwitch(argv[1], harl);
    return (0);
}