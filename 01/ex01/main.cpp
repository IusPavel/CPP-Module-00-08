#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	int	number;
	number = 30;
	Zombie* myZombies = zombieHorde(number, "Zombie Horde");
	for (int i = 0; i < number; i++)
		(myZombies + i)->announce();
	delete []myZombies;
}