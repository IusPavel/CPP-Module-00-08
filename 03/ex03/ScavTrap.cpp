#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name, int _hitPoints,
	int _energyPoints, int _attackDamage) : ClapTrap(_name)
{
	hitPoints = _hitPoints;
	energyPoints = _energyPoints;
	attackDamage = _attackDamage;
	std::cout << "ScavTrap Constructor called. Name = ["
		<< name << "], Hitpoints = [" << hitPoints << "], energypoints = ["
		<< energyPoints << "], AttackDamage = [" << attackDamage << "]"
		<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->name << " attack "
		<< target << ", causing " << attackDamage << " points of damage!"
		<< std::endl;
}

void	ScavTrap::quardGate(void)
{
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}