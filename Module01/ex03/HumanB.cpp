#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    std::cout << "HumanB created!" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed!" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setType(std::string type)
{
    this->weapon->setType(type);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}