#include <iostream>
#include "whatever.hpp"

int	main(void)
{
	std::cout << "\n==========TEST1==========" << std::endl;
	{
		int	a = 2;
		int	b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min(" << a << ", " << b << ") = " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b << ") = " << ::max(a, b) << std::endl;
	}
	std::cout << "\n==========TEST2==========" << std::endl;
	{
		double	a = 2.02;
		double	b = 3.03;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min(" << a << ", " << b << ") = " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b << ") = " << ::max(a, b) << std::endl;
	}
	std::cout << "\n==========TEST3==========" << std::endl;
	{

		std::string	a = "chaine1";
		std::string	b = "chaine2";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min(" << a << ", " << b << ") = " << ::min(a, b) << std::endl;
		std::cout << "max(" << a << ", " << b << ") = " << ::max(a, b) << std::endl;
	}
}