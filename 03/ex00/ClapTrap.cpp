#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name, int _hitPoints,
	int _energyPoints, int _attackDamage)
	: name(_name), hitPoints(_hitPoints), energyPoints(_energyPoints),
	attackDamage(_attackDamage) 
{

	std::cout << "ClapTrap Constructor called. Name = ["
		<< name << "], Hitpoints = [" << hitPoints << "], energypoints = ["
		<< energyPoints << "], AttackDamage = [" << attackDamage << "]"
		<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ClapTrap " << name << "'s copy is born!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack "
		<< target << ", causing " << attackDamage << " points of damage!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "ClapTrap " << this->name << " has taken "
		<< amount << " damage. AAAARGHHH. " << this->hitPoints << "hp left.";
	if (this->hitPoints == 0)
		std::cout << " ClapTrap destroyed!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 100)
		this->hitPoints = 100;
	if (this->hitPoints != 0)
	{
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " have been repaired by "
			<< amount << " hp! " << this->hitPoints << "hp left."
			<< std::endl;
	}
	else
		std::cout << "You can't repair ClapTrap " << this->name
			<< " because of 0hp..." << std::endl;
}