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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					fixed_point_value;
	static const int	num_of_bits;
	
};

std::ostream & operator<<(std::ostream & os, const Fixed & fix);

#endif