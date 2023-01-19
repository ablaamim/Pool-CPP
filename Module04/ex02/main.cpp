#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Cat		cat;
	Dog		dog;
	Brain	brain;

	std::cout << std::endl;
	std::cout << cat.getBrain()->getIdea() << std::endl;
	cat.getBrain()->setIdea("I am a cat");
	std::cout << cat.getBrain()->getIdea() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << dog.getBrain()->getIdea() << std::endl;
	dog.getBrain()->setIdea("I am a dog");
	std::cout << dog.getBrain()->getIdea() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << brain.getIdea() << std::endl;
	brain.setIdea("Who am i?");
	std::cout << brain.getIdea() << std::endl;
	std::cout << std::endl;
	return (0);
}