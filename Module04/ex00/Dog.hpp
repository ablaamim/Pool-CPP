#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &old);
        virtual ~Dog();
        Dog&    operator= (const Dog &other);
    
        void	makeSound(void) const;
};

#endif