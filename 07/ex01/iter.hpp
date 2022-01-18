#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T1>
void	iter(T1 * array, unsigned int length, void (*f)(T1 &))
{
	for (int i = 0; i < static_cast<int>(length); i++)
	{
		f(array[i]);
	}
}

#endif