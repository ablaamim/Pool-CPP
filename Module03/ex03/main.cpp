/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:38:14 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:38:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap trap("Abdessamad");

	trap.whoAmI();
	trap.guardGate();
	trap.highFivesGuys();
	trap.attack("Enemy");
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}
