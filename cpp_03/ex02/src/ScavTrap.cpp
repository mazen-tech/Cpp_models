#include "../header/ClapTrap.hpp"
#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Defult ScavTrap constructor has been called \n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor with parameter has been called \n";
    this->Trapname = name;
    this->hit = 100;
    this->energy = 50;
    this->attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor \n";
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator\n";
    if (this == &copy)
        return (*this);
    this->Trapname = copy.Trapname;
    this->hit = copy.hit;
    this->energy = copy.energy;
    this->attack = copy.attack;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Defult ScavTrap distructor has been called \n";
}

void ScavTrap::ST_attack(const std::string &target)
{
    std::cout << GREEN << "ScavTrap "<< this->Trapname << " attacks " << target << ", causing " << this->attack << " point of damage \n" RESET;
}
void ScavTrap::guardGate()
{
    std::cout << CYAN << "ScavTrap " << this->Trapname << " has entered in gate mood \n"<< RESET;
    this->energy -= 1;
}