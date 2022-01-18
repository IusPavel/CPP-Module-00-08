#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:
	Animal(std::string _type = "");		// default constructor
	~Animal();							// destructor

	Animal(const Animal &other);		// copy constructor

	Animal & operator=(Animal &other);	// assignment operator

	void virtual		makeSound(void) const;
	std::string virtual	getType(void) const;
protected:
	std::string type;

};

#endif