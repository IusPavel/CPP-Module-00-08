#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	virtual ~Cat(void);

	Cat(const Cat & other);

	Cat & operator=(const Cat & other);

	void			makeSound(void) const;
	void virtual	doCopy(const Animal & other);
	std::string *	getIdeas(void);
private:
	Brain *brain;
};

#endif