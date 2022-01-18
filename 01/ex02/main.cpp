#include <iostream>

int	main(void)
{
	std::string stringSRC = "HI THIS IS BRAIN";

	std::string *stringPTR = &stringSRC;
	std::string &stringREF = stringSRC;

	std::cout << "Addresss of stringSRC: " << &stringSRC << std::endl;
	std::cout << "Addresss of stringSRC via stringPTR: " << stringPTR << std::endl;
	std::cout << "Addresss of stringSRC via stringREF: " << &stringREF << std::endl;

	std::cout << "stringSRC via stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringSRC via stringREF: " << stringREF << std::endl;
}