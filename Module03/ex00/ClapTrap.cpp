/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:34:43 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:34:45 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap : "<< _name << " is constructed!" << std::endl;
    _name = "no_name";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap : "<< name << " is constructed"<<std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap : "<< copy._name << std::endl;
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap : "<< copy._name << std::endl;
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : "<< _name << " is destroyed!"<< std::endl;
}

void ClapTrap::attack(std::string const & target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target
			<<", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, it is destroyed" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have enought energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " takes "
		<< amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		if (this->_hitPoints == 10)
			std::cout << "ClapTrap " << this->_name << "have full hit points" << std::endl;
		else{
			this->_hitPoints += amount;
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " repaired! Its health now is "
			<< this->_hitPoints <<"!" << std::endl;
		}
	}
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, it's destroyed" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have enought energy to repair" << std::endl;
}
