#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl;
	
	Bureaucrat bur("Bennet", 50);
	std::cout << bur << std::endl;
	std::cout << "=========================" << std::endl;
	try
	{
		ShrubberyCreationForm shrubbery("Home");
		std::cout << shrubbery << std::endl;
		shrubbery.beSigned(bur);
		shrubbery.execute(bur);
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

		try
	{
		RobotomyRequestForm robotomy("Milk factory");
		std::cout << robotomy << std::endl;
		robotomy.beSigned(bur);
		robotomy.execute(bur);
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

		try
	{
		PresidentialPardonForm presidential("Krabozavr");
		std::cout << presidential << std::endl;
		presidential.beSigned(bur);
		presidential.execute(bur);
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

}