#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* b;

    // VALID
    try
    {
        b = new Bureaucrat("B0", 1);
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }

    // INVALID AGAIN
    try
    {
        b = new Bureaucrat("B1", 1);
        b->incrementGrade();
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
        delete b;
    }
    // MORE INVALID
    try
    {
        b = new Bureaucrat("B3", 151);
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    // EVEN MOAR INVALID
    try
    {
        b = new Bureaucrat("B4", 150);
        b->decrementGrade();
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
        delete b;
    }
    // INVALID
    try
    {
        b = new Bureaucrat("B5", -5);
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    // ANOTHER VALID GRADE
    try
    {
        b = new Bureaucrat("B6", 150);
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    return (0);
}