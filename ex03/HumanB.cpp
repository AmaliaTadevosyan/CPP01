#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << "HumanB " << name << " is creates" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << _name << " desctructor" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl; 
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}