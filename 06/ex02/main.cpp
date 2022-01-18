#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {public: virtual ~Base(){} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int		main(void)
{
	Base* p = generate();
	identify(p);
	identify(*p);
}

Base*	generate(void)
{
	int	i;

	srand(time(0));
	i = rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "generate() created object: A" << std::endl;
		return new A;
	case 1:
		std::cout << "generate() created object: B" << std::endl;
		return new B;
	default:
		std::cout << "generate() created object: C" << std::endl;
		return new C;
	}
}

void	identify(Base* p)
{
	std::cout << "identify(Base* p) got: ";
	Base* tmp = dynamic_cast<A*>(p);
	if (tmp != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}

	tmp = dynamic_cast<B*>(p);
	if (tmp != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}

	tmp = dynamic_cast<C*>(p);
	if (tmp != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "undefined class pointer" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "identify(Base& p) got: ";
	try
	{
		Base& tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::bad_cast& ex)
	{
	}

	try
	{
		Base& tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::bad_cast& ex)
	{
	}

	try
	{
		Base& tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::bad_cast& ex)
	{
	}
	std::cout << "undefined class pointer" << std::endl;
}