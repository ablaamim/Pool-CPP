#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0x1;
    if (argc == 0x1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    else
    {
        while (i < argc)
        {
            j = 0x0;
            while (argv[i][j])
            {
                std::cout << (char) ft_toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
}