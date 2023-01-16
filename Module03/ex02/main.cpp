/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:36:26 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:36:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap trap("FragTrap");

	trap.attack("enemy");
	trap.highFivesGuys();
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}
