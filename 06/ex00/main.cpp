#include "MyConverter.hpp"
/*

std::numeric_limits<T>::


*/

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		std::cout << "Add argument(s) to convert value(s)" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		MyConverter example(argv[i]);
		example.printChar();
		example.printInt();
		example.printFloat();
		example.printDouble();
		i++;
	}
	return (0);
}