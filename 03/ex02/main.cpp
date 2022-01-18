#include "FragTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	FragTrap ft("Vivi");
	ft.highFivesGuys();
	ft.attack("something");
	ft.takeDamage(99);
	ft.beRepaired(5);
}