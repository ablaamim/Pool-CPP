/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 07:36:23 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/12 09:16:49 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
 * Read/Eval loop : WHILE[TRUE] read input via getline() and compare input
 * with ABSTRACT INTERFACE, and if one of them matchs, we call the right
 * function.
*/

int	main(void)
{
	std::string	cmd;
	phoneBook	pb;

	while (std::getline(std::cin >> std::ws, cmd))
	{
		if (!cmd.compare("EXIT"))
		{
			std::cout << "Exiting PhoneBook ..." << std::endl;
			break ;
		}
		else if (!cmd.compare("ADD"))
		{
			//std::cout << "ADD" << std::endl;
			pb.add();
		}
		else if (!cmd.compare("SEARCH"))
		{
			pb.search();
			//std::cout << "SEARCH" << std::endl;
		}
		else
			std::cout << "Unknown Command" << std::endl;
	}
	return (0);
}
