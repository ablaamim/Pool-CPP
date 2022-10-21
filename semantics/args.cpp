/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:17:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/10/21 09:31:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv)
{
	int	param;
	int	chars;

	param = 0x1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (param < argc)
		{
			chars = 0x0;
			while (argv[param][chars])
			{
				std::cout << (char) ft_toupper(argv[param][chars]) ;
				chars++;
			}
			param++;
		}
	}
	return (EXIT_SUCCESS);
}
