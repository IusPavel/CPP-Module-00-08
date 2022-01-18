#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed &	operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					fixed_point_value;
	static const int	num_of_bits;
	
};

#endif