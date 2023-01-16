/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:36:02 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:36:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &copy);

        void highFivesGuys();
};

# endif
