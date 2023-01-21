#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

        virtual bool        execute(Bureaucrat const &executor) const;
};
#endif