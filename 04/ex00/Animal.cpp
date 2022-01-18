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
		this->type = other.type;
		std::cout << "Animal copy constructor called" << std::endl;
	}

	Animal & Animal::operator=(Animal &other)
	{
		this->type = other.type;
		return (*this);
	}

	void	Animal::makeSound(void) const
	{
		std::cout << "???" << std::endl;
	}

	std::string Animal::getType(void) const
	{
		return (type);
	}