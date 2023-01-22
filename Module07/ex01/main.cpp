#include "iter.hpp"

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5] = { Awesome(0), Awesome(1), Awesome(2), Awesome(3), Awesome(4) };
    iter(tab, 5, print);
    
    iter(tab2, 5, print);

    return 0;
}