#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " constructed!\n"
		<< "Hits: " << this->_hitPoints << " DMG: "
		<< this->_attackDamage << " Energy: " << this->_energyPoints << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy._name + "_clap_name"), ScavTrap(copy._name), FragTrap(copy._name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " destructed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
    FragTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << this->_name << " is " << ClapTrap::_name << std::endl;
}