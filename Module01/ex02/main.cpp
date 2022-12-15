/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:32:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/15 17:00:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "\nThe memory address of the string variable :\n" << std::endl;
	std::cout << "var address is       : " << &var << std::endl;
    std::cout << "stringPTR address is : " << stringPTR << std::endl;
	std::cout << "stringREF address is : " << &stringREF << std::endl;

	std::cout << "\nContent of :\n" << std::endl;
	std::cout << "var is       : " << var << std::endl;
	std::cout << "stringPTR is : " << *stringPTR << std::endl;
	std::cout << "stringREF is : " << stringREF << std::endl;
	return (0);
}
