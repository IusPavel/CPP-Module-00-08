#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage)
	: ClapTrap(_name + "_clap_name"),
	ScavTrap(_name, 100, _energyPoints, 20),
	FragTrap(_name, _hitPoints, 100, _attackDamage),
	name(_name)
{
	hitPoints = _hitPoints;
	energyPoints = _energyPoints;
	attackDamage = _attackDamage;
	std::cout << "DiamondTrap Constructor called. Name = ["
		<< name << "], Hitpoints = [" << hitPoints << "], energypoints = ["
		<< energyPoints << "], AttackDamage = [" << attackDamage << "]"
		<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap attack(): ";
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << name << " and my ClapTrap's name is "
		<< ClapTrap::name << std::endl;
}