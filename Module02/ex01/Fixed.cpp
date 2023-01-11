/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:03:57 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/11 16:49:28 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	rawBits = getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator is called" << std::endl;
	rawBits = getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	rawBits = raw;
}

Fixed::Fixed(int const raw)
{
	rawBits = raw << fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw)
{
	rawBits = (int) roundf(raw * (1 << fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return (rawBits >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (rawBits / (float)(1 << fractionalBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}