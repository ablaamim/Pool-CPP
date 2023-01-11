/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:26:15 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/11 16:34:08 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int	rawBits;
		static const int fractionalBits = 8;
	public :
		Fixed();
		Fixed(Fixed const &rhs);
		Fixed(int const raw);
		Fixed(float const raw);
		~Fixed();
		Fixed &operator=(Fixed const &rhs);

		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

# endif
