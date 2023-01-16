/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:34:20 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:34:21 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Abdessamad("Abdessamad");

	Abdessamad.attack("Crawlinghorror");
	Abdessamad.takeDamage(8);
	Abdessamad.attack("Vampire");
	Abdessamad.takeDamage(1);
	Abdessamad.attack("Random character");
	Abdessamad.beRepaired(1);
	Abdessamad.attack("Pigman");
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.attack("Dark wizard");
	return (0);
}
