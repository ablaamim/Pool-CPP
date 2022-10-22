/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:39:40 by ablaamim          #+#    #+#             */
/*   Updated: 2022/10/22 12:39:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

bool    validContactField(std::string field)
{
    if (field.length() > 10)
    {
        std::cout << "Error: field length must be less than 10 characters." << std::endl;
        return (false);
    }
    int i = 0x0;
    while (field[i])
    {
        if (!std::isalnum(field[i]))
        {
            std::cout << "Error: field must contain only printable characters." << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}

bool    validPhoneNumber(std::string phoneNumber)
{
    if (phoneNumber.length() > 10)
    {
        std::cout << "Error: phone number must be 10 digits long." << std::endl;
        return (false);
    }
    int i = 0x0;
    while (phoneNumber[i])
    {
        if (!std::isdigit(phoneNumber[i]))
        {
            std::cout << "Error: phone number must contain only digits." << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}

void    addContact(PhoneBook &myPhoneBook)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Please input the contact informations : " << std::endl;
    std::cin.ignore(); // to ignore the newline character.
    std::cout << "First name: ";
    std::getline(std::cin, firstName);
    if (!validContactField(firstName))
        return ;
    std::cout << "Last name: ";
    if (!validContactField(lastName))
        return ;
    std::getline(std::cin, lastName);
    if (!validContactField(lastName))
        return ;
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    if (!validContactField(nickname))
        return ;
    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);
    if (!validPhoneNumber(phoneNumber))
        return ;
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
    myPhoneBook.add(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void    searchContact(PhoneBook myPhoneBook)
{
    std::string         option; // to store the user's option.
    std::stringstream   ss;     // to convert string to int.
    int                 index;  // the index of the contact to be displayed.

    if (myPhoneBook.getContactsCount() == 0)
    {
        std::cout << "Error: no contacts in the phonebook." << std::endl;
        return ;
    }
    myPhoneBook.printAllContacts();
    std::cout << "Please select a contact by index: ", std::cin >> option;
    ss << option;
    ss >> index;
    myPhoneBook.search(index);
}

int main(int argc, char **argv)
{
    std::string    option;      // string to store the option entered by the user.
    PhoneBook      myPhoneBook; // instance of the PhoneBook class.
    
    (void)  argc;
    (void)  argv;
    while (1)                   // inifite loop to keep the program running.
    {
        std::cout << "Please choose one of the options : " << "ADD, SEARCH, EXIT" <<std::endl << "$>";
        std::cin >> option;
        if (option == "ADD")
            addContact(myPhoneBook);
        else if (option == "SEARCH")
            searchContact(myPhoneBook);
        else if (option == "EXIT")
        {
            std::cout << "Exiting PhoneBook!" << std::endl;
            break ;
        }
        else
            std::cout << "Invalid option!" << std::endl;
    }
    return (EXIT_SUCCESS);
}