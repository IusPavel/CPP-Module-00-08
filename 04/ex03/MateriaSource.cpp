#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		memory[i] = 0;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (memory[i])
			delete memory[i];
	}
}

void MateriaSource::learnMateria(AMateria* copy)
{
	for (int i = 0; i < 4; i++)
		if (!memory[i])
		{
			memory[i] = copy;
			return ;
		}

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (memory[i] && memory[i]->getType() == type)
			return memory[i]->clone();
	}
	return (0);
}