/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:51:48 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/15 15:38:19 by ablaamim         ###   ########.fr       */
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
		void	setZombie(std::string name);
		std::string	getZombie();
		void	announce();
	private :
		std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
