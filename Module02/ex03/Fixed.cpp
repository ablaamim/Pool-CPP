/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:20:29 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/13 14:20:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int n) : fixedPointValue(n << fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float n) : fixedPointValue(roundf(n * (1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointValue = rhs.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (float)(1 << fractionalBits));
}

int     Fixed::toInt(void) const
{
    return (this->fixedPointValue >> fractionalBits);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
    return (this->fixedPointValue > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
    return (this->fixedPointValue < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
    return (this->fixedPointValue >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
    return (this->fixedPointValue <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
    return (this->fixedPointValue == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
    return (this->fixedPointValue != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator++(void)
{
    this->fixedPointValue++;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed	tmp(*this);

    this->fixedPointValue++;
    return (tmp);
}

Fixed &	Fixed::operator--(void)
{
    this->fixedPointValue--;
    return (*this);
}

Fixed	Fixed::operator--(int)
{
    Fixed	tmp(*this);

    this->fixedPointValue--;
    return (tmp);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &	Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &OUT, const Fixed &rhs)
{
    OUT << rhs.toFloat();
    return (OUT);
}