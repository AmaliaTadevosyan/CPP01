#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{
    std::cout << "HumanA " << name << " is created!" << std::endl;
    std::cout << weapon.getType() << std::endl;

}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl; 
}

void    HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = weapon;
}
