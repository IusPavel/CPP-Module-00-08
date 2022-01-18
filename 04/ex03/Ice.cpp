#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice & other) : AMateria("ice")
{
	(void) other;
}

Ice & Ice::operator=(const Ice & other)
{
	(void) other;
	std::cout << "While assigning a Materia to another, \
	copying the type doesn’t make sense..." << std::endl;
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}