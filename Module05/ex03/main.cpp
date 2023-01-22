#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat* b;
    Intern i;
    Form* f;

    try
    {
        b = new Bureaucrat("B0", 1);
        f = i.makeForm("shrubbery creation", "B0 Shrubbery");
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
        b = new Bureaucrat("B1", 1);
        f = i.makeForm("robotomy request", "B1 Robot");
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
        f = i.makeForm("presidential pardon", "B3 President");
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
        f = i.makeForm("invalid form", "B4 Invalid");
        b->signForm(*f);
        std::cout << *f;
        b->execForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
        delete b;
    }

    std::cout << "\n";

  try {
    b = new Bureaucrat("B5", 150);
    f = new PresidentialPardonForm("B5 President");
    b->signForm(*f);
    std::cout << *f;
    b->execForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("B6", 20);
    f = new  PresidentialPardonForm("B6 President");
    std::cout << *b;
    b->signForm(*f);
    std::cout << *f;
    b->execForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

    return (0);
}