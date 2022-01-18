#include "AMateria.hpp"

AMateria::AMateria(std::string const & _type) : type(_type)
{
}

AMateria::~AMateria(void)
{
}

std::string const & AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
	std::cout << "This text you'll never see" << std::endl;
}