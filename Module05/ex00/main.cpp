#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat Abdessamad("Abdessamad", 10);

	std::cout << Abdessamad << std::endl;
	Abdessamad.downGrade();
	std::cout << Abdessamad << std::endl;
	Abdessamad.upGrade();
	std::cout << Abdessamad << std::endl;
	Abdessamad.downGrade();
	std::cout << Abdessamad << std::endl;
	std::cout << "------------------------------------" << std::endl;
	try
	{
		Bureaucrat b_1("Bureaucrat 00", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b_2("Buraucrat 01", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b_3("Bureaucrat 02", 1);
		b_3.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b_4("Bureaucrat 03", 150);
		b_4.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b_5("Bureaucrat 04", 200);
		b_5.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b_6("Bureaucrat 05", -1);
		b_6.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}