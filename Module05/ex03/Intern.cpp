#include "Intern.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Intern::Intern(void)
{
	std::cout << "Default constructor called" << std::endl;
	_formName[0] = "shrubbery creation";
	_formName[1] = "robotomy request";
	_formName[2] = "presidential pardon";
}

Intern::Intern(Intern const & save)
{
	(void)save;
	*this = save;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTOR                                                                 */
/* -------------------------------------------------------------------------- */

Intern::~Intern(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*form;
	Form	*(Intern::*f[3])(std::string) =
    {
		&Intern::_makeShrubberyCreation,
		&Intern::_makeRobotomyRequest,
		&Intern::_makePresidentialPardon
	};

	for (unsigned int i = 0; i < 3; i++)
	{
		if (!_formName[i].compare(name))
		{
			form = (this->*(f[i]))(target);
			std::cout << "create " << form->getName() << std::endl;
			return (form);
		}
	}
	throw Intern::WrongFormNameException();
	// std::cerr << "Incorrect name of form !" << std::endl;
	return NULL;
}

Form	*Intern::_makeShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_makeRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

/* -------------------------------------------------------------------------- */
/* OPERATORS                                                                  */
/* -------------------------------------------------------------------------- */

Intern	&Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return (*this);
}