#include "span.hpp"
#include <algorithm>

Span::Span(unsigned int length) : _array(), _length(length)
{
}

Span::Span(const Span& other) : _array(other._array), _length(other._length)
{
}

Span::~Span(void)
{
}

Span & Span::operator=(const Span& other)
{
	this->_array = other._array;
	this->_length = other._length;
	return *this;
}

void	Span::addNumber(int value)
{
	if (this->_array.size() == this->_length)
		throw std::length_error("Length error");
	_array.push_back(value);
}

ssize_t		Span::shortestSpan(void)
{
	if (this->_array.size() == 0 || this->_array.size() == 1)
		throw std::range_error("Range error");
	std::vector<int> copy(_array);
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator begin = copy.begin();
	std::vector<int>::iterator end = copy.end();
	ssize_t	min = static_cast<ssize_t>(*(begin + 1)) - *begin;
	while (begin + 1 != end)
	{
		if (static_cast<ssize_t>(*(begin + 1)) - *(begin) < min)
			min = *(begin + 1) - *(begin);
		++begin;
	}
	return min;
}

ssize_t	Span::longestSpan(void)
{
	if (this->_array.size() == 0 || this->_array.size() == 1)
		throw std::range_error("Range error");
	std::vector<int> copy(_array);
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator begin = copy.begin();
	std::vector<int>::iterator end = copy.end();
	return static_cast<ssize_t>(*(end - 1)) - *(begin);
}