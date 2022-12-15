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

	while (1337)
	{
		std::getline(std::cin >> std::ws, cmd);
		if (std::cin.eof())
			break ;
		if (!cmd.compare("EXIT"))
		{
			std::cout << "Exiting PhoneBook ..." << std::endl;
			break ;
		}
		else if (!cmd.compare("ADD"))
		{
			if (pb.add())
			{
				continue ;
			}
		}
		else if (!cmd.compare("SEARCH"))
			pb.search();
		else
			std::cout << "Unknown Command" << std::endl;
	}
	return (0);
}
