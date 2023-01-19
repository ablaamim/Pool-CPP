#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		virtual ~Animal();
		virtual Animal& operator=(const Animal &other);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
};


# endif