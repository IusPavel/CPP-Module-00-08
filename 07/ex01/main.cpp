#include <iostream>
#include "iter.hpp"

void	printVal(int a);
void	printVal2(std::string& a);
void	incremVal(int& a);
void	toUppperCase(std::string& a);

int	main(void)
{
	// std::cout << "\n==========TEST1==========" << std::endl;
	// {
	// 	int 			a[] = {1, 2, 3, 4, 5};
	// 	unsigned int	length = sizeof(a) / sizeof(a[0]);

	// 	::iter(a, length, printVal);
	// 	std::cout << "----------" << std::endl;
	// 	::iter(a, length, incremVal);
	// 	::iter(a, length, printVal);
	// }

	std::cout << "\n==========TEST2==========" << std::endl;
	{
		std::string 	a[] = {"do", "re", "mi", "fa", "salt"};
		unsigned int	length = sizeof(a) / sizeof(a[0]);

		::iter(a, length, printVal2);
		std::cout << "----------" << std::endl;
		::iter(a, length, toUppperCase);
		::iter(a, length, printVal2);
	}
}

void	printVal(int a)
{
	std::cout << a << std::endl;
}

// 1. Not overloaded. Not templated
void	printVal2(std::string& a)
{
	std::cout << a << std::endl;
}

void	incremVal(int& a)
{
	++a;
}

void	toUppperCase(std::string& a)
{
	for (int i = 0; i < (int)a.length(); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
}