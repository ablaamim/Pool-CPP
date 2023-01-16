/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:34:37 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/16 18:34:39 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

/*
* ClapTrap class is parent class of FragTrap and ScavTrap
* It has 4 member variables and 3 member functions.
*/

class ClapTrap
{
    private :
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public :
        // Constructor, Destructor, Copy Constructor, Copy Assignment Operator
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        ~ClapTrap();

        // Member functions
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
