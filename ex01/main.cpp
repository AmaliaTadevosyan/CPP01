#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int size;

    size = 20;
    Zombie *horde = zombieHorde(size, "Zoom");
    for (int i = 0; i < size; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}