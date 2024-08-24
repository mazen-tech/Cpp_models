#include "../header/Weapon.hpp"

Weapon::Weapon(std::string type) : typeW(type) {}

const std::string &Weapon::getTypew()
{
    return this->typeW;
}

void Weapon::setTypew(std::string newTypew)
{
    this->typeW = newTypew;
}