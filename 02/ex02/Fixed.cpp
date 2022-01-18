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

bool	Fixed::operator>(const Fixed &other)
{
	return this->getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(const Fixed &other)
{
	return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(const Fixed &other)
{
	return this->getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(const Fixed &other)
{
	return this->getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(const Fixed &other)
{
	return this->getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(const Fixed &other)
{
	return this->getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed temp;
	temp.fixed_point_value = this->fixed_point_value + other.fixed_point_value;
	return temp;
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed temp;
	temp.fixed_point_value = this->fixed_point_value - other.fixed_point_value;
	return temp;
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed temp;
	temp.fixed_point_value = (this->fixed_point_value * other.fixed_point_value)
		/ pow(2, num_of_bits);
	return temp;
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed temp;
	temp.fixed_point_value = (this->fixed_point_value / other.fixed_point_value
		/ pow(2, num_of_bits));
	return temp;
}

Fixed &	Fixed::operator++(void)
{
	++fixed_point_value;
	return *this;
}

Fixed 	Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixed_point_value++;
	return (temp);
}

Fixed &	Fixed::operator--(void)
{
	--fixed_point_value;
	return *this;
}

Fixed 	Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixed_point_value--;
	return (temp);
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

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	return (a.fixed_point_value < b.fixed_point_value
			? a : b);
}

const Fixed &	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.fixed_point_value < b.fixed_point_value
			? a : b);
}

Fixed &	Fixed::max(Fixed &a, Fixed &b)
{
	return (a.fixed_point_value > b.fixed_point_value
			? a : b);
}

const Fixed &	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.fixed_point_value > b.fixed_point_value
			? a : b);
}

const int	Fixed::num_of_bits = 8;

std::ostream & operator<<(std::ostream & os, const Fixed & fix)
{
	os << fix.toFloat();
	return os;
}