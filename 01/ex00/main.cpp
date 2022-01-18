#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie* myZombie = newZombie("Dynamic Zombie");
	myZombie->announce();
	randomChump("Static Zombie");
	delete myZombie;
}