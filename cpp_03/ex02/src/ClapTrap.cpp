#include "../header/ClapTrap.hpp"
#include "../header/ScavTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Claping default constructor \n";
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claping default distructor \n";
}

ClapTrap::ClapTrap(std::string name) : Trapname(name), hit(10), energy(10), attack(0)
{
    std::cout << "Claping constructor with parameter\n";
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Claping copy constructor \n";
    *this = copy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator\n";
    if (this == &copy)
        return (*this);
    this->Trapname = copy.Trapname;
    this->hit = copy.hit;
    this->attack = copy.attack;
    this->energy = copy.energy;
    return (*this);
}


void ClapTrap::setName(std::string name)
{
    this->Trapname = name;
}
void ClapTrap::setHit(int hit)
{
    this->hit = hit;
}
void ClapTrap::setEnergy(int energy)
{
    this->energy = energy;
}
void ClapTrap::setAttack(int attack)
{
    this->attack = attack;
}

std::string ClapTrap::getName(void) const
{
    return(this->Trapname);
}
int ClapTrap::getHit(void) const
{
    return(this->hit);
}
int ClapTrap::getEnergy(void) const
{
    return(this->energy);
}
int ClapTrap::getAttack(void) const
{
    return(this->attack);
}

//fubctions 
void ClapTrap::ft_attack(const std::string &target)
{
    std::cout << GREEN "CLAPTRAP" << this->Trapname << "attacks" << target << ", causing" << this->attack << " points of damage\n" << RESET;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED "CLAPTRAP" << this->Trapname << " takes " << amount << " points od damage\n" RESET;
    this->hit -= amount; 
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << YELLOW "CLAPTRAP " << this->Trapname << " is healed by " << amount << " points\n" RESET;
    this->hit += amount;
    this->energy -= 1;
}