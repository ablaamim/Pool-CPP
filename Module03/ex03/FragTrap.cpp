#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap " << _name << " is constructed!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << _name << " is constructed!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destructed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " gives a high five" << std::endl;
}