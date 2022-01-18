#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:
	Animal(std::string _type = "");		// default constructor
	virtual ~Animal();							// destructor

	Animal(const Animal &other);		// copy constructor

	virtual Animal & operator=(Animal &other);	// assignment operator

	void virtual		makeSound(void) const = 0;
	std::string virtual	getType(void) const;
	void virtual		doCopy(const Animal & other);
protected:
	std::string type;

};

#endif