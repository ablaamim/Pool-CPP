/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:18:34 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/04 18:42:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->total = 0x0;
}

void	PhoneBook::add()
{
	if (this->total == 8)
		std::cout << "PhoneBook is full!" << std::endl;
}
