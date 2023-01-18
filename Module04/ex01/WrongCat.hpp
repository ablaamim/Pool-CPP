#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &old);
        virtual ~WrongCat();

        WrongCat& operator= (const WrongCat &other);
        void	makeSound(void) const;
};

#endif