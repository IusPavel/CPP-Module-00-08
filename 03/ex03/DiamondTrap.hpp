#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:

	DiamondTrap(std::string _name, int _hitPoints = 100,
		int _energyPoints = 50, int _attackDamage = 30);
	virtual ~DiamondTrap();

	void	virtual attack(std::string const & target);
	void	whoAmI(void);

protected:

	std::string name;

};

#endif