#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* b;
    Form* f;

    // INVALID TEST
    try
    {
        f = new Form("Form1", -1, 1);
        std::cout << *f;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    // ANOTHER INVALID TEST
    try
    {
        f = new Form("Form1", 150, 1);
        std::cout << *f;
        delete f;
    }
        catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    // BUREAUCRAT COULD NOT SIGN
    try
    {
        b = new Bureaucrat("Abdessamad", 2);
        f = new Form("Form2", 1, 1);
        std::cout << *b;
        b->signForm(*f);
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    // VALID TEST -> SUDO SU WILL SIGN THE FORM
    try
    {
        b = new Bureaucrat("Sudo su", 1);
        f = new Form("Form2", 1, 1);
        std::cout << *f;
        std::cout << "\n";
        std::cout << *b;
        b->signForm(*f);
        std::cout << "\n";
        std::cout << *f;
        delete b;
        delete f;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    return (0);
}