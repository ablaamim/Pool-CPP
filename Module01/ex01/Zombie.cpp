/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:41:48 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/15 15:43:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " : is destructed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(std::string name)
{
	this->name = name;
}

std::string Zombie::getZombie()
{
	return (this->name);
}
