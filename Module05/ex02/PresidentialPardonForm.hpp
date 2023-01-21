#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

        virtual bool execute(Bureaucrat const &executor) const;
};

#endif