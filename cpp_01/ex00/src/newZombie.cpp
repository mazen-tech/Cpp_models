#include "../header/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* newZombie = new Zombie(name);
    newZombie->announce(); //here new zombie is a pointer 
    return (newZombie);
}