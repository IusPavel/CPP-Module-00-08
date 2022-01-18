#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{

public:

	ClapTrap(std::string _name, int _hitPoints = 10,
		int _energyPoints = 10, int _attackDamage = 0);
	virtual ~ClapTrap(void);

	ClapTrap(const ClapTrap &other);

	ClapTrap & operator=(const ClapTrap & other);

	void	virtual attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	std::string			name;
	int					hitPoints;
	int					energyPoints;
	int					attackDamage;

};

#endif