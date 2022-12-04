/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:41:50 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:06 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void)		argv;
	(void)		argc;
	std::string	input;
	PhoneBook	pb;

	while(1337)
	{
		std::cout << "Please enter an option : " \
		<< "ADD, SEARCH OR EXIT" << std::endl;
		std::cout << "$> ";
		std::cin >> input;
		if (input == "EXIT" || std::cin.eof())
			break;
		else if (input == "ADD")
		{
			//std::cout << "ADD" << std::endl;
			pb.add();
		}
		else if (input == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
		}
		else
			std::cerr << "Invalid command!" << std::endl;
	}
	return (EXIT_SUCCESS);
}
