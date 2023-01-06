/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:19:53 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/06 17:19:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
  std::string s = "HI THIS IS BRAIN";

  /* 
    Create a pointer to the string
  */
  std::string* stringPTR = &s;

  /*
    Create a reference to the string 
  */
  std::string& stringREF = s;

  /*
    Print the memory addresses of the string using the pointer and the reference variables
  */
  std::cout <<  std::endl <<"           Memory addresses        " << std::endl << std::endl;
  std::cout << "Memory address of s              : " << &s << std::endl;
  std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

  /*
    Print the values of the string using the pointer and the reference variables
  */
  std::cout << std::endl << "                Values        " << std::endl << std::endl;
  std::cout << "Value of s: " << s << std::endl;
  std::cout << "Value pointed to by stringPTR    : " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF    : " << stringREF << std::endl << std::endl;
  return (0);
}
