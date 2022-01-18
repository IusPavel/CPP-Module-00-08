#include <iostream>
#include "Data.hpp"

std::uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data* a = new Data(5);
	Data* b = NULL;
	uintptr_t addr;

	std::cout << std::endl;
	std::cout << "Pointer 'a' created.\nBEFORE conversion: Its field x = " << a->getX()
		<< ", its address = " << a << std::endl;
	addr = serialize(a);

	std::cout << "Address of the pointer converted in integer = "
		<< addr << std::endl;

	b = deserialize(addr);
	std::cout << "Pointer 'b' taking this integer. AFTER conversion: Its field x = " << b->getX()
		<< ", its address = " << b << std::endl;
	
	std::cout << std::endl;

	std::cout << "Changing field x via pointer 'b'... ";
	b->setX(3);
	std::cout << "From now b.x = " << b->getX() << ", a.x = " << a->getX()
		<< std::endl;
}