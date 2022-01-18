#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(raw);
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = roundf(raw * (pow(2, num_of_bits)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value = other.fixed_point_value;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point_value;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw << num_of_bits;
}

float	Fixed::toFloat(void) const
{
	return ((float)(fixed_point_value / pow(2, num_of_bits)));
}

int		Fixed::toInt(void) const
{
	return (fixed_point_value >> num_of_bits);
}

const int	Fixed::num_of_bits = 8;

std::ostream & operator<<(std::ostream & os, const Fixed & fix)
{
	os << fix.toFloat();
	return os;
}