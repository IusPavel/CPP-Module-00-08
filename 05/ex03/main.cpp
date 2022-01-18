#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl;
	Intern	randomIntern;
	Form*	rrf;
	std::cout << "=========================" << std::endl;
	try
	{
		rrf = randomIntern.makeForm("robotomy request", "Me");
		rrf = randomIntern.makeForm("shrubbery creation", "Yot");
		rrf = randomIntern.makeForm("presidential pardon", "He");
		rrf = randomIntern.makeForm("undeclared", "She");
	}
	catch(std::string ex)
	{
		std::cerr << ex << std::endl;
	}
	std::cout << "======================================================" << std::endl;

}