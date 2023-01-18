#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &old)
{
    this->type = old.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat &other)
{
    this->type = other.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;
}