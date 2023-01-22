#include "Form.hpp"

Form::Form() : name("default"), status(false), signGrade(150), executeGrade(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute, std::string target) 
: name(name), status(false), signGrade(gradeToSign), executeGrade(gradeToExecute), target(target)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw (Form::GradeTooHighException());
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw (Form::GradeTooLowException());
}

Form::Form(Form const &src) : name(src.name), status(src.status), signGrade(src.signGrade), executeGrade(src.executeGrade)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
    if (signGrade < 1 || executeGrade < 1)
        throw (Form::GradeTooHighException());
    else if (signGrade > 150 || executeGrade > 150)
        throw (Form::GradeTooLowException());
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
    status = rhs.status;
    return (*this);
}

std::string const Form::getName(void) const
{
    return (name);
}

bool Form::getSigned(void) const
{
    return (status);
}

unsigned int Form::getGradeToSign(void) const
{
    return (signGrade);
}

unsigned int Form::getGradeToExecute(void) const
{
    return (executeGrade);
}

void    Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > signGrade)
        throw (Form::GradeTooLowException());
    else
        status = true;
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
    out << "Form " << rhs.getName() << " is ";
    if (rhs.getSigned() == false)
        out << "not ";
    out << "signed and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute." << std::endl;
    return (out);
}

std::string const Form::getTarget(void) const
{
    return (target);
}

bool   Form::execute(Bureaucrat const &executor) const
{
    if (status == false)
        throw (Form::FormNotSignedException());
    else if (executor.getGrade() > executeGrade)
        throw (Form::GradeTooLowException());
    else
        return (true);
}