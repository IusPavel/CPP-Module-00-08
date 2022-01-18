#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl;
	try
	{
		Bureaucrat bureaucrat1("Alex", 0);
	}
	catch(std::string GradeException)
	{
		std::cerr << GradeException << std::endl;
	}
	std::cout << "======================================================" << std::endl;




	try
	{
		Bureaucrat bureaucrat2("John", 151);
	}
	catch(std::string GradeException)
	{
		std::cerr << GradeException << std::endl;
	}
	std::cout << "======================================================" << std::endl;




	Bureaucrat bureaucrat3("Wally", 1);
	std::cout << bureaucrat3 << std::endl;
	try
	{
		bureaucrat3.upGrade();
	}
	catch(std::string GradeException)
	{
		std::cerr << GradeException << std::endl;
	}
	std::cout << "======================================================" << std::endl;




	Bureaucrat bureaucrat4("Sandra", 150);
	std::cout << bureaucrat4 << std::endl;
	try
	{
		bureaucrat4.downGrade();
	}
	catch(std::string GradeException)
	{
		std::cerr << GradeException << std::endl;
	}
	std::cout << "======================================================" << std::endl;
}