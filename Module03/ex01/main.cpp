#include "ScavTrap.hpp"

int	main()
{
	ScavTrap trap("Scav");

	trap.guardGate();
	trap.attack("BirdMan");
	trap.takeDamage(14);
	trap.beRepaired(2);
	return (0);
}