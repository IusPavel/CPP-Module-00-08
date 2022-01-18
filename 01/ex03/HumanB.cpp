#include "HumanB.hpp"

	HumanB::HumanB(std::string nameA) : name(nameA) {}
	HumanB::~HumanB(void) {}
	
	void	HumanB::attack(void)
	{
		std::cout << name << " attacks with his " << type->getType() << std::endl;
	}

	void	HumanB::setWeapon(Weapon &type)
	{
		this->type = &type;
	}