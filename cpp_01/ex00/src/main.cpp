#include "../header/Zombie.hpp"


int main(void)
{
    Zombie *new_Zombie;//creating a zombie
    randomChump("Orange");
    new_Zombie = newZombie("FOO");//changing the name of the zombie and then deleting the old one
    delete new_Zombie;
    return (0);
}