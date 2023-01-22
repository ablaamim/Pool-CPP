#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & save);
		virtual	~Intern(void);

		Intern	&operator=(Intern const & rhs);

		Form	*makeForm(std::string name, std::string target);

		class	WrongFormNameException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[31m[Intern] Incorrect name of form !\033[0m");
				}
		};

	private:
		std::string	_formName[3];
		Form		*_makeShrubberyCreation(std::string);
		Form		*_makeRobotomyRequest(std::string);
		Form		*_makePresidentialPardon(std::string);
};

#endif