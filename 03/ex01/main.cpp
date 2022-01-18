#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	ScavTrap scavtrap("Vivi");
	scavtrap.quardGate();
	scavtrap.attack("something");
	scavtrap.takeDamage(101);
	scavtrap.beRepaired(5);

}