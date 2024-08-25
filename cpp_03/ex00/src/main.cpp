/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:52:07 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeff");
    
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHit() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergy() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    claptrap.ft_attack("Monster");
    claptrap.takeDamage(2);
    claptrap.beRepaired(1);

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHit() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergy() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttack() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    return 0;
}