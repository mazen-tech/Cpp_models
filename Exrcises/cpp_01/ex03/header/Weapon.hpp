#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string typeW;
    public:
        Weapon(std::string type);
        const std::string &getTypew();
        void setTypew(std::string newTypew);
};

#endif