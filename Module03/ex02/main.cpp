#include "FragTrap.hpp"

int	main()
{
	FragTrap trap("FragTrap");

	trap.attack("enemy");
	trap.highFivesGuys();
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}