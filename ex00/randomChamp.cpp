#include "Zombie.hpp"

void    randomChamp(std::string name)
{
    Zombie ZomZ = Zombie(name);
    ZomZ.announce();
}