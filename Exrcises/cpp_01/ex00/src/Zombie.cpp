#include "../header/Zombie.hpp"

//here we are building all the tools defined inside the struct zombie

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie: " << this->name << " has been created. \n";
}


Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->name << " has been destroyed. \n";
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}