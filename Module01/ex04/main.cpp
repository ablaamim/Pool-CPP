/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:47:58 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/07 15:07:06 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	ParseEmptyArgs( char **args)
{
	if (args[1][0] == '\0')
	{
		std::cerr << "Error: Filename is empty. " <<std::endl;
		return (true);
	}	
	if (args[2][0] == '\0')
	{	
		std::cerr << "Error: S1 is empty. " <<std::endl;
		return (true);
	}
	if (args[3][0] == '\0')
	{
		std::cerr << "Error: S2 is empty. " <<std::endl;
		return (true);
	}
	return (false);
}

/*
* 1. Open the file for reading.
* 2. Open the file for writing.
* 3. Read the file line by line.
* 4. Replace the string s1 with the string s2.
* 5. Write the new line in the output file.
*/

void	sed(const std::string& fileName, const std::string& s1, const std::string& s2)
{
	std::string		line;

	if (!s1.compare(s2))
    {
		std::cerr << "Error : Same sentences" << std::endl;
		return ;
	}
	std::ifstream input_file(fileName);
	if (!input_file.is_open())
    {
		std::cerr << "Error: open file: " << fileName << std::endl;
		return ;
	}
	std::string newName = fileName + ".replace";
  	std::ofstream output_file(newName);	
	std::ofstream file2(newName.c_str());
	if (!file2.is_open())
	{
		std::cerr << "Error: open/create file: " << std::endl;
		return ;
	}
	
	while (std::getline(input_file, line))
	{
		std::string	new_line;
		for(size_t i = 0; i < line.length() ; ++i)
		{
			//std::cout << line.substr(i, s1.size()) << std::endl;
			if (line.substr(i, s1.size()) == s1)
			{
				new_line += s2;
				i += s1.size() - 1;
			}
			else
				new_line += line[i];
		}
		output_file << new_line << "\n";
	}
}

/*
* 1. Check if the number of arguments is correct.
* 2. Check if the arguments are empty.
* 3. Call the sed function.
*/

int	main(int argc, char **argv)
{
	if (argc != 4 || ParseEmptyArgs(argv))
	{
		std::cerr << "Usage : " << "<filename> <s1> <s2>" << std::endl;
		return (1);
	}
	sed(argv[1], argv[2], argv[3]);
	return (0);
}
