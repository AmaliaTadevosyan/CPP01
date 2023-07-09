#ifndef HUMAN_A

#define HUMAN_A
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon  &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif 