#include "ClapTrap.hpp"

int	main(){
	ClapTrap Abdessamad("Abdessamad");

	Abdessamad.attack("Crawlinghorror");
	Abdessamad.takeDamage(8);
	Abdessamad.attack("Vlad");
	Abdessamad.takeDamage(1);
	Abdessamad.attack("Random character");
	Abdessamad.beRepaired(1);
	Abdessamad.attack("Pigman");
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.beRepaired(1);
	Abdessamad.attack("Dark wizard");
	return (0);
}