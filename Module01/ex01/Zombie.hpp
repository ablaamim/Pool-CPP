/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:40:39 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/15 15:49:44 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public :
		Zombie();
		~Zombie();
		void	announce();
		std::string	getZombie();
		void	setZombie(std::string name);
	private :
		std::string name;
};

Zombie *ZombieHorde(int N, std::string name);

#endif
