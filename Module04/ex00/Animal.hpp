#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// Base class Animal with protected member type and public member functions getType, makeSound and operator=.

class Animal
{
	protected:                                                  // protected member type, can be accessed by derived classes.
		std::string type;

	public:
		Animal();                                               // default constructor.
		Animal(const Animal &old);                              // copy constructor.
		virtual ~Animal();                                      // virtual destructor to avoid memory leaks in derived classes.
		Animal& operator= (const Animal &other);                // operator= overload.
	
		std::string	getType(void) const;                        // returns type. 
		virtual void	makeSound(void) const;                  // virtual function to be overriden in derived classes. 
};


# endif