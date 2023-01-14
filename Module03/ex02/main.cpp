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
    return (0);
}
