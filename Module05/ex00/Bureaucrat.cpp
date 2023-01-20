#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name(other.name), grade(other.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::upGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::downGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() <<", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}