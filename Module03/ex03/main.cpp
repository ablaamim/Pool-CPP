#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap trap("Diamond");

	trap.whoAmI();
	trap.guardGate();
	trap.highFivesGuys();
	trap.attack("Enemy");
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}