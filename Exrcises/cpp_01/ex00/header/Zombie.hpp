#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(); //constructore
        ~Zombie(); //destructore

        Zombie(std::string name); //constructor with parameter

        void announce(void);
    
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif