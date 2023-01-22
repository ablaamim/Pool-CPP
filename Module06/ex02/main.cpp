#include "Base.hpp"

Base * generate(void)
{
    Base *Base = NULL;
    srand(time(0));
    if (rand() % 3 == 1)
        Base = new A();
    else if (rand() % 3 == 2)
        Base = new B();
    else
        Base = new C();
    return (Base);
}

void identify(Base *p)
{
    std::cout << "Pointer : *" << std::endl;
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    A a;
    B b;
    C c;

    std::cout << "Reference : &" << std::endl;
    try
    {
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
    
}

int main()
{
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}