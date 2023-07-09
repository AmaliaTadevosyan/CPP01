#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << "  Constructor" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << "  Destructor" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
