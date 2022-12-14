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

class Fixed
{
	public :
		Fixed();
		Fixed(Fixed const &rhs);
		Fixed &operator=(Fixed const &rhs);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
	private :
		int					rawBits;
		static int const	fractionalBits = 8;
};

# endif
