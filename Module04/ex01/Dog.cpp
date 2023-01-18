#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &old)
{
    this->type = old.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator= (const Dog &other)
{
    this->type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return (this->brain);
}