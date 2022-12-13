/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:15:08 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/12 17:34:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Contact
{
	public :
		Contact();
		~Contact();
		void		setFirstName(void);
		std::string	getFirstName(void);
		void		setNickName(void);
		std::string	getNickName(void);
		void		setLastName(void);
		std::string getLastName(void);
		void		setPhoneNumber(void);
		std::string getPhoneNumber(void);	
		void		setDarkestSecret(void);
		std::string getDarkestSecret(void);
	private :
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif
