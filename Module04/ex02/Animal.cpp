#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal& Animal::operator= (const Animal &other)
{
    this->type = other.type;
    return (*this);
}
