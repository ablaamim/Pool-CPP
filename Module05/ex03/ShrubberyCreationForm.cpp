# include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream		o;
	std::string const	file = getTarget() + "_shrubbery";

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	o.open(file.c_str(), std::ofstream::trunc | std::ofstream::out);
	if (!o.is_open())
	{
		std::cerr << "[ShrubberyCreationForm] execute: Fail to open file" << std::endl;
		return (false);
	}
	o	<< "                      ,@@@@@🍒@,    🦋                      " << std::endl
		<< "             🦉,,,.   ,@🍒@@@@/@@,  .oo🍋888o.🦜       🦋     " << std::endl
		<< "           ,&%%&%🍑&🐒,@🍒@@🍒/@@@🍒@,8888\\🍋8/8o,           " << std::endl
		<< "          ,🍑&\\%&&%🍑&%,@@@\\🍒@@/@@@🍋\\88888/8🍋|         " << std::endl
		<< "         %🍑&&🍑&%&/%&&🍑@@\\🐿@/ /@@@🍋8888\\88🍋88        " << std::endl
		<< "          %&🍑%/ %🍑%%&&@@\\ V /@@  `88\\🐿 `/88           " << std::endl
		<< "          `&%\\ . /%&'    |.|        \\  |🍋'               " << std::endl
		<< "             '|o|        | |         | |          🦋         " << std::endl
		<< "              |.|        | |         | |                    " << std::endl
		<< "      🌱  🌷 \\/ _\\🌷🌱_🌱_/  ,\\_🌱🌷__ /  .\\_🌱🐢__🌱_     " << std::endl;
		o.close();
		return (true);
}