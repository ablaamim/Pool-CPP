#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string const	name;
		int	grade;

	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &other);

		class GradeTooHighException: public std::exception
        {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
        {
			virtual const char* what() const throw();
		};

		std::string const	&getName(void) const;
		int	               	getGrade(void) const;
		void	            upGrade(void);
		void	        	downGrade(void);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif