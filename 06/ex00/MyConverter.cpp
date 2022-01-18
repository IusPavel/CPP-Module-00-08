#include "MyConverter.hpp"
// #include <exception>

MyConverter::MyConverter(const char *str) : raw_str(str)
{
	myCast();
}

MyConverter::~MyConverter(void)
{
}

void	MyConverter::printChar(void)
{
	if (inDouble != inDouble)
		std::cout << "char: impossible" << std::endl;
	else if (isprint(inInt))
		std::cout << "char: '" << inChar << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	MyConverter::printInt(void)
{
	if (inDouble != inDouble)
		std::cout << "int: impossible" << std::endl;
	else
	{
		std::cout << "int: " << inInt;
		if (inDouble > std::numeric_limits<int>::max())
			std::cout << " (overflow)";
		std::cout << std::endl;
	}
}

void	MyConverter::printFloat(void)
{
	std::cout << "float: " << inFloat;
	if (inFloat == inInt && inFloat < 1000000.0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	MyConverter::printDouble(void)
{
	std::cout << "double: " << inDouble;
	if (inDouble == inInt && inDouble < 1000000.0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	MyConverter::myCast(void)
{
	char*	p;

	inDouble = strtod(raw_str, &p);
	if (!(*p == 0 || (strlen(p) == 1 && *p == 'f' && strlen(raw_str) > 1)))
		inDouble = std::numeric_limits<double>::quiet_NaN();
	inFloat = static_cast<float>(inDouble);
	inInt = static_cast<int>(inDouble);
	inChar = static_cast<char>(inDouble);
}