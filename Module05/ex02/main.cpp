#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("Abdessamad 01", 150);
    Form f("Form", 1, 1);
    Bureaucrat b2("Abdessamad 02", 150);
    Form f2("Form", 150, 150);
    Bureaucrat b3("Abdessamad 03", 149);
    Form f3("Form", 149, 149);

    b.signForm(f);

    if (f.getSigned())
        std::cout << "Signed" << std::endl;
    else
        std::cout << "Not signed" << std::endl;
    
    b2.signForm(f2);
    if (f2.getSigned())
        std::cout << "Signed" << std::endl;
    else
        std::cout << "Not signed" << std::endl;

    try
    {
        b3.signForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}