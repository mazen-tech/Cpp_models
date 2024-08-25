/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:52:15 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"
#include "../header/ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeff");
    ScavTrap scavtrap("Bob");
    
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHit() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergy() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << scavtrap.getName() << " Health points: " << scavtrap.getHit() << std::endl;
    std::cout << scavtrap.getName() << " Energy points: " << scavtrap.getEnergy() << std::endl;
    std::cout << scavtrap.getName() << " Attack damage: " << scavtrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    claptrap.ft_attack("Monster");
    claptrap.takeDamage(25);
    claptrap.beRepaired(3);

    scavtrap.guardGate();
    scavtrap.ST_attack("Monster");
    scavtrap.takeDamage(12);
    scavtrap.beRepaired(5);

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHit() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergy() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << scavtrap.getName() << " Health points: " << scavtrap.getHit() << std::endl;
    std::cout << scavtrap.getName() << " Energy points: " << scavtrap.getEnergy() << std::endl;
    std::cout << scavtrap.getName() << " Attack damage: " << scavtrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    return 0;
}