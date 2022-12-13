/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:56:18 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/12 17:37:48 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

phoneBook::phoneBook()
{
	this->index = 0;
	this->count = 0;
}

phoneBook::~phoneBook()
{
	return ;
}

/*
** Increment the _numberContact if it is not already at 8.
*/

void phoneBook::setNumberContact( void )
{
	if (this->getNumberContact() < 8)
		this->count++;
}

/*
** Return the int _numberContact of the instance pointed by this.
*/

int phoneBook::getNumberContact( void )
{
	return (this->count);
}

int		phoneBook::getIndex(void)
{
	return (this->index);
}

void	phoneBook::setIndex(void)
{
	if (getIndex() >= 7)
		this->index = 0;
	else
		this->index++;
}

void	phoneBook::add()
{
	int		index;
	Contact	*contact;

	index = this->getIndex();
	contact = &this->contact[index];
	(*contact).setFirstName();
	(*contact).setLastName();
	(*contact).setNickName();
	(*contact).setPhoneNumber();
	(*contact).setDarkestSecret();
	if ((*contact).getFirstName().length() == 0 &&
		(*contact).getLastName().length() == 0 &&
		(*contact).getNickName().length() == 0 &&
		(*contact).getPhoneNumber().length() == 0 &&
		(*contact).getDarkestSecret().length() == 0)
			return ;
	this->setNumberContact();
	this->setIndex();
}

/*
** If the lenght of the string is more than 10, it will truncate the string
** to only keep the first 10 character and replace the tenth character by a '.'
*/

static std::string truncate( std::string str )
{
    if (str.length() > 10)
         return str.substr(0, 9) + ".";
    return str;
}

/*
** This function print the header of the SEARCH command.
*/

static void	header( void )
{
	std::cout.width(10);
	std::cout << std::right << "Index" << '|';
	std::cout.width(10);
	std::cout << std::right << "First Name" << '|';
	std::cout.width(10);
	std::cout << std::right << "Last Name" << '|';
	std::cout.width(10);
	std::cout << std::right << "Nickname" << '|';
	std::cout << std::endl;
}

/*
** This function print all the fields of a contact.
*/

static void printFullContact(Contact *contact)
{
	std::cout << "First Name     : ";
	std::cout << (*contact).getFirstName() << std::endl;
	std::cout << "Last Name      : ";
	std::cout << (*contact).getLastName() << std::endl;
	std::cout << "Nickname       : ";
	std::cout << (*contact).getNickName() << std::endl;
	std::cout << "Phone Number   : ";
	std::cout << (*contact).getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : ";
	std::cout << (*contact).getDarkestSecret() << std::endl;

}

/*
** This function ask for an index and try to print all the fields if
** the index is valid and the contact exists.
*/

void phoneBook::inputIndex(void)
{
	std::string			indexStr;
	int					indexInt;
	std::stringstream	index;
	Contact 			*contact;

	std::cout << "Enter an index (1 - 8) : ";
	std::getline(std::cin, indexStr);
	index << indexStr;
	index >> indexInt;
	if (indexInt < 1 || indexInt > 8)
		std::cout << "Index should be between 1 and 8." << std::endl;
	else
	{
		if (indexInt > this->count)
			std::cout << "This index's contact is empty." << std::endl;
		else
		{
			contact = &this->contact[indexInt - 1];
			printFullContact(contact);
		}
	}
}

/*
** This function print a error message in case there is no contact in
** the minitel.
*/


static void	printNoContact( void )
{
	std::cout << "There are no contact in the minitel!" << std::endl;
	std::cout << "You can add one by using the ADD command." << std::endl;
}

/*
** We first get the number of contact. If there is none, we call printNoContact().
** Else we print the header and the fields of the contacts.
** Finally we call inputIndex() to ask the user a specific contact to print.
*/

void	phoneBook::search( void )
{
	Contact	*contact;
	int		numberContact;
	int		i;
	
	numberContact = this->getNumberContact();
	if (numberContact == 0)
	{
		printNoContact();
		return ;
	}
	else
		header();
	for (i = 0; i < numberContact; i++)
	{
		contact = &this->contact[i];
		std::cout.width(10);
		std::cout << std::right << i + 1 << '|';
		std::cout.width(10);
		std::cout << std::right << truncate((*contact).getFirstName()) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate((*contact).getLastName()) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate((*contact).getNickName()) << '|';
		std::cout << std::endl;
	}
	this->inputIndex();
}
