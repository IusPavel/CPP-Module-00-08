#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

public:

	ScavTrap(std::string _name, int _hitPoints = 100,
		int _energyPoints = 50, int _attackDamage = 20);
	virtual ~ScavTrap(void);

	void	virtual attack(std::string const & target);
	void	quardGate(void);
};

#endif