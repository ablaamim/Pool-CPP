#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

/*
* to_upper : convert a string to uppercase letters. 
*/

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z') // if the character is lowercase
        return (c - 32);      // return the uppercase character
    return (c);               // return the character
}

/*
* argc       : number of arguments.
* argv       : array of arguments.
* argc       : is always at least 1.
* argv[0]    :  name of the program.
* argv[1]    : first argument.
* argv[2]    : second argument ...
* argv[i][j] : i-th argument, j-th character.
*/

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0x1;
    if (argc == 0x1)                                       // if there is no argument.
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    else
    {
        while (i < argc)                                   // for each argument.
        {
            j = 0x0;
            while (argv[i][j])                             // for each character.
            {
                std::cout << (char)ft_toupper(argv[i][j]); // print the uppercase character.
                j++;                                       // increment j by 1 to access the next character.
            }
            i++;                                           // next argument.
        }
        std::cout << std::endl;
    }
}