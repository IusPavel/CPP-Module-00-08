#include "Character.hpp"

Character::Character(std::string _name) : name(_name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

Character::Character(const Character & other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i];
	}
}

Character & Character::operator=(const Character & other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}