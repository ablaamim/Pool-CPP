/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:49:03 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/06 17:05:16 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private :
		std::string	name;
	public :
		Zombie();
		~Zombie();
		void		announce();
		std::string	get_name();
		void		set_name(std::string name);
};

Zombie *ZombieHorde(int N, std::string name);

#endif
