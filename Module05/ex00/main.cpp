#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 1);
        std::cout << b1;
        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b2("b2", 150);
        std::cout << b2;
        b2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}