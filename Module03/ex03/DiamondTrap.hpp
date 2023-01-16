/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:37:12 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:37:13 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    private :
        std::string _name;

    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &copy);
        ~DiamondTrap();
        DiamondTrap &operator=(const DiamondTrap &copy);

        virtual void attack(std::string const & target);
        void whoAmI();
};


# endif
