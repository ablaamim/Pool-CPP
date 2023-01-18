#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(j);
	delete(i);

	std::cout << "\nWrong part!\n\n";

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_j = new WrongDog();
	const WrongAnimal* wrong_i = new WrongCat();
	std::cout << wrong_j->getType() << " " << std::endl;
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound();
	wrong_j->makeSound();
	wrong_meta->makeSound();
	delete(wrong_meta);
	delete(wrong_j);
	delete(wrong_i);
	return (0);

return 0;
}