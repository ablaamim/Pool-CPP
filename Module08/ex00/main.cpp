#include "easyfind.hpp"

template <typename T, typename I>
void	display(T &container, I iterator)
{
	if (iterator != container.end())
	{
		std::cout << *iterator << " was found at index ";
		std::cout << std::distance(container.begin(), iterator) << std::endl;
	}	
	else
		std::cout << "Element was not found" << std::endl;
}

void	testVector(void)
{
	std::cout << "-------------- Test with Vector --------------" << std::endl;

	std::vector<int>::iterator it;
	std::vector<int> test;
	
	test.push_back(10);
	test.push_back(20);
	test.push_back(30);
	test.push_back(40);
	test.push_back(50);
	test.push_back(44);
	
	it = easyfind(test, 30);
	display(test, it);
	display(test, easyfind(test, 50));
	display(test, easyfind(test, 90));
}

void	testDeque( void )
{
	std::cout << "-------------- Test with Deque ---------------" << std::endl;

	std::deque<int> test;

	test.push_back(21);
	test.push_back(31);
	test.push_back(41);
	test.push_back(51);
	test.push_front(11);

	display(test, easyfind(test, 21));
	display(test, easyfind(test, 11));
	display(test, easyfind(test, 91));
}

void	testList( void )
{
	std::cout << "-------------- Test with List ----------------" << std::endl;

	std::list<int> test;

	test.push_back(23);
	test.push_back(33);
	test.push_back(43);
	test.push_back(53);
	test.push_front(13);

	display(test, easyfind(test, 43));
	display(test, easyfind(test, 13));
	display(test, easyfind(test, 93));
}

int main(void)
{
	testVector();
	std::cout << std::endl;
	testDeque();
	std::cout << std::endl;
	testList();
	return 0;
}