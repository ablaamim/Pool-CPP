#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << "HumanA created!" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed!" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setType(std::string type)
{
    this->weapon.setType(type);
}