#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl;
	try
	{
		Form a("BlancA", 151, 15);
		std::cout << a << std::endl;
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

	try
	{
		Form b("BlancB", 15, 0);
		std::cout << b << std::endl;
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

	try
	{
		Bureaucrat boris("Boris", 100);
		Form c("BlancC", 15, 15);
		std::cout << boris << std::endl;
		std::cout << c << std::endl;
		c.beSigned(boris);
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

	try
	{
		Bureaucrat kennedy("Kennedy", 49);
		Form d("BlancD", 50, 10);
		std::cout << kennedy << std::endl;
		std::cout << d << std::endl;
		d.beSigned(kennedy);
		std::cout << d << std::endl;
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;
}