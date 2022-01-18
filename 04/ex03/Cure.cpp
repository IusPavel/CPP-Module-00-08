#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure & other) : AMateria("cure")
{
	(void) other;
}

Cure & Cure::operator=(const Cure & other)
{
	(void) other;
	std::cout << "While assigning a Materia to another, \
	copying the type doesn’t make sense..." << std::endl;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}