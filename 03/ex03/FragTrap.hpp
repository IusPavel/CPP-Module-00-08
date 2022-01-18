#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

	FragTrap(std::string _name, int _hitPoints = 100,
		int _energyPoints = 100, int _attackDamage = 30);
	virtual ~FragTrap();

	void	highFivesGuys(void);
};

#endif