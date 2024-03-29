#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat* b;
    Form* f;

    try
    {
        b = new Bureaucrat("B1", 1);
        f = new ShrubberyCreationForm("B1 Shrubbery");
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try
    {
        b = new Bureaucrat("B2", 1);
        f = new RobotomyRequestForm("B2 Robotomy");
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try
    {
        b = new Bureaucrat("B3", 1);
        f = new PresidentialPardonForm("B3 Presidential");
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
    std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try
    {
        b = new Bureaucrat("B4", 150);
        f = new PresidentialPardonForm("B4 Presidential");
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try
    {
        b = new Bureaucrat("B5", 20);
        f = new PresidentialPardonForm("B5 Presidential");
        std::cout << *b;
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    return (0);
}