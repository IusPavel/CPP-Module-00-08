#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap trap("VX-540N");
	trap.attack("something");
	trap.takeDamage(8);
	trap.beRepaired(5);
}