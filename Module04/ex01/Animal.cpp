#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &old)
{
    this->type = old.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

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

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

