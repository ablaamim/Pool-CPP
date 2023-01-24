#include "easyfind.hpp"

// UNIT TESTS :

template <typename T, typename I>
void	display(T &container, I iterator)
{
	if (iterator != container.end())
	{
		std::cout << *iterator << "\033[1;32m was found at index \033[0m";
		std::cout << std::distance(container.begin(), iterator) << std::endl;
	}	
	else
		std::cout << "\033[1;31m Element was not found \033[0m" << std::endl;
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
	test.push_front(1337);

	display(test, easyfind(test, 21));
	display(test, easyfind(test, 11));
	display(test, easyfind(test, 1337));
}

void	testList( void )
{
	std::cout << "-------------- Test with List ----------------" << std::endl;

	std::list<int> test;

	test.push_back(42);
	test.push_back(33);
	test.push_back(43);
	test.push_back(53);
	test.push_front(13);
	test.push_front(1337);

	display(test, easyfind(test, 43));
	display(test, easyfind(test, 13));
	display(test, easyfind(test, 1337));
}

int main(void)
{
	/*
	{
	testVector();
	std::cout << std::endl;
	testDeque();
	std::cout << std::endl;
	testList();
	}

	*/
	std::vector<int> vec;

	vec.push_back(2);
	vec.push_back(-5);
	vec.push_back(99);
	vec.push_back(0);
	vec.push_back(42);
	vec.push_back(1337);

	std::cout << "vector : \033[1m";
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << "\033[0m" << std::endl;

	std::vector<int>::iterator toFind;
	try
	{
		toFind = easyfind(vec, 99);
		std::cout << "\033[1;32mFind:\033[0m" << *toFind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		toFind = easyfind(vec, 0);
		std::cout << "\033[1;32mFind :\033[0m" << *toFind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		toFind = easyfind(vec, -5);
		std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Search: 10000" << std::endl;
		toFind = easyfind(vec, 10000);
		std::cout << "\033[1;32mFind:\033[0m " << *toFind << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}