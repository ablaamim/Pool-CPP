/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:42:59 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/04 18:33:34 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>
# include "./Contact.hpp"

class PhoneBook
{
	public :
		PhoneBook();
		void	add();
		//void	print_tab_srch();
		//void	search(void);
	private :
		Contact	Contacts[8];
		int		total;
};

#endif
