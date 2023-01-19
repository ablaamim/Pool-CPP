#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat Abdessamad("Abdessamad", 1);

	std::cout << Abdessamad << std::endl;
	Abdessamad.downGrade();
	std::cout << Abdessamad << std::endl;
	Abdessamad.upGrade();
	std::cout << Abdessamad << std::endl;

	try
	{
		Bureaucrat b_1("1", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b_2("2", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b_3("3", 1);
		b_3.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b_4("4", 150);
		b_4.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}