#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed &	operator=(const Fixed &other);
	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);
	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);
	Fixed &	operator++();
	Fixed 	operator++(int);
	Fixed &	operator--();
	Fixed 	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed &	min(Fixed &a, Fixed &b);
	static const Fixed &	min(const Fixed &a, const Fixed &b);
	static Fixed &	max(Fixed &a, Fixed &b);
	static const Fixed &	max(const Fixed &a, const Fixed &b);

private:

	int					fixed_point_value;
	static const int	num_of_bits;
	
};

std::ostream & operator<<(std::ostream & os, const Fixed & fix);

#endif