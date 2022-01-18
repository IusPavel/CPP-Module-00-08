#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template<typename T>
typename T::iterator	easyFind(T & container, int value)
{
	typename T::iterator begin = container.begin();
	typename T::iterator end = container.end();

	begin = std::find(begin, end, value);
	if (begin != end)
		return begin;
	return end;
}

// template<typename T>
// int &	easyFind(T & container, int value)
// {
// 	typename T::iterator begin = container.begin();
// 	typename T::iterator end = container.end();

// 	while (begin != end)
// 	{
// 		if (*begin == value)
// 			return *begin;
// 		begin++;
// 	}
// 	throw std::runtime_error("error: easyFind: value " + std::to_string(value) + " not found");
// }

#endif