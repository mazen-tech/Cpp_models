#include "../header/Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name)
{
    this->name = name;
    std:: cout << "Zombie " << this->name << " has been creater \n";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has be destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}