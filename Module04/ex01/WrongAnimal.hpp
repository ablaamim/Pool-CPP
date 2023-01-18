#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &old);
        virtual ~WrongAnimal();

        WrongAnimal& operator= (const WrongAnimal &other);
        void	makeSound(void) const;
        std::string getType(void) const;
};

#endif
