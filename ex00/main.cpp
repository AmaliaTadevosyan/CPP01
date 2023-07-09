#include "Zombie.hpp"

Zombie* newZombie(std::string);
void    randomChamp(std::string);

int main(void)
{
    Zombie *z = newZombie("Amalya");
    randomChamp("Anun");
    delete z;
}