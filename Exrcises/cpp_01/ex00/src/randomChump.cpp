#include "../header/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie newZombie(name); //here newZombie is an object
    newZombie.announce();
}