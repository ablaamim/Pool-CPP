/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:13:11 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/04 18:35:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdlib.h>
# include <string>
# include <iomanip>

class Contact
{
	public :
		Contact();
	private :
		//int	index;
		static std::string	infos[5];
		std::string			in_data[11];
};

#endif
