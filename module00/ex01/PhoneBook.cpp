/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:46:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/10/20 20:46:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

int main(int argc, char **argv)           // Entry point.
{
    std::string input;                    // Declare a string variable named input.


    (void) argv;
    if (argc != 0x1)                      //  if there is an argument (the program name).
    {
        std::cout << "Usage: ./PhoneBook" << std::endl;
        return (EXIT_FAILURE);
    }
    while (1337) // infinite loop (while true).
    {
        std::cout << "Enter a command : ";
        std::getline(std::cin, input);    // get a line from the standard input stream (cin) and store it in input.
        if (input == "EXIT")              // if the input is EXIT.
            break ;                       // break the loop.
        else if (input == "ADD")          // if the input is ADD.
            phoneBook.addContact();       // call the addContact method.
        else if (input == "SEARCH")       // if the input is SEARCH.
            phoneBook.searchContact();    // call the searchContact method.
        else                              // if the input is not EXIT, ADD or SEARCH.
            std::cout << "Invalid command" << std::endl;
    }
    return (EXIT_SUCCESS);
}
