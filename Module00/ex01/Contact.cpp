/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:46:43 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/12 17:33:38 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setFirstName(void)
{
	std::cout << "Enter a first name : ";
	std::getline(std::cin, this->firstName);
}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

/*
** Ask for an input and store the string inside _lastName of the instance
** pointed by this.
*/

void		Contact::setLastName(void)
{
	std::cout << "Enter the last name: ";
	std::getline(std::cin, this->lastName);
}

/*
** Return the string _lastName of the instance pointed by this.
*/

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

/*
** Ask for an input and store the string inside _nickname of the instance
** pointed by this.
*/

void	Contact::setNickName(void)
{
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, this->nickName);
}

/*
** Return the string _nickname of the instance pointed by this.
*/

std::string	Contact::getNickName(void)
{
	return (this->nickName);
}

/*
** Ask for an input and store the string inside _phoneNumber of the instance
** pointed by this.
*/

void		Contact::setPhoneNumber(void)
{
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, this->phoneNumber);
}

/*
** Return the string _phoneNumber of the instance pointed by this.
*/

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

/*
** Ask for an input and store the string inside _darkestSecret of the instance
** pointed by this.
*/

void		Contact::setDarkestSecret(void)
{
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
}

/*
** Return the string _darkestSecret of the instance pointed by this.
*/

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
