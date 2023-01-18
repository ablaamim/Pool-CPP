#ifndef WRONGDOG_HPP

# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(WrongDog const &old);
        virtual ~WrongDog();

        WrongDog& operator= (const WrongDog &other);
        void	makeSound(void) const;
};

#endif