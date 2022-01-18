#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> _array;
		unsigned int _length;

	public:
		Span(unsigned int length);
		Span(const Span& other);
		~Span(void);

		Span & operator=(const Span& other);

		void	addNumber(int value);
		template <typename T> void	addNumber(T begin, T end);
		ssize_t		shortestSpan(void);
		ssize_t		longestSpan(void);
};

template <typename T>
void	Span::addNumber(T begin, T end)
{
	for (; begin != end; ++begin)
	{
		if (this->_array.size() == _length)
			throw std::length_error("Length error");
		_array.push_back(*begin);
	}
}

#endif