#include "HumanA.hpp"

	HumanA::HumanA(std::string nameA, Weapon &typeA) : name(nameA), type(typeA) {}
	
	HumanA::~HumanA(void) {}
	
	void	HumanA::attack(void)
	{
		std::cout << name << " attacks with his " << type.getType() << std::endl;
	}