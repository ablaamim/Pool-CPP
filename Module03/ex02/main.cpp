/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:20:55 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/14 23:21:23 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    fragTrap("FragTrap");
    ScavTrap    scavTrap("ScavTrap");

    fragTrap.highFivesGuys();
    scavTrap.guardGate();
    FragTrap p("Abdessamad");
    p.highFivesGuys();
    p.attack("enemy");
    p.takeDamage(100);
    p.attack("enemy");
    p.beRepaired(10);
    return (0);
}
