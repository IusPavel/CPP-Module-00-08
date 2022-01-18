#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:

	std::string	name;
	Weapon		&type;

public:

	HumanA(std::string nameA, Weapon &typeA);
	~HumanA(void);

	void	attack(void);

};

#endif