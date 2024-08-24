#include "../header/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : nameA(name), _weapon(weapon) {}

void HumanA::attack(void)
{
    std::cout << nameA << " Atttacks with their " << _weapon.getTypew() << std::endl;
}