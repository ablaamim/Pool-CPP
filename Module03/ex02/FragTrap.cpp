#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High fives guys!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->setName(fragTrap.getName());
    this->setHitPoints(fragTrap.getHitPoints());
    this->setEnergyPoints(fragTrap.getEnergyPoints());
    this->setAttackDamage(fragTrap.getAttackDamage());
    return (*this);
}