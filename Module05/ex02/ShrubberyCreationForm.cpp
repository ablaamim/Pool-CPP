#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

        virtual bool        execute(Bureaucrat const &executor) const;
};

# endif