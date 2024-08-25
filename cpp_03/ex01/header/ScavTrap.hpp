//#ifndef SCAVTRAP_HPP
//#define SCAVTRAP_HPP

#pragma once

#include "ClapTrap.hpp"
#include "iostream"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap();

    void ST_attack(const std::string &target);
    void guardGate();
};

//#endif