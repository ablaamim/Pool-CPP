/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:35:31 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:35:32 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap trap("Scav");

	trap.guardGate();
	trap.attack("BirdMan");
	trap.takeDamage(14);
	trap.beRepaired(2);
	return (0);
}
