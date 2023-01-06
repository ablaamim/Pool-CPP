/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:51:59 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/06 17:00:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor is called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " : is destructed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " : BraiiiiiinnnzzZ..." << std::endl;
}

std::string	Zombie::get_name()
{
	return (this->name);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}


