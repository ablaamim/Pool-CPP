#include "mutantStack.hpp"

static void	testInt( void )
{
	std::cout << "------------------ Test Int ------------------" << std::endl;
		
	MutantStack<int> mstack;
	
	mstack.push(8);
	mstack.push(17);
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "Iterator : " << *it << std::endl;
	++it;
	std::cout << "Iterator : " << *it << std::endl;
	--it;
	std::cout << "Iterator : " << *it << std::endl;
	std::cout << std::endl;
	
	while (it != ite)
	{
		std::cout << "Iterator : " << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);

	std::cout << "Top of s  : " << s.top() << std::endl;
	std::cout << "Size of s : " << s.size() << std::endl;

	std::cout << std::endl;
}

static void	testFloat( void )
{
	std::cout << "----------------- Test Float -----------------" << std::endl;
		
	MutantStack<float> mstack;

	if (mstack.empty() == true)
		std::cout << "mstack is empty." << std::endl;
	else
		std::cout << "mstack is not empty." << std::endl;
	std::cout << std::endl;
	
	mstack.push(8.0f);
	mstack.push(17.5f);
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3.67f);
	mstack.push(5.7f);
	mstack.push(737.12f);
	mstack.push(0.9f);
	
	MutantStack<float>::iterator it = mstack.begin();
	MutantStack<float>::iterator ite = mstack.end();
	
	std::cout << "Iterator : " << *it << std::endl;
	++it;
	std::cout << "Iterator : " << *it << std::endl;
	--it;
	std::cout << "Iterator : " << *it << std::endl;
	std::cout << std::endl;
	
	while (it != ite)
	{
		std::cout << "Iterator : " << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<float> s(mstack);

	std::cout << "Top of s  : " << s.top() << std::endl;
	std::cout << "Size of s : " << s.size() << std::endl;

	std::cout << std::endl;
}

static void	testString( void )
{
	std::cout << "---------------- Test String ----------------" << std::endl;
		
	MutantStack<std::string> mstack;
	
	mstack.push("Hi");
	mstack.push("Hellooooo");
	std::cout << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push("Salam");
	mstack.push("keskeu");
	mstack.push("NANI THE FUQ");
	mstack.push("BYE");
	
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	
	std::cout << "Iterator : " << *it << std::endl;
	++it;
	std::cout << "Iterator : " << *it << std::endl;
	--it;
	std::cout << "Iterator : " << *it << std::endl;
	std::cout << std::endl;
	
	while (it != ite)
	{
		std::cout << "Iterator : " << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<std::string> s(mstack);

	std::cout << "Top of s  : " << s.top() << std::endl;
	std::cout << "Size of s : " << s.size() << std::endl;

	std::cout << std::endl;

	if (s.empty() == true)
		std::cout << "s is empty." << std::endl;
	else
		std::cout << "s is not empty." << std::endl;

	std::cout << std::endl;
}

int main()
{
	testInt();
	testFloat();
	testString();
}