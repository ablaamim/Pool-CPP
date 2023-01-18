#include "Cat.hpp"

Cat::Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat::Cat(Cat const &old)
{
    this->type = old.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::Cat::operator= (const Cat &other)
{
    this->type = other.type;
    return (*this);
}

void Cat::Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}

Brain* Cat::Cat::getBrain(void) const
{
    return (this->brain);
}