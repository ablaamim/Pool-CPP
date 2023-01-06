/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:55:37 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/03 15:09:58 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie();
		~Zombie();
		void		announce();
		void		set_name(std::string name);
		std::string	get_name(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
