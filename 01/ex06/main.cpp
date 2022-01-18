#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Karen myKaren;
		myKaren.complain(argv[1]);
		return (0);
	}
	return (1);
}