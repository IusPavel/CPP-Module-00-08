#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name, int _hitPoints, int _energyPoints, int _attackDamage) : ClapTrap(_name)
{
	hitPoints = _hitPoints;
	energyPoints = _energyPoints;
	attackDamage = _attackDamage;
	std::cout << "FragTrap Constructor called. Name = ["
		<< name << "], Hitpoints = [" << hitPoints << "], energypoints = ["
		<< energyPoints << "], AttackDamage = [" << attackDamage << "]"
		<< std::endl;
}

FragTrap::~FragTrap()
{
std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: High five!" << std::endl;
}