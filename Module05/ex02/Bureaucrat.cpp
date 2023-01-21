#include "Bureaucrat.hpp"

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " Signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << name << " Could not sign " << form.getName() << " Because : " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
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

unsigned int Bureaucrat::getGrade(void) const
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
    out << rhs.getName() << ", bureaucrat grade : " << rhs.getGrade() << std::endl;
    return (out);
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << name << " Could not execute " << form.getName() << " Because : " << e.what() << std::endl;
    }
}