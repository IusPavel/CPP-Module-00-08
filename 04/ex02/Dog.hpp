#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	virtual ~Dog(void);

	Dog(const Dog &other);

	virtual Dog & operator=(Dog &other);

	void			makeSound(void) const;
	void virtual	doCopy(const Animal & other);
	std::string *	getIdeas(void);
private:
	Brain *brain;
};

#endif