//#ifndef CLAPTRAP_HPP
//#define CLAPTRAP_HPP
#pragma once

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

#include <iostream>

class ClapTrap
{
protected:
    std::string Trapname;
    int hit;
    int energy;
    int attack;
public:
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &copy);

    //getters and setters
    void setName(std::string name);
    void setHit(int hit);
    void setEnergy(int energy);
    void setAttack(int attack);

    std::string getName(void) const;
    int getHit(void) const;
    int getEnergy(void) const;
    int getAttack(void) const;

    //fubctions 
    void ft_attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


//#endif