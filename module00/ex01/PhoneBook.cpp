#include "phoneBook.hpp"

/*
* <<          : insertion operator, it is used to insert a value into an output stream.
* >>          : extraction operator, it is used to extract a value from an input stream.
* std::cout   : standard output stream, it is used to display output on the screen.
* std::cin    : standard input stream, it is used to take input from the keyboard.
* std::endl   : end of line, it is used to insert a new line in the output stream.
* std::string : string, it is a class that represents a string of characters.
* cout        : is an object of the class ostream.
* cin         : is an object of the class istream.
* ::          : scope resolution operator, it is used to access the members of a class or namespace.
*/

int main(int argc, char **argv) // Entry point
{
    std::string input;

    // if there is no argument
    if (argc != 0x1)
    {
        std::cout << "Usage: ./phoneBook" << std::endl;
        return (EXIT_FAILURE);
    }
    // while the user does not enter "EXIT"
    while (1337)
    {

    }

    return (EXIT_SUCCESS);
}