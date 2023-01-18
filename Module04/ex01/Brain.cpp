#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = std::string(THOUGHT);
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(std::string type)
{
    for (int i = 0; i < 100; i++)
    {
        if (type == "Cat")
            this->ideas[i] = std::string(CAT_THOUGHT);
        else if (type == "Dog")
            this->ideas[i] = std::string(DOG_THOUGHT);
        else
            this->ideas[i] = std::string(THOUGHT);
    }
    std::cout << "Brain copy constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator= (const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain assignation operator called" << std::endl;
    return (*this);
}

const std::string Brain::getIdea(void) const
{
    return (this->ideas[0]);
}

void Brain::setIdea(std::string const idea)
{
    this->ideas[0] = idea;
}