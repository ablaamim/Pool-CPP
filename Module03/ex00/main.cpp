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

#include "ClapTrap.hpp"

int main()
{
    /*
    ClapTrap clapTrap1;
    ClapTrap clapTrap2("ClapTrap2");

    ClapTrap clapTrap3(clapTrap2);
    ClapTrap clapTrap4 = clapTrap2;

    clapTrap1.attack("clapTrap2");
    clapTrap1.takeDamage(10);
    clapTrap1.beRepaired(10);

    clapTrap2.attack("clapTrap1");
    clapTrap2.takeDamage(10);
    clapTrap2.beRepaired(10);

    clapTrap3.attack("clapTrap1");
    clapTrap3.takeDamage(10);
    clapTrap3.beRepaired(10);

    clapTrap4.attack("clapTrap1");
    clapTrap4.takeDamage(10);
    clapTrap4.beRepaired(10);
    */

    //*** EXTRA TESTS ***

    ClapTrap p("Abdessamad");
    p.attack("enemy");
    p.takeDamage(20);
    p.attack("enemy");

    ClapTrap p1("Abdessamad");
    for(int i = 0; i < 10 ;i++)
        p1.attack("enemy");
    p1.beRepaired(20);
    p1.attack("enemy");
    return (0);
}
