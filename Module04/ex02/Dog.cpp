#include "Dog.hpp"

Dog::Dog()
{
    this->type = std::string("Dog");
    this->brain = new Brain("Dog");
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &old)
{
    const Brain *br;

    this->type = old.type;
    br = old.getBrain();
    this->brain = new Brain(*br);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator= (const Dog &other)
{
    const Brain *br;

    this->type = other.type;
    br = other.getBrain();
    this->brain = new Brain(*br);
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