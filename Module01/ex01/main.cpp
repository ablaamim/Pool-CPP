/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:44:26 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/15 15:51:16 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*onHeap;

	onHeap = ZombieHorde(8, "Zombie");
	for (int i = 0; i < 8; i++)
		onHeap[i].announce();
	delete[] onHeap;
	return (0);
}
