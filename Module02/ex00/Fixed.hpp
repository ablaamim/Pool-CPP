/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:00 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/11 16:28:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/*
* The Fixed class is a class that represents a fixed point value.
* It has a fixed number of bits for the fractional part.
* The number of bits for the fractional part is defined by the static const int fractionalBits.
* The value of the fractional part is 8 bits.
*/

/*
* Canonical form:
* - Default constructor.
* - Copy constructor.
* - Assignment operator.
* - Destructor.
*/

class Fixed
{
	public :
		Fixed();                               // Default constructor.
		Fixed(Fixed const &rhs); 			   // Copy constructor.
		Fixed &operator=(Fixed const &rhs);    // Assignment operator.
		~Fixed(); 							   // Destructor.
		
		int		getRawBits() const;            // Accessor (getter) method to the rawbits value.
		void	setRawBits(int const raw);     // Mutator (setter) method to the rawbits value.
	
	private :
		int					rawBits;         
		static int const	fractionalBits = 8;
};

# endif
