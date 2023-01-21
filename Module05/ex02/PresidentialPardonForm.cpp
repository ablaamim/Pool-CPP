#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    Form::operator=(rhs);
    return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        Form::execute(executor);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return (false);
    }
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    return (true);
}
