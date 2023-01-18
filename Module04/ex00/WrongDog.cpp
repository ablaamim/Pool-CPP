#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    this->type = "WrongDog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &old)
{
    this->type = old.type;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog& WrongDog::operator= (const WrongDog &other)
{
    this->type = other.type;
    return (*this);
}

void WrongDog::makeSound(void) const
{
    std::cout << "WrongDog sound" << std::endl;
}