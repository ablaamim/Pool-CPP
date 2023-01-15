#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragTrap);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &fragTrap);
        void highFivesGuys(void);
};

# endif