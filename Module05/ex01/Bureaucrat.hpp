#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		const std::string	name;
		int					grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string const	getName(void) const;
		unsigned int		getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &form);
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Grade too low");
			}
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif
