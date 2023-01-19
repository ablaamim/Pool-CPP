#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &old);
		virtual ~Cat();
		Cat& operator= (const Cat &other);

		void	makeSound(void) const;
};

#endif