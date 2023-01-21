#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    grade = rhs.grade;
    return (*this);
}

std::string const Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

void Bureaucrat::incrementGrade(void)
{
    if (grade <= 1)
        throw (Bureaucrat::GradeTooHighException());
    else
        grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (grade >= 150)
        throw (Bureaucrat::GradeTooLowException());
    else
        grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (out);
}