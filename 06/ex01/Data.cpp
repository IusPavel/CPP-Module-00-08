#include "Data.hpp"

Data::Data(int _x) : x(_x) {}

Data::Data(const Data &other) : x(other.x) {}

Data::~Data() {}

Data& Data::operator=(const Data& other)
{
	x = other.x;
	return *this;
}

int Data::getX(void)
{
	return x;
}

void	Data::setX(int _x)
{
	x = _x;
}