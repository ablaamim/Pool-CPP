/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 07:36:48 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/12 17:29:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

class phoneBook
{
	public :
		phoneBook();
		~phoneBook();
		bool	add();
		void	search();
		void	inputIndex( void );
		int		getIndex(void);
		void	setIndex(void);
		void	setNumberContact( void );
		int		getNumberContact( void );
	private :
		Contact	contact[8];
		int		index;
		int		count;
};

#endif
