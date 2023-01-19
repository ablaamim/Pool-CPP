#include "Cat.hpp"

Cat::Cat::Cat()
{
    this->type = std::string("Cat");
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat::Cat(Cat const &old)
{
    this->type = old.type;
    this->brain = new Brain(*old.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::Cat::operator= (const Cat &other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
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