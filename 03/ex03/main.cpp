#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	DiamondTrap ft("Vivi");
	ft.highFivesGuys();
	ft.quardGate();
	ft.attack("something");
	ft.takeDamage(99);
	ft.beRepaired(5);

	ft.whoAmI();
}