#include "../header/HumanB.hpp"

HumanB::HumanB(std::string name) : nameB(name) 
{
    _weapon = NULL; //cuz HumanB will be attacked
}

void HumanB::attack()
{
    if (!_weapon)
        std::cout << nameB << " has no weapon to attack with \n";

    else
        std::cout<< nameB << " attacks with their " << _weapon->getTypew() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}