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

/*
* Implementing a Fixed class :
* The Fixed class is a class that represents a fixed point number.
* It has a fixed number of bits for the fractional part.
* The number of bits for the fractional part is defined by the static const int fractionalBits.
* The fractional part is the part after the decimal point.
* The integer part is the part before the decimal point.
*/

Fixed::Fixed(void)                 // default constructor (no parameters)
{
	this->rawBits = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)          // constructor with int parameter
{
	this->rawBits = n << this->fractionalBits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float n)        // constructor with float parameter
{
	this->rawBits = roundf(n * (1 << this->fractionalBits));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)    // copy constructor (with const reference)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)               // destructor
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

float	Fixed::toFloat(void) const   // returns the value of the fixed point number as a float
{
	return ((float)this->rawBits / (float)(1 << this->fractionalBits));
}

int		Fixed::toInt(void) const    // returns the value of the fixed point number as an int
{
	return (this->rawBits >> this->fractionalBits);
}

std::ostream &operator<<(std::ostream &cout, Fixed const &rhs)
{
	cout << rhs.toFloat();
	return (cout);
}