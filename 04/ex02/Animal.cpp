#include "Animal.hpp"

	Animal::Animal(std::string _type)
	{
		this->type = _type;
		std::cout << "Animal constructor called" << std::endl;
	}

	Animal::~Animal()
	{
		std::cout << "Animal destructor called" << std::endl;
	}

	Animal::Animal(const Animal &other)
	{
		// this->type = other.type;
		std::cout << "Animal copy constructor called" << std::endl;
		this->doCopy(other);
	}

	Animal & Animal::operator=(Animal &other)
	{
		// this->type = other.type;
		this->doCopy(other);
		return (*this);
	}

	void	Animal::doCopy(const Animal & other)
	{
		std::cout << "Animal doCopy() called" << std::endl;
		this->type = other.type;
	}

	// void	Animal::makeSound(void) const
	// {
	// 	std::cout << "???" << std::endl;
	// }

	std::string Animal::getType(void) const
	{
		return (type);
	}