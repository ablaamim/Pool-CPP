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
        std::cerr << e.what() << "\n";
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
        std::cerr << e.what() << "\n";
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
        std::cerr << e.what() << "\n";
    }
    // EVEN MOAR INVALID
    try
    {
        b = new Bureaucrat("B4", 140);
        b->decrementGrade();
        std::cout << *b;
        delete b;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() <<"\n";
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
        std::cerr << e.what() << "\n";
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
        std::cerr << e.what() << "\n";
    }
    return (0);
}