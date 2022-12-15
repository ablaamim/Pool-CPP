#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "Weapon created!" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed!" << std::endl;
}

const std::string &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}