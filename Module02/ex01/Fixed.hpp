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
		int					rawBits;
		static const int	fractionalBits = 8;
	public :
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed & src);
		~Fixed(void);
		Fixed & operator=(const Fixed & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

# endif
