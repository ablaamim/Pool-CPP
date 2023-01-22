#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include <exception>

class Bureaucrat;

class Form
{
    private :
        const std::string   name;
        bool                status;
        const unsigned int  signGrade;
        const unsigned int  executeGrade;

    public :
        Form();
        Form(std::string const name, int gradeToSign, int gradeToExecute);
        Form(Form const &src);
        virtual ~Form();
        Form &operator=(Form const &rhs);

        std::string const   getName(void) const;
        bool                getSigned(void) const;
        unsigned int        getGradeToSign(void) const;
        unsigned int        getGradeToExecute(void) const;
        void                beSigned(Bureaucrat const &bureaucrat);
    
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Form required, grade too high!");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char *what() const throw()
            {
                return ("Form requires, grade too low!");
            }
    };
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif