#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	doCopy(other);
	// this->type = other.type;
	// if (other.brain)
	// {
	// 	brain = new Brain();
	// 	for (int i = 0; i < 100; i++)
	// 	{
	// 		this->brain->ideas[i] = other.brain->ideas[i];
	// 	}
	// }
	// else
	// 	this->brain = 0;
}

Dog & Dog::operator=(Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
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

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::doCopy(const Animal & other)
{
	std::cout << "Dog doCopy() called" << std::endl;
	this->type = other.getType();
	const Dog & ot = dynamic_cast<const Dog &>(other);
	if (ot.brain)
	{
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = ot.brain->ideas[i];
	}
	else
		this->brain = 0;
}

std::string *	Dog::getIdeas(void)
{
	return this->brain->ideas;
}