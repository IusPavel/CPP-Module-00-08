#ifndef MYCONVERTER_HPP
#define MYCONVERTER_HPP
#include <iostream>
#include <climits>

class MyConverter
{
	private:
		const char*	raw_str;
		double		inDouble;
		float		inFloat;
		int			inInt;
		char		inChar;

		void	myCast(void);

	public:
		MyConverter(const char *str);
		~MyConverter(void);

		void	printChar(void);
		void	printInt(void);
		void	printFloat(void);
		void	printDouble(void);
};

#endif