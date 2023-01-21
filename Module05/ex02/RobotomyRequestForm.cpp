#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	rand;

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	std::cout << "*DRILL NOISES* BRRRRRRRR" << std::endl;
	std::srand(std::time(NULL));
	rand = std::rand() % 2;
	if (rand)
		std::cout << this->target << " has been robotomized !" << std::endl;
	else
		std::cout << "FAILURE.." << std::endl;
	return (true);
}