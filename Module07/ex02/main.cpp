#include <iostream>
#include "array.hpp"


static void	separator( void )
{
	std::cout << "\033[1;31m-- -- -- -- -- -- -- -- -- -- -- -- -- --\033[0m";
	std::cout << std::endl;
}

#define MAX_VAL 750
int main(int, char**)
{
    separator();
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        std::cout << numbers[i] << std::endl;
    }
    separator();

    Array<int> empty(0);
    std::cout << "empty size: " << empty.size() << std::endl;
    separator();

    Array<int> one(1);
    one[0] = 1337;
    std::cout << "one[0]: " << one[0] << std::endl;
    std::cout << "one size: " << one.size() << std::endl;
    separator();
    delete [] mirror;
    return 0;
}