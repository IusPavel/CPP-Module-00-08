#include "Cat.hpp"
#include <cstring>

Cat::Cat(void) : Animal("Cat"), brain(new Brain())
{
	for (int i = 0; i < 100; i++)
	{
		brain->ideas[i] = "new idea";
	}
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat & other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	doCopy(other);
}

Cat & Cat::operator=(const Cat & other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	delete this->brain;
	if (other.brain)
	{
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = other.brain->ideas[i];
	}
	else
		this->brain = 0;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::doCopy(const Animal & other)
{
	std::cout << "Cat doCopy() called" << std::endl;
	this->type = other.getType();
	const Cat & ot = dynamic_cast<const Cat &>(other);
	if (ot.brain)
	{
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = ot.brain->ideas[i];
	}
	else
		this->brain = 0;
}

std::string *	Cat::getIdeas(void)
{
	return this->brain->ideas;
}