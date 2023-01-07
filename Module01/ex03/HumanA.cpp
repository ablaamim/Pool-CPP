/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 09:21:05 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/07 10:40:51 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << weapon.getType() << std::endl;
}
