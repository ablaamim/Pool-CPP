#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &old)
{
    this->type = old.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &other)
{
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}